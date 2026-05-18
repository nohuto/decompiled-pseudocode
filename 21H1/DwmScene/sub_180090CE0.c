/*
 * XREFs of sub_180090CE0 @ 0x180090CE0
 * Callers:
 *     sub_180090F40 @ 0x180090F40 (sub_180090F40.c)
 *     sub_180091018 @ 0x180091018 (sub_180091018.c)
 *     sub_1800910F0 @ 0x1800910F0 (sub_1800910F0.c)
 *     sub_180093800 @ 0x180093800 (sub_180093800.c)
 * Callees:
 *     sub_18000F8D8 @ 0x18000F8D8 (sub_18000F8D8.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 *     sub_1800912C8 @ 0x1800912C8 (sub_1800912C8.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_180090CE0(_QWORD *a1, __int64 *a2, int a3, __int64 a4)
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
  sub_1800912C8(a2, a4);
  v15 = 0LL;
  sub_1800615B4((__int64)(a1 + 101), (__int64)&v15);
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
    sub_18000F8D8(a1 + 108, v9, &v12);
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
    sub_180061A34(v15);
  sub_180073CFC((__int64)a1, *a2, a3);
  return a2;
}
