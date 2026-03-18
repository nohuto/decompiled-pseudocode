/*
 * XREFs of __tailMerge_api_ms_win_dx_d3dkmt_l1_1_0_dll @ 0x1801024D7
 * Callers:
 *     __imp_load_D3DKMTEscape @ 0x1801024CB (__imp_load_D3DKMTEscape.c)
 *     __imp_load_D3DKMTQueryAdapterInfo @ 0x180102F5B (__imp_load_D3DKMTQueryAdapterInfo.c)
 *     __imp_load_D3DKMTCloseAdapter @ 0x180102FF8 (__imp_load_D3DKMTCloseAdapter.c)
 *     __imp_load_D3DKMTGetDeviceState @ 0x18010300A (__imp_load_D3DKMTGetDeviceState.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800F39B0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_dx_d3dkmt_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_dx_d3dkmt_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
