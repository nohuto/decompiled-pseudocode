/*
 * XREFs of ??0Win32AppStateManager@@QEAA@XZ @ 0x180438500
 * Callers:
 *     ??$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWin32AppStateManager@@@12@XZ @ 0x1804373A8 (--$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VWin32AppStateManager@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180050190 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ModernAppBlocking@@@details@wil@@QEAA_NXZ @ 0x1800A9110 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ModernAppBlocking@@@details@wil@@.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1800A99E4 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$pair@IW4TerminationTyp.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180435704 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppStateManager@AppLimits@FamilySafe.c)
 */

// Hidden C++ exception states: #wind=7
Win32AppStateManager *__fastcall Win32AppStateManager::Win32AppStateManager(Win32AppStateManager *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  char *v8; // [rsp+40h] [rbp+18h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &Win32AppStateManager::`vftable'{for `Windows::Internal::FamilySafety::AppLimits::IAppStateManager'};
  *((_QWORD *)this + 1) = &Win32AppStateManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)this + 12) = SHTaskPoolGetUniqueContext(v2);
  *((_QWORD *)this + 7) = 0LL;
  v8 = (char *)this + 64;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x50uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 8) = v3;
  std::map<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>::map<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>((_QWORD *)this + 10);
  *((_QWORD *)this + 12) = 0LL;
  v8 = (char *)this + 104;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x70uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 13) = v4;
  *((_QWORD *)this + 15) = 0LL;
  v8 = (char *)this + 128;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 16) = v5;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 5;
  *((_DWORD *)this + 41) = 10;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_ModernAppBlocking>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ModernAppBlocking>::GetImpl'::`2'::impl) )
  {
    *((_DWORD *)this + 40) = 30;
    *((_DWORD *)this + 41) = 3;
  }
  if ( SHRegGetDWORD(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Parental Controls\\AppLimits",
         L"TerminationMaxAttempts",
         &v7) >= 0
    && v7 - 1 <= 9 )
  {
    *((_DWORD *)this + 41) = v7;
  }
  if ( SHRegGetDWORD(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Parental Controls\\AppLimits",
         L"TerminationRetryWaitSeconds",
         &v7) >= 0
    && v7 - 1 <= 0x257 )
  {
    *((_DWORD *)this + 40) = v7;
  }
  return this;
}
