/*
 * XREFs of ??0AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x18022F7E4
 * Callers:
 *     ??$Make@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@XZ @ 0x18022DFB0 (--$Make@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Micr.c)
 *     ??$MakeAndInitialize@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x18022E160 (--$MakeAndInitialize@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456.c)
 * Callees:
 *     ??0?$AgileActivationFactory@UIAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18022EBC8 (--0-$AgileActivationFactory@UIAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::AppViewListenerFactory(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *this)
{
  Microsoft::WRL::AgileActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>((__int64)this);
  *(_QWORD *)this = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>>'};
  *((_QWORD *)this + 5) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>>'};
  return this;
}
