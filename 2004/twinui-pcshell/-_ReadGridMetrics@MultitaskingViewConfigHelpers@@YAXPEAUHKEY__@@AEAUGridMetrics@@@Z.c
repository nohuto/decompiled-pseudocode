/*
 * XREFs of ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x180398330
 * Callers:
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x180397774 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x1803975A8 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAURelativeMargins@@@Z @ 0x180398524 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAURelativeMargin.c)
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z @ 0x1803985A4 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z.c)
 *     ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180398624 (-_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 *     ?_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetrics@@@Z @ 0x180398678 (-_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetric.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadGridMetrics(
        MultitaskingViewConfigHelpers *this,
        HKEY a2,
        struct GridMetrics *a3,
        unsigned int *a4)
{
  struct _MARGINS *v6; // r9
  struct RelativeMargins *v7; // r9
  unsigned int *v8; // r9
  unsigned int *v9; // r9
  struct ThumbnailSizeMetrics *v10; // r8
  unsigned int *v11; // r9
  struct _MARGINS *v12; // r9
  unsigned int *v13; // r9
  struct GlyphButtonMetrics *v14; // r9
  int v15; // [rsp+38h] [rbp+10h] BYREF

  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_1804EF3A8,
         (const unsigned __int16 *)&v15,
         a4) >= 0 )
    *((_DWORD *)a2 + 14) = v15;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (HKEY)&stru_180540BE0,
    (const unsigned __int16 *)a2,
    v6);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (HKEY)&stru_180540BC0,
    (const unsigned __int16 *)a2 + 8,
    v7);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_180540C10,
         (const unsigned __int16 *)&v15,
         v8) >= 0 )
    *((_DWORD *)a2 + 12) = v15;
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_180540BF0,
         (const unsigned __int16 *)&v15,
         v9) >= 0 )
    *((_DWORD *)a2 + 13) = v15;
  MultitaskingViewConfigHelpers::_ReadThumbnailSizeMetrics(this, a2 + 16, v10);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Grid_backgroundPercent",
    (double *)a2 + 43,
    v11);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (HKEY)&stru_180540E38,
    (const unsigned __int16 *)a2 + 182,
    v12);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_180540DF0,
         (const unsigned __int16 *)&v15,
         v13) >= 0 )
    *((_DWORD *)a2 + 95) = v15;
  MultitaskingViewConfigHelpers::_ReadGlyphButtonMetrics(
    this,
    (__int64)&stru_180540E78,
    (unsigned __int16 *)a2 + 192,
    v14);
}
