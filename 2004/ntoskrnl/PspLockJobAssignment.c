/*
 * XREFs of PspLockJobAssignment @ 0x140617E40
 * Callers:
 *     PspLockJobChain @ 0x140617D5C (PspLockJobChain.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14065761C (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x140658924 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
