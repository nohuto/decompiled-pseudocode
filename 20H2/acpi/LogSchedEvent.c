/*
 * XREFs of LogSchedEvent @ 0x1C0029F60
 * Callers:
 *     SyncEvalObject @ 0x1C00040D0 (SyncEvalObject.c)
 *     InsertReadyQueue @ 0x1C00043E0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0004A10 (RunContext.c)
 *     AMLIPauseInterpreter @ 0x1C00633CC (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C0063500 (AMLIResumeInterpreter.c)
 *     AsyncCallBack @ 0x1C0068148 (AsyncCallBack.c)
 *     NestAsyncEvalObject @ 0x1C006826C (NestAsyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C0029FBC (LogEvent.c)
 */

__int64 __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r11

  v5 = a3;
  LODWORD(a3) = 0;
  if ( a2 )
    a3 = *(_QWORD *)(a2 + 408);
  return LogEvent(a1, (unsigned int)KeGetCurrentThread(), a3, a2, (unsigned int)gReadyQueue, v5, a4, a5);
}
