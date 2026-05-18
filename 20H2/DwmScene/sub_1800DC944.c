/*
 * XREFs of sub_1800DC944 @ 0x1800DC944
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_35 @ 0x18012830D (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012830D.c)
 * Callees:
 *     sub_18010591C @ 0x18010591C (sub_18010591C.c)
 */

__int64 __fastcall sub_1800DC944(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 128LL )
    result = sub_18010591C(i);
  return result;
}
