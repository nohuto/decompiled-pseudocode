/*
 * XREFs of sub_18007F518 @ 0x18007F518
 * Callers:
 *     sub_18007D374 @ 0x18007D374 (sub_18007D374.c)
 * Callees:
 *     sub_1800277CC @ 0x1800277CC (sub_1800277CC.c)
 */

__int64 __fastcall sub_18007F518(__int64 a1, int a2)
{
  unsigned int v4; // edx

  sub_1800277CC(a1);
  v4 = *(_DWORD *)(a1 + 608) ^ (*(_DWORD *)(a1 + 608) ^ (a2 << 18)) & 0x40000;
  *(_DWORD *)(a1 + 608) = v4;
  if ( a2 != ((v4 >> 17) & 1) && (v4 & 0x80000) == 0 )
  {
    *(_DWORD *)(a1 + 608) = v4 | 0x80000;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*(_QWORD *)(a1 + 560));
  }
  return sub_180023230(a1);
}
