/*
 * XREFs of MiReleaseFaultCharges @ 0x1403573CC
 * Callers:
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x140542F20 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiDecrementSubsections @ 0x14024A2C0 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseFaultCharges(__int64 *BugCheckParameter2)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  BOOL v5; // ebp
  _DWORD *v6; // r8
  KIRQL v7; // r15
  int v8; // eax
  __int64 result; // rax

  v1 = *BugCheckParameter2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v8 = *(_DWORD *)(v1 + 56);
  if ( (v8 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v8 & 0x400) == 0 )
    v3 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, (__int64)BugCheckParameter2, 4u);
  --*(_QWORD *)(v1 + 40);
  if ( v3 )
  {
    v6 = (_DWORD *)qword_140C4E448;
    v4 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  }
  result = MiCheckControlArea(v1, v7, v6);
  if ( v3 )
    return MiReturnCrossPartitionSectionCharges(v4, v5, v3);
  return result;
}
