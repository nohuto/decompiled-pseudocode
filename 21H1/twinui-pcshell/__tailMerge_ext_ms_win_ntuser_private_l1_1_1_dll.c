/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x18008FE14
 * Callers:
 *     __imp_load_IsShellManagedWindow @ 0x18008FE08 (__imp_load_IsShellManagedWindow.c)
 *     __imp_load_IsShellFrameWindow @ 0x18008FE93 (__imp_load_IsShellFrameWindow.c)
 *     __imp_load_SetWindowCompositionAttribute @ 0x18008FEA5 (__imp_load_SetWindowCompositionAttribute.c)
 *     __imp_load_GetWindowCompositionAttribute @ 0x18008FFF1 (__imp_load_GetWindowCompositionAttribute.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088700 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_private_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
