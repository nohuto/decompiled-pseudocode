/*
 * XREFs of _dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::ServiceModule_::isInitialized__ @ 0x180001860
 * Callers:
 *     <none>
 * Callees:
 *     ?StaticInitialize@?$Module@$00VServiceModule@Internal@Windows@@@WRL@Microsoft@@CA_NXZ @ 0x180054824 (-StaticInitialize@-$Module@$00VServiceModule@Internal@Windows@@@WRL@Microsoft@@CA_NXZ.c)
 */

__int64 dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::ServiceModule_::isInitialized__()
{
  __int64 result; // rax

  result = Microsoft::WRL::Module<1,Windows::Internal::ServiceModule>::StaticInitialize();
  Microsoft::WRL::Module<1,Windows::Internal::ServiceModule>::isInitialized = result;
  return result;
}
