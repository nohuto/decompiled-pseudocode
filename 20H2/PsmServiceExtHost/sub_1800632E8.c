/*
 * XREFs of sub_1800632E8 @ 0x1800632E8
 * Callers:
 *     sub_1800631E0 @ 0x1800631E0 (sub_1800631E0.c)
 *     sub_180063200 @ 0x180063200 (sub_180063200.c)
 *     sub_180063220 @ 0x180063220 (sub_180063220.c)
 *     sub_180063240 @ 0x180063240 (sub_180063240.c)
 * Callees:
 *     sub_18000769C @ 0x18000769C (sub_18000769C.c)
 *     sub_180021AD4 @ 0x180021AD4 (sub_180021AD4.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800632E8(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v6; // rcx
  int v8; // eax
  char *v9; // rdi
  int v10; // ebx
  __int64 v11; // r9
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  int v15; // [rsp+30h] [rbp-28h]
  int v16; // [rsp+34h] [rbp-24h]

  v6 = *(_QWORD *)(a1 + 16) + 536LL;
  P = 0LL;
  v8 = sub_18000769C(v6, *(_QWORD *)(a1 + 8), &P);
  v9 = (char *)P;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = *((_QWORD *)P + 7);
    if ( v11 )
    {
      v14 = *(_QWORD *)(a1 + 8);
      v15 = 0;
      v16 = a3;
      if ( a4 )
        v15 = *a4;
      v10 = sub_180021AD4((_QWORD *)(v11 + 24), &v14, 0x10u, *(_QWORD *)(v11 + 32));
      if ( v10 >= 0 )
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v9 )
    sub_1800265B0(v9);
  return v10 | 0x10000000u;
}
