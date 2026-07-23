/*
 * XREFs of HalpLaAddReservation @ 0x1403BC278
 * Callers:
 *     HalpDmaInit @ 0x140A669C8 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 */

__int64 __fastcall HalpLaAddReservation(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 result; // rax

  v4 = HalpMmAllocCtxAlloc(a1, 32LL);
  if ( !v4 )
    return 3221225626LL;
  *(_QWORD *)(v4 + 16) = a1 - (a1 & 0xFFF);
  v5 = (a1 & 0xFFF) + a2;
  *(_QWORD *)(v4 + 24) = v5;
  if ( (v5 & 0xFFF) != 0 )
    *(_QWORD *)(v4 + 24) = v5 + 4096 - (v5 & 0xFFF);
  v6 = (__int64 *)off_140C04428;
  if ( *(_UNKNOWN ***)off_140C04428 != &HalpLaReservedRanges )
    __fastfail(3u);
  *(_QWORD *)(v4 + 8) = off_140C04428;
  *(_QWORD *)v4 = &HalpLaReservedRanges;
  *v6 = v4;
  result = 0LL;
  off_140C04428 = (_UNKNOWN *)v4;
  return result;
}
