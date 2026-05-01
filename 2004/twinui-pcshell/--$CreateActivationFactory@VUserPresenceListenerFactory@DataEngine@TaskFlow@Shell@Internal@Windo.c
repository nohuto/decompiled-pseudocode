/*
 * XREFs of ??$CreateActivationFactory@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18023AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800922DC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180230FB4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180230FB4.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180234F50 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerF.c)
 *     ??$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x18023B1F8 (--$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V1.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory>(
        int *a1,
        __int64 a2,
        _DWORD *a3)
{
  int v6; // eax
  volatile int *v7; // rdx
  __int64 v8; // rbx
  int CanCastTo; // edi
  int v10; // eax
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v12[0] = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory,Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory,>(v12);
  v8 = v12[0];
  CanCastTo = v6;
  if ( v6 >= 0 )
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v12[0],
                  a3);
    if ( CanCastTo >= 0 )
    {
      v10 = *a1;
      if ( (*a1 & 4) == 0 )
      {
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 68), v7);
        v10 = *a1;
      }
      *(_DWORD *)(v8 + 88) = v10;
      *(_QWORD *)(v8 + 80) = a2;
      v8 = 0LL;
      CanCastTo = 0;
    }
  }
  if ( v8 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
      v8,
      v7);
  return (unsigned int)CanCastTo;
}
