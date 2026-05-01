/*
 * XREFs of ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1801E2CD0
 * Callers:
 *     _lambda_7e6963f912875587faeb037360c0fdaa_::operator() @ 0x180095F3C (_lambda_7e6963f912875587faeb037360c0fdaa_--operator().c)
 *     _lambda_8c9079aa2485ab0718fabcb8e444aaab_::operator() @ 0x180095FF4 (_lambda_8c9079aa2485ab0718fabcb8e444aaab_--operator().c)
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801D18E8 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340@@@details@wil@@QEAA_NXZ @ 0x18009B670 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998.c)
 *     ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x1801D07C4 (-IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z.c)
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1801D6EDC (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z @ 0x1801E240C (-SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z.c)
 */

__int64 __fastcall CortanaAvailability::WriteCortanaAvailabilityToRegistry(
        CortanaAvailability *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  unsigned __int8 *v3; // rdx
  int IsCortanaAvailable; // ebx
  int v5; // edi
  __int64 v6; // rdx
  unsigned __int8 v8; // si
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  IsCortanaAvailable = CortanaExperienceHelpers::IsCortanaAvailable((CortanaExperienceHelpers *)&v10, a2, a3);
  if ( IsCortanaAvailable != -2147024894 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340>::GetImpl'::`2'::impl) )
    {
      if ( IsCortanaAvailable < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xFF,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
          (const char *)(unsigned int)IsCortanaAvailable);
    }
    else if ( IsCortanaAvailable < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x103,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)IsCortanaAvailable);
      return (unsigned int)IsCortanaAvailable;
    }
  }
  v5 = CortanaAvailability::CheckCortanaAvailability((CortanaAvailability *)&v11, v3);
  if ( v5 < 0 )
  {
    v6 = 264LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = v11;
  v5 = CortanaExperienceHelpers::SetCortanaRegKey(L"IsAvailable", (const unsigned __int16 *)v11);
  if ( v5 < 0 )
  {
    v6 = 265LL;
    goto LABEL_7;
  }
  if ( v8 != v10 || IsCortanaAvailable == -2147024894 )
    SendNotifyMessageW(HWND_BROADCAST, 0x1Au, 0LL, (LPARAM)L"TraySettings");
  return 0LL;
}
