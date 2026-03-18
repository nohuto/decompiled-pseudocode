/*
 * XREFs of ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00034B0
 * Callers:
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C000AF14 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C00687F0 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C000346C (-RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C000350C (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C89A8 (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::RequestCompletedCallback(FxIoQueue *this, FxRequest *Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyValidateCompletedRequest(this, m_Globals, Request);
  FxNonPagedObject::Lock(this, &irql);
  FxIoQueue::RemoveFromDriverOwnedList(this, Request);
  FxIoQueue::DispatchInternalEvents(this, irql);
}
