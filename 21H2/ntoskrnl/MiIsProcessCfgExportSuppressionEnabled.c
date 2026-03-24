/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x14025C704
 * Callers:
 *     MiValidateUserCallTarget @ 0x14070F21C (MiValidateUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x14070F9B4 (MiCfgMarkValidEntries.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgExportSuppressionEnabled()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 448)
      && ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 2) != 0;
}
