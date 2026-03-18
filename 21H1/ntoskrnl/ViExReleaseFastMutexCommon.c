/*
 * XREFs of ViExReleaseFastMutexCommon @ 0x1409E1DC0
 * Callers:
 *     VerifierExReleaseFastMutex @ 0x1409E1890 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexNoReboot @ 0x1409E18F0 (VerifierExReleaseFastMutexNoReboot.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1409D8DE0 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViExCheckAPCsDisabled @ 0x1409E1D54 (ViExCheckAPCsDisabled.c)
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
