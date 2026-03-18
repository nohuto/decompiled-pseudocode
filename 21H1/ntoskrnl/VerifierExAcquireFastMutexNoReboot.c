/*
 * XREFs of VerifierExAcquireFastMutexNoReboot @ 0x1409E1750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1409D8DE0 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x1409D905C (ViKeIrqlLogCommon.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409E1D14 (ViExCheckAPCLevelOrBelow.c)
 */

void __fastcall VerifierExAcquireFastMutexNoReboot(__int64 a1)
{
  char CurrentIrql; // bl
  char *v3; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCLevelOrBelow(a1, a1, 0LL);
  else
    CurrentIrql = KeGetCurrentIrql();
  ((void (__fastcall *)(__int64))pXdvExAcquireFastMutex)(a1);
  if ( (MmVerifierData & 0x400000) == 0 || (VfFlightOptions & 9) != 0 )
  {
    v3 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, 1);
    ViKeIrqlLogCommon((__int64)v3, 2u);
  }
}
