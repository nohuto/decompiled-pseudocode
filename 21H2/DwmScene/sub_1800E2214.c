/*
 * XREFs of sub_1800E2214 @ 0x1800E2214
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_36 @ 0x18012DC25 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012DC25.c)
 * Callees:
 *     sub_18010B1EC @ 0x18010B1EC (sub_18010B1EC.c)
 */

__int64 __fastcall sub_1800E2214(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 128LL )
    result = sub_18010B1EC(i);
  return result;
}
