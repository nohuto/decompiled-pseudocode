/*
 * XREFs of ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C00687A0
 * Callers:
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B8B0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x1C00057FC (-PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C0013B50 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 */

__int64 __fastcall FxRequest::PeekRequest(
        FxIrpQueue *IrpQueue,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **ppOutRequest)
{
  __int64 result; // rax
  unsigned __int8 v7; // r8

  result = FxIrpQueue::PeekRequest(
             IrpQueue,
             (_IO_CSQ_IRP_CONTEXT *)((unsigned __int64)&TagRequest->120 & -(__int64)(TagRequest != 0LL)),
             FileObject,
             ppOutRequest);
  if ( (int)result >= 0 )
  {
    if ( Parameters )
      return FxRequest::GetParameters(*ppOutRequest, Parameters, v7);
  }
  return result;
}
