/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004C6A0
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003F794 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@details@wil@@Q.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18002E638 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18004D66C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDeskto.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800507D4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicSecureDesktop>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  unsigned int v6; // esi
  signed __int32 v7; // eax
  int v8; // r8d
  signed __int32 v9; // r9d
  signed __int32 v10; // edx
  int v11; // r8d
  int v12; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-10h]
  int i; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 3) != 3 )
  {
    v6 = dword_1800E305C;
    if ( !dword_1800E305C )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicSecureDesktop>::GetCurrentFeatureEnabledState(
      a1,
      &v15,
      &i);
    v7 = *a2;
    v8 = v6 != 0 ? i : 0;
    for ( i = v8; ; v8 = i )
    {
      *a2 = v7;
      v9 = v7;
      v10 = v7;
      if ( v8 && (v7 & 1) == 0 )
      {
        v10 = v7 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v7) & 0x278 | 1;
        *a2 = v10;
      }
      v11 = v7 & 2;
      if ( (v7 & 2) == 0 )
      {
        v10 = ((unsigned __int16)v15 ^ (unsigned __int16)v10) & 0x100 ^ v10 | 2;
        *a2 = v10;
      }
      v7 = _InterlockedCompareExchange(a1, v10, v7);
      if ( v9 == v7 )
        break;
    }
    if ( !v11 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v6
        || v6 != dword_1800E305C
        || (v12 = 0, v13 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1800E3090, &v12, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFDF8);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v15 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
