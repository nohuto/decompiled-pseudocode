/*
 * XREFs of sub_18008741C @ 0x18008741C
 * Callers:
 *     sub_18001D980 @ 0x18001D980 (sub_18001D980.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 *     sub_180087518 @ 0x180087518 (sub_180087518.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008741C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  volatile signed __int32 *v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+30h] [rbp-38h] BYREF

  v9[4] = a2;
  sub_180061810(a1 + 16);
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001269C(v9, (__int64)a2);
  v4 = *(_QWORD *)sub_180087518(a1, v7, v9);
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
  unknown_libname_101(a2);
  return v4 + 48;
}
