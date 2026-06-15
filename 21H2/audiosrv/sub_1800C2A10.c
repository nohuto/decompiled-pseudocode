/*
 * XREFs of sub_1800C2A10 @ 0x1800C2A10
 * Callers:
 *     sub_180075402 @ 0x180075402 (sub_180075402.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12 @ 0x180077800 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12.c)
 *     sub_1800778C0 @ 0x1800778C0 (sub_1800778C0.c)
 *     unknown_libname_39 @ 0x1800778E0 (unknown_libname_39.c)
 *     unknown_libname_242 @ 0x180077900 (unknown_libname_242.c)
 *     sub_180077920 @ 0x180077920 (sub_180077920.c)
 *     sub_180077AA0 @ 0x180077AA0 (sub_180077AA0.c)
 *     sub_180077F50 @ 0x180077F50 (sub_180077F50.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_9 @ 0x180077F90 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_180077F90.c)
 *     unknown_libname_42 @ 0x180078210 (unknown_libname_42.c)
 *     sub_18007AA6F @ 0x18007AA6F (sub_18007AA6F.c)
 *     sub_18007BF5F @ 0x18007BF5F (sub_18007BF5F.c)
 *     sub_18007BF71 @ 0x18007BF71 (sub_18007BF71.c)
 *     sub_18007BF83 @ 0x18007BF83 (sub_18007BF83.c)
 *     unknown_libname_62 @ 0x18007C0FD (unknown_libname_62.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_17 @ 0x18007C63A (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_17.c)
 *     sub_1800EC00A @ 0x1800EC00A (sub_1800EC00A.c)
 *     sub_1800EC016 @ 0x1800EC016 (sub_1800EC016.c)
 *     sub_1800EC022 @ 0x1800EC022 (sub_1800EC022.c)
 *     sub_1800EC02E @ 0x1800EC02E (sub_1800EC02E.c)
 *     sub_1800EC046 @ 0x1800EC046 (sub_1800EC046.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_67 @ 0x180118389 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_67.c)
 *     ?dtor$1@?0??set@?$task_completion_event@U?$pair@EPEAV_CancellationTokenState@details@Concurrency@@@std@@@Concurrency@@QEBA_NU?$pair@EPEAV_CancellationTokenState@details@Concurrency@@@std@@@Z@4HA_2 @ 0x1801183A1 (-dtor$1@-0--set@-$task_completion_event@U-$pair@EPEAV_CancellationTokenState@detail_ea_1801183A1.c)
 *     unknown_libname_175 @ 0x18011C655 (unknown_libname_175.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_72 @ 0x18011EEC0 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_72.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_73 @ 0x18011EED8 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_73.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_97 @ 0x18011F308 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18011F308.c)
 *     sub_18011FD94 @ 0x18011FD94 (sub_18011FD94.c)
 *     unknown_libname_192 @ 0x180126583 (unknown_libname_192.c)
 *     sub_180131BEE @ 0x180131BEE (sub_180131BEE.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800C2A10(__int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
