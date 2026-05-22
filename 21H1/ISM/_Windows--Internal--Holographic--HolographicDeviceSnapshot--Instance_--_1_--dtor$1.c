/*
 * XREFs of _Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance_::_1_::dtor$1 @ 0x1800C66B2
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  operator delete(*(void **)(a2 + 72), (const struct std::nothrow_t *)0x80);
}
