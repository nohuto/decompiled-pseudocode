/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180021AB0
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x180021870 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@det.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18002FEE8 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18004E9C0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateI.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180051A84 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  unsigned int v5; // esi
  signed __int32 v6; // ecx
  bool v7; // zf
  signed __int32 v8; // r9d
  unsigned __int16 v9; // ax
  signed __int32 v10; // edx
  int v11; // r8d
  int v13; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-10h]
  int v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 3) != 3 )
  {
    v5 = dword_1800E505C;
    if ( !dword_1800E505C )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetCurrentFeatureEnabledState(
      a1,
      &v16,
      &v15);
    if ( !v5 )
      v15 = 0;
    v6 = *a2;
    do
    {
      v7 = v15 == 0;
      v8 = v6;
      v9 = v16;
      v10 = v6;
      *a2 = v6;
      if ( !v7 && (v6 & 1) == 0 )
      {
        v10 = v6 ^ (v9 ^ (unsigned __int16)v6) & 0x278 | 1;
        *a2 = v10;
      }
      v11 = v6 & 2;
      if ( (v6 & 2) == 0 )
      {
        v10 = (v9 ^ (unsigned __int16)v10) & 0x100 ^ v10 | 2;
        *a2 = v10;
      }
      v6 = _InterlockedCompareExchange(a1, v10, v6);
    }
    while ( v8 != v6 );
    if ( !v11 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v5
        || v5 != dword_1800E505C
        || (v13 = 0,
            v14 = a1,
            !wil::details_abi::heap_buffer::push_back(
               (wil::details_abi::heap_buffer *)&xmmword_1800E5090,
               &v13,
               0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFDF8);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (*a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v16 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
