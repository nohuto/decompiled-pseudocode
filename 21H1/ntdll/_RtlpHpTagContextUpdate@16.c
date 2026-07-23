/*
 * XREFs of _RtlpHpTagContextUpdate@16 @ 0x4B370105
 * Callers:
 *     _RtlpHpTagReAllocateHeap@16 @ 0x4B370621 (_RtlpHpTagReAllocateHeap@16.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 */

void __fastcall RtlpHpTagContextUpdate(int a1, unsigned __int16 a2, int a3, int a4)
{
  int v4; // esi

  v4 = *(_DWORD *)(dword_4B3A46B0 + 4 * a2 - 4);
  RtlAcquireSRWLockShared(&RtlpHpTagContext);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), a4 - a3);
  RtlReleaseSRWLockShared(&RtlpHpTagContext);
}
