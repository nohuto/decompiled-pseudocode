/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SilentInstalledApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180036EE0
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@SA_NXZ @ 0x180031000 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000CA04 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000CAD4 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FrameworkScalability@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800382C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FrameworkScalability@@@d.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SilentInstalledApps>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  int v5; // esi
  enum FEATURE_ENABLED_STATE (*v6)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v7; // ecx
  unsigned int v8; // r9d
  int v9; // edx
  unsigned int v10; // edx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // edx
  signed __int32 v14; // eax
  int v15; // ecx
  signed __int32 v16; // r10d
  signed __int32 v17; // r8d
  int v18; // r9d
  int v20; // [rsp+40h] [rbp+20h] BYREF
  unsigned int v21; // [rsp+48h] [rbp+28h]
  int v22; // [rsp+4Ch] [rbp+2Ch]
  char v23; // [rsp+50h] [rbp+30h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v2 & 3) != 3 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v6 = g_wil_details_internalGetFeatureEnabledState;
    if ( g_wil_details_internalGetFeatureEnabledState || (v6 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, int *))v6)(8025889LL, 0LL, &v20);
    else
      v7 = 0;
    v22 = 0;
    v8 = v7 & 0xFFFFFF3F;
    v9 = 2 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
    if ( (v7 & 0xFFFFFF3F) != 0 )
    {
      v11 = 0;
      if ( v8 == 2 )
        v11 = 16;
      v10 = v9 & 0xFFFFFFEF | v11;
    }
    else
    {
      v10 = v9 | 0x10;
    }
    v21 = v10;
    if ( (v10 & 0x10) != 0 )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetImpl'::`2'::impl & 2) == 0 )
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_FrameworkScalability>::GetCachedFeatureEnabledState(
          &`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetImpl'::`2'::impl,
          &v23,
          16LL);
      v10 = v21;
      v12 = 8;
    }
    else
    {
      v12 = 0;
    }
    v13 = v12 | v10 & 0xFFFFFFF7;
    v21 = v13;
    v14 = *a2;
    v15 = v5 != 0 ? v20 : 0;
    v20 = v15;
    while ( 1 )
    {
      *a2 = v14;
      v16 = v14;
      v17 = v14;
      if ( v15 && (v14 & 1) == 0 )
      {
        v17 = v14 ^ ((unsigned __int16)v13 ^ (unsigned __int16)v14) & 0x278 | 1;
        *a2 = v17;
      }
      v18 = v14 & 2;
      if ( (v14 & 2) == 0 )
      {
        v17 = ((unsigned __int16)v13 ^ (unsigned __int16)v17) & 0x100 ^ v17 | 2;
        *a2 = v17;
      }
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v17, v14);
      if ( v16 == v14 )
        break;
      v15 = v20;
      LOWORD(v13) = v21;
    }
    if ( !v18 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v5);
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v21 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
