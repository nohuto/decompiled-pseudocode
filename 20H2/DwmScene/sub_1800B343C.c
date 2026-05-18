/*
 * XREFs of sub_1800B343C @ 0x1800B343C
 * Callers:
 *     sub_180129F6D @ 0x180129F6D (sub_180129F6D.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_13 @ 0x180129F85 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_13.c)
 *     sub_180129F91 @ 0x180129F91 (sub_180129F91.c)
 *     sub_180129F9D @ 0x180129F9D (sub_180129F9D.c)
 * Callees:
 *     sub_1800B2F70 @ 0x1800B2F70 (sub_1800B2F70.c)
 */

__int64 __fastcall sub_1800B343C(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  sub_1800B2F70(a1 + 144);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
