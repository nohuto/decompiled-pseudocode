/*
 * XREFs of _MPCHolographicInputManager::DeferInvokeHelper_::_1_::dtor$1 @ 0x180075575
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHolographicInputManager::DeferInvokeHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<std::function<void (void)>>::~unique_ptr<std::function<void (void)>>((void **)(a2 + 64));
}
