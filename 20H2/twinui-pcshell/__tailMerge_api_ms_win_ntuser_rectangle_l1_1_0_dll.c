/*
 * XREFs of __tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll @ 0x18008EEFC
 * Callers:
 *     __imp_load_OffsetRect @ 0x18008EEF0 (__imp_load_OffsetRect.c)
 *     __imp_load_SetRectEmpty @ 0x18008EFC3 (__imp_load_SetRectEmpty.c)
 *     __imp_load_CopyRect @ 0x18008EFD5 (__imp_load_CopyRect.c)
 *     __imp_load_EqualRect @ 0x18008EFE7 (__imp_load_EqualRect.c)
 *     __imp_load_IsRectEmpty @ 0x18008F01D (__imp_load_IsRectEmpty.c)
 *     __imp_load_InflateRect @ 0x18008F053 (__imp_load_InflateRect.c)
 *     __imp_load_IntersectRect @ 0x18008F065 (__imp_load_IntersectRect.c)
 *     __imp_load_PtInRect @ 0x18008F20B (__imp_load_PtInRect.c)
 *     __imp_load_UnionRect @ 0x18008F4D1 (__imp_load_UnionRect.c)
 *     __imp_load_SetRect @ 0x18008F4F5 (__imp_load_SetRect.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088920 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_ntuser_rectangle_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
