/*
 * XREFs of sub_18008CCEC @ 0x18008CCEC
 * Callers:
 *     sub_180023250 @ 0x180023250 (sub_180023250.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_18008CDE8 @ 0x18008CDE8 (sub_18008CDE8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008CCEC(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  volatile signed __int32 *v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+30h] [rbp-38h] BYREF

  v9[4] = a2;
  sub_1800670E0(a1 + 16);
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001277C(v9, (__int64)a2);
  v4 = *(_QWORD *)sub_18008CDE8(a1, v7, v9);
  v5 = v8;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  unknown_libname_103(a2);
  return v4 + 48;
}
