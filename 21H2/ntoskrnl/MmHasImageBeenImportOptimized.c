/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x1407737A8
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054476C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x1402A381C (MiIsImportOptimizationEnabled.c)
 */

_BOOL8 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  return MiIsImportOptimizationEnabled() && (*(_DWORD *)(v0 + 104) & 0x80u) != 0;
}
