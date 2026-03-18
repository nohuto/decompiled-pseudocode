/*
 * XREFs of ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180025D7C
 * Callers:
 *     _dynamic_initializer_for__CCommonRegistryData::CpuClipAreaThreshold__ @ 0x180003260 (_dynamic_initializer_for__CCommonRegistryData--CpuClipAreaThreshold__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::CpuClipWarpPartitionThreshold__ @ 0x1800032A0 (_dynamic_initializer_for__CCommonRegistryData--CpuClipWarpPartitionThreshold__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds__ @ 0x180003580 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--ExtensionTimeMicroseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinHeight__ @ 0x180003680 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessingMinHeight__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinWidth__ @ 0x1800036C0 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessingMinWidth__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingResizeGrowth__ @ 0x180003700 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessingResizeGrowth__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::InitialWatchdogTelemetryTimeoutMilliseconds__ @ 0x180003740 (_dynamic_initializer_for__CCommonRegistryData--InitialWatchdogTelemetryTimeoutMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MaxD3DFeatureLevel__ @ 0x1800037E0 (_dynamic_initializer_for__CCommonRegistryData--MaxD3DFeatureLevel__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MegaRectSearchCount__ @ 0x180003820 (_dynamic_initializer_for__CCommonRegistryData--MegaRectSearchCount__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MegaRectSize__ @ 0x180003860 (_dynamic_initializer_for__CCommonRegistryData--MegaRectSize__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MousewheelAnimationDurationMs__ @ 0x1800038A0 (_dynamic_initializer_for__CCommonRegistryData--MousewheelAnimationDurationMs__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MousewheelScrollingMode__ @ 0x1800038E0 (_dynamic_initializer_for__CCommonRegistryData--MousewheelScrollingMode__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::MsaaQualityMode__ @ 0x180003920 (_dynamic_initializer_for__CCommonRegistryData--Scene--MsaaQualityMode__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::OverlayMinFPS__ @ 0x180003990 (_dynamic_initializer_for__CCommonRegistryData--OverlayMinFPS__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__ @ 0x1800039D0 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--PeriodicFenceMinDifferenceMicrose.c)
 *     _dynamic_initializer_for__CCommonRegistryData::RecurringWatchdogTelemetryTimeoutMilliseconds__ @ 0x180003A10 (_dynamic_initializer_for__CCommonRegistryData--RecurringWatchdogTelemetryTimeoutMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__ @ 0x180003A50 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--RefreshRatePercentage__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::RenderThreadWatchdogTimeoutMilliseconds__ @ 0x180003A90 (_dynamic_initializer_for__CCommonRegistryData--RenderThreadWatchdogTimeoutMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed__ @ 0x180003AE0 (_dynamic_initializer_for__CCommonRegistryData--Scene--SceneVisualCutoffCountOfConsecutiveInciden.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS__ @ 0x180003B20 (_dynamic_initializer_for__CCommonRegistryData--Scene--SceneVisualCutoffThresholdInMS__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetExtensionTimeMicroseconds__ @ 0x180003B90 (_dynamic_initializer_for__CCommonRegistryData--SuperWetExtensionTimeMicroseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds__ @ 0x180003BD0 (_dynamic_initializer_for__CCommonRegistryData--TelemetryFramesReportPeriodMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds__ @ 0x180003C10 (_dynamic_initializer_for__CCommonRegistryData--TelemetryFramesSequenceIdleIntervalMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds__ @ 0x180003C50 (_dynamic_initializer_for__CCommonRegistryData--TelemetryFramesSequenceMaximumPeriodMilliseconds_.c)
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x180025ADC (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ.c)
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x180025D4C (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegGetDwmDwordHelper(__int64 a1, __int64 a2, int a3)
{
  const wchar_t *v5; // rdx
  const wchar_t *v6; // rcx
  int v8; // r8d

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v5 = L"Software\\Microsoft\\Windows\\Dwm\\Scene";
LABEL_7:
      v6 = L"DWMSceneSwitches";
      return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
    }
    if ( a3 == 2 )
    {
      v5 = L"Software\\Microsoft\\Windows\\Dwm\\GpuAccelInkTiming";
    }
    else
    {
      v5 = 0LL;
      v8 = a3 - 1;
      if ( !v8 )
        goto LABEL_7;
      if ( v8 != 1 )
      {
        v6 = 0LL;
        return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
      }
    }
    v6 = L"SuperWetTiming";
    return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
  }
  v5 = L"Software\\Microsoft\\Windows\\Dwm";
  v6 = L"DWMSwitches";
  return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
}
