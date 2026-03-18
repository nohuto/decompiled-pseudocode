/*
 * XREFs of ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C004E654
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00155C4 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00156EC (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequest::PostProcessCompletionForReserved(
        FxRequest *this,
        FxRequestCompletionState State,
        FxIoQueue *Queue)
{
  if ( State )
  {
    if ( (State & 0x80u) == 0 )
      FxIoQueue::RequestCompletedCallback(Queue, this, (unsigned __int8)Queue);
  }
  else
  {
    FxObject::AddRef(this, (void *)0x706D6F43, 960, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  }
  this->Release(this, (void *)1348761414, 963, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
}
