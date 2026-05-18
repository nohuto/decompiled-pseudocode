/*
 * XREFs of sub_18000F8A8 @ 0x18000F8A8
 * Callers:
 *     sub_1800101B0 @ 0x1800101B0 (sub_1800101B0.c)
 *     sub_18002EA60 @ 0x18002EA60 (sub_18002EA60.c)
 *     sub_180044EE0 @ 0x180044EE0 (sub_180044EE0.c)
 *     sub_1800DD08C @ 0x1800DD08C (sub_1800DD08C.c)
 *     sub_1800DDC68 @ 0x1800DDC68 (sub_1800DDC68.c)
 *     sub_1800FA9C0 @ 0x1800FA9C0 (sub_1800FA9C0.c)
 *     sub_1800FAE90 @ 0x1800FAE90 (sub_1800FAE90.c)
 *     sub_180100870 @ 0x180100870 (sub_180100870.c)
 *     sub_180113810 @ 0x180113810 (sub_180113810.c)
 * Callees:
 *     sub_18000F9B8 @ 0x18000F9B8 (sub_18000F9B8.c)
 *     sub_18000FD9C @ 0x18000FD9C (sub_18000FD9C.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18000F8A8(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  _QWORD *v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF

  v13 = a2;
  *(_OWORD *)a2 = 0LL;
  sub_18000FD9C(a2);
  v14 = 0LL;
  sub_180066E84(a1 + 808, &v14);
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v6 = a2[1];
  }
  v7 = *a2;
  v11 = *a2;
  v12 = v6;
  v8 = *(_QWORD **)(a1 + 872);
  if ( *(_QWORD **)(a1 + 880) == v8 )
  {
    sub_18000F9B8(a1 + 864, v8, &v11);
    v9 = v12;
  }
  else
  {
    *v8 = v7;
    v8[1] = v6;
    v9 = 0LL;
    v12 = 0LL;
    *(_QWORD *)(a1 + 872) += 16LL;
  }
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  if ( BYTE8(v14) )
    sub_180067304(v14);
  sub_1800795CC(a1, *a2, a3);
  return a2;
}
