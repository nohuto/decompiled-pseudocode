/*
 * XREFs of ?StaticInitialize@?$Module@$00VServiceModule@Internal@Windows@@@WRL@Microsoft@@CA_NXZ @ 0x180054924
 * Callers:
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::ServiceModule_::isInitialized__ @ 0x180001860 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Windows--Internal--ServiceModule_--isInitiali.c)
 * Callees:
 *     <none>
 */

char Microsoft::WRL::Module<1,Windows::Internal::ServiceModule>::StaticInitialize()
{
  char result; // al

  InitOnceExecuteOnce(
    &Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::ServiceModule>::initOnceOutOfProc_,
    (PINIT_ONCE_FN)_lambda_0436b89998ddae64b987abcfc9f7e79b_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  result = 1;
  byte_18019F550 = 1;
  return result;
}
