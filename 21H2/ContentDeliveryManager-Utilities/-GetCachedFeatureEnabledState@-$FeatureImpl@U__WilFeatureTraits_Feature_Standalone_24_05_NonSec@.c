/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_05_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A41F0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_47475898@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A2A68 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_47475898@@@details@wil@@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000C8D8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000C9A8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_04_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A40A0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_04_NonSec@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_24_05_NonSec>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  int v5; // ebp
  __int64 (__fastcall *v6)(__int64, __int64, int *); // rax
  int v7; // edx
  unsigned int v8; // r8d
  __int16 v9; // di
  __int16 v10; // di
  __int16 v11; // ax
  __int16 v12; // ax
  unsigned __int16 v13; // di
  signed __int32 v14; // eax
  bool v15; // zf
  signed __int32 v16; // r9d
  signed __int32 v17; // edx
  int v18; // r8d
  int v20; // [rsp+40h] [rbp+8h] BYREF
  signed __int32 v21; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v2 & 6) == 6 )
    return a2;
  v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
  v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v7 = v6(49453553LL, 3LL, &v20);
  }
  else
  {
    v7 = 0;
  }
  v8 = v7 & 0xFFFFFF3F;
  v9 = 8 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
  if ( (v7 & 0xFFFFFF3F) == 0 )
  {
    v10 = v9 | 0x40;
LABEL_11:
    if ( (`wil::Feature<__WilFeatureTraits_Feature_Standalone_24_04_NonSec>::GetImpl'::`2'::impl & 4) == 0 )
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_24_04_NonSec>::GetCachedFeatureEnabledState(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_24_04_NonSec>::GetImpl'::`2'::impl,
        &v21);
    v12 = 1;
    goto LABEL_15;
  }
  v11 = 0;
  if ( v8 == 2 )
    v11 = 64;
  v10 = v11 | v9;
  if ( v8 == 2 )
    goto LABEL_11;
  v12 = 0;
LABEL_15:
  v13 = v12 | v10;
  v14 = *a2;
  do
  {
    v15 = v20 == 0;
    v16 = v14;
    *a2 = v14;
    v17 = v14;
    if ( !v15 && (v14 & 2) == 0 )
    {
      v17 = v14 ^ ((unsigned __int16)v14 ^ v13) & 0x9C1 | 2;
      *a2 = v17;
    }
    v18 = v14 & 4;
    if ( (v14 & 4) == 0 )
    {
      v17 = (v13 ^ (unsigned __int16)v17) & 0x400 ^ v17 | 4;
      *a2 = v17;
    }
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v17, v14);
  }
  while ( v16 != v14 );
  if ( !v18 )
    wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 3, v5);
  if ( (*(_BYTE *)a2 & 2) == 0 )
    *a2 ^= (v13 ^ (unsigned __int16)*a2) & 0x9C1;
  return a2;
}
