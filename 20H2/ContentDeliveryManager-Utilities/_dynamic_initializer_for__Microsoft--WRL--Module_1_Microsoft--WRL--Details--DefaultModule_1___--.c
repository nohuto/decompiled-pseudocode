/*
 * XREFs of _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180003D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__()
{
  BOOL result; // eax

  result = InitOnceExecuteOnce(
             &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
             _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
             0LL,
             0LL);
  byte_180199418 = 1;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 1;
  return result;
}
