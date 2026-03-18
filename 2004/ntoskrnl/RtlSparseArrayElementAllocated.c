/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x14025A500
 * Callers:
 *     RtlpHpVaMgrCtxQuery @ 0x14025A460 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402D843C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x1402D9FD0 (RtlpHpVaMgrRangeFind.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x14025A55C (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
