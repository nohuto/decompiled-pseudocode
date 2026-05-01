/*
 * XREFs of __tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll @ 0x180044FB7
 * Callers:
 *     __imp_load_D3DKMTQueryProcessOfferInfo @ 0x180044FAB (__imp_load_D3DKMTQueryProcessOfferInfo.c)
 *     __imp_load_D3DKMTTrimProcessCommitment @ 0x18004506C (__imp_load_D3DKMTTrimProcessCommitment.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180042FE0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_dx_d3dkmt_l1_1_2_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
