/*
 * XREFs of sub_180084130 @ 0x180084130
 * Callers:
 *     sub_1800838A0 @ 0x1800838A0 (sub_1800838A0.c)
 *     sub_180083D0C @ 0x180083D0C (sub_180083D0C.c)
 * Callees:
 *     sub_18008415C @ 0x18008415C (sub_18008415C.c)
 */

__int64 __fastcall sub_180084130(__int64 a1)
{
  int v2; // eax

  if ( *(_BYTE *)(a1 + 52) == 1 )
  {
    return 0;
  }
  else
  {
    v2 = sub_18008415C();
    if ( v2 >= 0 )
      return 0;
    return (unsigned int)v2;
  }
}
