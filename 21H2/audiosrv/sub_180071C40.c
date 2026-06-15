/*
 * XREFs of sub_180071C40 @ 0x180071C40
 * Callers:
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_18002F090 @ 0x18002F090 (sub_18002F090.c)
 *     sub_18002FD00 @ 0x18002FD00 (sub_18002FD00.c)
 *     sub_180065074 @ 0x180065074 (sub_180065074.c)
 *     sub_1800717A0 @ 0x1800717A0 (sub_1800717A0.c)
 *     sub_1800718B3 @ 0x1800718B3 (sub_1800718B3.c)
 *     sub_180071ABC @ 0x180071ABC (sub_180071ABC.c)
 *     sub_180071B9B @ 0x180071B9B (sub_180071B9B.c)
 *     unknown_libname_24 @ 0x180076940 (unknown_libname_24.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_12 @ 0x180079BA0 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_12.c)
 *     sub_180079F6E @ 0x180079F6E (sub_180079F6E.c)
 *     sub_180079FDA @ 0x180079FDA (sub_180079FDA.c)
 *     sub_18007A17B @ 0x18007A17B (sub_18007A17B.c)
 *     sub_18007AA16 @ 0x18007AA16 (sub_18007AA16.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_30 @ 0x1800E27EE (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800E27EE.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_29 @ 0x1800F6FFC (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_29.c)
 *     sub_180105282 @ 0x180105282 (sub_180105282.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_39 @ 0x1801107EC (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_39.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_40 @ 0x1801108C3 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_40.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_41 @ 0x180110994 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_41.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_98 @ 0x180120C79 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180120C79.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_180071C40(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_18006A148(v1);
  return result;
}
