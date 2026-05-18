/*
 * XREFs of sub_180066660 @ 0x180066660
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800665EC @ 0x1800665EC (sub_1800665EC.c)
 */

bool __fastcall sub_180066660(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 160) )
    return sub_1800665EC(a1);
  return v1;
}
