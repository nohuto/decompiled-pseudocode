/*
 * XREFs of sub_18000A518 @ 0x18000A518
 * Callers:
 *     sub_18003B17E @ 0x18003B17E (sub_18003B17E.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1 @ 0x18003B190 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA @ 0x18003B2BD (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHA.c)
 *     sub_18003B305 @ 0x18003B305 (sub_18003B305.c)
 *     sub_18003BA68 @ 0x18003BA68 (sub_18003BA68.c)
 *     unknown_libname_10 @ 0x18003C10B (unknown_libname_10.c)
 *     sub_18003C12F @ 0x18003C12F (sub_18003C12F.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA @ 0x18003C29C (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV.c)
 *     sub_18003C2AE @ 0x18003C2AE (sub_18003C2AE.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_0 @ 0x18003C2C0 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_0.c)
 *     sub_18003C2D2 @ 0x18003C2D2 (sub_18003C2D2.c)
 *     sub_18003C2E4 @ 0x18003C2E4 (sub_18003C2E4.c)
 *     sub_18003C2F6 @ 0x18003C2F6 (sub_18003C2F6.c)
 *     sub_18003C33E @ 0x18003C33E (sub_18003C33E.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003C362 @ 0x18003C362 (sub_18003C362.c)
 *     unknown_libname_49 @ 0x18003C5DA (unknown_libname_49.c)
 *     unknown_libname_19 @ 0x18003C719 (unknown_libname_19.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000A518(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
