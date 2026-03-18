/*
 * XREFs of MiUnmapViewSubsections @ 0x1402875B0
 * Callers:
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140286920 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiUnmapViewSubsections(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  BOOL v8; // ebp
  __int64 v9; // rdx
  KIRQL v10; // r15
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  v8 = *(_QWORD *)(a1 + 64) != 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
    v4 = MiDecrementSubsections(a2, a3, 8);
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  if ( v4 )
    v5 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  LOBYTE(v9) = v10;
  result = MiCheckControlArea(a1, v9);
  if ( v4 )
    return MiReturnCrossPartitionSectionCharges(v5, v8, v4);
  return result;
}
