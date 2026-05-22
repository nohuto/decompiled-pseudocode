/*
 * XREFs of _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$1 @ 0x18019EE24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HotKeyProcessor::HotKeyProcessor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::~list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>(*(_QWORD *)(a2 + 144) + 24LL);
}
