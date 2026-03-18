/*
 * XREFs of ViExReleaseFastMutexCommon @ 0x1409E1E20
 * Callers:
 *     VerifierExReleaseFastMutex @ 0x1409E18F0 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexNoReboot @ 0x1409E1950 (VerifierExReleaseFastMutexNoReboot.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1409D8E40 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViExCheckAPCsDisabled @ 0x1409E1DB4 (ViExCheckAPCsDisabled.c)
 */

char *__fastcall ViExReleaseFastMutexCommon(__int64 a1)
{
  char CurrentIrql; // al

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCsDisabled(0x34uLL, a1);
  else
    CurrentIrql = KeGetCurrentIrql();
  return VfKeIrqlTransitionReserveLogEntry(CurrentIrql, *(_BYTE *)(a1 + 48));
}
