/*
 * XREFs of sub_18001DCEC @ 0x18001DCEC
 * Callers:
 *     sub_180046711 @ 0x180046711 (sub_180046711.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_4 @ 0x18004676D (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18004676D.c)
 * Callees:
 *     sub_180026760 @ 0x180026760 (sub_180026760.c)
 */

__int64 __fastcall sub_18001DCEC(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_180026760(result);
  }
  return result;
}
