/*
 * XREFs of _CAudioResourceManager::DisconnectOffloadStreams_::_1_::dtor$0 @ 0x180070015
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::DisconnectOffloadStreams_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(a2 + 32);
}
