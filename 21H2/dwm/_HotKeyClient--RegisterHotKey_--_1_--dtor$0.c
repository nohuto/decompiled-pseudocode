/*
 * XREFs of _HotKeyClient::RegisterHotKey_::_1_::dtor$0 @ 0x14000B382
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HotKeyClient::RegisterHotKey_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IRemoteHotKeyProcessor>::~ComPtr<IRemoteHotKeyProcessor>(a2 + 64);
}
