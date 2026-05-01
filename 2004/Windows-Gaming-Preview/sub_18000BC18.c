/*
 * XREFs of sub_18000BC18 @ 0x18000BC18
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1 @ 0x180045FDD (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1.c)
 *     unknown_libname_12 @ 0x18004641A (unknown_libname_12.c)
 *     sub_1800468FA @ 0x1800468FA (sub_1800468FA.c)
 *     sub_180046B5C @ 0x180046B5C (sub_180046B5C.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_4 @ 0x180046CDD (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_4.c)
 * Callees:
 *     sub_18000BA30 @ 0x18000BA30 (sub_18000BA30.c)
 */

volatile signed __int64 *__fastcall sub_18000BC18(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)sub_18000BA30(result);
  }
  return result;
}
