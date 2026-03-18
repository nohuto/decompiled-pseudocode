/*
 * XREFs of PsGetCurrentThreadId @ 0x1402FBF80
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x1408A7474 (PnpWatchdogEtwWrite.c)
 *     PoShutdownBugCheck @ 0x1408E2F30 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x14093FAC4 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
