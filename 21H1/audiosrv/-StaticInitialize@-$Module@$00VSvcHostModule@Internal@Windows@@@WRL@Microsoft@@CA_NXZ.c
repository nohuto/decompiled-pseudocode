/*
 * XREFs of ?StaticInitialize@?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@CA_NXZ @ 0x180054754
 * Callers:
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::SvcHostModule_::isInitialized__ @ 0x180001880 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Windows--Internal--SvcHostModule_--isInitiali.c)
 * Callees:
 *     ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x180054770 (-Create@-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvc.c)
 */

bool Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::StaticInitialize()
{
  return Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::Create() != 0;
}
