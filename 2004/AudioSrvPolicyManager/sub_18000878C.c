/*
 * XREFs of sub_18000878C @ 0x18000878C
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_0 @ 0x18003B2E1 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18003B2E1.c)
 *     sub_18003B2F3 @ 0x18003B2F3 (sub_18003B2F3.c)
 *     sub_18003B548 @ 0x18003B548 (sub_18003B548.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2 @ 0x18003B6DA (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2.c)
 *     sub_18003B6EC @ 0x18003B6EC (sub_18003B6EC.c)
 *     sub_18003B9B9 @ 0x18003B9B9 (sub_18003B9B9.c)
 *     unknown_libname_13 @ 0x18003C308 (unknown_libname_13.c)
 *     sub_18003C461 @ 0x18003C461 (sub_18003C461.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_2 @ 0x18003C497 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_2.c)
 *     unknown_libname_20 @ 0x18003C7E1 (unknown_libname_20.c)
 *     ?dtor$2@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18003C931 (-dtor$2@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     sub_18003CC58 @ 0x18003CC58 (sub_18003CC58.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000878C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
