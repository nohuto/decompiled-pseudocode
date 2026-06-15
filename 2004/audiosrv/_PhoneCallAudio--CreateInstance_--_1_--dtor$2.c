/*
 * XREFs of _PhoneCallAudio::CreateInstance_::_1_::dtor$2 @ 0x18007D347
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PhoneCallAudio::CreateInstance_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 96), (const struct std::nothrow_t *)0xA0);
}
