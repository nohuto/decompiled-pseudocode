/*
 * XREFs of ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180036BF8
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036640 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005F038 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     _lambda_5056499381e6be98f6bae348336db3ef_::operator() @ 0x180072E54 (_lambda_5056499381e6be98f6bae348336db3ef_--operator().c)
 *     _lambda_d4b2d08f096e200be5494970f4d857ee_::operator() @ 0x180073050 (_lambda_d4b2d08f096e200be5494970f4d857ee_--operator().c)
 * Callees:
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x180009DB0 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180036994 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006C65C (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ @ 0x180134B7C (-EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x180135DB8 (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 */

char __fastcall AtmosCheck::IsLicenseEvaluationRequired(AtmosCheck *this)
{
  char v2; // r8
  bool IsLogLicenseResult; // bl
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]

  if ( *((_DWORD *)this + 48) != 3 && !AtmosCheck::IsRunningOnXbox(this) )
  {
    *((_DWORD *)this + 47) = 1;
    v2 = 0;
LABEL_4:
    AtmosCheck::TraceResult(this, 0, v2);
    return 0;
  }
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this)
    && (unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform() )
  {
    v6 = 0;
    v7 = 0;
    *((_DWORD *)this + 47) = 2;
    v5 = 0LL;
    IsLogLicenseResult = AtmosCheck::IsLogLicenseResult(this, (struct SpatialLicenseResult *)&v5);
    AtmosCheck::EnableAllSpatialCapabilities(this);
    v2 = IsLogLicenseResult;
    goto LABEL_4;
  }
  return 1;
}
