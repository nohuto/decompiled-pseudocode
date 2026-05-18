/*
 * XREFs of sub_180082B74 @ 0x180082B74
 * Callers:
 *     sub_180011980 @ 0x180011980 (sub_180011980.c)
 *     sub_180015940 @ 0x180015940 (sub_180015940.c)
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 *     GsDriverEntry @ 0x180082150 (GsDriverEntry.c)
 * Callees:
 *     sub_18007E3E4 @ 0x18007E3E4 (sub_18007E3E4.c)
 *     sub_180080FF4 @ 0x180080FF4 (sub_180080FF4.c)
 *     sub_180082A40 @ 0x180082A40 (sub_180082A40.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

char __fastcall sub_180082B74(__int64 a1, _OWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  int v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+38h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF

  sub_180083A6C(a1);
  v9 = 0LL;
  v10 = 0;
  v7 = 0LL;
  v8 = 0;
  v11 = xmmword_1801C6AC0;
  if ( !sub_180080FF4((__int64)a2, &v7, &v11, &v9) )
    return 0;
  v5 = v7;
  v6 = v8;
  v8 = v10;
  v7 = v9;
  sub_180082A40(a1, (__int64)&v7, &v11, (__int64)&v5);
  sub_18007E3E4((_OWORD *)(a1 + 224), a2);
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 208);
  return 1;
}
