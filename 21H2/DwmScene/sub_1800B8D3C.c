/*
 * XREFs of sub_1800B8D3C @ 0x1800B8D3C
 * Callers:
 *     sub_1800B8D30 @ 0x1800B8D30 (sub_1800B8D30.c)
 * Callees:
 *     sub_1800B8840 @ 0x1800B8840 (sub_1800B8840.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1800B8D3C(__int64 a1, char a2)
{
  __int64 v3; // rsi

  v3 = a1 - 144;
  sub_1800B8840(a1);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(v3);
  return v3;
}
