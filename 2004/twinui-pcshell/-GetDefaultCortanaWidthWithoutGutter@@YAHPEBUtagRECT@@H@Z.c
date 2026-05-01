/*
 * XREFs of ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x18001C174
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18001AAD0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1801D4990 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18020FC08 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x18001C218 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x18001C268 (-IsWideAtStartupEnabled@@YAEH@Z.c)
 */

__int64 __fastcall GetDefaultCortanaWidthWithoutGutter(const struct tagRECT *a1, int a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 344;
  if ( a1->right - a1->left < 1196 )
    v3 = 320;
  v8 = 0;
  if ( (int)CortanaFeatureConfiguration::GetDWORD(56LL, &v8) >= 0 && (v5 = v8) != 0
    || (v6 = MulDiv(a1->right - a1->left, 96, a2), IsWideAtStartupEnabled(v6))
    && (int)CortanaFeatureConfiguration::GetDWORD(54LL, &v8) >= 0
    && (v5 = v8) != 0 )
  {
    v3 += v5;
  }
  return v3;
}
