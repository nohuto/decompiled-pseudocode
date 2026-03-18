/*
 * XREFs of ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C00657A0
 * Callers:
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0070C00 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00648E0 (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0066260 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxIoTarget::Purge(FxIoTarget *this, __int64 Action)
{
  FxIoTarget_vtbl *v3; // rax
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r8
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v8; // r10
  unsigned __int8 _a1; // [rsp+28h] [rbp-28h]
  _LIST_ENTRY pendedHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+60h] [rbp+10h] BYREF
  unsigned __int8 irql; // [rsp+70h] [rbp+20h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+78h] [rbp+28h] BYREF

  sentHead.Next = 0LL;
  pendedHead.Blink = &pendedHead;
  _a1 = 1;
  wait = 0;
  pendedHead.Flink = &pendedHead;
  this->GotoPurgeState(this, (_WDF_IO_TARGET_PURGE_IO_ACTION)Action, &pendedHead, &sentHead, &wait, _a1);
  FxIoTarget::CompletePendedRequestList(this, &pendedHead);
  FxIoTarget::_CancelSentRequests(&sentHead);
  if ( wait )
  {
    v3 = this->__vftable;
    irql = 0;
    v3->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &irql, v4);
    v5 = irql;
    this->m_WaitingForSentIo = 0;
    FxNonPagedObject::Unlock(this, v5, v6);
  }
  if ( this->m_Globals->FxVerboseOn )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(v8, 5u, 0xEu, 0x16u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, ObjectHandleUnchecked);
  }
}
