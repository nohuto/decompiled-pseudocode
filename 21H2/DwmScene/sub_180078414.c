/*
 * XREFs of sub_180078414 @ 0x180078414
 * Callers:
 *     sub_1800783C0 @ 0x1800783C0 (sub_1800783C0.c)
 * Callees:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ_0 @ 0x1800779A0 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ_0.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180078414(__int64 a1, char a2)
{
  __int64 v3; // rsi

  v3 = a1 - 152;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(a1);
  std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(v3);
  return v3;
}
