/*
 * XREFs of ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1803BC494
 * Callers:
 *     ??$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803B8F74 (--$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??1?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ @ 0x1800A7300 (--1-$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ.c)
 *     ??4?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A7354 (--4-$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A73C0 (--4-$unique_ptr@VPrimaryAppProxyBase@@U-$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAE.c)
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800A7620 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800A7B70 (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18012AF84 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KioskPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BC3B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KioskPositioner@@@details@wil@@QEAAX_NW4R.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::RuntimeClassInitialize(KioskPositioner *this)
{
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edi
  const char *v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *AssignedAccessConfiguration; // rax
  __int64 v10; // [rsp+28h] [rbp-50h] BYREF
  char v11; // [rsp+30h] [rbp-48h]
  char v12; // [rsp+38h] [rbp-40h]
  _OWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    v13[0] = GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986;
    v13[1] = 0LL;
    v2 = CImmersiveShellComponent::RegisterServiceInformation(
           (KioskPositioner *)((char *)this + 40),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)v13,
           1LL);
    v4 = v2;
    if ( v2 >= 0 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_KioskPositioner>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_KioskPositioner>::GetImpl'::`2'::impl,
        1u,
        v3);
      KioskPositioner::LoadShellLauncherConfiguration(v7, (__int64)&v10);
      if ( v12
        || (AssignedAccessConfiguration = (__int64 *)KioskPositioner::LoadAssignedAccessConfiguration(v8, (__int64)v13),
            std::optional<KioskPositioner::KioskPositionerConfiguration>::operator=(
              (__int64)&v10,
              AssignedAccessConfiguration),
            std::optional<KioskPositioner::KioskPositionerConfiguration>::~optional<KioskPositioner::KioskPositionerConfiguration>((__int64)v13),
            v12) )
      {
        *((_BYTE *)this + 632) = 1;
        std::unique_ptr<PrimaryAppProxyBase>::operator=((__int64 *)this + 80, &v10);
        *((_BYTE *)this + 633) = v11;
      }
      std::optional<KioskPositioner::KioskPositionerConfiguration>::~optional<KioskPositioner::KioskPositionerConfiguration>((__int64)&v10);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v2);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x20C,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v5);
  }
  return result;
}
