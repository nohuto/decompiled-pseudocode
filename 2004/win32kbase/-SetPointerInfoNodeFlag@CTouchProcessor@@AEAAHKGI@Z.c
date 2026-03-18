/*
 * XREFs of ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C019B510
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C0195840 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C0195990 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 *     ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C019B5C0 (-SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018DB80 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018DDC0 (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019CF04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::SetPointerInfoNodeFlag(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebp
  __int16 v5; // r14
  unsigned int v6; // ebx
  struct CPointerInputFrame *result; // rax
  unsigned int v9; // ebx
  struct CPointerInputFrame *v10; // rsi
  struct CPointerInfoNode *NodeInFrame; // rax

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( v4 != 0x200000 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  result = CTouchProcessor::FindAndReferenceFrameById(this, v6, a3, a4);
  v9 = 0;
  v10 = result;
  if ( result )
  {
    NodeInFrame = CTouchProcessor::FindNodeInFrame(this, result, v5, 0LL);
    if ( NodeInFrame )
    {
      *((_DWORD *)NodeInFrame + 45) |= v4;
      v9 = 1;
    }
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v10);
    return (struct CPointerInputFrame *)v9;
  }
  return result;
}
