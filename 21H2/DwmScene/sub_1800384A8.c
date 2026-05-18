/*
 * XREFs of sub_1800384A8 @ 0x1800384A8
 * Callers:
 *     ?dtor$0@?0??_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z@4HA @ 0x180126AF8 (-dtor$0@-0--_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z@4HA.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_41 @ 0x18012FCC4 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012FCC4.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800384A8(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
