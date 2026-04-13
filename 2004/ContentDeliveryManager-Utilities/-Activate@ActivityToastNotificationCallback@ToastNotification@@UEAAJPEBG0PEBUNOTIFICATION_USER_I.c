/*
 * XREFs of ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x18004C740
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18000530C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CE0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800392AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::Activate(
        ToastNotification::ActivityToastNotificationCallback *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const struct NOTIFICATION_USER_INPUT_DATA *a4)
{
  wil::details_abi *v4; // rcx
  __int64 v5; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v7; // r8
  __int64 v9; // [rsp+20h] [rbp-21h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-11h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-1h] BYREF
  __int16 v12; // [rsp+58h] [rbp+17h]
  void **v13; // [rsp+60h] [rbp+1Fh] BYREF
  struct wil::details_abi::ThreadLocalData *v14; // [rsp+68h] [rbp+27h]
  int v15; // [rsp+70h] [rbp+2Fh]
  int v16; // [rsp+74h] [rbp+33h]
  _QWORD *v17; // [rsp+78h] [rbp+37h]
  int v18; // [rsp+80h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+57h]
  const unsigned __int16 *v20; // [rsp+B0h] [rbp+6Fh] BYREF

  v20 = a3;
  v11[2] = 0LL;
  v11[0] = retaddr;
  v11[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp";
  v12 = 112;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MobilityExperience>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MobilityExperience>::GetImpl'::`2'::impl,
    1u,
    1u,
    a4,
    (char *)this - 48,
    &v20);
  LOBYTE(v4) = 1;
  v10[0] = &wil::details::functor_wrapper_void<_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_ &>::`vftable';
  v10[1] = &v9;
  v13 = &wil::details::FeatureFunctorHost::`vftable';
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4, v5);
  v15 = 0;
  v16 = 0;
  v14 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v16 = *((_DWORD *)ThreadLocalDataCache + 4);
    v15 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v15;
  }
  v18 = 11824828;
  v17 = v11;
  wil::details::RunFunctor((wil::details *)v10, (struct wil::details::IFunctor *)&v13, v7);
  if ( v14 )
    *((_DWORD *)v14 + 4) = v16;
  return 0LL;
}
