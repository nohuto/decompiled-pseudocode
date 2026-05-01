/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180282B24
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@QEAAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@3@_K@Z @ 0x180283378 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@de.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180056B24 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1801394EC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180282C90 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v2; // rax
  int v5; // esi
  signed __int64 v6; // rax
  int v7; // r10d
  unsigned __int16 v8; // cx
  int v9; // r9d
  unsigned int v10; // r8d
  signed __int64 v11; // rtt
  int v13; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int64 *v14; // [rsp+28h] [rbp-10h]
  int i; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 v16; // [rsp+48h] [rbp+10h] BYREF
  int v17; // [rsp+4Ch] [rbp+14h]

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    i = 0;
    v5 = dword_1805CCE64;
    if ( !dword_1805CCE64 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCurrentVariantState(
      a1,
      &v16,
      &i);
    v6 = *(_QWORD *)a2;
    v7 = v5 != 0 ? i : 0;
    for ( i = v7; ; v7 = i )
    {
      v8 = v16;
      v9 = v6;
      *(_QWORD *)a2 = v6;
      if ( (v6 & 4) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v17;
        v9 = ((v7 != 0 ? 4 : 0) | (v6 ^ (v8 ^ (unsigned __int16)v6) & 0xFC00) & 0xFFFFFFFB) ^ (v8 ^ ((v7 != 0 ? 4 : 0) | (unsigned __int16)(v6 ^ (v8 ^ v6) & 0xFC00))) & 0x200;
        *(_DWORD *)a2 = v9;
      }
      v10 = ((unsigned int)v6 >> 1) & 1;
      if ( !v10 )
        *(_DWORD *)a2 = v9 ^ (v8 ^ (unsigned __int16)v9) & 0x100 | 2;
      v11 = v6;
      v6 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v6);
      if ( v11 == v6 )
        break;
    }
    if ( !v10 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v5
        || v5 != dword_1805CCE64
        || (v13 = 0, v14 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1805CCE98, &v13, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFDF8);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
  }
  return a2;
}
