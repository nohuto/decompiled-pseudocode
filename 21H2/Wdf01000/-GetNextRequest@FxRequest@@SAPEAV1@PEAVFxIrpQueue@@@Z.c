/*
 * XREFs of ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C001B57C
 * Callers:
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B404 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B8B0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00133A8 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

_IRP *__fastcall FxRequest::GetNextRequest(FxIrpQueue *IrpQueue)
{
  _IRP *result; // rax
  _IO_CSQ_IRP_CONTEXT *v2; // rbx
  __int64 v3; // rcx
  _IO_CSQ_IRP_CONTEXT *pCsqContext; // [rsp+48h] [rbp+10h] BYREF

  pCsqContext = 0LL;
  result = FxIrpQueue::RemoveNextIrpFromQueue(IrpQueue, 0LL, &pCsqContext);
  if ( result )
  {
    v2 = pCsqContext;
    v3 = *(_QWORD *)&pCsqContext[-5].Type;
    pCsqContext[4].Irp = 0LL;
    (*(void (__fastcall **)(_IO_CSQ_IRP_CONTEXT *, __int64, __int64, const char *))(v3 + 16))(
      v2 - 5,
      1969583441LL,
      2062LL,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    return (_IRP *)&v2[-5];
  }
  return result;
}
