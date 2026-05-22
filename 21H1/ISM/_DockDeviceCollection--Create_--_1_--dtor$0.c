/*
 * XREFs of _DockDeviceCollection::Create_::_1_::dtor$0 @ 0x18004E8BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DockDeviceCollection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(a2 + 64);
}
