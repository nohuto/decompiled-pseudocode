/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x140233E58
 * Callers:
 *     MiCfgMarkValidEntries @ 0x140629948 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x1406C16F8 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgExportSuppressionEnabled()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 448)
      && ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 2) != 0;
}
