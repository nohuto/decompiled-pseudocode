/*
 * XREFs of ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x18004E024
 * Callers:
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z @ 0x18004DFA4 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z.c)
 * Callees:
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18004E0F8 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18004E190 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z @ 0x18007FCCC (-wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z.c)
 */

__int64 __fastcall wil_StagingConfig_QueryFeatureState(
        unsigned int a1,
        struct wil_FeatureState *a2,
        __int64 a3,
        int a4,
        _DWORD *a5)
{
  unsigned int v7; // esi
  unsigned int FeatureState; // ebp
  __int64 v9; // rdi
  int v10; // r8d
  unsigned int v11; // r9d
  __int64 v13; // rsi
  int v14; // r9d
  __int64 v15; // r10
  unsigned int v16; // r11d
  unsigned int v17; // edx
  HANDLE ProcessHeap; // rax
  _BYTE v19[24]; // [rsp+30h] [rbp-168h] BYREF
  __int64 v20; // [rsp+48h] [rbp-150h]
  __int64 v21; // [rsp+50h] [rbp-148h]
  LPVOID lpMem; // [rsp+68h] [rbp-130h]
  int v23; // [rsp+80h] [rbp-118h]
  _BYTE v24[208]; // [rsp+90h] [rbp-108h] BYREF

  v7 = a3;
  FeatureState = 0;
  if ( !(unsigned int)wil_details_StagingConfig_Load(v19, a1, a3, v24) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState((struct wil_details_StagingConfig *)v19, a2, v7, a4);
    if ( a5 )
    {
      v9 = v20;
      v10 = 1;
      v11 = 0;
      if ( *(_WORD *)(v20 + 4) )
      {
        v13 = v21;
        do
        {
          if ( (unsigned int)wil_details_StagingConfigFeature_HasUniqueState((const struct wil_details_StagingConfigFeature *)(v13 + 12LL * v11)) )
          {
            if ( ((unsigned __int8)v10 & *(_BYTE *)(v15 + 4)) != 0 )
              goto LABEL_6;
            v17 = 0;
            while ( v17 == v14 || *(_DWORD *)v15 != *(_DWORD *)(v13 + 12LL * v17) )
            {
              v17 += v10;
              if ( v17 >= v16 )
                goto LABEL_6;
            }
          }
          v11 = v10 + v14;
        }
        while ( v11 < v16 );
      }
      if ( !*(_WORD *)(v9 + 6) )
        v10 = 0;
LABEL_6:
      *a5 |= v10;
    }
    if ( v23 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  return FeatureState;
}
