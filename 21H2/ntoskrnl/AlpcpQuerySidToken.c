/*
 * XREFs of AlpcpQuerySidToken @ 0x1405E3454
 * Callers:
 *     AlpcpQuerySidMessage @ 0x1405E33A4 (AlpcpQuerySidMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeQueryUserSidToken @ 0x14071E204 (SeQueryUserSidToken.c)
 */

__int64 __fastcall AlpcpQuerySidToken(__int64 a1, void *a2, __int64 a3, _DWORD *a4)
{
  _BYTE Src[80]; // [rsp+30h] [rbp-78h] BYREF

  memset(Src, 0, 0x44uLL);
  SeQueryUserSidToken(a1, Src, 68LL);
  if ( a4 )
    *a4 = 0;
  memmove(a2, Src, 0LL);
  return 0LL;
}
