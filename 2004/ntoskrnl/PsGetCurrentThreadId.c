/*
 * XREFs of PsGetCurrentThreadId @ 0x140338FB0
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x1408A8794 (PnpWatchdogEtwWrite.c)
 *     PoShutdownBugCheck @ 0x1408E41B0 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x140940D44 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
