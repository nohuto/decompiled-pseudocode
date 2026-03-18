/*
 * XREFs of ZwResumeThread @ 0x1403F2D70
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1402BFC88 (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140882940 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140A3E9B4 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
