/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00251E4
 * Callers:
 *     Feature_MockDriverValidation__private_ReportDeviceUsage @ 0x1C00249E4 (Feature_MockDriverValidation__private_ReportDeviceUsage.c)
 *     Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage @ 0x1C0024A48 (Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage.c)
 *     Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage @ 0x1C0024AAC (Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage.c)
 *     Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage @ 0x1C0025BCC (Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage.c)
 *     wil_details_IsEnabledFallback @ 0x1C002618C (wil_details_IsEnabledFallback.c)
 *     Feature_EnableGpuPVFor2_4Drivers__private_ReportDeviceUsage @ 0x1C002660C (Feature_EnableGpuPVFor2_4Drivers__private_ReportDeviceUsage.c)
 *     Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage @ 0x1C0026670 (Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Fake_Monitor_Projection__private_ReportDeviceUsage @ 0x1C0026800 (Feature_VAIL_Fake_Monitor_Projection__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Opm_Projection__private_ReportDeviceUsage @ 0x1C0026864 (Feature_VAIL_Opm_Projection__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage @ 0x1C00268C8 (Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage @ 0x1C00277E0 (Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage.c)
 *     Feature_DxgkrnlPrereleaseDiagnostic__private_ReportDeviceUsage @ 0x1C0027844 (Feature_DxgkrnlPrereleaseDiagnostic__private_ReportDeviceUsage.c)
 *     Feature_CopyDriverStore__private_ReportDeviceUsage @ 0x1C00278D0 (Feature_CopyDriverStore__private_ReportDeviceUsage.c)
 *     Feature_CopyDriverToSystem32__private_ReportDeviceUsage @ 0x1C0027934 (Feature_CopyDriverToSystem32__private_ReportDeviceUsage.c)
 *     Feature_NonDXKryptonGpuSupport__private_ReportDeviceUsage @ 0x1C0027998 (Feature_NonDXKryptonGpuSupport__private_ReportDeviceUsage.c)
 *     Feature_HoldAdapterLockEscape__private_ReportDeviceUsage @ 0x1C00279FC (Feature_HoldAdapterLockEscape__private_ReportDeviceUsage.c)
 *     Feature_EnableHostResourceSharing__private_ReportDeviceUsage @ 0x1C0027C84 (Feature_EnableHostResourceSharing__private_ReportDeviceUsage.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C0027E80 (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     Feature_Dwm_Ownership_Leak_Bugchek__private_ReportDeviceUsage @ 0x1C0027EE4 (Feature_Dwm_Ownership_Leak_Bugchek__private_ReportDeviceUsage.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C0028010 (Feature_Vail__private_ReportDeviceUsage.c)
 *     Feature_Vail_iFLIP__private_ReportDeviceUsage @ 0x1C0028074 (Feature_Vail_iFLIP__private_ReportDeviceUsage.c)
 *     Feature_DriverBlackboxData__private_ReportDeviceUsage @ 0x1C0028128 (Feature_DriverBlackboxData__private_ReportDeviceUsage.c)
 *     Feature_DriverWhiteboxData__private_ReportDeviceUsage @ 0x1C002818C (Feature_DriverWhiteboxData__private_ReportDeviceUsage.c)
 *     Feature_TrackedWorkloadDirectDeadline__private_ReportDeviceUsage @ 0x1C00281F0 (Feature_TrackedWorkloadDirectDeadline__private_ReportDeviceUsage.c)
 *     Feature_TrackedWorkload__private_ReportDeviceUsage @ 0x1C0028254 (Feature_TrackedWorkload__private_ReportDeviceUsage.c)
 *     Feature_DP_AUX_V2__private_ReportDeviceUsage @ 0x1C00282B8 (Feature_DP_AUX_V2__private_ReportDeviceUsage.c)
 *     Feature_GpuHardwareScheduling__private_ReportDeviceUsage @ 0x1C002831C (Feature_GpuHardwareScheduling__private_ReportDeviceUsage.c)
 *     Feature_KsrDisplay__private_ReportDeviceUsage @ 0x1C0028380 (Feature_KsrDisplay__private_ReportDeviceUsage.c)
 *     Feature_ReportWddm2_6ToDriver_Amd__private_ReportDeviceUsage @ 0x1C00283E4 (Feature_ReportWddm2_6ToDriver_Amd__private_ReportDeviceUsage.c)
 *     Feature_ReportWddm2_6ToDriver_Intel__private_ReportDeviceUsage @ 0x1C0028448 (Feature_ReportWddm2_6ToDriver_Intel__private_ReportDeviceUsage.c)
 *     Feature_ReportWddm2_6ToDriver_Nvidia__private_ReportDeviceUsage @ 0x1C00284AC (Feature_ReportWddm2_6ToDriver_Nvidia__private_ReportDeviceUsage.c)
 *     Feature_HPDWakeFiltering__private_ReportDeviceUsage @ 0x1C0028510 (Feature_HPDWakeFiltering__private_ReportDeviceUsage.c)
 *     Feature_LegacyHPDFiltering__private_ReportDeviceUsage @ 0x1C0028574 (Feature_LegacyHPDFiltering__private_ReportDeviceUsage.c)
 *     Feature_Brightness3dxgkrnl__private_ReportDeviceUsage @ 0x1C00285D8 (Feature_Brightness3dxgkrnl__private_ReportDeviceUsage.c)
 *     Feature_ProductizeSpecializedDisplays__private_ReportDeviceUsage @ 0x1C00287A0 (Feature_ProductizeSpecializedDisplays__private_ReportDeviceUsage.c)
 *     Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage @ 0x1C0028804 (Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage.c)
 *     Feature_DolbyVision_Default_On__private_ReportDeviceUsage @ 0x1C0028868 (Feature_DolbyVision_Default_On__private_ReportDeviceUsage.c)
 *     Feature_MipiDsi2__private_ReportDeviceUsage @ 0x1C00288CC (Feature_MipiDsi2__private_ReportDeviceUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    do
    {
      if ( (v6 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v6) & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange(v3, v6 | v5, v6);
    }
    while ( v7 != v6 );
  }
}
