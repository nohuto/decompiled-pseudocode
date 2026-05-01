/*
 * XREFs of ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800459F0
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800816FC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_ @ 0x1800EF130 (_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_--_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18001DE04 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x180045E8C (--4-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??$create@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x180045EC4 (--$create@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP_ea_180045EC4.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        _QWORD *a2)
{
  char *v4; // rcx

  *(_QWORD *)a1 = &wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 13) = 0LL;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_QWORD *)a1 + 16) = 1LL;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  if ( *((_DWORD *)a1 + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((struct wil::details::IFailureCallback *)((char *)a1 + 8));
  v4 = (char *)a1 + 304;
  if ( a2[38] )
  {
    *((_QWORD *)a1 + 6) = a2[6];
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      v4,
      a2 + 38);
  }
  else if ( (unsigned __int8)wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>(
                               v4,
                               a2 + 7) )
  {
    *((_QWORD *)a1 + 6) = (*((_QWORD *)a1 + 38) + 8LL) & -(__int64)(*((_QWORD *)a1 + 38) != 0LL);
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      a2 + 38,
      (char *)a1 + 304);
    a2[6] = *((_QWORD *)a1 + 6);
    a2[5] = *((_QWORD *)a1 + 6) + 40LL;
  }
  *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 6) + 40LL;
  return a1;
}
