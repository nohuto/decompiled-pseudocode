/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180084F98
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180091078 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4R.c)
 * Callees:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180085340 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@detai.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180085BE4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800871BC (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::GetCachedFeatureEnabledState(
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
    v6 = dword_180349614;
    if ( !dword_180349614 )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::GetCurrentFeatureEnabledState(a1, &v15, &i);
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
        || v6 != dword_180349614
        || (v12 = 0,
            v13 = a1,
            !wil::details_abi::heap_buffer::push_back(
               (wil::details_abi::heap_buffer *)&xmmword_180349648,
               &v12,
               0x10uLL)) )
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
