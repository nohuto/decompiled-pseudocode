/*
 * XREFs of MiFlushRelease @ 0x1402A3248
 * Callers:
 *     MmFlushSection @ 0x14022F794 (MmFlushSection.c)
 *     MmTrimSection @ 0x1402CE268 (MmTrimSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x140537754 (MiFreeOverlappedFlushEntry.c)
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1406DC964 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsections @ 0x1402A32F0 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdx
  KIRQL v9; // r14
  __int64 v10; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v7 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v10 = MiDecrementSubsections(a2);
    v6 = MiDecrementSubsections(a3) + v10;
  }
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v8) = v9;
  result = MiCheckControlArea(a1, v8);
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v6);
  return result;
}
