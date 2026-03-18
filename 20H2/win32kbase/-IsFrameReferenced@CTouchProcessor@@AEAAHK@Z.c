/*
 * XREFs of ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01929B8
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0195AE0 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B660 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019AA04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::IsFrameReferenced(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  struct CPointerInputFrame *result; // rax
  unsigned int v7; // edi

  v4 = a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  result = CTouchProcessor::FindAndReferenceFrameById(this, v4, a3, a4);
  v7 = 0;
  if ( result )
  {
    LOBYTE(v7) = CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, result) != 0;
    return (struct CPointerInputFrame *)v7;
  }
  return result;
}
