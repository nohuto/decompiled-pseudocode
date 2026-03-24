/*
 * XREFs of ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C00751F0
 * Callers:
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A950 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001518C (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C0075064 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 */

void __fastcall FxPkgIo::ResetStateForRestart(FxPkgIo *this)
{
  const void *_a1; // rax
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v7; // rdi
  unsigned __int8 v8; // r8
  _SINGLE_LIST_ENTRY *v9; // r14
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+58h] [rbp+10h] BYREF

  irql = 0;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xDu, 0x20u, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, _a1);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v3);
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)1);
  FxNonPagedObject::Unlock(this, irql, v4);
  Next = queueList.Next;
  while ( 1 )
  {
    v9 = Next;
    if ( Next )
      Next = Next->Next;
    if ( !v9 )
      break;
    v7 = v9 - 116;
    LOBYTE(queueList.Next) = 0;
    FxNonPagedObject::Lock((FxNonPagedObject *)&v9[-116], (unsigned __int8 *)&queueList, v5);
    if ( !BYTE2(v9[-99].Next) )
      LODWORD(v7[22].Next) = 1;
    FxIoQueue::SetState((FxIoQueue *)&v9[-116], FxIoQueueClearShutdown|0x1);
    FxNonPagedObject::Unlock((FxNonPagedObject *)&v9[-116], (unsigned __int8)queueList.Next, v8);
    v9->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v7->Next[2].Next)(
      &v9[-116].Next,
      1702326128LL,
      1378LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  FxNonPagedObject::Lock(this, &irql, v5);
  v10 = irql;
  *(_WORD *)&this->m_PowerStateOn = 1;
  FxNonPagedObject::Unlock(this, v10, v11);
}
