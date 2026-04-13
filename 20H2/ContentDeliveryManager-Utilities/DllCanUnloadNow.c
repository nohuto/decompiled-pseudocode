/*
 * XREFs of DllCanUnloadNow @ 0x180025450
 * Callers:
 *     <none>
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800242F0 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  HRESULT v0; // ebx
  struct Microsoft::WRL::Details::ModuleBase *v1; // rdx

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  v0 = 1;
  byte_180199418 = 1;
  if ( Microsoft::WRL::Details::TerminateMap(
         (Microsoft::WRL::Details *)&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_,
         v1,
         0LL) )
  {
    return NdrDllCanUnloadNow(&gPFactory);
  }
  return v0;
}
