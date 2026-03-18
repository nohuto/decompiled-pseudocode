/*
 * XREFs of RtlpHpVsContextFreeList @ 0x14035E0A0
 * Callers:
 *     RtlpHpHeapCompact @ 0x14035DBEC (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpVsContextFreeInternal @ 0x14035E130 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14035E600 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14035E770 (RtlpHpReleaseQueuedLockExclusive.c)
 */

__int64 __fastcall RtlpHpVsContextFreeList(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  int v7; // esi
  int v8; // r8d
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v7 = a2 & 1;
  if ( (a2 & 1) == 0 )
    result = RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), &v9);
  while ( a3 )
  {
    v8 = (_DWORD)a3 - 16;
    a3 = (_QWORD *)*a3;
    result = RtlpHpVsContextFreeInternal(a1, a2, v8, a2, (__int64)&v9);
  }
  if ( !v7 )
    return RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v9);
  return result;
}
