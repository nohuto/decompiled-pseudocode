/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x14075EC58
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14053EA0C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x140324264 (MiIsImportOptimizationEnabled.c)
 */

_BOOL8 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  return MiIsImportOptimizationEnabled() && (*(_DWORD *)(v0 + 104) & 0x80u) != 0;
}
