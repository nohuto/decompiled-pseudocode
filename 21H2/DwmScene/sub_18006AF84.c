/*
 * XREFs of sub_18006AF84 @ 0x18006AF84
 * Callers:
 *     sub_18012A4B9 @ 0x18012A4B9 (sub_18012A4B9.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_12 @ 0x18012A522 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012A522.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006AF84(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = a1[1];
  for ( i = *a1; i != v2; i += 64LL )
  {
    v4 = *(_QWORD *)(i + 56);
    if ( v4 )
    {
      LOBYTE(a2) = v4 != i;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
      *(_QWORD *)(i + 56) = 0LL;
    }
  }
  return result;
}
