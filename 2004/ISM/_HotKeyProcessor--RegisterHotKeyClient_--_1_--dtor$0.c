/*
 * XREFs of _HotKeyProcessor::RegisterHotKeyClient_::_1_::dtor$0 @ 0x1801A15A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HotKeyProcessor::RegisterHotKeyClient_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>((__int64 *)(a2 + 64));
}
