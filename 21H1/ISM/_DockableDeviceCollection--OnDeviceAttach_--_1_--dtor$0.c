/*
 * XREFs of _DockableDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x18009C7FF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DockableDeviceCollection::OnDeviceAttach_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<DockableDeviceInfo>::~unique_ptr<DockableDeviceInfo>((void **)(a2 + 64));
}
