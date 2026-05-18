/*
 * XREFs of sub_18006E66C @ 0x18006E66C
 * Callers:
 *     sub_18006FF60 @ 0x18006FF60 (sub_18006FF60.c)
 * Callees:
 *     sub_18000F9B8 @ 0x18000F9B8 (sub_18000F9B8.c)
 *     sub_180018B10 @ 0x180018B10 (sub_180018B10.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180079508 @ 0x180079508 (sub_180079508.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18006E66C(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  __int128 v13; // [rsp+28h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  _QWORD *v16; // [rsp+48h] [rbp-28h]
  _QWORD *v17; // [rsp+50h] [rbp-20h]
  __int128 v18; // [rsp+58h] [rbp-18h] BYREF

  v16 = a2;
  v17 = a3;
  *(_OWORD *)a2 = 0LL;
  sub_180018B10((__int64)a2);
  v18 = 0LL;
  sub_180066E84((__int64)(a1 + 101), (__int64)&v18);
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v6 = a2[1];
  }
  v7 = *a2;
  v14 = *a2;
  v15 = v6;
  v8 = (_QWORD *)a1[109];
  if ( (_QWORD *)a1[110] == v8 )
  {
    sub_18000F9B8(a1 + 108, v8, &v14);
    v9 = v15;
  }
  else
  {
    *v8 = v7;
    v8[1] = v6;
    v9 = 0LL;
    v15 = 0LL;
    a1[109] += 16LL;
  }
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  if ( BYTE8(v18) )
    sub_180067304(v18);
  v13 = 0LL;
  v10 = a3[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a3[1];
  }
  *(_QWORD *)&v13 = *a3;
  *((_QWORD *)&v13 + 1) = v10;
  sub_180079508(a1, *a2, &v13);
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return a2;
}
