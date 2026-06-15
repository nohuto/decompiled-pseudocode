/*
 * XREFs of _QueueGenericWorkItem_::_1_::dtor$1 @ 0x180042143
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall QueueGenericWorkItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 136), (const struct std::nothrow_t *)&std::nothrow);
}
