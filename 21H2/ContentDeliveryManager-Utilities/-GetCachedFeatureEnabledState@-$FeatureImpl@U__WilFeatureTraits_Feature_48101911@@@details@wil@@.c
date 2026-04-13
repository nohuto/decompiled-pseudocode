/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180018454
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAA_NXZ @ 0x180017B34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAA_NXZ.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000C8D8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000C9A8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180017A50 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  int v5; // ebp
  __int64 (__fastcall *v6)(__int64, __int64, int *); // rax
  int v7; // edx
  unsigned int v8; // r8d
  __int16 v9; // bx
  __int16 v10; // bx
  __int16 v11; // ax
  __int16 v12; // ax
  unsigned __int16 v13; // bx
  signed __int32 v14; // eax
  bool v15; // zf
  signed __int32 v16; // r9d
  signed __int32 v17; // edx
  int v18; // r8d
  int v20; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v2 & 6) == 6 )
    return a2;
  v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
  v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v7 = v6(48101911LL, 3LL, &v20);
  }
  else
  {
    v7 = 0;
  }
  v8 = v7 & 0xFFFFFF3F;
  v9 = 8 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
  if ( (v7 & 0xFFFFFF3F) != 0 )
  {
    v11 = 0;
    if ( v8 == 2 )
      v11 = 64;
    v10 = v11 | v9;
    if ( v8 != 2 )
      goto LABEL_13;
  }
  else
  {
    v10 = v9 | 0x40;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::GetImpl'::`2'::impl) )
  {
    v12 = 1;
    goto LABEL_14;
  }
LABEL_13:
  v12 = 0;
LABEL_14:
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
      v17 = ((unsigned __int16)v17 ^ v13) & 0x400 ^ v17 | 4;
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
