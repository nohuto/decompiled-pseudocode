/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800397E0
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard@@@wil@@SA_NXZ @ 0x180033B60 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard@@@wil@@S.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000C8D8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000C9A8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  int v5; // ebp
  int v6; // edx
  __int64 (__fastcall *v7)(__int64, _QWORD, int *); // rax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // edi
  signed __int32 v11; // eax
  int v12; // ecx
  signed __int32 v13; // r9d
  signed __int32 v14; // edx
  int v15; // r8d
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
      v6 = v7(16892364LL, 0LL, &i);
    }
    v8 = 8 * (v6 & 0x80 | (4 * (v6 & 0x40 | (4 * (v6 & 3)))));
    if ( (v6 & 0xFFFFFF3F) != 0 )
    {
      v9 = 0;
      if ( (v6 & 0xFFFFFF3F) == 2 )
        v9 = 64;
      v8 |= v9;
    }
    v10 = (v8 >> 6) & 1 | v8;
    v11 = *a2;
    v12 = v5 != 0 ? i : 0;
    for ( i = v12; ; v12 = i )
    {
      *a2 = v11;
      v13 = v11;
      v14 = v11;
      if ( v12 && (v11 & 2) == 0 )
      {
        v14 = v11 ^ ((unsigned __int16)v10 ^ (unsigned __int16)v11) & 0x9C1 | 2;
        *a2 = v14;
      }
      v15 = v11 & 4;
      if ( (v11 & 4) == 0 )
      {
        v14 = ((unsigned __int16)v10 ^ (unsigned __int16)v14) & 0x400 ^ v14 | 4;
        *a2 = v14;
      }
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v14, v11);
      if ( v13 == v11 )
        break;
    }
    if ( !v15 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v10 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
