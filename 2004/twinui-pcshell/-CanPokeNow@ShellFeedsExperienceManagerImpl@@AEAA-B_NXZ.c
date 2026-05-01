/*
 * XREFs of ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x180099474
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x18009B670 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 * Callees:
 *     ??$ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration@AEA_NAEAHAEB_NAEB_JAEBHAEB_N@ShellFeedsTelemetry@@SAXAEA_NAEAHAEB_NAEB_JAEBH2@Z @ 0x180098260 (--$ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration@AEA_NAEAHAEB_NAEB_JAEBHAEB_N@ShellFee.c)
 *     ??$ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration_Old@AEA_NAEA_NAEAHAEB_NAEB_JAEBHAEB_N@ShellFeedsTelemetry@@SAXAEA_N0AEAHAEB_NAEB_JAEBH2@Z @ 0x180098354 (--$ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration_Old@AEA_NAEA_NAEAHAEB_NAEB_JAEBHAEB_N.c)
 *     ??$ShellFeedsExperienceManagerImpl_CanPrelaunchOnMouseMove@AEA_NAEA_NAEAHAEB_JAEBH@ShellFeedsTelemetry@@SAXAEA_N0AEAHAEB_JAEBH@Z @ 0x18009845C (--$ShellFeedsExperienceManagerImpl_CanPrelaunchOnMouseMove@AEA_NAEA_NAEAHAEB_JAEBH@ShellFeedsTel.c)
 *     ?IsPowerSavingMode@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x18009B21C (-IsPowerSavingMode@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x18009D008 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LowTierPerf_36408560@@@details@wil@@QEAA_NXZ @ 0x18009E578 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LowTierPerf_36408560@@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589@@@details@wil@@QEAA_NXZ @ 0x18009E5B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589@.c)
 */

char __fastcall ShellFeedsExperienceManagerImpl::CanPokeNow(ShellFeedsExperienceManagerImpl *this)
{
  __int64 ticks; // rax
  __int64 v3; // r9
  __int64 v4; // r15
  __int64 v5; // r13
  char v6; // di
  bool IsViewVisible; // r14
  ShellFeedsExperienceManagerImpl *v8; // rcx
  bool IsPowerSavingMode; // si
  bool v10; // zf
  int *v11; // r14
  char *v12; // rsi
  char *v13; // r12
  ShellFeedsExperienceManagerImpl *v14; // rcx
  bool v15; // bl
  ShellFeedsExperienceManagerImpl *v16; // rcx
  bool v18; // [rsp+90h] [rbp+48h] BYREF
  bool v19; // [rsp+98h] [rbp+50h] BYREF
  int v20; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+60h] BYREF

  ticks = _Xtime_get_ticks();
  v3 = ticks - *((_QWORD *)this + 22);
  v4 = (ticks - *((_QWORD *)this + 21)) / 10000000;
  v21 = v4;
  v5 = v3 / 36000000000LL;
  v20 = v3 / 36000000000LL;
  v6 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LowTierPerf_36408560>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_Servicing_LowTierPerf_36408560>::GetImpl'::`2'::impl,
                          v3 % 36000000000LL) )
  {
    IsViewVisible = ShellFeedsExperienceManagerImpl::_IsViewVisible(this);
    v19 = IsViewVisible;
    IsPowerSavingMode = ShellFeedsExperienceManagerImpl::IsPowerSavingMode(v8);
    v18 = IsPowerSavingMode;
    ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration<bool &,int &,bool const &,__int64 const &,int const &,bool const &>(
      (_BYTE *)this + 161,
      (int *)this + 39,
      (char *)&v19,
      (int *)&v21,
      &v20,
      (char *)&v18);
    if ( !*((_BYTE *)this + 161)
      || *((int *)this + 39) >= 5
      || IsViewVisible
      || v4 <= 10
      || (unsigned int)((int)v5 / 24) > 7 )
    {
      return v6;
    }
    v10 = !IsPowerSavingMode;
  }
  else
  {
    v11 = (int *)((char *)this + 156);
    v12 = (char *)this + 161;
    v13 = (char *)this + 160;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589>::GetImpl'::`2'::impl) )
    {
      v18 = ShellFeedsExperienceManagerImpl::_IsViewVisible(this);
      v15 = ShellFeedsExperienceManagerImpl::IsPowerSavingMode(v14);
      v19 = v15;
      ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration_Old<bool &,bool &,int &,bool const &,__int64 const &,int const &,bool const &>(
        v13,
        v12,
        v11,
        (char *)&v18,
        (int *)&v21,
        &v20,
        (char *)&v19);
      if ( !*v13 || !*v12 || *v11 >= 5 || v18 || v4 <= 10 || (unsigned int)((int)v5 / 24) > 7 )
        return v6;
      v10 = !v15;
    }
    else
    {
      ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_CanPrelaunchOnMouseMove<bool &,bool &,int &,__int64 const &,int const &>(
        (char *)this + 160,
        (char *)this + 161,
        (int *)this + 39,
        (int *)&v21,
        &v20);
      if ( !*v13
        || !*v12
        || *v11 >= 5
        || ShellFeedsExperienceManagerImpl::_IsViewVisible(this)
        || v4 <= 10
        || (unsigned int)((int)v5 / 24) > 7 )
      {
        return v6;
      }
      v10 = !ShellFeedsExperienceManagerImpl::IsPowerSavingMode(v16);
    }
  }
  if ( v10 )
    return 1;
  return v6;
}
