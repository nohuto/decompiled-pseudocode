/*
 * XREFs of HvpGenerateLogEntryChecksums @ 0x1406F9360
 * Callers:
 *     HvpGenerateLogEntry @ 0x1406F91B8 (HvpGenerateLogEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SymCryptMarvin32 @ 0x1403EBD98 (SymCryptMarvin32.c)
 *     SymCryptMarvin32Append @ 0x1403EBF10 (SymCryptMarvin32Append.c)
 *     SymCryptMarvin32Init @ 0x1403EC0BC (SymCryptMarvin32Init.c)
 *     SymCryptMarvin32Result @ 0x1403EC0D8 (SymCryptMarvin32Result.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HvpGenerateLogEntryChecksums(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rdi
  size_t v7; // r8
  __int64 v9; // rbx
  __int64 v10; // rsi
  _BYTE v11[64]; // [rsp+20h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  v6 = *(_QWORD *)(a1 + 8) + 512LL;
  if ( !a3 )
    v6 = *(_QWORD *)(a1 + 8);
  SymCryptMarvin32Init((__int64)v11, (__int128 *)&HvSymcryptSeed);
  v7 = (unsigned int)(*(_DWORD *)(a1 + 16) - 552);
  if ( !a3 )
    v7 = (unsigned int)(*(_DWORD *)(a1 + 16) - 40);
  SymCryptMarvin32Append((__int64)v11, (char *)(v6 + 40), v7);
  if ( a2 > 1 )
  {
    v9 = a1 + 32;
    v10 = a2 - 1;
    do
    {
      SymCryptMarvin32Append((__int64)v11, *(char **)v9, *(unsigned int *)(v9 + 8));
      v9 += 24LL;
      --v10;
    }
    while ( v10 );
  }
  SymCryptMarvin32Result((__int64)v11, (_DWORD *)(v6 + 24));
  return SymCryptMarvin32((int *)&HvSymcryptSeed, (unsigned __int16 *)v6, 0x20uLL, (_DWORD *)(v6 + 32));
}
