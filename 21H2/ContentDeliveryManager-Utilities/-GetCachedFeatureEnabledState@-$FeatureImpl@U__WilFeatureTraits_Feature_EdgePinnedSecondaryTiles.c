/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009C2A0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009C0B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@det.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000C8D8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000C9A8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  int v5; // ebp
  int v6; // edx
  __int64 (__fastcall *v7)(__int64, _QWORD, int *); // rax
  int v8; // r9d
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // edi
  signed __int32 v12; // eax
  int v13; // ecx
  signed __int32 v14; // r9d
  signed __int32 v15; // edx
  int v16; // r8d
  int i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v6 = 0;
    v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *))g_wil_details_internalGetFeatureEnabledState;
    if ( g_wil_details_internalGetFeatureEnabledState
      || (v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
    {
      v6 = v7(15920779LL, 0LL, &i);
    }
    v8 = 64;
    if ( (v6 & 0xFFFFFF3F) != 0 )
    {
      v10 = 0;
      if ( (v6 & 0xFFFFFF3F) == 2 )
        v10 = 64;
      v8 = v10;
    }
    v9 = 8 * (v6 & 0x80 | (4 * (v6 & 0x40 | (4 * (v6 & 3)))));
    v11 = v8 | v9 | ((v8 | (unsigned int)v9) >> 6) & 1;
    v12 = *a2;
    v13 = v5 != 0 ? i : 0;
    for ( i = v13; ; v13 = i )
    {
      *a2 = v12;
      v14 = v12;
      v15 = v12;
      if ( v13 && (v12 & 2) == 0 )
      {
        v15 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v11) & 0x9C1 | 2;
        *a2 = v15;
      }
      v16 = v12 & 4;
      if ( (v12 & 4) == 0 )
      {
        v15 = ((unsigned __int16)v11 ^ (unsigned __int16)v15) & 0x400 ^ v15 | 4;
        *a2 = v15;
      }
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v15, v12);
      if ( v14 == v12 )
        break;
    }
    if ( !v16 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v11 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
