/*
 * XREFs of sub_18006C618 @ 0x18006C618
 * Callers:
 *     sub_18006C4C0 @ 0x18006C4C0 (sub_18006C4C0.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18006C560 @ 0x18006C560 (sub_18006C560.c)
 *     sub_180087518 @ 0x180087518 (sub_180087518.c)
 *     sub_180087B70 @ 0x180087B70 (sub_180087B70.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006C618(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  _BYTE v10[8]; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-48h]
  _QWORD v12[5]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+58h] [rbp-18h] BYREF

  v12[4] = a3;
  v13 = 0LL;
  v12[2] = 0LL;
  v12[3] = 0LL;
  sub_18001269C(v12, (__int64)a3);
  sub_180087518(a1, &v13, v12);
  v6 = (_QWORD *)sub_180087B70(v13, v10);
  sub_18006C560(a1, a2, v6);
  v7 = v11;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return unknown_libname_101(a3);
}
