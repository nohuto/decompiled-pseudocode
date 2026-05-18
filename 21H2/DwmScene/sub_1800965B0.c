/*
 * XREFs of sub_1800965B0 @ 0x1800965B0
 * Callers:
 *     sub_180096810 @ 0x180096810 (sub_180096810.c)
 *     sub_1800968E8 @ 0x1800968E8 (sub_1800968E8.c)
 *     sub_1800969C0 @ 0x1800969C0 (sub_1800969C0.c)
 *     sub_1800990D0 @ 0x1800990D0 (sub_1800990D0.c)
 * Callees:
 *     sub_18000F9B8 @ 0x18000F9B8 (sub_18000F9B8.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 *     sub_180096B98 @ 0x180096B98 (sub_180096B98.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_1800965B0(_QWORD *a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 *v14; // [rsp+38h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF

  v14 = a2;
  *(_OWORD *)a2 = 0LL;
  sub_180096B98(a2, a4);
  v15 = 0LL;
  sub_180066E84((__int64)(a1 + 101), (__int64)&v15);
  v7 = a2[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
    v7 = a2[1];
  }
  v8 = *a2;
  v12 = *a2;
  v13 = v7;
  v9 = (__int64 *)a1[109];
  if ( (__int64 *)a1[110] == v9 )
  {
    sub_18000F9B8(a1 + 108, v9, &v12);
    v10 = v13;
  }
  else
  {
    *v9 = v8;
    v9[1] = v7;
    v10 = 0LL;
    v13 = 0LL;
    a1[109] += 16LL;
  }
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  if ( BYTE8(v15) )
    sub_180067304(v15);
  sub_1800795CC((__int64)a1, *a2, a3);
  return a2;
}
