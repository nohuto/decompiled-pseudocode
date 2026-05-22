/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll @ 0x18003CFFB
 * Callers:
 *     __imp_load_MapVirtualKeyExW @ 0x18003CFEF (__imp_load_MapVirtualKeyExW.c)
 *     __imp_load_GetKeyboardLayout @ 0x18003D07A (__imp_load_GetKeyboardLayout.c)
 *     __imp_load_ToUnicodeEx @ 0x18003D08C (__imp_load_ToUnicodeEx.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180011770 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_keyboard_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
