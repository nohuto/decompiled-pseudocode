/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x14027DC74
 * Callers:
 *     MiValidateUserCallTarget @ 0x1406BD86C (MiValidateUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1406BE004 (MiCfgMarkValidEntries.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgExportSuppressionEnabled()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 448)
      && ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 2) != 0;
}
