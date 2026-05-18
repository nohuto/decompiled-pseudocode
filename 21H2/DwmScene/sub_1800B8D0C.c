/*
 * XREFs of sub_1800B8D0C @ 0x1800B8D0C
 * Callers:
 *     sub_18012F885 @ 0x18012F885 (sub_18012F885.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_13 @ 0x18012F89D (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_13.c)
 *     sub_18012F8A9 @ 0x18012F8A9 (sub_18012F8A9.c)
 *     sub_18012F8B5 @ 0x18012F8B5 (sub_18012F8B5.c)
 * Callees:
 *     sub_1800B8840 @ 0x1800B8840 (sub_1800B8840.c)
 */

__int64 __fastcall sub_1800B8D0C(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  sub_1800B8840(a1 + 144);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
