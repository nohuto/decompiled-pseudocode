/*
 * XREFs of sub_180107B18 @ 0x180107B18
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_41 @ 0x18012A426 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012A426.c)
 * Callees:
 *     sub_18008DD30 @ 0x18008DD30 (sub_18008DD30.c)
 */

void __fastcall sub_180107B18(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 8 )
    sub_18008DD30(i);
}
