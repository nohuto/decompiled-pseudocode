/*
 * XREFs of ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C01A1274
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C019B530 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C019B680 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 *     ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C01A1320 (-SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0193880 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0193AC0 (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::SetPointerInfoNodeFlag(
        struct _KTHREAD **this,
        unsigned int a2,
        __int16 a3,
        int a4)
{
  struct CPointerInputFrame *result; // rax
  unsigned int v9; // ebx
  struct CPointerInputFrame *v10; // rsi
  struct CPointerInfoNode *NodeInFrame; // rax

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( a4 != 0x200000 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  result = CTouchProcessor::FindAndReferenceFrameById(this, a2);
  v9 = 0;
  v10 = result;
  if ( result )
  {
    NodeInFrame = CTouchProcessor::FindNodeInFrame(this, result, a3, 0LL);
    if ( NodeInFrame )
    {
      *((_DWORD *)NodeInFrame + 45) |= a4;
      v9 = 1;
    }
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v10);
    return (struct CPointerInputFrame *)v9;
  }
  return result;
}
