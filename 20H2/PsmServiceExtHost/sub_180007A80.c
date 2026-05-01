/*
 * XREFs of sub_180007A80 @ 0x180007A80
 * Callers:
 *     sub_1800079FC @ 0x1800079FC (sub_1800079FC.c)
 *     sub_18000806C @ 0x18000806C (sub_18000806C.c)
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 *     sub_180072B40 @ 0x180072B40 (sub_180072B40.c)
 * Callees:
 *     sub_180007B68 @ 0x180007B68 (sub_180007B68.c)
 *     sub_180007B94 @ 0x180007B94 (sub_180007B94.c)
 *     sub_180007C3C @ 0x180007C3C (sub_180007C3C.c)
 *     sub_180007CF8 @ 0x180007CF8 (sub_180007CF8.c)
 *     sub_180017A10 @ 0x180017A10 (sub_180017A10.c)
 *     sub_180021D50 @ 0x180021D50 (sub_180021D50.c)
 *     sub_180021E08 @ 0x180021E08 (sub_180021E08.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180007A80(_QWORD *P)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v6[8]; // [rsp+38h] [rbp-38h] BYREF
  __int64 Buf1; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v8[3]; // [rsp+48h] [rbp-28h] BYREF

  v5 = 0LL;
  sub_180021E08(P, 0LL, &v5, v6);
  sub_180007C3C(P);
  v8[1] = P[169];
  Buf1 = 0LL;
  v8[0] = 0LL;
  v8[2] = 1LL;
  sub_180007B94((_DWORD)P + 1328, v5, (unsigned int)&Buf1, (unsigned int)v8, (__int64)v6);
  sub_180007CF8(P, &Buf1);
  v2 = sub_180007B68(P + 166, v5);
  sub_180021D50(P, v3, v2);
  result = sub_180017A10(P, &Buf1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
