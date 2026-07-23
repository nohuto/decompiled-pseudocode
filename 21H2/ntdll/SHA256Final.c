/*
 * XREFs of SHA256Final @ 0x18004034C
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18001FD40 (RtlDeriveCapabilitySidsFromName.c)
 * Callees:
 *     DWORDToBigEndian @ 0x180040474 (DWORDToBigEndian.c)
 *     SHA256Update @ 0x180040498 (SHA256Update.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 __fastcall SHA256Final(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // rdi
  int v8; // edx
  __int64 result; // rax
  _DWORD v10[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v11[80]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1[9];
  v5 = 64 - (v2 & 0x3F);
  v6 = v5 + 64;
  if ( v5 > 8 )
    v6 = 64 - (a1[9] & 0x3F);
  v7 = v6;
  memset(v11, 0, v6 - 8);
  v8 = (v2 >> 29) | (8 * a1[8]);
  v11[0] = 0x80;
  v10[0] = v8;
  v10[1] = 8 * v2;
  DWORDToBigEndian((char *)&v10[2] + v7, v10, 2LL);
  SHA256Update(a1, v11, (unsigned int)v7);
  DWORDToBigEndian(a2, a1, 8LL);
  a1[8] = 0;
  a1[9] = 0;
  result = 0LL;
  *a1 = 1779033703;
  a1[1] = -1150833019;
  a1[2] = 1013904242;
  a1[3] = -1521486534;
  a1[4] = 1359893119;
  a1[5] = -1694144372;
  a1[6] = 528734635;
  a1[7] = 1541459225;
  memset(a1 + 10, 0, 0x40uLL);
  return result;
}
