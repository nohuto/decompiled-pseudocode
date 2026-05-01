/*
 * XREFs of __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x180090CBB
 * Callers:
 *     __imp_load_RefreshImmersiveColorPolicyState @ 0x180090CAF (__imp_load_RefreshImmersiveColorPolicyState.c)
 *     __imp_load_GetIsImmersiveColorUsingHighContrast @ 0x180090D3A (__imp_load_GetIsImmersiveColorUsingHighContrast.c)
 *     __imp_load_GetColorFromPreference @ 0x180090D4C (__imp_load_GetColorFromPreference.c)
 *     __imp_load_GetUserColorPreference @ 0x180090D5E (__imp_load_GetUserColorPreference.c)
 *     __imp_load_GetThemeFont @ 0x180092015 (__imp_load_GetThemeFont.c)
 *     __imp_load_OpenThemeData @ 0x180092027 (__imp_load_OpenThemeData.c)
 *     __imp_load_DrawThemeBackground @ 0x180092039 (__imp_load_DrawThemeBackground.c)
 *     __imp_load_GetThemeColor @ 0x18009204B (__imp_load_GetThemeColor.c)
 *     __imp_load_CloseThemeData @ 0x18009205D (__imp_load_CloseThemeData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088DF0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_uxtheme_themes_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
