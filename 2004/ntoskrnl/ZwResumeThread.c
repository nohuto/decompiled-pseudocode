/*
 * XREFs of ZwResumeThread @ 0x1403F4000
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140266C58 (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140883C60 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140A44218 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
