/*
 * XREFs of sub_1800D1D14 @ 0x1800D1D14
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_31 @ 0x18012D71C (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012D71C.c)
 * Callees:
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 */

__int64 *__fastcall sub_1800D1D14(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx
  __int64 *result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 6 )
    result = sub_18006B3C4(i, 0);
  return result;
}
