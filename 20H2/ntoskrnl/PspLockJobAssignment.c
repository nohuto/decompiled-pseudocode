/*
 * XREFs of PspLockJobAssignment @ 0x1406635A4
 * Callers:
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 *     PspLockJobChain @ 0x1406637C0 (PspLockJobChain.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140710AE4 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
