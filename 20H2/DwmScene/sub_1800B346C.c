/*
 * XREFs of sub_1800B346C @ 0x1800B346C
 * Callers:
 *     sub_1800B3460 @ 0x1800B3460 (sub_1800B3460.c)
 * Callees:
 *     sub_1800B2F70 @ 0x1800B2F70 (sub_1800B2F70.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800B346C(__int64 a1, char a2)
{
  __int64 v3; // rsi

  v3 = a1 - 144;
  sub_1800B2F70(a1);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(v3);
  return v3;
}
