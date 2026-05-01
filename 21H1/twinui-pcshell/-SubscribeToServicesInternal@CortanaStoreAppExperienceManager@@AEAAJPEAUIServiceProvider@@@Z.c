/*
 * XREFs of ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801D18E8
 * Callers:
 *     ?SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D18B0 (-SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002BA04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x1801D07C4 (-IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z.c)
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801D1794 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1801E2CD0 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToServicesInternal(
        Concurrency::details::_RefCounter **this,
        struct IServiceProvider *a2)
{
  int v2; // eax
  CortanaAvailability *v3; // rcx
  int v4; // eax
  unsigned __int8 *v5; // rdx
  unsigned int *v6; // r8
  int IsCortanaAvailable; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v2 = CortanaStoreAppExperienceManager::SubscribeToAppEvents(this);
    v3 = retaddr;
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        234LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    v4 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        237LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    LOBYTE(v10) = 0;
    IsCortanaAvailable = CortanaExperienceHelpers::IsCortanaAvailable((CortanaExperienceHelpers *)&v10, v5, v6);
    if ( IsCortanaAvailable < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        240LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)IsCortanaAvailable);
    if ( (_BYTE)v10 )
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        1u);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x126,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v8);
  }
  return result;
}
