/*
 * XREFs of sub_1800033CC @ 0x1800033CC
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_0 @ 0x180045FB9 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_0.c)
 * Callees:
 *     sub_18000339C @ 0x18000339C (sub_18000339C.c)
 */

BOOL __fastcall sub_1800033CC(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_18000339C(v1);
  return result;
}
