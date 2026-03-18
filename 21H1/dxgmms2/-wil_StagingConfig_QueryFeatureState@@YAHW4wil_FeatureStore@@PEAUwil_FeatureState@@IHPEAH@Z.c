/*
 * XREFs of ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x1C005E0CC
 * Callers:
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C0015F9C (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1C0016130 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x1C001642C (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     memset @ 0x1C0016E40 (memset.c)
 */

__int64 __fastcall wil_StagingConfig_QueryFeatureState(__int64 a1, struct wil_FeatureState *a2, int a3, int a4)
{
  unsigned int FeatureState; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  PVOID v11[12]; // [rsp+30h] [rbp-148h] BYREF
  char v12[208]; // [rsp+90h] [rbp-E8h] BYREF

  FeatureState = 0;
  memset(v11, 0, 0x58uLL);
  if ( !(unsigned int)wil_details_StagingConfig_Load((__int64)v11, v8, v9, v12) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState((struct wil_details_StagingConfig *)v11, a2, a3, a4);
    if ( LODWORD(v11[10]) )
      ExFreePoolWithTag(v11[7], 0x4C4957u);
  }
  return FeatureState;
}
