/*
 * XREFs of ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C000AF4C
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0009010 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     imp_WdfRequestSend @ 0x1C000AF90 (imp_WdfRequestSend.c)
 * Callees:
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C000AF14 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C00687F0 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 */

void __fastcall FxRequest::PostProcessSendAndForget(FxRequest *this)
{
  FxRequestCompletionState m_CompletionState; // edx
  FxIoQueue *m_IoQueue; // r8

  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  this->m_Irp.m_Irp = 0LL;
  this->m_CompletionState = 0;
  if ( this->m_Reserved )
  {
    this->m_Completed = 1;
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
  }
  else
  {
    FxRequest::PostProcessCompletion(this, m_CompletionState, m_IoQueue);
  }
}
