/*
 * XREFs of sub_18008DC0C @ 0x18008DC0C
 * Callers:
 *     sub_180014EE0 @ 0x180014EE0 (sub_180014EE0.c)
 *     sub_180015A20 @ 0x180015A20 (sub_180015A20.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18008CDE8 @ 0x18008CDE8 (sub_18008CDE8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008DC0C(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-40h]
  __int64 v8[5]; // [rsp+30h] [rbp-38h] BYREF

  v8[4] = (__int64)a2;
  v8[2] = 0LL;
  v8[3] = 0LL;
  sub_18001277C(v8, (__int64)a2);
  *(_BYTE *)(*sub_18008CDE8(a1, &v6, v8) + 72) = 1;
  v4 = v7;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return unknown_libname_103(a2);
}
