/*
 * XREFs of VerifierExAcquireFastMutexNoReboot @ 0x1409E77D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1409DEE60 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x1409DF0DC (ViKeIrqlLogCommon.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409E7D94 (ViExCheckAPCLevelOrBelow.c)
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
