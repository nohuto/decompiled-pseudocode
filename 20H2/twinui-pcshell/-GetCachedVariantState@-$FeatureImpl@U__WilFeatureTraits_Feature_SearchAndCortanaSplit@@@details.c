/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18007C2CC
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@3@_N@Z @ 0x18007C1C8 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAAX_NW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@3@_K@Z @ 0x18007C210 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wi.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180047F28 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18007C3A8 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@detail.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18013932C (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v2; // rax
  unsigned int v6; // esi
  signed __int64 v7; // rax
  unsigned __int16 v8; // cx
  int v9; // r10d
  unsigned int v10; // r8d
  signed __int64 v11; // rtt
  int v12; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int64 *v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 v15; // [rsp+48h] [rbp+10h] BYREF
  int v16; // [rsp+4Ch] [rbp+14h]

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v14 = 0;
    v6 = dword_1805CBEC4;
    if ( !dword_1805CBEC4 )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCurrentVariantState(a1, &v15, &v14);
    v7 = *(_QWORD *)a2;
    do
    {
      v8 = v15;
      v9 = v7;
      *(_QWORD *)a2 = v7;
      if ( (v7 & 4) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v16;
        v9 = ((v14 != 0 ? 4 : 0) | (v7 ^ (v8 ^ (unsigned __int16)v7) & 0xFC00) & 0xFFFFFFFB) ^ (v8 ^ ((v14 != 0 ? 4 : 0) | (unsigned __int16)(v7 ^ (v8 ^ v7) & 0xFC00))) & 0x200;
        *(_DWORD *)a2 = v9;
      }
      v10 = ((unsigned int)v7 >> 1) & 1;
      if ( !v10 )
        *(_DWORD *)a2 = v9 ^ (v8 ^ (unsigned __int16)v9) & 0x100 | 2;
      v11 = v7;
      v7 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v7);
    }
    while ( v11 != v7 );
    if ( !v10 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v6
        || v6 != dword_1805CBEC4
        || (v12 = 3, v13 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1805CBEF8, &v12, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFD);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
  }
  return a2;
}
