/*
 * XREFs of sub_180074BF0 @ 0x180074BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BD90 (_guard_check_icall_nop.c)
 *     sub_180061808 @ 0x180061808 (sub_180061808.c)
 *     sub_1800715C8 @ 0x1800715C8 (sub_1800715C8.c)
 *     sub_18007235C @ 0x18007235C (sub_18007235C.c)
 *     sub_1800731C0 @ 0x1800731C0 (sub_1800731C0.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_1800753CC @ 0x1800753CC (sub_1800753CC.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     sub_1800776F0 @ 0x1800776F0 (sub_1800776F0.c)
 *     sub_180077988 @ 0x180077988 (sub_180077988.c)
 *     sub_1800786DC @ 0x1800786DC (sub_1800786DC.c)
 *     sub_180078918 @ 0x180078918 (sub_180078918.c)
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 *     sub_18007A0C8 @ 0x18007A0C8 (sub_18007A0C8.c)
 *     sub_18007B1D4 @ 0x18007B1D4 (sub_18007B1D4.c)
 *     sub_18007B340 @ 0x18007B340 (sub_18007B340.c)
 *     sub_18010E810 @ 0x18010E810 (sub_18010E810.c)
 *     sub_18010E9F8 @ 0x18010E9F8 (sub_18010E9F8.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180074BF0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int128 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v15; // [rsp+70h] [rbp-98h]
  _QWORD v16[2]; // [rsp+78h] [rbp-90h] BYREF
  __m128i si128; // [rsp+88h] [rbp-80h]
  __int128 v18; // [rsp+98h] [rbp-70h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-60h]
  _BYTE v20[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v21; // [rsp+B8h] [rbp-50h]
  _BYTE v22[64]; // [rsp+C8h] [rbp-40h] BYREF

  sub_180061808((__int64)(a1 + 1));
  sub_18007B340(a1);
  sub_1800731C0((__int64)a1);
  memset(v22, 0, sizeof(v22));
  v13 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v13 = a1[58];
  *((_QWORD *)&v13 + 1) = v2;
  sub_18010E810(
    (unsigned int)v22,
    (unsigned int)&v13,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    819,
    (__int64)"FrameTick",
    (__int64)"FrameTick",
    1);
  v18 = 0LL;
  v19 = 0LL;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 9LL;
  strcpy((char *)v16, "FrameTick");
  v3 = (__int64 *)sub_1800752F4(a1, v20);
  v4 = (volatile signed __int32 *)v3[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)v3[1];
  }
  v14 = *v3;
  v15 = v4;
  sub_1800715C8(&v18, &v14, (__int64)v16);
  if ( v15 && _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
  v5 = v21;
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v16[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v16[0] - 8LL);
      if ( (unsigned __int64)(v16[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v16[0]) = 0;
  sub_1800776F0(a1);
  if ( (unsigned int)sub_180075490(a1) > 1 )
  {
    v12 = 0LL;
    sub_1800753CC(a1, &v12, 1LL);
    v8 = v12;
    if ( (_QWORD)v12 )
    {
      v9 = sub_1800752B4(a1, 1LL);
      v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 72LL))(v9, &unk_180208B70, 1LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 224LL))(v8, v10);
    }
    if ( *((_QWORD *)&v12 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL)) )
    {
      v11 = *((_QWORD *)&v12 + 1);
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v11 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
    sub_18007B1D4(a1);
    sub_180079804(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
    sub_180078918(a1);
    sub_1800786DC(a1);
    sub_180077988(a1);
    sub_18007235C((__int64 *)&v18);
    sub_18010E9F8(v22);
    return sub_18007A0C8(a1);
  }
  else
  {
    sub_18007235C((__int64 *)&v18);
    return sub_18010E9F8(v22);
  }
}
