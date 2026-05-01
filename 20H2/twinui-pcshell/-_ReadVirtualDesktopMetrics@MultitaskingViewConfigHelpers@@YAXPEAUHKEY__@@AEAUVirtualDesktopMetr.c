/*
 * XREFs of ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x180397F54
 * Callers:
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x180396EB4 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z @ 0x180396CAC (--$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z.c)
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x180396CE8 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ?_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopNewButtonMetrics@@@Z @ 0x180397B80 (-_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDe.c)
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z @ 0x180397CE4 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z.c)
 *     ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180397D64 (-_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadVirtualDesktopMetrics(
        MultitaskingViewConfigHelpers *this,
        float *a2,
        struct VirtualDesktopMetrics *a3,
        unsigned int *a4)
{
  unsigned int *v6; // r9
  struct _MARGINS *v7; // r9
  unsigned int *v8; // r9
  unsigned int *v9; // r9
  struct _MARGINS *v10; // r9
  unsigned int *v11; // r9
  unsigned int *v12; // r9
  unsigned int *v13; // r9
  struct VirtualDesktopNewButtonMetrics *v14; // r8
  unsigned int *v15; // r9
  struct GlyphButtonMetrics *v16; // r9
  int v17; // [rsp+38h] [rbp+10h] BYREF

  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_background_singledesktop_opacity",
    a2,
    a4);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_background_multidesktop_opacity",
    a2 + 2,
    v6);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_180540870,
    (unsigned __int16 *)a2 + 8,
    v7);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_180540838,
         (unsigned __int16 *)&v17,
         v8) >= 0 )
    *((_DWORD *)a2 + 8) = v17;
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_1805406E8,
         (unsigned __int16 *)&v17,
         v9) >= 0 )
    *((_DWORD *)a2 + 9) = v17;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_1805406C0,
    (unsigned __int16 *)a2 + 20,
    v10);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Desktop_click_scale",
    (double *)a2 + 7,
    v11);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_inactive_overlay_opacity",
    a2 + 16,
    v12);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_text_inactive_opacity",
    a2 + 22,
    v13);
  MultitaskingViewConfigHelpers::_ReadNewVirtualDesktopButtonMetrics(this, (HKEY)a2 + 78, v14, v15);
  MultitaskingViewConfigHelpers::_ReadGlyphButtonMetrics(
    this,
    (__int64)&stru_1805405E8,
    (unsigned __int16 *)a2 + 184,
    v16);
}
