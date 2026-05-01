/*
 * XREFs of ?CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z @ 0x18045405C
 * Callers:
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18036D56C (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VHideWallpaperIconsObject@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180453F3C (--$MakeAndInitialize@VHideWallpaperIconsObject@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 */

__int64 __fastcall CreateHideWallpaperIconsObject(struct IUnknown **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Microsoft::WRL::Details::MakeAndInitialize<HideWallpaperIconsObject,IUnknown,>(a1);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"shell\\lib\\hidewallpapericons.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
