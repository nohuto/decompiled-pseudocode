/*
 * XREFs of sub_18000F264 @ 0x18000F264
 * Callers:
 *     sub_18011FE67 @ 0x18011FE67 (sub_18011FE67.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_0 @ 0x1801207B8 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_0.c)
 *     sub_1801207C4 @ 0x1801207C4 (sub_1801207C4.c)
 *     sub_180120EF8 @ 0x180120EF8 (sub_180120EF8.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2 @ 0x180121046 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2.c)
 *     sub_180126C8D @ 0x180126C8D (sub_180126C8D.c)
 *     sub_18012AF43 @ 0x18012AF43 (sub_18012AF43.c)
 *     sub_18012AF53 @ 0x18012AF53 (sub_18012AF53.c)
 *     sub_18012AF63 @ 0x18012AF63 (sub_18012AF63.c)
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_18000F264(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j__o_free(v1);
  return result;
}
