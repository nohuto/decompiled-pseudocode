/*
 * XREFs of _DockableDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x18009C80B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DockableDeviceCollection::OnDeviceAttach_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>::~com_ptr_t<PenDeviceManager,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
