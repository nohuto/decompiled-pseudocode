/*
 * XREFs of sub_18006BF30 @ 0x18006BF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006BEBC @ 0x18006BEBC (sub_18006BEBC.c)
 */

bool __fastcall sub_18006BF30(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 160) )
    return sub_18006BEBC(a1);
  return v1;
}
