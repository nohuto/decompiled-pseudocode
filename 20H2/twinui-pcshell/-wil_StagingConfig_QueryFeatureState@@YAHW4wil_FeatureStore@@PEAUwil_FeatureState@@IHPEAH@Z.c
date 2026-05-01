/*
 * XREFs of ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x18013CC7C
 * Callers:
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z @ 0x18013CA6C (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?wil_details_StagingConfig_EnumerateFeatures@@YAXPEAUwil_details_StagingConfig@@P6AHPEAUwil_details_StagingConfigFeature@@PEAX@Z2@Z @ 0x18013D0A4 (-wil_details_StagingConfig_EnumerateFeatures@@YAXPEAUwil_details_StagingConfig@@P6AHPEAUwil_deta.c)
 *     ?wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x18013D304 (-wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18013D358 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18013D66C (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 */

__int64 __fastcall wil_StagingConfig_QueryFeatureState(
        unsigned int a1,
        struct wil_FeatureState *a2,
        __int64 a3,
        int a4,
        _DWORD *a5)
{
  int v7; // ebx
  unsigned int v8; // r14d
  unsigned int FeatureState; // esi
  int (*v10)(struct wil_details_StagingConfigFeature *, void *); // rdx
  _DWORD v12[4]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v13[24]; // [rsp+40h] [rbp-168h] BYREF
  __int64 v14; // [rsp+58h] [rbp-150h]
  _BYTE v15[208]; // [rsp+A0h] [rbp-108h] BYREF

  v7 = 0;
  v8 = a3;
  FeatureState = 0;
  if ( !(unsigned int)wil_details_StagingConfig_Load(v13, a1, a3, v15) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState((struct wil_details_StagingConfig *)v13, a2, v8, a4);
    if ( a5 )
    {
      v12[0] = 0;
      wil_details_StagingConfig_EnumerateFeatures((struct wil_details_StagingConfig *)v13, v10, v12);
      if ( v12[0] || *(_WORD *)(v14 + 6) )
        v7 = 1;
      *a5 |= v7;
    }
    wil_details_StagingConfig_Free((struct wil_details_StagingConfig *)v13);
  }
  return FeatureState;
}
