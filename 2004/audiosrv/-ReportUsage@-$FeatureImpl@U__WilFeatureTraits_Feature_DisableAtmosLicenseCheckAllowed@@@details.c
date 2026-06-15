/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036DF0
 * Callers:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800127C0 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x18001E030 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036B20 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005DE60 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180012690 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064B10 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheck.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v4; // esi
  _DWORD *v5; // r14
  volatile signed __int32 *v6; // rdx
  unsigned int v7; // edi
  _DWORD *v8; // rax
  __int64 v9; // [rsp+50h] [rbp-39h] BYREF
  int v10; // [rsp+58h] [rbp-31h] BYREF
  __int16 v11; // [rsp+5Ch] [rbp-2Dh]
  _BYTE v12[8]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v13[24]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  int v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+94h] [rbp+Bh]
  __int128 v18; // [rsp+98h] [rbp+Fh]
  __int64 v19; // [rsp+A8h] [rbp+1Fh]

  v2 = *a1;
  v4 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v9 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetCachedFeatureEnabledState(
                      a1,
                      v12);
    v2 = v9;
  }
  v5 = a1 + 2;
  BYTE4(v9) = 0;
  v10 = 0;
  v11 = WORD2(v9);
  v6 = (volatile signed __int32 *)(a1 + 2);
  LODWORD(v9) = 3;
  v7 = 4 * (v4 ^ 1) + 2;
  v8 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v13, v6, v7, 0);
  v18 = *(_OWORD *)v8;
  v19 = *((_QWORD *)v8 + 2);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(10011581LL, v7, 1LL, v5);
    if ( (v2 & 0x100) != 0 )
    {
      v14 = 0LL;
      v16 = 0;
      v15 = 4 * (v4 ^ 1u) + 2;
      v17 = (v2 >> 9) & 1;
      ((void (__fastcall *)(__int64, _QWORD, __int64))g_wil_details_recordFeatureUsage)(10011581LL, v7, 1LL);
    }
  }
  if ( !(_DWORD)v19 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x98C3BDu,
        (const struct FEATURE_LOGGED_TRAITS *)&v10,
        0LL,
        v4,
        (const enum wil_ReportingKind *)&v9,
        0LL,
        0,
        1uLL);
  }
}
