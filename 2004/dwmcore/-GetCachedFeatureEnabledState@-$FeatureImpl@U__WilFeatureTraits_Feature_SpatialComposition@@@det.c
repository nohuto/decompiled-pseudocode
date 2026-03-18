/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18016A228
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016A564 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@details@wil@@QEAAX_N.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18002EDB4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18003038C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18016A370 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@de.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialComposition>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // esi
  signed __int32 v6; // eax
  int v7; // r8d
  signed __int32 v8; // r9d
  signed __int32 v9; // edx
  int v10; // r8d
  int v12; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-10h]
  int i; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 3) != 3 )
  {
    v5 = dword_180345614;
    if ( !dword_180345614 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialComposition>::GetCurrentFeatureEnabledState(
      a1,
      &v15,
      &i);
    v6 = *a2;
    v7 = v5 != 0 ? i : 0;
    for ( i = v7; ; v7 = i )
    {
      *a2 = v6;
      v8 = v6;
      v9 = v6;
      if ( v7 && (v6 & 1) == 0 )
      {
        v9 = v6 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v6) & 0x278 | 1;
        *a2 = v9;
      }
      v10 = v6 & 2;
      if ( (v6 & 2) == 0 )
      {
        v9 = ((unsigned __int16)v15 ^ (unsigned __int16)v9) & 0x100 ^ v9 | 2;
        *a2 = v9;
      }
      v6 = _InterlockedCompareExchange(a1, v9, v6);
      if ( v8 == v6 )
        break;
    }
    if ( !v10 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v5
        || v5 != dword_180345614
        || (v12 = 0, v13 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_180345648, &v12, 0x10uLL)) )
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
