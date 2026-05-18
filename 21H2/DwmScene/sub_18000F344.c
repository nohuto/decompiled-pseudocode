/*
 * XREFs of sub_18000F344 @ 0x18000F344
 * Callers:
 *     sub_180125737 @ 0x180125737 (sub_180125737.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_0 @ 0x180126088 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_0.c)
 *     sub_180126094 @ 0x180126094 (sub_180126094.c)
 *     sub_180126810 @ 0x180126810 (sub_180126810.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2 @ 0x18012695E (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2.c)
 *     sub_18012C5A5 @ 0x18012C5A5 (sub_18012C5A5.c)
 *     sub_18013085B @ 0x18013085B (sub_18013085B.c)
 *     sub_18013086B @ 0x18013086B (sub_18013086B.c)
 *     sub_18013087B @ 0x18013087B (sub_18013087B.c)
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18000F344(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j__o_free(v1);
  return result;
}
