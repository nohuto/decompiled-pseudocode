/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x18001E6C0
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001DA80 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180035B38 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x1800490C8 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18008646C (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18002E638 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18004D710 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateI.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800507D4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180054BE0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180086134 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateIn.c)
 */

_BOOL8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // ebx
  unsigned int v3; // esi
  signed __int32 i; // edx
  signed __int32 v5; // eax
  volatile unsigned __int32 v6; // r8d
  bool v7; // bl
  int v9; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v10; // [rsp+48h] [rbp-30h]
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF
  int v12; // [rsp+88h] [rbp+10h] BYREF
  __int16 v13; // [rsp+8Ch] [rbp+14h]
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF
  char v15; // [rsp+98h] [rbp+20h] BYREF

  v1 = *a1;
  if ( (*(_BYTE *)a1 & 3) != 3 )
  {
    v3 = dword_1800E305C;
    if ( !dword_1800E305C )
      v3 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetCurrentFeatureEnabledState(
      a1,
      &v14,
      &v11);
    if ( !v3 )
      LODWORD(v11) = 0;
    for ( i = v1; ; i = v5 )
    {
      v1 = i;
      if ( (_DWORD)v11 && (i & 1) == 0 )
        v1 = i ^ ((unsigned __int16)v14 ^ (unsigned __int16)i) & 0x278 | 1;
      if ( (i & 2) == 0 )
        v1 = ((unsigned __int16)v14 ^ (unsigned __int16)v1) & 0x100 ^ v1 | 2;
      v5 = _InterlockedCompareExchange(a1, v1, i);
      if ( i == v5 )
        break;
    }
    if ( (i & 2) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v3
        || v3 != dword_1800E305C
        || (v9 = 0,
            v10 = a1,
            !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&xmmword_1800E3090, &v9, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFDF8);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (v1 & 1) == 0 )
      LOBYTE(v1) = (v14 ^ v1) & 0x78 ^ v1;
  }
  v6 = *a1;
  v7 = (v1 & 8) != 0;
  if ( (*a1 & 2) == 0 )
  {
    v11 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetCachedFeatureEnabledState(
                       a1,
                       &v15);
    v6 = v11;
  }
  v12 = 0;
  BYTE4(v11) = 2;
  v13 = WORD2(v11);
  LODWORD(v11) = 0;
  wil::details::ReportUsageToService(a1 + 2, 220937958LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v12, v7, 3);
  return v7;
}
