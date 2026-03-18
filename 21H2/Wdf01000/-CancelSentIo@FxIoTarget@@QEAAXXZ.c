/*
 * XREFs of ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C0073B3C
 * Callers:
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C00768B0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C007A6DC (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x1C007C08C (-CancelSentIo@FxUsbDevice@@QEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0029D48 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C002CF10 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxIoTarget::CancelSentIo(FxIoTarget *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxIoTarget *v5; // rcx
  unsigned __int8 v6; // r8
  const void *_a1; // rax
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 sentAdded; // [rsp+48h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY sentRequestListHead; // [rsp+50h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  sentRequestListHead.Next = 0LL;
  sentAdded = 0;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  FxIoTarget::GetSentRequestsListLocked(v5, &sentRequestListHead, &this->m_SentIoListHead, (bool *)&sentAdded);
  FxNonPagedObject::Unlock(this, irql, v6);
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x38u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
  if ( sentAdded )
    FxIoTarget::_CancelSentRequests(&sentRequestListHead);
}
