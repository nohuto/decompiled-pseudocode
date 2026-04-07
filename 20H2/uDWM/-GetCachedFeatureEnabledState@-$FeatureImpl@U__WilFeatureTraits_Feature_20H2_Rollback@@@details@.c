/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180055078
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180055768 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18005596C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@QEAA.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18002E638 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002EBEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002EC08 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180055440 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007D698 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Rollback>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  bool v8; // zf
  signed __int32 v9; // r9d
  signed __int32 v10; // edx
  int v11; // r8d
  int v13; // [rsp+20h] [rbp-28h] BYREF
  wil::details *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v17; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v2 & 3) != 3 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Rollback>::GetCurrentFeatureEnabledState(v6, &v16, &v15);
    v7 = *a2;
    do
    {
      v8 = v15 == 0;
      v9 = v7;
      *a2 = v7;
      v10 = v7;
      if ( !v8 && (v7 & 1) == 0 )
      {
        v10 = v7 ^ ((unsigned __int16)v16 ^ (unsigned __int16)v7) & 0x278 | 1;
        *a2 = v10;
      }
      v11 = v7 & 2;
      if ( (v7 & 2) == 0 )
      {
        v10 = ((unsigned __int16)v16 ^ (unsigned __int16)v10) & 0x100 ^ v10 | 2;
        *a2 = v10;
      }
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v10, v7);
    }
    while ( v9 != v7 );
    if ( !v11 && wil::details::g_enabledStateManager )
    {
      wil::srwlock::lock_exclusive(&SRWLock, &v17);
      if ( !v5
        || v5 != dword_1800E305C
        || (v13 = 3, v14 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1800E3090, &v13, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFD);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
    }
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v16 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
