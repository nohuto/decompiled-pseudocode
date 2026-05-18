/*
 * XREFs of sub_1801298D1 @ 0x1801298D1
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018C60 @ 0x180018C60 (sub_180018C60.c)
 */

void __fastcall sub_1801298D1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_180018C60((__int64 *)(a2 + 88));
  }
}
