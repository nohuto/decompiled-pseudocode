/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x140760F48
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14053F05C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x140329384 (MiIsImportOptimizationEnabled.c)
 */

_BOOL8 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  return MiIsImportOptimizationEnabled() && (*(_DWORD *)(v0 + 104) & 0x80u) != 0;
}
