/*
 * XREFs of sub_180026E04 @ 0x180026E04
 * Callers:
 *     sub_180026E90 @ 0x180026E90 (sub_180026E90.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

int __fastcall sub_180026E04(int *a1)
{
  _QWORD *v2; // rax
  _DWORD *v3; // rcx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = sub_1800055CC();
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 4u )
  {
    v4 = *a1;
    v10 = 0;
    v6 = v4;
    v9 = 4;
    v8 = &v6;
    LODWORD(v2) = sub_180001090((__int64)v3, (unsigned __int8 *)dword_1800466B7, 0LL, 0LL, 3u, &v7);
  }
  a1[80] = 1;
  return (int)v2;
}
