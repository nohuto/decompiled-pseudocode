/*
 * XREFs of PspLockJobAssignment @ 0x14066F560
 * Callers:
 *     PspLockJobChain @ 0x14066F47C (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140675570 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
