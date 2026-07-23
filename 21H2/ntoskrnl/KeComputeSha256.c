/*
 * XREFs of KeComputeSha256 @ 0x1403998E0
 * Callers:
 *     ExpKdPullRemoteFileForUser @ 0x14095BB9C (ExpKdPullRemoteFileForUser.c)
 * Callees:
 *     SymCryptSha256 @ 0x1403EC2C8 (SymCryptSha256.c)
 */

__int64 __fastcall KeComputeSha256(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptSha256(a1, a2, a3);
}
