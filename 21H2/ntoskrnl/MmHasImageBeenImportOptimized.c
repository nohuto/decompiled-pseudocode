/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x1407735E8
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054452C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14035E8EC (MiIsImportOptimizationEnabled.c)
 */

_BOOL8 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  return MiIsImportOptimizationEnabled() && (*(_DWORD *)(v0 + 104) & 0x80u) != 0;
}
