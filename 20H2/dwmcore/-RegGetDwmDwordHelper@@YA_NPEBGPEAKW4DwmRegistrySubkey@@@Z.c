/*
 * XREFs of ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800DD6A8
 * Callers:
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds__ @ 0x180002D90 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--ExtensionTimeMicroseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinHeight__ @ 0x180002E60 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessingMinHeight__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinWidth__ @ 0x180002EA0 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessingMinWidth__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingResizeGrowth__ @ 0x180002EE0 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessingResizeGrowth__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::InitialWatchdogTelemetryTimeoutMilliseconds__ @ 0x180002F20 (_dynamic_initializer_for__CCommonRegistryData--InitialWatchdogTelemetryTimeoutMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MaxD3DFeatureLevel__ @ 0x180002FB0 (_dynamic_initializer_for__CCommonRegistryData--MaxD3DFeatureLevel__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MegaRectSearchCount__ @ 0x180002FE0 (_dynamic_initializer_for__CCommonRegistryData--MegaRectSearchCount__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MegaRectSize__ @ 0x180003010 (_dynamic_initializer_for__CCommonRegistryData--MegaRectSize__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MousewheelAnimationDurationMs__ @ 0x180003040 (_dynamic_initializer_for__CCommonRegistryData--MousewheelAnimationDurationMs__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::MousewheelScrollingMode__ @ 0x180003070 (_dynamic_initializer_for__CCommonRegistryData--MousewheelScrollingMode__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::MsaaQualityMode__ @ 0x1800030A0 (_dynamic_initializer_for__CCommonRegistryData--Scene--MsaaQualityMode__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::OverlayDisqualifyInterval__ @ 0x180003140 (_dynamic_initializer_for__CCommonRegistryData--OverlayDisqualifyInterval__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::OverlayQualifyInterval__ @ 0x1800031A0 (_dynamic_initializer_for__CCommonRegistryData--OverlayQualifyInterval__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::ParallelModeLeaveAfterThresholdMS__ @ 0x1800031D0 (_dynamic_initializer_for__CCommonRegistryData--ParallelModeLeaveAfterThresholdMS__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__ @ 0x180003200 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--PeriodicFenceMinDifferenceMicrose.c)
 *     _dynamic_initializer_for__CCommonRegistryData::RecurringWatchdogTelemetryTimeoutMilliseconds__ @ 0x180003240 (_dynamic_initializer_for__CCommonRegistryData--RecurringWatchdogTelemetryTimeoutMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__ @ 0x180003270 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--RefreshRatePercentage__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::RenderThreadWatchdogTimeoutMilliseconds__ @ 0x1800032B0 (_dynamic_initializer_for__CCommonRegistryData--RenderThreadWatchdogTimeoutMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed__ @ 0x1800032F0 (_dynamic_initializer_for__CCommonRegistryData--Scene--SceneVisualCutoffCountOfConsecutiveInciden.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS__ @ 0x180003330 (_dynamic_initializer_for__CCommonRegistryData--Scene--SceneVisualCutoffThresholdInMS__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetExtensionTimeMicroseconds__ @ 0x1800033A0 (_dynamic_initializer_for__CCommonRegistryData--SuperWetExtensionTimeMicroseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds__ @ 0x1800033D0 (_dynamic_initializer_for__CCommonRegistryData--TelemetryFramesReportPeriodMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds__ @ 0x180003400 (_dynamic_initializer_for__CCommonRegistryData--TelemetryFramesSequenceIdleIntervalMilliseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds__ @ 0x180003430 (_dynamic_initializer_for__CCommonRegistryData--TelemetryFramesSequenceMaximumPeriodMilliseconds_.c)
 *     ?Load@?$CRegistryKeyLoader@I@details@@SAIPEBGIW4DwmRegistrySubkey@@@Z @ 0x1800DD3DC (-Load@-$CRegistryKeyLoader@I@details@@SAIPEBGIW4DwmRegistrySubkey@@@Z.c)
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x1800DD40C (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ.c)
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800DD678 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
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
    }
    else if ( a3 == 2 )
    {
      v5 = L"Software\\Microsoft\\Windows\\Dwm\\GpuAccelInkTiming";
    }
    else
    {
      v5 = 0LL;
    }
  }
  else
  {
    v5 = L"Software\\Microsoft\\Windows\\Dwm";
  }
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        v6 = L"SuperWetTiming";
      else
        v6 = 0LL;
    }
    else
    {
      v6 = L"DWMSceneSwitches";
    }
  }
  else
  {
    v6 = L"DWMSwitches";
  }
  return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
}
