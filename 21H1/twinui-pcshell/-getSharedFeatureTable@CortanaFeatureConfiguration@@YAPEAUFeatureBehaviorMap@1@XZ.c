/*
 * XREFs of ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18007A30C
 * Callers:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x18001BDA4 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x18001BDF4 (-IsWideAtStartupEnabled@@YAEH@Z.c)
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180053408 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x180053478 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 * Callees:
 *     <none>
 */

struct CortanaFeatureConfiguration::FeatureBehaviorMap *__fastcall CortanaFeatureConfiguration::getSharedFeatureTable(
        CortanaFeatureConfiguration *this)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // [rsp+0h] [rbp-20h]

  if ( !byte_18059F538 )
  {
    qword_18059F570 = (__int64)L"ImmersiveSearchTheme";
    *((_QWORD *)&v27 + 1) = 0x100000001LL;
    qword_18059F588 = (__int64)L"ImageSnipSearch";
    qword_18059F5A0 = (__int64)L"PWILOActivityUploadEnabled";
    qword_18059F5B8 = (__int64)L"SearchAndCortanaSplit_WideSearchBoxWidth";
    qword_18059F5D0 = (__int64)L"SearchBoxBorderColor";
    qword_18059F5E8 = (__int64)L"SearchBoxBorderColorInDarkMode";
    qword_18059F600 = (__int64)L"SearchBoxBorderColorInDarkModeLightApp";
    qword_18059F618 = (__int64)L"SearchBoxBorderColorOnHover";
    qword_18059F630 = (__int64)L"SearchBoxBorderColorOnHoverInDarkMode";
    qword_18059F648 = (__int64)L"SearchBoxBorderColorOnHoverInDarkModeLightApp";
    qword_18059F660 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbar";
    qword_18059F678 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkMode";
    qword_18059F690 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkModeLightApp";
    qword_18059F6A8 = (__int64)L"SearchBoxBorderThickness";
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessInDarkMode";
    dword_18059F5DC = 855638016;
    dword_18059F60C = 855638016;
    xmmword_18059F6C0 = v27;
    dword_18059F578 = 1;
    dword_18059F57C = 3;
    qword_18059F580 = 0LL;
    dword_18059F590 = 0;
    dword_18059F594 = 1;
    qword_18059F598 = 0LL;
    dword_18059F5A8 = 0;
    dword_18059F5AC = 1;
    qword_18059F5B0 = 0LL;
    qword_18059F5C0 = 0LL;
    qword_18059F5C8 = 0LL;
    dword_18059F5D8 = 1;
    qword_18059F5E0 = 0LL;
    dword_18059F5F0 = 1;
    dword_18059F5F4 = 872415231;
    qword_18059F5F8 = 0LL;
    dword_18059F608 = 1;
    qword_18059F610 = 0LL;
    dword_18059F620 = 1;
    dword_18059F624 = 1258291200;
    qword_18059F628 = 0LL;
    dword_18059F638 = 1;
    dword_18059F63C = 1275068415;
    qword_18059F640 = 0LL;
    dword_18059F650 = 1;
    dword_18059F654 = 1258291200;
    qword_18059F658 = 0LL;
    qword_18059F668 = 0LL;
    qword_18059F670 = 0LL;
    qword_18059F680 = 0LL;
    qword_18059F688 = 0LL;
    qword_18059F698 = 0LL;
    qword_18059F6A0 = 0LL;
    dword_18059F6B0 = 1;
    dword_18059F6B4 = 1;
    qword_18059F6B8 = 0LL;
    qword_18059F6D0 = 0LL;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessInDarkModeLightApp";
    v2 = v27;
    *((_QWORD *)&v27 + 1) = 0x200000001LL;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnHover";
    xmmword_18059F6D8 = v2;
    v3 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnHoverInDarkMode";
    qword_18059F6E8 = 0LL;
    xmmword_18059F6F0 = v3;
    v4 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnHoverInDarkModeLightApp";
    xmmword_18059F708 = v4;
    v5 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnAppVisible";
    qword_18059F700 = 0LL;
    xmmword_18059F720 = v5;
    v6 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnAppVisibleInDarkMode";
    xmmword_18059F738 = v6;
    v7 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnAppVisibleInDarkModeLightApp";
    qword_18059F718 = 0LL;
    xmmword_18059F750 = v7;
    v8 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessThreshold";
    HIDWORD(v27) = 10;
    qword_18059F730 = 0LL;
    qword_18059F748 = 0LL;
    qword_18059F760 = 0LL;
    xmmword_18059F768 = v8;
    qword_18059F778 = 0LL;
    xmmword_18059F780 = v27;
    qword_18059F790 = 0LL;
    xmmword_18059F798 = (unsigned __int64)L"SearchBoxBorderOnlyOnTop";
    qword_18059F7A8 = 0LL;
    xmmword_18059F7B0 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkMode";
    *((_QWORD *)&v27 + 1) = 0x100000000LL;
    xmmword_18059F7C8 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkModeLightApp";
    *(_QWORD *)&v27 = L"SearchBoxIbeamPointerOnHover";
    qword_18059F7C0 = 0LL;
    xmmword_18059F7E0 = (unsigned __int64)L"SearchBoxDragAndDrop";
    v9 = v27;
    *(_QWORD *)&v27 = L"SearchBoxText";
    *((_QWORD *)&v27 + 1) = 2LL;
    xmmword_18059F7F8 = v9;
    v10 = v27;
    *(_QWORD *)&v27 = L"SearchBoxText_NTP";
    qword_18059F7D8 = 0LL;
    xmmword_18059F810 = v10;
    v11 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyBackground";
    *((_QWORD *)&v27 + 1) = 0x6400000001LL;
    xmmword_18059F828 = v11;
    v12 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyBackgroundInDarkMode";
    qword_18059F7F0 = 0LL;
    HIDWORD(v27) = 20;
    xmmword_18059F840 = v12;
    v13 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyBackgroundInDarkModeLightApp";
    *((_QWORD *)&v27 + 1) = 0x5F00000001LL;
    qword_18059F808 = 0LL;
    qword_18059F820 = 0LL;
    qword_18059F838 = 0LL;
    xmmword_18059F858 = v13;
    v14 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyHighlight";
    qword_18059F850 = 0LL;
    xmmword_18059F870 = v14;
    HIDWORD(v27) = 100;
    qword_18059F868 = 0LL;
    xmmword_18059F918 = v27;
    qword_18059F880 = 0LL;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyHighlightInDarkMode";
    *((_QWORD *)&v27 + 1) = 0x1900000001LL;
    v15 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyHighlightInDarkModeLightApp";
    HIDWORD(v27) = 100;
    xmmword_18059F930 = v15;
    v16 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForeground";
    *((_QWORD *)&v27 + 1) = 0x5200000001LL;
    qword_18059F928 = 0LL;
    xmmword_18059F948 = v16;
    v17 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForegroundInDarkMode";
    qword_18059F940 = 0LL;
    xmmword_18059F888 = v17;
    v18 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForegroundInDarkModeLightApp";
    *((_QWORD *)&v27 + 1) = 0x5200000001LL;
    qword_18059F958 = 0LL;
    xmmword_18059F8A0 = v18;
    v19 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForegroundHighlight";
    xmmword_18059F8B8 = v19;
    v20 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForegroundHighlightInDarkMode";
    qword_18059F898 = 0LL;
    *((_QWORD *)&v27 + 1) = 0x5200000001LL;
    xmmword_18059F8D0 = v20;
    v21 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForegroundHighlightInDarkModeLightApp";
    qword_18059F8B0 = 0LL;
    qword_18059F8C8 = 0LL;
    xmmword_18059F8E8 = v21;
    qword_18059F8E0 = 0LL;
    xmmword_18059F900 = v27;
    *((_QWORD *)&v27 + 1) = 0x100000000LL;
    qword_18059F8F8 = 0LL;
    xmmword_18059F960 = (unsigned __int64)L"SearchBoxTransparencyTextLight";
    qword_18059F910 = 0LL;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyTextLightInDarkMode";
    qword_18059F970 = 0LL;
    xmmword_18059F978 = v27;
    *((_QWORD *)&v27 + 1) = 0x100000000LL;
    qword_18059F988 = 0LL;
    xmmword_18059F990 = (unsigned __int64)L"SearchBoxTransparencyTextLightInDarkModeLightApp";
    *(_QWORD *)&v27 = L"SearchBoxTransparencyTextLightHighlightInDarkMode";
    xmmword_18059F9A8 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlight";
    qword_18059F9A0 = 0LL;
    xmmword_18059F9C0 = v27;
    *(_QWORD *)&v27 = L"WideQFDelta";
    *((_QWORD *)&v27 + 1) = 1LL;
    xmmword_18059F9D8 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlightInDarkModeLightApp";
    v22 = v27;
    *(_QWORD *)&v27 = L"WideAtStartupDelta";
    qword_18059F9B8 = 0LL;
    HIDWORD(v27) = 440;
    xmmword_18059FAB0 = v22;
    v23 = v27;
    *(_QWORD *)&v27 = L"WideAtStartupDeltaMinWidthThreshold";
    HIDWORD(v27) = 1024;
    qword_18059F9D0 = 0LL;
    qword_18059F9E8 = 0LL;
    qword_18059FAC0 = 0LL;
    xmmword_18059FA80 = v23;
    v24 = v27;
    *(_QWORD *)&v27 = L"SearchBoxUseSearchIconAtRest";
    qword_18059FA90 = 0LL;
    xmmword_18059FA98 = v24;
    *((_QWORD *)&v27 + 1) = 0x100000000LL;
    qword_18059FAA8 = 0LL;
    xmmword_18059F9F0 = v27;
    qword_18059FA00 = 0LL;
    *(_QWORD *)&v27 = L"SearchButtonUseSearchIcon";
    xmmword_18059FA08 = v27;
    *(_QWORD *)&v27 = L"StartUISearchSuggestion";
    *((_QWORD *)&v27 + 1) = 1LL;
    qword_18059FA18 = 0LL;
    xmmword_18059FA20 = (unsigned __int64)L"SearchBoxForceOff";
    v25 = v27;
    *(_QWORD *)&v27 = L"StartUISearchUpsellHeaderText";
    *((_QWORD *)&v27 + 1) = 2LL;
    qword_18059FA30 = 0LL;
    xmmword_18059FA38 = v25;
    v26 = v27;
    *(_QWORD *)&v27 = L"StartUISearchUpsellHeaderTextLanguage";
    qword_18059FA48 = 0LL;
    xmmword_18059FA50 = v26;
    qword_18059FA60 = 0LL;
    xmmword_18059FA68 = v27;
    byte_18059F538 = 1;
    qword_18059FA78 = 0LL;
  }
  return (struct CortanaFeatureConfiguration::FeatureBehaviorMap *)&qword_18059F570;
}
