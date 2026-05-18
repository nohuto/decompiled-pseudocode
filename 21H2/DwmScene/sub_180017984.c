/*
 * XREFs of sub_180017984 @ 0x180017984
 * Callers:
 *     sub_18001AC20 @ 0x18001AC20 (sub_18001AC20.c)
 *     sub_18003EDE0 @ 0x18003EDE0 (sub_18003EDE0.c)
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     sub_18003FE78 @ 0x18003FE78 (sub_18003FE78.c)
 *     sub_18004071C @ 0x18004071C (sub_18004071C.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_1800B86C4 @ 0x1800B86C4 (sub_1800B86C4.c)
 *     sub_1800D0F5C @ 0x1800D0F5C (sub_1800D0F5C.c)
 *     sub_1800DD08C @ 0x1800DD08C (sub_1800DD08C.c)
 *     sub_180103A84 @ 0x180103A84 (sub_180103A84.c)
 * Callees:
 *     sub_18000F9B8 @ 0x18000F9B8 (sub_18000F9B8.c)
 *     sub_180018B10 @ 0x180018B10 (sub_180018B10.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180017984(_QWORD *a1, _QWORD *a2, unsigned int a3)
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
  sub_180018B10(a2);
  v14 = 0LL;
  sub_180066E84(a1 + 101, &v14);
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v6 = a2[1];
  }
  v7 = *a2;
  v11 = *a2;
  v12 = v6;
  v8 = (_QWORD *)a1[109];
  if ( (_QWORD *)a1[110] == v8 )
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
  sub_1800795CC(a1, *a2, a3);
  return a2;
}
