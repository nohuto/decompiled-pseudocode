/*
 * XREFs of ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801F4968
 * Callers:
 *     ?SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F4930 (-SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E080 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_940d24896b8a2ff113083f0474491c37___ @ 0x1800980F4 (Windows--Internal--ComTaskPool--QueueTask__lambda_940d24896b8a2ff113083f0474491c37___.c)
 *     ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x1801F37E0 (-IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z.c)
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F4814 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1802056C8 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToServicesInternal(
        Concurrency::details::_RefCounter **this,
        struct IServiceProvider *a2)
{
  int v3; // eax
  int v4; // eax
  CortanaAvailability *v5; // rcx
  int v6; // eax
  unsigned __int8 *v7; // rdx
  unsigned int *v8; // r8
  wil::details::in1diag3 *v9; // rcx
  int IsCortanaAvailable; // eax
  __int64 v11; // r8
  wil::details::in1diag3 *v12; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-18h] BYREF
  Concurrency::details::_RefCounter **v15; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = CortanaStoreAppExperienceManager::SubscribeToAppEvents(this);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      239LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
LABEL_10:
    wil::details::in1diag3::Throw_Hr(
      v9,
      247LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v15 = this;
  v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_940d24896b8a2ff113083f0474491c37___((__int64)retaddr, &v15);
  v5 = retaddr;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v6 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(v5);
  v9 = retaddr;
  if ( v6 < 0 )
    goto LABEL_10;
  v14[0] = 0;
  IsCortanaAvailable = CortanaExperienceHelpers::IsCortanaAvailable((CortanaExperienceHelpers *)v14, v7, v8);
  v12 = retaddr;
  if ( IsCortanaAvailable < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v12,
      250LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)IsCortanaAvailable);
    JUMPOUT(0x1801F4A31LL);
  }
  if ( v14[0] )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
      1u,
      v11);
  return 0LL;
}
