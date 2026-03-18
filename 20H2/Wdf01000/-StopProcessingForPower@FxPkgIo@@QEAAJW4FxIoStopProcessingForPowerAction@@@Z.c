/*
 * XREFs of ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0012A54
 * Callers:
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C00114C4 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0079670 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007A670 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D280 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D770 (-PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DB40 (-PowerStartSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DB70 (-PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_Lq @ 0x1C001285C (WPP_IFR_SF_Lq.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C00128E0 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0012998 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005AE28 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     GetIoQueueList_ProcessQueueListEntry @ 0x1C0074784 (GetIoQueueList_ProcessQueueListEntry.c)
 */

__int64 __fastcall FxPkgIo::StopProcessingForPower(FxPkgIo *this, FxIoStopProcessingForPowerAction Action)
{
  const void *id; // rax
  unsigned int flags; // edx
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned __int8 v9; // r8
  void *v10; // r8
  _LIST_ENTRY *p_m_IoQueueListHead; // rsi
  _LIST_ENTRY *i; // rdi
  unsigned int v13; // ecx
  FxTagTracker *Blink; // rax
  __int64 v15; // rdx
  unsigned __int8 v16; // r8
  _SINGLE_LIST_ENTRY *v17; // rdi
  bool v18; // zf
  _SINGLE_LIST_ENTRY *v19; // rsi
  _LIST_ENTRY *Flink; // rdi
  const _GUID *v22; // [rsp+20h] [rbp-38h]
  _SINGLE_LIST_ENTRY queueList; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  id = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_Lq(this->m_Globals, flags, v6, v7, v22, flags, id);
  Next = 0LL;
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v9);
  this->m_PowerStateOn = 0;
  if ( Action >= FxIoStopProcessingForPowerPurgeManaged && Action <= FxIoStopProcessingForPowerPurgeNonManaged )
    this->m_QueuesAreShuttingDown = 1;
  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  if ( *(FxDeviceBase **)&this->m_DeviceBase[1].m_ExecutionLevel == (FxDeviceBase *)&this->m_DeviceBase[1].m_ExecutionLevel )
  {
    for ( i = this->m_IoQueueListHead.Blink; i != p_m_IoQueueListHead; i = i->Blink )
    {
      if ( LODWORD(i[1].Flink) == 1 )
      {
        i[1].Blink = (_LIST_ENTRY *)Next;
        queueList.Next = (_SINGLE_LIST_ENTRY *)&i[1].Blink;
        v13 = _InterlockedIncrement((volatile signed __int32 *)&i[-56].Flink + 1);
        if ( SLOBYTE(i[-55].Flink) < 0 )
          Blink = (FxTagTracker *)i[-60].Blink;
        else
          Blink = 0LL;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            Blink,
            (void *)0x65776F70,
            1478,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
            TagAddRef,
            v13);
        Next = queueList.Next;
      }
    }
  }
  else
  {
    Flink = p_m_IoQueueListHead->Flink;
    if ( p_m_IoQueueListHead->Flink != p_m_IoQueueListHead )
    {
      do
      {
        GetIoQueueList_ProcessQueueListEntry(Flink, &queueList, v10);
        Flink = Flink->Flink;
      }
      while ( Flink != p_m_IoQueueListHead );
      Next = queueList.Next;
    }
  }
  FxNonPagedObject::Unlock(this, irql, (unsigned __int8)v10);
  if ( Action == FxIoStopProcessingForPowerHold )
  {
    v17 = Next;
    v18 = Next == 0LL;
    if ( !Next )
      goto LABEL_18;
    do
    {
      FxIoQueue::StartPowerTransitionOff((FxIoQueue *)&v17[-116], v15, v16);
      v17 = v17->Next;
    }
    while ( v17 );
  }
  while ( 1 )
  {
    v18 = Next == 0LL;
LABEL_18:
    v19 = Next;
    if ( !v18 )
      Next = Next->Next;
    if ( !v19 )
      break;
    FxIoQueue::StopProcessingForPower((FxIoQueue *)&v19[-116], Action, v16);
    v19->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v19[-116].Next[2].Next)(
      &v19[-116].Next,
      1702326128LL,
      1248LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  return 0LL;
}
