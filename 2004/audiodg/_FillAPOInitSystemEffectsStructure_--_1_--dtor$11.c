/*
 * XREFs of _FillAPOInitSystemEffectsStructure_::_1_::dtor$11 @ 0x140021FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FillAPOInitSystemEffectsStructure_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 176);
}
