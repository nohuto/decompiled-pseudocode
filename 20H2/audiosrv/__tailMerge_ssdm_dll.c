/*
 * XREFs of __tailMerge_ssdm_dll @ 0x18006BF36
 * Callers:
 *     __imp_load_s_RequestHrtfData @ 0x18006BF15 (__imp_load_s_RequestHrtfData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800466C0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ssdm_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_SSDM_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
