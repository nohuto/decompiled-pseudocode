/*
 * XREFs of _dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::SvcHostModule_::isInitialized__ @ 0x180001880
 * Callers:
 *     <none>
 * Callees:
 *     ?StaticInitialize@?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@CA_NXZ @ 0x180054854 (-StaticInitialize@-$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@CA_NXZ.c)
 */

__int64 dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::SvcHostModule_::isInitialized__()
{
  __int64 result; // rax

  result = Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::StaticInitialize();
  Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::isInitialized = result;
  return result;
}
