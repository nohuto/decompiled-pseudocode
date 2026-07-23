/*
 * XREFs of MiFlushRelease @ 0x14031FD60
 * Callers:
 *     MmFlushSection @ 0x14026269C (MmFlushSection.c)
 *     MmTrimSection @ 0x1402FA398 (MmTrimSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x14053D4B4 (MiFreeOverlappedFlushEntry.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x14031FE10 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  _DWORD *v8; // r8
  KIRQL v9; // r14
  __int64 v10; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v7 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v10 = MiDecrementSubsections(a2);
    v6 = MiDecrementSubsections(a3) + v10;
  }
  --*(_QWORD *)(a1 + 40);
  result = MiCheckControlArea(a1, v9, v8);
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v6);
  return result;
}
