/*
 * XREFs of sub_18001007C @ 0x18001007C
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_1 @ 0x18012579D (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012579D.c)
 *     sub_1801264C5 @ 0x1801264C5 (sub_1801264C5.c)
 *     sub_18012CFD8 @ 0x18012CFD8 (sub_18012CFD8.c)
 *     sub_18012D28A @ 0x18012D28A (sub_18012D28A.c)
 *     sub_18012FC5F @ 0x18012FC5F (sub_18012FC5F.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_14 @ 0x18012FC6B (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_14.c)
 *     sub_18012FC77 @ 0x18012FC77 (sub_18012FC77.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_8 @ 0x180130B7B (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_8.c)
 *     sub_180130BA7 @ 0x180130BA7 (sub_180130BA7.c)
 *     sub_180130BE3 @ 0x180130BE3 (sub_180130BE3.c)
 *     ?dtor$0@?0??_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z@4HA @ 0x180130ECF (-dtor$0@-0--_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_Cancellat.c)
 *     sub_18013107E @ 0x18013107E (sub_18013107E.c)
 * Callees:
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

int __fastcall sub_18001007C(_Mtx_t *a1)
{
  int result; // eax

  result = Mtx_unlock(*a1);
  if ( result )
  {
    std::_Throw_C_error(result);
    JUMPOUT(0x18001009ALL);
  }
  return result;
}
