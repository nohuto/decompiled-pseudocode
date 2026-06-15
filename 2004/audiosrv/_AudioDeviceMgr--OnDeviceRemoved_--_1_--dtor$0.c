/*
 * XREFs of _AudioDeviceMgr::OnDeviceRemoved_::_1_::dtor$0 @ 0x18013E4DB
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall AudioDeviceMgr::OnDeviceRemoved_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64), (const struct std::nothrow_t *)0x10);
}
