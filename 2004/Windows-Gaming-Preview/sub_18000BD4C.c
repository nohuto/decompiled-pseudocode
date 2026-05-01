/*
 * XREFs of sub_18000BD4C @ 0x18000BD4C
 * Callers:
 *     sub_1800460F3 @ 0x1800460F3 (sub_1800460F3.c)
 *     unknown_libname_9 @ 0x1800461D7 (unknown_libname_9.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_5 @ 0x1800462CD (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_5.c)
 *     sub_180046303 @ 0x180046303 (sub_180046303.c)
 *     unknown_libname_15 @ 0x1800466DB (unknown_libname_15.c)
 *     sub_180046846 @ 0x180046846 (sub_180046846.c)
 *     sub_1800468A0 @ 0x1800468A0 (sub_1800468A0.c)
 * Callees:
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 */

__int64 __fastcall sub_18000BD4C(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_1800120A0(result);
  }
  return result;
}
