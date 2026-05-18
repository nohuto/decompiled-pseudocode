/*
 * XREFs of sub_1800964A0 @ 0x1800964A0
 * Callers:
 *     sub_180098A18 @ 0x180098A18 (sub_180098A18.c)
 *     sub_180098B24 @ 0x180098B24 (sub_180098B24.c)
 * Callees:
 *     sub_18000F9B8 @ 0x18000F9B8 (sub_18000F9B8.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 *     sub_180096B20 @ 0x180096B20 (sub_180096B20.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800964A0(_QWORD *a1, __int64 *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 *v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF

  v13 = a2;
  *(_OWORD *)a2 = 0LL;
  sub_180096B20(a2);
  v14 = 0LL;
  sub_180066E84((__int64)(a1 + 101), (__int64)&v14);
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v6 = a2[1];
  }
  v7 = *a2;
  v11 = *a2;
  v12 = v6;
  v8 = (__int64 *)a1[109];
  if ( (__int64 *)a1[110] == v8 )
  {
    sub_18000F9B8(a1 + 108, v8, &v11);
    v9 = v12;
  }
  else
  {
    *v8 = v7;
    v8[1] = v6;
    v9 = 0LL;
    v12 = 0LL;
    a1[109] += 16LL;
  }
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  if ( BYTE8(v14) )
    sub_180067304(v14);
  sub_1800795CC((__int64)a1, *a2, a3);
  return a2;
}
