/*
 * XREFs of PsGetCurrentThreadId @ 0x14030B930
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x1408AE2C4 (PnpWatchdogEtwWrite.c)
 *     PoShutdownBugCheck @ 0x1408E9DC0 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x140946B04 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
