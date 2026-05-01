/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_mouse_l1_1_0_dll @ 0x180090A11
 * Callers:
 *     __imp_load_TrackMouseEvent @ 0x180090A05 (__imp_load_TrackMouseEvent.c)
 *     __imp_load_SetCapture @ 0x180090A90 (__imp_load_SetCapture.c)
 *     __imp_load_GetCapture @ 0x180090AA2 (__imp_load_GetCapture.c)
 *     __imp_load_ReleaseCapture @ 0x180090AB4 (__imp_load_ReleaseCapture.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088DF0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_mouse_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_mouse_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
