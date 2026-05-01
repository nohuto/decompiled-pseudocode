/*
 * XREFs of ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18007AA9C
 * Callers:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x18001C218 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x18001C268 (-IsWideAtStartupEnabled@@YAEH@Z.c)
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180053E38 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x180053EA8 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
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

  if ( !byte_1805CC738 )
  {
    qword_1805CC7C0 = (__int64)L"ImmersiveSearchTheme";
    *((_QWORD *)&v27 + 1) = 0x100000001LL;
    qword_1805CC7D8 = (__int64)L"ImageSnipSearch";
    qword_1805CC7F0 = (__int64)L"PWILOActivityUploadEnabled";
    qword_1805CC808 = (__int64)L"SearchAndCortanaSplit_WideSearchBoxWidth";
    qword_1805CC820 = (__int64)L"SearchBoxBorderColor";
    qword_1805CC838 = (__int64)L"SearchBoxBorderColorInDarkMode";
    qword_1805CC850 = (__int64)L"SearchBoxBorderColorInDarkModeLightApp";
    qword_1805CC868 = (__int64)L"SearchBoxBorderColorOnHover";
    qword_1805CC880 = (__int64)L"SearchBoxBorderColorOnHoverInDarkMode";
    qword_1805CC898 = (__int64)L"SearchBoxBorderColorOnHoverInDarkModeLightApp";
    qword_1805CC8B0 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbar";
    qword_1805CC8C8 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkMode";
    qword_1805CC8E0 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkModeLightApp";
    qword_1805CC8F8 = (__int64)L"SearchBoxBorderThickness";
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessInDarkMode";
    dword_1805CC82C = 855638016;
    dword_1805CC85C = 855638016;
    xmmword_1805CC910 = v27;
    dword_1805CC7C8 = 1;
    dword_1805CC7CC = 3;
    qword_1805CC7D0 = 0LL;
    dword_1805CC7E0 = 0;
    dword_1805CC7E4 = 1;
    qword_1805CC7E8 = 0LL;
    dword_1805CC7F8 = 0;
    dword_1805CC7FC = 1;
    qword_1805CC800 = 0LL;
    qword_1805CC810 = 0LL;
    qword_1805CC818 = 0LL;
    dword_1805CC828 = 1;
    qword_1805CC830 = 0LL;
    dword_1805CC840 = 1;
    dword_1805CC844 = 872415231;
    qword_1805CC848 = 0LL;
    dword_1805CC858 = 1;
    qword_1805CC860 = 0LL;
    dword_1805CC870 = 1;
    dword_1805CC874 = 1258291200;
    qword_1805CC878 = 0LL;
    dword_1805CC888 = 1;
    dword_1805CC88C = 1275068415;
    qword_1805CC890 = 0LL;
    dword_1805CC8A0 = 1;
    dword_1805CC8A4 = 1258291200;
    qword_1805CC8A8 = 0LL;
    qword_1805CC8B8 = 0LL;
    qword_1805CC8C0 = 0LL;
    qword_1805CC8D0 = 0LL;
    qword_1805CC8D8 = 0LL;
    qword_1805CC8E8 = 0LL;
    qword_1805CC8F0 = 0LL;
    dword_1805CC900 = 1;
    dword_1805CC904 = 1;
    qword_1805CC908 = 0LL;
    qword_1805CC920 = 0LL;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessInDarkModeLightApp";
    v2 = v27;
    *((_QWORD *)&v27 + 1) = 0x200000001LL;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnHover";
    xmmword_1805CC928 = v2;
    v3 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnHoverInDarkMode";
    qword_1805CC938 = 0LL;
    xmmword_1805CC940 = v3;
    v4 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnHoverInDarkModeLightApp";
    xmmword_1805CC958 = v4;
    v5 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnAppVisible";
    qword_1805CC950 = 0LL;
    xmmword_1805CC970 = v5;
    v6 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnAppVisibleInDarkMode";
    xmmword_1805CC988 = v6;
    v7 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessOnAppVisibleInDarkModeLightApp";
    qword_1805CC968 = 0LL;
    xmmword_1805CC9A0 = v7;
    v8 = v27;
    *(_QWORD *)&v27 = L"SearchBoxBorderThicknessThreshold";
    HIDWORD(v27) = 10;
    qword_1805CC980 = 0LL;
    qword_1805CC998 = 0LL;
    qword_1805CC9B0 = 0LL;
    xmmword_1805CC9B8 = v8;
    qword_1805CC9C8 = 0LL;
    xmmword_1805CC9D0 = v27;
    qword_1805CC9E0 = 0LL;
    xmmword_1805CC9E8 = (unsigned __int64)L"SearchBoxBorderOnlyOnTop";
    qword_1805CC9F8 = 0LL;
    xmmword_1805CCA00 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkMode";
    *((_QWORD *)&v27 + 1) = 0x100000000LL;
    xmmword_1805CCA18 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkModeLightApp";
    *(_QWORD *)&v27 = L"SearchBoxIbeamPointerOnHover";
    qword_1805CCA10 = 0LL;
    xmmword_1805CCA30 = (unsigned __int64)L"SearchBoxDragAndDrop";
    v9 = v27;
    *(_QWORD *)&v27 = L"SearchBoxText";
    *((_QWORD *)&v27 + 1) = 2LL;
    xmmword_1805CCA48 = v9;
    v10 = v27;
    *(_QWORD *)&v27 = L"SearchBoxText_NTP";
    qword_1805CCA28 = 0LL;
    xmmword_1805CCA60 = v10;
    v11 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyBackground";
    *((_QWORD *)&v27 + 1) = 0x6400000001LL;
    xmmword_1805CCA78 = v11;
    v12 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyBackgroundInDarkMode";
    qword_1805CCA40 = 0LL;
    HIDWORD(v27) = 20;
    xmmword_1805CCA90 = v12;
    v13 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyBackgroundInDarkModeLightApp";
    *((_QWORD *)&v27 + 1) = 0x5F00000001LL;
    qword_1805CCA58 = 0LL;
    qword_1805CCA70 = 0LL;
    qword_1805CCA88 = 0LL;
    xmmword_1805CCAA8 = v13;
    v14 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyHighlight";
    qword_1805CCAA0 = 0LL;
    xmmword_1805CCAC0 = v14;
    HIDWORD(v27) = 100;
    qword_1805CCAB8 = 0LL;
    xmmword_1805CCB68 = v27;
    qword_1805CCAD0 = 0LL;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyHighlightInDarkMode";
    *((_QWORD *)&v27 + 1) = 0x1900000001LL;
    v15 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyHighlightInDarkModeLightApp";
    HIDWORD(v27) = 100;
    xmmword_1805CCB80 = v15;
    v16 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForeground";
    *((_QWORD *)&v27 + 1) = 0x5200000001LL;
    qword_1805CCB78 = 0LL;
    xmmword_1805CCB98 = v16;
    v17 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForegroundInDarkMode";
    qword_1805CCB90 = 0LL;
    xmmword_1805CCAD8 = v17;
    v18 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForegroundInDarkModeLightApp";
    *((_QWORD *)&v27 + 1) = 0x5200000001LL;
    qword_1805CCBA8 = 0LL;
    xmmword_1805CCAF0 = v18;
    v19 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForegroundHighlight";
    xmmword_1805CCB08 = v19;
    v20 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForegroundHighlightInDarkMode";
    qword_1805CCAE8 = 0LL;
    *((_QWORD *)&v27 + 1) = 0x5200000001LL;
    xmmword_1805CCB20 = v20;
    v21 = v27;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyForegroundHighlightInDarkModeLightApp";
    qword_1805CCB00 = 0LL;
    qword_1805CCB18 = 0LL;
    xmmword_1805CCB38 = v21;
    qword_1805CCB30 = 0LL;
    xmmword_1805CCB50 = v27;
    *((_QWORD *)&v27 + 1) = 0x100000000LL;
    qword_1805CCB48 = 0LL;
    xmmword_1805CCBB0 = (unsigned __int64)L"SearchBoxTransparencyTextLight";
    qword_1805CCB60 = 0LL;
    *(_QWORD *)&v27 = L"SearchBoxTransparencyTextLightInDarkMode";
    qword_1805CCBC0 = 0LL;
    xmmword_1805CCBC8 = v27;
    *((_QWORD *)&v27 + 1) = 0x100000000LL;
    qword_1805CCBD8 = 0LL;
    xmmword_1805CCBE0 = (unsigned __int64)L"SearchBoxTransparencyTextLightInDarkModeLightApp";
    *(_QWORD *)&v27 = L"SearchBoxTransparencyTextLightHighlightInDarkMode";
    xmmword_1805CCBF8 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlight";
    qword_1805CCBF0 = 0LL;
    xmmword_1805CCC10 = v27;
    *(_QWORD *)&v27 = L"WideQFDelta";
    *((_QWORD *)&v27 + 1) = 1LL;
    xmmword_1805CCC28 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlightInDarkModeLightApp";
    v22 = v27;
    *(_QWORD *)&v27 = L"WideAtStartupDelta";
    qword_1805CCC08 = 0LL;
    HIDWORD(v27) = 440;
    xmmword_1805CCD00 = v22;
    v23 = v27;
    *(_QWORD *)&v27 = L"WideAtStartupDeltaMinWidthThreshold";
    HIDWORD(v27) = 1024;
    qword_1805CCC20 = 0LL;
    qword_1805CCC38 = 0LL;
    qword_1805CCD10 = 0LL;
    xmmword_1805CCCD0 = v23;
    v24 = v27;
    *(_QWORD *)&v27 = L"SearchBoxUseSearchIconAtRest";
    qword_1805CCCE0 = 0LL;
    xmmword_1805CCCE8 = v24;
    *((_QWORD *)&v27 + 1) = 0x100000000LL;
    qword_1805CCCF8 = 0LL;
    xmmword_1805CCC40 = v27;
    qword_1805CCC50 = 0LL;
    *(_QWORD *)&v27 = L"SearchButtonUseSearchIcon";
    xmmword_1805CCC58 = v27;
    *(_QWORD *)&v27 = L"StartUISearchSuggestion";
    *((_QWORD *)&v27 + 1) = 1LL;
    qword_1805CCC68 = 0LL;
    xmmword_1805CCC70 = (unsigned __int64)L"SearchBoxForceOff";
    v25 = v27;
    *(_QWORD *)&v27 = L"StartUISearchUpsellHeaderText";
    *((_QWORD *)&v27 + 1) = 2LL;
    qword_1805CCC80 = 0LL;
    xmmword_1805CCC88 = v25;
    v26 = v27;
    *(_QWORD *)&v27 = L"StartUISearchUpsellHeaderTextLanguage";
    qword_1805CCC98 = 0LL;
    xmmword_1805CCCA0 = v26;
    qword_1805CCCB0 = 0LL;
    xmmword_1805CCCB8 = v27;
    byte_1805CC738 = 1;
    qword_1805CCCC8 = 0LL;
  }
  return (struct CortanaFeatureConfiguration::FeatureBehaviorMap *)&qword_1805CC7C0;
}
