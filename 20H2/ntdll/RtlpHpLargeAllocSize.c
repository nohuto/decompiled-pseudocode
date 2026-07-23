/*
 * XREFs of RtlpHpLargeAllocSize @ 0x18008475C
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x180002210 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x180023990 (RtlpHpReAllocateHeap.c)
 *     RtlpHpSizeHeap @ 0x1800243E0 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLargeAllocSizeInternal @ 0x18008481C (RtlpHpLargeAllocSizeInternal.c)
 */

__int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  int v7; // esi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rbx

  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  v8 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v8 )
    v8 ^= a1 + 72;
  while ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v9 )
    {
      if ( a2 <= v9 )
        break;
      v10 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v8;
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v10 )
      v8 ^= v10;
    else
      v8 = v10;
  }
  if ( v8 )
    v11 = RtlpHpLargeAllocSizeInternal(*(_BYTE *)(a1 + 80) & 1, v8, a4);
  else
    v11 = -1LL;
  if ( !v7 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  return v11;
}
