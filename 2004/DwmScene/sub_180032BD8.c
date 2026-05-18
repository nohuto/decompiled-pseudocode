/*
 * XREFs of sub_180032BD8 @ 0x180032BD8
 * Callers:
 *     ?dtor$0@?0??_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z@4HA @ 0x1801211E0 (-dtor$0@-0--_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z@4HA.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_40 @ 0x18012A3AC (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012A3AC.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180032BD8(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
