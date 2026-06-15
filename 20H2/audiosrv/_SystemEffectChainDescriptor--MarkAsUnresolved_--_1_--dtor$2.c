/*
 * XREFs of _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$2 @ 0x18007AE82
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64), (const struct std::nothrow_t *)0x50);
}
