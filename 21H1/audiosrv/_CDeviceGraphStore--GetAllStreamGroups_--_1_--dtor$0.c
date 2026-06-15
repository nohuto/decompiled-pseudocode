/*
 * XREFs of _CDeviceGraphStore::GetAllStreamGroups_::_1_::dtor$0 @ 0x1800E8CA7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphStore::GetAllStreamGroups_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(a2 + 32);
}
