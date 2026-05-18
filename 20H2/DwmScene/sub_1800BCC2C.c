/*
 * XREFs of sub_1800BCC2C @ 0x1800BCC2C
 * Callers:
 *     sub_1800B4B00 @ 0x1800B4B00 (sub_1800B4B00.c)
 *     sub_1800B4E44 @ 0x1800B4E44 (sub_1800B4E44.c)
 *     sub_1800B5188 @ 0x1800B5188 (sub_1800B5188.c)
 *     sub_1800B54CC @ 0x1800B54CC (sub_1800B54CC.c)
 *     sub_1800B5810 @ 0x1800B5810 (sub_1800B5810.c)
 *     sub_1800B5B54 @ 0x1800B5B54 (sub_1800B5B54.c)
 *     sub_1800BA7C0 @ 0x1800BA7C0 (sub_1800BA7C0.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 *     sub_1800870D4 @ 0x1800870D4 (sub_1800870D4.c)
 *     sub_180087914 @ 0x180087914 (sub_180087914.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall sub_1800BCC2C(__int64 a1, _OWORD *a2, __int64 *a3, _QWORD *a4)
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
  sub_180061810(a1 + 16);
  v12 = 0LL;
  v8 = a4[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a4[1];
  }
  *(_QWORD *)&v12 = *a4;
  *((_QWORD *)&v12 + 1) = v8;
  sub_180087914(a1, v15, &v12);
  *a2 = 0LL;
  v14[2] = 0LL;
  v14[3] = 0LL;
  sub_18001269C(v14, (__int64)v15);
  sub_1800870D4(*a3, (__int64)a2, v14);
  unknown_libname_101(v15);
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
