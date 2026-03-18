/*
 * XREFs of MiFlushRelease @ 0x14024A218
 * Callers:
 *     MmFlushSection @ 0x1402C25C4 (MmFlushSection.c)
 *     MmTrimSection @ 0x14031E698 (MmTrimSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x140537DA4 (MiFreeOverlappedFlushEntry.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiDecrementSubsections @ 0x14024A2C0 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
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
  v7 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
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
