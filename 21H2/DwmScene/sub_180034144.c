/*
 * XREFs of sub_180034144 @ 0x180034144
 * Callers:
 *     sub_1800340F0 @ 0x1800340F0 (sub_1800340F0.c)
 * Callees:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180033A50 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180034144(__int64 a1, char a2)
{
  __int64 v3; // rsi

  v3 = a1 - 152;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(a1);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(v3);
  return v3;
}
