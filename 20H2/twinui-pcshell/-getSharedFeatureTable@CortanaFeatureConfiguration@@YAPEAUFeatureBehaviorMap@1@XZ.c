/*
 * XREFs of ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18007788C
 * Callers:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180013770 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18005F5E0 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x18005F650 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
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
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // [rsp+0h] [rbp-20h]

  if ( !byte_1805CB770 )
  {
    qword_1805CB7F0 = (__int64)L"ImmersiveSearchTheme";
    *((_QWORD *)&v30 + 1) = 0x100000001LL;
    qword_1805CB808 = (__int64)L"ImageSnipSearch";
    qword_1805CB820 = (__int64)L"PWILOActivityUploadEnabled";
    qword_1805CB838 = (__int64)L"SearchAndCortanaSplit_WideSearchBoxWidth";
    qword_1805CB850 = (__int64)L"SearchBoxBorderColor";
    qword_1805CB868 = (__int64)L"SearchBoxBorderColorInDarkMode";
    qword_1805CB880 = (__int64)L"SearchBoxBorderColorInDarkModeLightApp";
    qword_1805CB898 = (__int64)L"SearchBoxBorderColorOnHover";
    qword_1805CB8B0 = (__int64)L"SearchBoxBorderColorOnHoverInDarkMode";
    qword_1805CB8C8 = (__int64)L"SearchBoxBorderColorOnHoverInDarkModeLightApp";
    qword_1805CB8E0 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbar";
    qword_1805CB8F8 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkMode";
    qword_1805CB910 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkModeLightApp";
    qword_1805CB928 = (__int64)L"SearchBoxBorderThickness";
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessInDarkMode";
    dword_1805CB85C = 855638016;
    dword_1805CB88C = 855638016;
    xmmword_1805CB940 = v30;
    dword_1805CB7F8 = 1;
    dword_1805CB7FC = 3;
    qword_1805CB800 = 0LL;
    dword_1805CB810 = 0;
    dword_1805CB814 = 1;
    qword_1805CB818 = 0LL;
    dword_1805CB828 = 0;
    dword_1805CB82C = 1;
    qword_1805CB830 = 0LL;
    qword_1805CB840 = 0LL;
    qword_1805CB848 = 0LL;
    dword_1805CB858 = 1;
    qword_1805CB860 = 0LL;
    dword_1805CB870 = 1;
    dword_1805CB874 = 872415231;
    qword_1805CB878 = 0LL;
    dword_1805CB888 = 1;
    qword_1805CB890 = 0LL;
    dword_1805CB8A0 = 1;
    dword_1805CB8A4 = 1258291200;
    qword_1805CB8A8 = 0LL;
    dword_1805CB8B8 = 1;
    dword_1805CB8BC = 1275068415;
    qword_1805CB8C0 = 0LL;
    dword_1805CB8D0 = 1;
    dword_1805CB8D4 = 1258291200;
    qword_1805CB8D8 = 0LL;
    qword_1805CB8E8 = 0LL;
    qword_1805CB8F0 = 0LL;
    qword_1805CB900 = 0LL;
    qword_1805CB908 = 0LL;
    qword_1805CB918 = 0LL;
    qword_1805CB920 = 0LL;
    dword_1805CB930 = 1;
    dword_1805CB934 = 1;
    qword_1805CB938 = 0LL;
    qword_1805CB950 = 0LL;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessInDarkModeLightApp";
    v2 = v30;
    *((_QWORD *)&v30 + 1) = 0x200000001LL;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnHover";
    xmmword_1805CB958 = v2;
    v3 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnHoverInDarkMode";
    qword_1805CB968 = 0LL;
    xmmword_1805CB970 = v3;
    v4 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnHoverInDarkModeLightApp";
    xmmword_1805CB988 = v4;
    v5 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnAppVisible";
    qword_1805CB980 = 0LL;
    xmmword_1805CB9A0 = v5;
    v6 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnAppVisibleInDarkMode";
    xmmword_1805CB9B8 = v6;
    v7 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnAppVisibleInDarkModeLightApp";
    qword_1805CB998 = 0LL;
    xmmword_1805CB9D0 = v7;
    v8 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessThreshold";
    HIDWORD(v30) = 10;
    qword_1805CB9B0 = 0LL;
    qword_1805CB9C8 = 0LL;
    qword_1805CB9E0 = 0LL;
    xmmword_1805CB9E8 = v8;
    qword_1805CB9F8 = 0LL;
    xmmword_1805CBA00 = v30;
    qword_1805CBA10 = 0LL;
    xmmword_1805CBA18 = (unsigned __int64)L"SearchBoxBorderOnlyOnTop";
    qword_1805CBA28 = 0LL;
    xmmword_1805CBA30 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkMode";
    *((_QWORD *)&v30 + 1) = 0x100000000LL;
    xmmword_1805CBA48 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkModeLightApp";
    *(_QWORD *)&v30 = L"SearchBoxIbeamPointerOnHover";
    qword_1805CBA40 = 0LL;
    xmmword_1805CBA60 = (unsigned __int64)L"SearchBoxDragAndDrop";
    v9 = v30;
    *(_QWORD *)&v30 = L"SearchBoxText";
    *((_QWORD *)&v30 + 1) = 2LL;
    xmmword_1805CBA78 = v9;
    v10 = v30;
    *(_QWORD *)&v30 = L"SearchBoxText_NTP";
    qword_1805CBA58 = 0LL;
    xmmword_1805CBA90 = v10;
    v11 = v30;
    *(_QWORD *)&v30 = L"SearchBoxWidth";
    *((_QWORD *)&v30 + 1) = 0x14000000001LL;
    xmmword_1805CBAA8 = v11;
    v12 = v30;
    *(_QWORD *)&v30 = L"SearchBoxWideWidth";
    qword_1805CBA70 = 0LL;
    HIDWORD(v30) = 344;
    xmmword_1805CBAC0 = v12;
    v13 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyBackground";
    *((_QWORD *)&v30 + 1) = 0x6400000001LL;
    qword_1805CBA88 = 0LL;
    qword_1805CBAA0 = 0LL;
    qword_1805CBAB8 = 0LL;
    xmmword_1805CBAD8 = v13;
    v14 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyBackgroundInDarkMode";
    qword_1805CBAD0 = 0LL;
    xmmword_1805CBAF0 = v14;
    HIDWORD(v30) = 20;
    qword_1805CBAE8 = 0LL;
    xmmword_1805CBB08 = v30;
    qword_1805CBB00 = 0LL;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyBackgroundInDarkModeLightApp";
    *((_QWORD *)&v30 + 1) = 0x5F00000001LL;
    v15 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyHighlight";
    HIDWORD(v30) = 100;
    xmmword_1805CBB20 = v15;
    v16 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyHighlightInDarkMode";
    *((_QWORD *)&v30 + 1) = 0x1900000001LL;
    qword_1805CBB18 = 0LL;
    xmmword_1805CBBC8 = v16;
    v17 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyHighlightInDarkModeLightApp";
    HIDWORD(v30) = 100;
    qword_1805CBB30 = 0LL;
    xmmword_1805CBBE0 = v17;
    v18 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForeground";
    *((_QWORD *)&v30 + 1) = 0x5200000001LL;
    xmmword_1805CBBF8 = v18;
    v19 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForegroundInDarkMode";
    qword_1805CBBD8 = 0LL;
    xmmword_1805CBB38 = v19;
    v20 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForegroundInDarkModeLightApp";
    qword_1805CBBF0 = 0LL;
    *((_QWORD *)&v30 + 1) = 0x5200000001LL;
    xmmword_1805CBB50 = v20;
    v21 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForegroundHighlight";
    qword_1805CBC08 = 0LL;
    qword_1805CBB48 = 0LL;
    xmmword_1805CBB68 = v21;
    v22 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForegroundHighlightInDarkMode";
    qword_1805CBB60 = 0LL;
    qword_1805CBB78 = 0LL;
    xmmword_1805CBB80 = v22;
    *((_QWORD *)&v30 + 1) = 0x5200000001LL;
    v23 = v30;
    qword_1805CBB90 = 0LL;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForegroundHighlightInDarkModeLightApp";
    xmmword_1805CBB98 = v23;
    v24 = v30;
    *((_QWORD *)&v30 + 1) = 0x100000000LL;
    qword_1805CBBA8 = 0LL;
    xmmword_1805CBBB0 = v24;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyTextLightInDarkMode";
    qword_1805CBBC0 = 0LL;
    xmmword_1805CBC10 = (unsigned __int64)L"SearchBoxTransparencyTextLight";
    xmmword_1805CBC28 = v30;
    *((_QWORD *)&v30 + 1) = 0x100000000LL;
    qword_1805CBC20 = 0LL;
    xmmword_1805CBC40 = (unsigned __int64)L"SearchBoxTransparencyTextLightInDarkModeLightApp";
    *(_QWORD *)&v30 = L"SearchBoxTransparencyTextLightHighlightInDarkMode";
    xmmword_1805CBC58 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlight";
    qword_1805CBC38 = 0LL;
    xmmword_1805CBC70 = v30;
    *(_QWORD *)&v30 = L"WideQFDelta";
    *((_QWORD *)&v30 + 1) = 1LL;
    qword_1805CBC50 = 0LL;
    qword_1805CBC68 = 0LL;
    qword_1805CBC80 = 0LL;
    xmmword_1805CBC88 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlightInDarkModeLightApp";
    v25 = v30;
    *(_QWORD *)&v30 = L"WideAtStartupDelta";
    qword_1805CBC98 = 0LL;
    xmmword_1805CBD60 = v25;
    HIDWORD(v30) = 440;
    qword_1805CBD70 = 0LL;
    xmmword_1805CBD30 = v30;
    qword_1805CBD40 = 0LL;
    *(_QWORD *)&v30 = L"WideAtStartupDeltaMinWidthThreshold";
    HIDWORD(v30) = 1024;
    v26 = v30;
    *(_QWORD *)&v30 = L"SearchBoxUseSearchIconAtRest";
    *((_QWORD *)&v30 + 1) = 0x100000000LL;
    xmmword_1805CBD48 = v26;
    v27 = v30;
    *(_QWORD *)&v30 = L"SearchButtonUseSearchIcon";
    qword_1805CBD58 = 0LL;
    xmmword_1805CBCA0 = v27;
    xmmword_1805CBCB8 = v30;
    *(_QWORD *)&v30 = L"StartUISearchSuggestion";
    qword_1805CBCB0 = 0LL;
    *((_QWORD *)&v30 + 1) = 1LL;
    xmmword_1805CBCD0 = (unsigned __int64)L"SearchBoxForceOff";
    v28 = v30;
    *(_QWORD *)&v30 = L"StartUISearchUpsellHeaderText";
    *((_QWORD *)&v30 + 1) = 2LL;
    qword_1805CBCC8 = 0LL;
    qword_1805CBCE0 = 0LL;
    xmmword_1805CBCE8 = v28;
    v29 = v30;
    *(_QWORD *)&v30 = L"StartUISearchUpsellHeaderTextLanguage";
    qword_1805CBCF8 = 0LL;
    xmmword_1805CBD00 = v29;
    qword_1805CBD10 = 0LL;
    xmmword_1805CBD18 = v30;
    byte_1805CB770 = 1;
    qword_1805CBD28 = 0LL;
  }
  return (struct CortanaFeatureConfiguration::FeatureBehaviorMap *)&qword_1805CB7F0;
}
