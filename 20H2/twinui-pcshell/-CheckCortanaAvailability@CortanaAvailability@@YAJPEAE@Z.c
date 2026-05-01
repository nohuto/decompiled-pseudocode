/*
 * XREFs of ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1801F9E68
 * Callers:
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1802056C8 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B954 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005BAE0 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098CD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     ??$Cortana_AppInstalled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1800A421C (--$Cortana_AppInstalled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAE.c)
 *     ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x1800A42DC (-IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1801F2ADC (-GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ??$Cortana_AllowedOnSKU@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1801F9A1C (--$Cortana_AllowedOnSKU@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAE.c)
 *     ??$Cortana_CortanaAvailable@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1801F9B24 (--$Cortana_CortanaAvailable@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEA.c)
 *     ??$Cortana_DeveloperOverride@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1801F9C2C (--$Cortana_DeveloperOverride@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QE.c)
 *     ??$Cortana_EnterprisePolicyEnabled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1801F9D34 (--$Cortana_EnterprisePolicyEnabled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemet.c)
 *     ??1CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801F9E3C (--1CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1801FA068 (-IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?IsDeveloperOverrideEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x18020509C (-IsDeveloperOverrideEnabled@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?IsEnterprisePolicyEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x18020510C (-IsEnterprisePolicyEnabled@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z @ 0x180205198 (-SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?StartActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18020526C (-StartActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaAvailability::CheckCortanaAvailability(CortanaAvailability *this, unsigned __int8 *a2)
{
  unsigned int v3; // edi
  __int64 v4; // r8
  unsigned __int8 *v5; // rdx
  int IsDeveloperOverrideEnabled; // eax
  unsigned __int8 *v7; // rdx
  int IsCortanaPackageInstalled; // ebx
  __int64 v9; // rdx
  char v10; // bl
  unsigned __int8 *v11; // rdx
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned __int8 *v15; // rdx
  char v16; // al
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 v19[2]; // [rsp+24h] [rbp-DCh] BYREF
  _QWORD v20[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"CortanaStoreApp_CortanaAvailable");
  v20[0] = &CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::`vftable';
  CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::StartActivity((CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable *)v20);
  v3 = 0;
  *(_BYTE *)this = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
    1u,
    v4);
  LOBYTE(v18) = 0;
  IsDeveloperOverrideEnabled = CortanaAvailability::IsDeveloperOverrideEnabled((CortanaAvailability *)&v18, v5);
  if ( IsDeveloperOverrideEnabled < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)IsDeveloperOverrideEnabled);
  CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::Cortana_DeveloperOverride<unsigned char &>(
    (__int64)v20,
    &v18);
  if ( (_BYTE)v18 )
  {
    *(_BYTE *)this = 1;
LABEL_20:
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v20,
      (WINBOOL)v7);
    goto LABEL_21;
  }
  LOBYTE(v18) = 0;
  IsCortanaPackageInstalled = CortanaAvailability::IsCortanaPackageInstalled((CortanaAvailability *)&v18, v7);
  if ( IsCortanaPackageInstalled >= 0 )
  {
    v10 = v18;
    *(_BYTE *)this = v18;
    CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::Cortana_AppInstalled<unsigned char &>(
      (__int64)v20,
      &v18);
    if ( v10 )
    {
      *(_DWORD *)v19 = 0;
      if ( (int)CortanaExperienceHelpers::GetCortanaRegKey(L"CortanaInstalledAtSomePoint", (BYTE *)v19, v12) < 0
        || *(_DWORD *)v19 != 1 )
      {
        CortanaExperienceHelpers::SetCortanaRegKey(
          L"CortanaInstalledAtSomePoint",
          (const unsigned __int16 *)1,
          v13,
          v14);
      }
    }
    if ( *(_BYTE *)this )
    {
      LOBYTE(v18) = 0;
      IsCortanaPackageInstalled = CortanaAvailability::IsCortanaAllowedOnSKU((CortanaAvailability *)&v18, v11);
      if ( IsCortanaPackageInstalled < 0 )
      {
        v9 = 176LL;
        goto LABEL_17;
      }
      CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::Cortana_AllowedOnSKU<unsigned char &>(
        (__int64)v20,
        &v18);
      v16 = v18;
      *(_BYTE *)this = v18;
      if ( v16 )
      {
        LOBYTE(v18) = 0;
        IsCortanaPackageInstalled = CortanaAvailability::IsEnterprisePolicyEnabled((CortanaAvailability *)&v18, v15);
        if ( IsCortanaPackageInstalled < 0 )
        {
          v9 = 185LL;
          goto LABEL_17;
        }
        CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::Cortana_EnterprisePolicyEnabled<unsigned char &>(
          (__int64)v20,
          &v18);
        *(_BYTE *)this = v18;
      }
    }
    CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::Cortana_CortanaAvailable<unsigned char &>(
      (__int64)v20,
      this);
    goto LABEL_20;
  }
  v9 = 156LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
    (const char *)(unsigned int)IsCortanaPackageInstalled);
  v3 = IsCortanaPackageInstalled;
LABEL_21:
  CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::~CortanaStoreApp_CortanaAvailable((CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable *)v20);
  return v3;
}
