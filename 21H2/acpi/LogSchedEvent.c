/*
 * XREFs of LogSchedEvent @ 0x1C00297A4
 * Callers:
 *     SyncEvalObject @ 0x1C000B990 (SyncEvalObject.c)
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     AMLIPauseInterpreter @ 0x1C00647E0 (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C0064914 (AMLIResumeInterpreter.c)
 *     AsyncCallBack @ 0x1C00696FC (AsyncCallBack.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C0029800 (LogEvent.c)
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
