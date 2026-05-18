/*
 * XREFs of sub_18007D258 @ 0x18007D258
 * Callers:
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180076DF8 @ 0x180076DF8 (sub_180076DF8.c)
 *     sub_180076E98 @ 0x180076E98 (sub_180076E98.c)
 *     sub_180077C2C @ 0x180077C2C (sub_180077C2C.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 *     sub_18007ABC4 @ 0x18007ABC4 (sub_18007ABC4.c)
 *     sub_1801140E0 @ 0x1801140E0 (sub_1801140E0.c)
 *     sub_1801142C8 @ 0x1801142C8 (sub_1801142C8.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     memset @ 0x18012396A (memset.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_18007D258(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  _QWORD *i; // rbx
  _QWORD *v8; // rsi
  __int128 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v12; // [rsp+60h] [rbp-A8h]
  __int64 v13; // [rsp+68h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+78h] [rbp-90h]
  __int128 v15; // [rsp+88h] [rbp-80h] BYREF
  __int64 v16; // [rsp+98h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v18; // [rsp+A8h] [rbp-60h]
  __int128 v19; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v20; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v21; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-28h]
  _BYTE v23[64]; // [rsp+E8h] [rbp-20h] BYREF

  memset(v23, 0, sizeof(v23));
  v10 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v10 = a1[58];
  *((_QWORD *)&v10 + 1) = v2;
  sub_1801140E0(
    (unsigned int)v23,
    (unsigned int)&v10,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1719,
    (__int64)"RemoveInvalidDevices",
    (__int64)"RemoveInvalidDevices",
    1);
  v15 = 0LL;
  v16 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v13) = 0;
  sub_18000FC14(&v13, 0x14uLL, 0LL, "RemoveInvalidDevices");
  v3 = sub_18007ABC4((__int64)a1, &v17);
  v4 = (volatile signed __int32 *)v3[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)v3[1];
  }
  v11 = *v3;
  v12 = v4;
  sub_180076E98(&v15, &v11, (__int64)&v13);
  if ( v12 && _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
  v5 = v18;
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v13;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v13 - 8);
      if ( (unsigned __int64)(v13 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v13) = 0;
  v20 = 0LL;
  sub_180066E84((__int64)(a1 + 14), (__int64)&v20);
  v21 = 0LL;
  v22 = 0LL;
  sub_180076DF8(&v21, a1 + 11);
  v8 = (_QWORD *)*((_QWORD *)&v21 + 1);
  for ( i = (_QWORD *)v21; i != v8; i += 2 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i) )
    {
      sub_18011BCAC(&unk_18020F648, 3LL, "==============================");
      sub_18011BCAC(&unk_18020F648, 3LL, "INVALID RENDER DEVICE DETECTED");
      v19 = 0LL;
      sub_180066E84(*i + 24LL, (__int64)&v19);
      if ( dword_18020F644 == 1 )
        sub_180079884((__int64)a1, i);
      sub_18011BCAC(&unk_18020F648, 3LL, "==============================");
      if ( BYTE8(v19) )
        sub_180067304(v19);
    }
  }
  sub_180012A18((__int64 *)&v21);
  if ( BYTE8(v20) )
    sub_180067304(v20);
  sub_180077C2C((__int64 *)&v15);
  return sub_1801142C8(v23);
}
