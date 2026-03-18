/*
 * XREFs of sub_1C005A4F0 @ 0x1C005A4F0
 * Callers:
 *     sub_1C00309F4 @ 0x1C00309F4 (sub_1C00309F4.c)
 * Callees:
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C005A4F0(__int64 a1, __int64 a2)
{
  __m128 *PoolWithTag; // rax

  *(_OWORD *)a1 = 0LL;
  if ( *(_QWORD *)(a2 + 8) && *(_DWORD *)(a2 + 4) )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, *(unsigned int *)(a2 + 4), 0x42554855u);
    *(_QWORD *)(a1 + 8) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    sub_1C001D340(PoolWithTag, 0, *(unsigned int *)(a2 + 4));
    if ( !*(_QWORD *)(a1 + 8) )
      return 3221225626LL;
    sub_1C001D080(*(char **)(a1 + 8), *(char **)(a2 + 8), *(unsigned int *)(a2 + 4));
  }
  return 0LL;
}
