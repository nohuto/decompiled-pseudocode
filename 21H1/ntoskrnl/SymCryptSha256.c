/*
 * XREFs of SymCryptSha256 @ 0x1403E7D18
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1402DEFD0 (RtlDeriveCapabilitySidsFromName.c)
 *     KeComputeSha256 @ 0x140396290 (KeComputeSha256.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SymCryptSha256Append @ 0x1403E7DA0 (SymCryptSha256Append.c)
 *     SymCryptSha256Init @ 0x1403E95B0 (SymCryptSha256Init.c)
 *     SymCryptSha256Result @ 0x1403E95E0 (SymCryptSha256Result.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall SymCryptSha256(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[128]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v7, 0, sizeof(v7));
  SymCryptSha256Init(v7);
  SymCryptSha256Append(v7, a1, a2);
  return SymCryptSha256Result(v7, a3);
}
