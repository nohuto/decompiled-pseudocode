/*
 * XREFs of sub_1800BD760 @ 0x1800BD760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800715C8 @ 0x1800715C8 (sub_1800715C8.c)
 *     sub_18007235C @ 0x18007235C (sub_18007235C.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_180076C30 @ 0x180076C30 (sub_180076C30.c)
 *     sub_1800B9280 @ 0x1800B9280 (sub_1800B9280.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 *     sub_18010E810 @ 0x18010E810 (sub_18010E810.c)
 *     sub_18010E9F8 @ 0x18010E9F8 (sub_18010E9F8.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800BD760(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v18; // [rsp+78h] [rbp-88h]
  __int128 v19; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v22; // [rsp+A0h] [rbp-60h]
  _BYTE v23[64]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v23, 0, sizeof(v23));
  v14 = 0LL;
  v8 = a1[59];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a1[59];
  }
  *(_QWORD *)&v14 = a1[58];
  *((_QWORD *)&v14 + 1) = v8;
  sub_18010E810(
    (unsigned int)v23,
    (unsigned int)&v14,
    (unsigned int)"..\\Source\\Engine\\ViewerEngine.cpp",
    1484,
    (__int64)"PostRenderScene",
    (__int64)"PostRenderScene",
    1);
  v19 = 0LL;
  v20 = 0LL;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 15LL;
  strcpy((char *)v15, "PostRenderScene");
  v9 = sub_1800752F4((__int64)a1, &v21);
  v10 = (volatile signed __int32 *)v9[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v10 = (volatile signed __int32 *)v9[1];
  }
  v17 = *v9;
  v18 = v10;
  sub_1800715C8(&v19, &v17, (__int64)v15);
  if ( v18 && _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
  v11 = v22;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = v15[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(v15[0] - 8LL);
      if ( (unsigned __int64)(v15[0] - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v15[0]) = 0;
  sub_180076C30(a1, a2, a3, a4);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 280LL))(*a4) )
  {
    sub_1800C31B4(a1, a3, a4, a2);
    sub_1800B9280((__int64)a1, a2, a3, a4);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 128LL))(*a3);
  sub_18007235C((__int64 *)&v19);
  return sub_18010E9F8(v23);
}
