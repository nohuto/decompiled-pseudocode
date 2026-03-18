/*
 * XREFs of PspUnlockJobChain @ 0x140663690
 * Callers:
 *     PspUnlockJobsAndProcessExclusive @ 0x14062CDA8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x14062E4F0 (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x140661524 (PspGetMemoryPartitionImplicit.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJobChain(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // rdi

  v3 = *(_QWORD *)(a1 + 1104);
  if ( v3 > 1 )
  {
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1080) + 56LL));
    v3 = *(_QWORD *)(a1 + 1104);
  }
  if ( v3 > 2 )
  {
    v7 = v3 - 2;
    do
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1112) + 8 * v7-- - 8) + 56LL));
    while ( v7 );
    v3 = *(_QWORD *)(a1 + 1104);
  }
  if ( v3 )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1072) + 56LL));
  if ( (a3 & 1) == 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( a2 )
      KiLeaveGuardedRegionUnsafe(a2);
  }
}
