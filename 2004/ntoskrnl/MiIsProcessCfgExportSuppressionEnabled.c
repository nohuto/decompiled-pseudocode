/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x14025362C
 * Callers:
 *     MiCfgMarkValidEntries @ 0x140607044 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x14070DBA4 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgExportSuppressionEnabled()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 448)
      && ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 2) != 0;
}
