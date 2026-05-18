/*
 * XREFs of sub_1800861F0 @ 0x1800861F0
 * Callers:
 *     sub_180072F30 @ 0x180072F30 (sub_180072F30.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 *     sub_1800D9320 @ 0x1800D9320 (sub_1800D9320.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180085FEC @ 0x180085FEC (sub_180085FEC.c)
 *     sub_180087A00 @ 0x180087A00 (sub_180087A00.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800861F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int128 v11; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[5]; // [rsp+40h] [rbp-38h] BYREF

  v13[4] = a4;
  v11 = 0LL;
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001269C(v13, (__int64)a4);
  sub_180087A00(a1, &v11, v13);
  v12 = 0LL;
  v8 = *((_QWORD *)&v11 + 1);
  if ( *((_QWORD *)&v11 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL));
    v8 = *((_QWORD *)&v11 + 1);
  }
  v12 = v11;
  sub_180085FEC(a1, a2, a3, &v12);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  unknown_libname_101(a4);
  return a2;
}
