/*
 * XREFs of sub_180028E04 @ 0x180028E04
 * Callers:
 *     sub_180028C4C @ 0x180028C4C (sub_180028C4C.c)
 * Callees:
 *     sub_180035ABC @ 0x180035ABC (sub_180035ABC.c)
 */

__int64 __fastcall sub_180028E04(void *a1, _DWORD *a2)
{
  int v3; // edx
  NTSTATUS v4; // ebx
  int v5; // eax
  _BYTE v7[8]; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  v4 = NtOpenProcessToken(a1, 8u, &TokenHandle);
  if ( v4 >= 0 )
  {
    v5 = sub_180035ABC((_DWORD)TokenHandle, v3, (unsigned int)&v9, (unsigned int)&v8, (__int64)v7);
    v4 = v5 | 0x10000000;
    if ( v5 >= 0 )
    {
      v4 = 0;
      *a2 = v9 == 65537;
    }
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)v4;
}
