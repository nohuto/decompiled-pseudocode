/*
 * XREFs of _CApplication::CreateInstance_::_1_::dtor$0 @ 0x18003B840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CApplication::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32), (const struct std::nothrow_t *)0x2A0);
}
