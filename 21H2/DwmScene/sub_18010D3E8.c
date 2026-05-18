/*
 * XREFs of sub_18010D3E8 @ 0x18010D3E8
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_42 @ 0x18012FD3E (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012FD3E.c)
 * Callees:
 *     sub_180093600 @ 0x180093600 (sub_180093600.c)
 */

void __fastcall sub_18010D3E8(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 8 )
    sub_180093600(i);
}
