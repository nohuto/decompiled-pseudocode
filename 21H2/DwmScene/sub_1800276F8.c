/*
 * XREFs of sub_1800276F8 @ 0x1800276F8
 * Callers:
 *     sub_180126411 @ 0x180126411 (sub_180126411.c)
 *     sub_180126471 @ 0x180126471 (sub_180126471.c)
 *     unknown_libname_120 @ 0x1801266BA (unknown_libname_120.c)
 *     sub_1801266F8 @ 0x1801266F8 (sub_1801266F8.c)
 *     sub_18012B0FE @ 0x18012B0FE (sub_18012B0FE.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_22 @ 0x18012B434 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012B434.c)
 *     sub_18012CFFC @ 0x18012CFFC (sub_18012CFFC.c)
 * Callees:
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

void __fastcall sub_1800276F8(__int64 a1)
{
  int v1; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = Mtx_unlock(*(_Mtx_t *)a1);
    if ( v1 )
    {
      std::_Throw_C_error(v1);
      sub_18002771C();
    }
  }
}
