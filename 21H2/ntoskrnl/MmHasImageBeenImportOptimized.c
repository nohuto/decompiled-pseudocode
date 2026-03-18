/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x1406EB784
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MmApplyVerifierToRunningImage @ 0x140A81214 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14029C6DC (MiIsImportOptimizationEnabled.c)
 */

_BOOL8 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  return MiIsImportOptimizationEnabled() && (*(_DWORD *)(v0 + 104) & 0x80u) != 0;
}
