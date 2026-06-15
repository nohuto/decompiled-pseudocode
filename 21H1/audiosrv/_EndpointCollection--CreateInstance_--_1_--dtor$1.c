/*
 * XREFs of _EndpointCollection::CreateInstance_::_1_::dtor$1 @ 0x18007AA6F
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall EndpointCollection::CreateInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 56), (const struct std::nothrow_t *)0x70);
}
