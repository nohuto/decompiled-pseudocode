/*
 * XREFs of ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000F808
 * Callers:
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C000F798 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0083BC8 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C00847C0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086BA0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087130 (-PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087500 (-PowerStartSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087530 (-PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000F900 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C000F9BC (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     WPP_IFR_SF_Lq @ 0x1C000FA74 (WPP_IFR_SF_Lq.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C0019308 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgIo::StopProcessingForPower(FxPkgIo *this, FxIoStopProcessingForPowerAction Action)
{
  const void *id; // rax
  unsigned int flags; // edx
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v11; // rdi
  bool v12; // zf
  _SINGLE_LIST_ENTRY *v13; // rsi
  const _GUID *v15; // [rsp+20h] [rbp-38h]
  _SINGLE_LIST_ENTRY queueList; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  id = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_Lq(this->m_Globals, flags, v6, v7, v15, flags, id);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v8);
  this->m_PowerStateOn = 0;
  if ( Action >= FxIoStopProcessingForPowerPurgeManaged && Action <= FxIoStopProcessingForPowerPurgeNonManaged )
    this->m_QueuesAreShuttingDown = 1;
  FxPkgIo::GetIoQueueListLocked(this, &queueList, FxIoQueueIteratorListPowerOff);
  FxNonPagedObject::Unlock(this, irql, v9);
  Next = queueList.Next;
  if ( Action == FxIoStopProcessingForPowerHold )
  {
    v11 = queueList.Next;
    v12 = queueList.Next == 0LL;
    if ( !queueList.Next )
      goto LABEL_8;
    do
    {
      FxIoQueue::StartPowerTransitionOff((FxIoQueue *)&v11[-116]);
      v11 = v11->Next;
    }
    while ( v11 );
  }
  while ( 1 )
  {
    v12 = Next == 0LL;
LABEL_8:
    v13 = Next;
    if ( !v12 )
      Next = Next->Next;
    if ( !v13 )
      break;
    FxIoQueue::StopProcessingForPower((FxIoQueue *)&v13[-116], Action);
    v13->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v13[-116].Next[2].Next)(
      &v13[-116].Next,
      1702326128LL,
      1248LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  return 0LL;
}
