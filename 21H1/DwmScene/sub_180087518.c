/*
 * XREFs of sub_180087518 @ 0x180087518
 * Callers:
 *     sub_18006C618 @ 0x18006C618 (sub_18006C618.c)
 *     sub_1800867D4 @ 0x1800867D4 (sub_1800867D4.c)
 *     sub_1800870D4 @ 0x1800870D4 (sub_1800870D4.c)
 *     sub_1800872F4 @ 0x1800872F4 (sub_1800872F4.c)
 *     sub_18008741C @ 0x18008741C (sub_18008741C.c)
 *     sub_180087A00 @ 0x180087A00 (sub_180087A00.c)
 *     sub_18008833C @ 0x18008833C (sub_18008833C.c)
 *     sub_180088934 @ 0x180088934 (sub_180088934.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800BCF20 @ 0x1800BCF20 (sub_1800BCF20.c)
 *     sub_1800C1360 @ 0x1800C1360 (sub_1800C1360.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 *     sub_18008A1E8 @ 0x18008A1E8 (sub_18008A1E8.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180087518(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  char v8; // di
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF

  v17 = 0;
  sub_180061810(a1 + 16);
  v18 = 0LL;
  sub_18008A1E8(a1 + 88, &v18, a3);
  v6 = v18;
  if ( v18 == *(_QWORD *)(a1 + 88) )
  {
    v16 = 0LL;
    v7 = (__int64 *)&v16;
    v8 = 5;
    v9 = v15;
  }
  else
  {
    v9 = *(_QWORD *)(v18 + 72);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(v6 + 72);
    }
    v14 = *(_QWORD *)(v6 + 64);
    v15 = v9;
    v7 = &v14;
    v8 = 6;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v10 = v7[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v9 = v15;
  }
  *a2 = *v7;
  a2[1] = v10;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
      {
        v11 = v15;
        (**(void (__fastcall ***)(__int64))v15)(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD, __int64))&v16 + 1))(*((_QWORD *)&v16 + 1), v9);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
  }
  unknown_libname_101(a3);
  return a2;
}
