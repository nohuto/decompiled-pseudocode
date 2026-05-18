/*
 * XREFs of sub_180088444 @ 0x180088444
 * Callers:
 *     sub_180011A60 @ 0x180011A60 (sub_180011A60.c)
 *     sub_180015A20 @ 0x180015A20 (sub_180015A20.c)
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     GsDriverEntry @ 0x180087A20 (GsDriverEntry.c)
 * Callees:
 *     sub_180083CB4 @ 0x180083CB4 (sub_180083CB4.c)
 *     sub_1800868C4 @ 0x1800868C4 (sub_1800868C4.c)
 *     sub_180088310 @ 0x180088310 (sub_180088310.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

char __fastcall sub_180088444(__int64 a1, _OWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  int v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+38h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF

  sub_18008933C(a1);
  v9 = 0LL;
  v10 = 0;
  v7 = 0LL;
  v8 = 0;
  v11 = xmmword_1801CCE10;
  if ( !sub_1800868C4((__int64)a2, &v7, &v11, &v9) )
    return 0;
  v5 = v7;
  v6 = v8;
  v8 = v10;
  v7 = v9;
  sub_180088310(a1, (__int64)&v7, &v11, (__int64)&v5);
  sub_180083CB4((_OWORD *)(a1 + 224), a2);
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 208);
  return 1;
}
