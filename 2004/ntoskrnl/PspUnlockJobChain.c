/*
 * XREFs of PspUnlockJobChain @ 0x140617CD4
 * Callers:
 *     PspGetMemoryPartitionImplicit @ 0x140617BF8 (PspGetMemoryPartitionImplicit.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1406588A8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x1406599D0 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
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
