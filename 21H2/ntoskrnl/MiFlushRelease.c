/*
 * XREFs of MiFlushRelease @ 0x140315010
 * Callers:
 *     MmFlushSection @ 0x1402746FC (MmFlushSection.c)
 *     MmTrimSection @ 0x1402EF648 (MmTrimSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x14053D274 (MiFreeOverlappedFlushEntry.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140689134 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1403150C0 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405550EC (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r8
  struct _KPRCB *v9; // r9
  KIRQL v10; // r14
  __int64 v11; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v7 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v11 = MiDecrementSubsections(a2);
    v6 = MiDecrementSubsections(a3) + v11;
  }
  --*(_QWORD *)(a1 + 40);
  result = MiCheckControlArea(a1, v10, v8, v9);
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v6);
  return result;
}
