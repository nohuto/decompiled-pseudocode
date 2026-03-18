/*
 * XREFs of HvpLogEntryCheckDataChecksum @ 0x140919024
 * Callers:
 *     HvpIsLogEntryCoherent @ 0x140925444 (HvpIsLogEntryCoherent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SymCryptMarvin32 @ 0x1403FADC8 (SymCryptMarvin32.c)
 */

_BOOL8 __fastcall HvpLogEntryCheckDataChecksum(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  SymCryptMarvin32(HvSymcryptSeed, (unsigned __int16 *)(a1 + 40), (unsigned int)(a2 - 40), &v5);
  return *(_QWORD *)(a3 + 24) == v5;
}
