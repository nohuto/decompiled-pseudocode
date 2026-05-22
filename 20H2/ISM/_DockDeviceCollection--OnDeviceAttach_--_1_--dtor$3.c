/*
 * XREFs of _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$3 @ 0x18009BACA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DockDeviceCollection::OnDeviceAttach_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 168));
}
