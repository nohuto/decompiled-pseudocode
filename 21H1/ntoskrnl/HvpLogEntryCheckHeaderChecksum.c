/*
 * XREFs of HvpLogEntryCheckHeaderChecksum @ 0x14086D6D8
 * Callers:
 *     HvpIsLogEntryHeaderCoherent @ 0x14087D048 (HvpIsLogEntryHeaderCoherent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SymCryptMarvin32 @ 0x1403E77E8 (SymCryptMarvin32.c)
 */

_BOOL8 __fastcall HvpLogEntryCheckHeaderChecksum(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 != 1162638920 )
    return 0LL;
  SymCryptMarvin32(HvSymcryptSeed, (unsigned __int16 *)a1, 0x20uLL, &v3);
  return *(_QWORD *)(a1 + 32) == v3;
}
