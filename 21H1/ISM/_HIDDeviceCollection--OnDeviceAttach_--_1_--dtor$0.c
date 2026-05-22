/*
 * XREFs of _HIDDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x18005174B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceAttach_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(a2 + 72);
}
