/*
 * XREFs of _PenDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x18009B999
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PenDeviceCollection::OnDeviceAttach_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 56), (const struct std::nothrow_t *)0x90);
}
