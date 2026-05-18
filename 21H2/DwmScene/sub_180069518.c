/*
 * XREFs of sub_180069518 @ 0x180069518
 * Callers:
 *     sub_180069230 @ 0x180069230 (sub_180069230.c)
 *     sub_180097E00 @ 0x180097E00 (sub_180097E00.c)
 *     sub_1800A05A0 @ 0x1800A05A0 (sub_1800A05A0.c)
 *     sub_1800A12B0 @ 0x1800A12B0 (sub_1800A12B0.c)
 *     sub_1800AF730 @ 0x1800AF730 (sub_1800AF730.c)
 *     sub_1800CEBA0 @ 0x1800CEBA0 (sub_1800CEBA0.c)
 *     sub_1800D1030 @ 0x1800D1030 (sub_1800D1030.c)
 *     sub_1800D2530 @ 0x1800D2530 (sub_1800D2530.c)
 *     sub_1800D2DE0 @ 0x1800D2DE0 (sub_1800D2DE0.c)
 *     sub_1800F5040 @ 0x1800F5040 (sub_1800F5040.c)
 *     sub_1800F7EC8 @ 0x1800F7EC8 (sub_1800F7EC8.c)
 * Callees:
 *     sub_18002C93C @ 0x18002C93C (sub_18002C93C.c)
 *     sub_180069474 @ 0x180069474 (sub_180069474.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180069518(__int64 *a1, unsigned int *a2)
{
  __int64 *j; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 v7; // rdx
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-20h]

  sub_18002C93C(a1, &v9, a2);
  j = v9;
  v4 = 0LL;
  while ( j != v10 )
  {
    v5 = j[2];
    ++v4;
    if ( *(_BYTE *)(v5 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (__int64 *)i;
      j = (__int64 *)i;
    }
    else
    {
      v7 = *(_QWORD *)v5;
      for ( j = (__int64 *)j[2]; !*(_BYTE *)(v7 + 25); v7 = *(_QWORD *)v7 )
        j = (__int64 *)v7;
    }
  }
  sub_180069474((__int64 ***)a1, &v9, v9, v10);
  return v4;
}
