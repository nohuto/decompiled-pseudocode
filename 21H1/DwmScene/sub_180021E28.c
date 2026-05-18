/*
 * XREFs of sub_180021E28 @ 0x180021E28
 * Callers:
 *     sub_180120AF9 @ 0x180120AF9 (sub_180120AF9.c)
 *     sub_180120B59 @ 0x180120B59 (sub_180120B59.c)
 *     unknown_libname_118 @ 0x180120DA2 (unknown_libname_118.c)
 *     sub_180120DE0 @ 0x180120DE0 (sub_180120DE0.c)
 *     sub_1801257E6 @ 0x1801257E6 (sub_1801257E6.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_21 @ 0x180125B1C (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180125B1C.c)
 *     sub_1801276E4 @ 0x1801276E4 (sub_1801276E4.c)
 * Callees:
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

void __fastcall sub_180021E28(__int64 a1)
{
  int v1; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = Mtx_unlock(*(_Mtx_t *)a1);
    if ( v1 )
    {
      std::_Throw_C_error(v1);
      sub_180021E4C();
    }
  }
}
