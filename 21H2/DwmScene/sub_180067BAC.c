/*
 * XREFs of sub_180067BAC @ 0x180067BAC
 * Callers:
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18012A382 (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_8 @ 0x18012A39E (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012A39E.c)
 * Callees:
 *     sub_1800D14B0 @ 0x1800D14B0 (sub_1800D14B0.c)
 *     sub_1800D14C8 @ 0x1800D14C8 (sub_1800D14C8.c)
 */

__int64 __fastcall sub_180067BAC(unsigned int *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = -*((_QWORD *)a1 + 1);
  v3 = sub_1800D14C8(a1);
  return sub_1800D14B0(v3, *a1, 2LL, v2);
}
