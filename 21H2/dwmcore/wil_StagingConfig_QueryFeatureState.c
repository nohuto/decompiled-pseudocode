/*
 * XREFs of wil_StagingConfig_QueryFeatureState @ 0x1800E96B8
 * Callers:
 *     wil_QueryFeatureState @ 0x1800E94A8 (wil_QueryFeatureState.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     wil_details_StagingConfig_EnumerateFeatures @ 0x1800E9C28 (wil_details_StagingConfig_EnumerateFeatures.c)
 *     wil_details_StagingConfig_Free @ 0x1800E9E88 (wil_details_StagingConfig_Free.c)
 *     wil_details_StagingConfig_Load @ 0x1800E9EDC (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x1800EA1F0 (wil_details_StagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_StagingConfig_QueryFeatureState(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v7; // ebx
  unsigned int v8; // r14d
  unsigned int FeatureState; // esi
  __int64 v10; // rdx
  _DWORD v12[4]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v13[24]; // [rsp+40h] [rbp-168h] BYREF
  __int64 v14; // [rsp+58h] [rbp-150h]
  _BYTE v15[208]; // [rsp+A0h] [rbp-108h] BYREF

  v7 = 0;
  v8 = a3;
  FeatureState = 0;
  if ( !(unsigned int)wil_details_StagingConfig_Load(v13, a1, a3, v15) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState(v13, a2, v8, a4);
    if ( a5 )
    {
      v12[0] = 0;
      wil_details_StagingConfig_EnumerateFeatures(v13, v10, v12);
      if ( v12[0] || *(_WORD *)(v14 + 6) )
        v7 = 1;
      *a5 |= v7;
    }
    wil_details_StagingConfig_Free(v13);
  }
  return FeatureState;
}
