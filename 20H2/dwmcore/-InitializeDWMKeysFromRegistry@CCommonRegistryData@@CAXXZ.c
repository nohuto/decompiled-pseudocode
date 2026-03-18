/*
 * XREFs of ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x1800DD40C
 * Callers:
 *     ?Startup@@YAJXZ @ 0x1800DD2CC (-Startup@@YAJXZ.c)
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800DD6A8 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

void CCommonRegistryData::InitializeDWMKeysFromRegistry(void)
{
  char DwmDwordHelper; // al
  unsigned int v1; // ecx
  LONGLONG v2; // rcx
  char v3; // al
  unsigned int v4; // ecx
  char v5; // al
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+30h] [rbp+10h] BYREF

  v10 = 0;
  DwmDwordHelper = RegGetDwmDwordHelper(L"OverlayTestMode", &v10, 0LL);
  v1 = CCommonRegistryData::m_dwOverlayTestMode;
  if ( DwmDwordHelper )
    v1 = v10;
  CCommonRegistryData::m_dwOverlayTestMode = v1;
  v10 = 0;
  RegGetDwmDwordHelper(L"DisableAdvancedDirectFlip", &v10, 0LL);
  v10 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"DisableIndependentFlip", &v10, 0LL) )
    CCommonRegistryData::m_fDisableIndependentFlip = v10 != 0;
  v10 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"FrameCounterPosition", &v10, 0LL) )
    CCommonRegistryData::m_fDebugFrameCounterIsVertical = v10 != 0;
  v10 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"FlattenVirtualSurfaceEffectInput", &v10, 0LL) )
    CCommonRegistryData::m_fFlattenVirtualSurfaceBrush = v10 != 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"CpuClipAreaThreshold", &v10, 0LL) )
    CCommonRegistryData::m_flCpuClipAreaThreshold = (float)v10;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"InteractionOutputPredictionDisabled", &v10, 0LL) )
    CCommonRegistryData::m_fDisableInteractionOutputPrediction = v10 != 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"BackdropBlurCachingThrottleMs", &v10, 0LL) )
  {
    v7 = v10;
    if ( (unsigned int)v10 > 0x3E8 )
      v7 = 1000;
    v2 = g_qpcFrequency.QuadPart * v7;
  }
  else
  {
    v2 = 25 * g_qpcFrequency.QuadPart;
  }
  v10 = 0;
  CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta = v2 / 1000;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"ForceNonPrimaryDisplayAdapter", &v10, 1LL) )
    CCommonRegistryData::m_fSceneForceNonPrimaryDisplayAdapter = v10 != 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"ImageProcessingResizeThreshold", &v10, 1LL) )
    CCommonRegistryData::m_flSceneImageProcessingResizeThreshold = (float)v10 / 100.0;
  v10 = 0;
  RegGetDwmDwordHelper(L"EnableRenderPathTestMode", &v10, 0LL);
  v10 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"DisallowNonDrawListRendering", &v10, 0LL) )
    CCommonRegistryData::m_fEnableDisallowNonDrawListRendering = v10 != 0;
  v10 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"ForceEffectMode", &v10, 0LL) )
  {
    v8 = CCommonRegistryData::m_forceEffectMode;
    if ( (unsigned int)v10 <= 2 )
      v8 = v10;
    CCommonRegistryData::m_forceEffectMode = v8;
  }
  v10 = 1;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"ParallelModePolicy", &v10, 0LL) )
  {
    v9 = v10;
    if ( (unsigned int)v10 >= 4 || v10 == 2 && !CCommonRegistryData::ParallelModeLeaveAfterThresholdMS )
      v9 = 1;
    CCommonRegistryData::m_parallelModePolicy = v9;
  }
  v10 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"SDRBoostPercentOverride", &v10, 0LL) )
    CCommonRegistryData::m_flSDRBoostOverride = (float)v10 / 100.0;
  v10 = 0;
  RegGetDwmDwordHelper(L"DisableProjectedShadowsRendering", &v10, 0LL);
  v10 = 0;
  v3 = RegGetDwmDwordHelper(L"ResampleModeOverride", &v10, 0LL);
  v4 = CCommonRegistryData::m_dwResampleModeOverride;
  if ( v3 )
    v4 = v10;
  CCommonRegistryData::m_dwResampleModeOverride = v4;
  v10 = 0;
  v5 = RegGetDwmDwordHelper(L"ResampleInLinearSpace", &v10, 0LL);
  v6 = CCommonRegistryData::m_fResampleInLinearSpace;
  if ( v5 )
    v6 = v10;
  CCommonRegistryData::m_fResampleInLinearSpace = v6;
}
