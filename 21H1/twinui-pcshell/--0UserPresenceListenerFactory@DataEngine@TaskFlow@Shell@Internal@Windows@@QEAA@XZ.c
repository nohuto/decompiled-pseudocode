/*
 * XREFs of ??0UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x18020C874
 * Callers:
 *     ??$Make@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@XZ @ 0x18020AEF0 (--$Make@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL.c)
 *     ??$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x180218028 (--$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V1.c)
 * Callees:
 *     ??0?$AgileActivationFactory@UIUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18020BB80 (--0-$AgileActivationFactory@UIUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Win.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory::UserPresenceListenerFactory(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory *this)
{
  Microsoft::WRL::AgileActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>((__int64)this);
  *(_QWORD *)this = &Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory>>'};
  *((_QWORD *)this + 5) = &Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory>>'};
  return this;
}
