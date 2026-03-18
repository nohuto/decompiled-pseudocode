/*
 * XREFs of ZwResumeThread @ 0x1403F8BB0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14035CA08 (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x1408897B0 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140A4A4B8 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
