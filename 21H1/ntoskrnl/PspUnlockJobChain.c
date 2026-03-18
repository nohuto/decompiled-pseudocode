/*
 * XREFs of PspUnlockJobChain @ 0x14066F3F4
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspGetMemoryPartitionImplicit @ 0x14066F318 (PspGetMemoryPartitionImplicit.c)
 *     PspImplicitAssignProcessToJob @ 0x140671ACC (PspImplicitAssignProcessToJob.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140674678 (PspUnlockJobsAndProcessExclusive.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJobChain(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdi

  v3 = *(_QWORD *)(a1 + 1104);
  if ( v3 > 1 )
  {
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1080) + 56LL));
    v3 = *(_QWORD *)(a1 + 1104);
  }
  if ( v3 > 2 )
  {
    v10 = v3 - 2;
    do
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1112) + 8 * v10-- - 8) + 56LL));
    while ( v10 );
    v3 = *(_QWORD *)(a1 + 1104);
  }
  if ( v3 )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1072) + 56LL));
  if ( (a3 & 1) == 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( a2 )
      KiLeaveGuardedRegionUnsafe(a2, v7, v8, v9);
  }
}
