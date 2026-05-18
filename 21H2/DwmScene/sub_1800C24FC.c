/*
 * XREFs of sub_1800C24FC @ 0x1800C24FC
 * Callers:
 *     sub_1800BA3D0 @ 0x1800BA3D0 (sub_1800BA3D0.c)
 *     sub_1800BA714 @ 0x1800BA714 (sub_1800BA714.c)
 *     sub_1800BAA58 @ 0x1800BAA58 (sub_1800BAA58.c)
 *     sub_1800BAD9C @ 0x1800BAD9C (sub_1800BAD9C.c)
 *     sub_1800BB0E0 @ 0x1800BB0E0 (sub_1800BB0E0.c)
 *     sub_1800BB424 @ 0x1800BB424 (sub_1800BB424.c)
 *     sub_1800C0090 @ 0x1800C0090 (sub_1800C0090.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_18008C9A4 @ 0x18008C9A4 (sub_18008C9A4.c)
 *     sub_18008D1E4 @ 0x18008D1E4 (sub_18008D1E4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall sub_1800C24FC(__int64 a1, _OWORD *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-39h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-29h]
  __int64 v14[5]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v15[4]; // [rsp+68h] [rbp+Fh] BYREF

  v13 = a3;
  v14[4] = (__int64)a4;
  sub_1800670E0(a1 + 16);
  v12 = 0LL;
  v8 = a4[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a4[1];
  }
  *(_QWORD *)&v12 = *a4;
  *((_QWORD *)&v12 + 1) = v8;
  sub_18008D1E4(a1, v15, &v12);
  *a2 = 0LL;
  v14[2] = 0LL;
  v14[3] = 0LL;
  sub_18001277C(v14, (__int64)v15);
  sub_18008C9A4(*a3, (__int64)a2, v14);
  unknown_libname_103(v15);
  v9 = (volatile signed __int32 *)a3[1];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = (volatile signed __int32 *)a4[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return a2;
}
