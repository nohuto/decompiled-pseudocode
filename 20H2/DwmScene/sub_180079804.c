/*
 * XREFs of sub_180079804 @ 0x180079804
 * Callers:
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180068F18 @ 0x180068F18 (sub_180068F18.c)
 *     sub_18006AB7C @ 0x18006AB7C (sub_18006AB7C.c)
 *     sub_18006ABFC @ 0x18006ABFC (sub_18006ABFC.c)
 *     sub_1800715C8 @ 0x1800715C8 (sub_1800715C8.c)
 *     sub_18007235C @ 0x18007235C (sub_18007235C.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_1800759EC @ 0x1800759EC (sub_1800759EC.c)
 *     sub_180076274 @ 0x180076274 (sub_180076274.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_1800DD888 @ 0x1800DD888 (sub_1800DD888.c)
 *     sub_18010E810 @ 0x18010E810 (sub_18010E810.c)
 *     sub_18010E9F8 @ 0x18010E9F8 (sub_18010E9F8.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_180079804(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rdi
  volatile signed __int32 *v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // ebx
  int v15; // ecx
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // r14
  float v20; // xmm0_4
  __int128 v21; // [rsp+48h] [rbp-C0h]
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v23; // [rsp+66h] [rbp-A2h]
  __m128i si128; // [rsp+68h] [rbp-A0h]
  __int128 v25; // [rsp+78h] [rbp-90h] BYREF
  __int64 v26; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v27; // [rsp+90h] [rbp-78h]
  float v28; // [rsp+98h] [rbp-70h]
  __int128 v29; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-58h]
  _BYTE v31[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v35; // [rsp+D8h] [rbp-30h]
  __int128 v36; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v37[3]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v38[64]; // [rsp+108h] [rbp+0h] BYREF

  memset(v38, 0, sizeof(v38));
  v25 = 0LL;
  v2 = *(_QWORD *)(a1 + 472);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 472);
  }
  *(_QWORD *)&v25 = *(_QWORD *)(a1 + 464);
  *((_QWORD *)&v25 + 1) = v2;
  sub_18010E810(
    (unsigned int)v38,
    (unsigned int)&v25,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    640,
    (__int64)"UpdateFrameTime",
    (__int64)"UpdateFrameTime",
    1);
  v29 = 0LL;
  v30 = 0LL;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 15LL;
  qmemcpy(&v22, "UpdateFrameTim", 14);
  v23 = (unsigned __int8)aUpdateframetim[14];
  v3 = sub_1800752F4(a1, &v32);
  v4 = (volatile signed __int32 *)v3[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)v3[1];
  }
  v26 = *v3;
  v27 = v4;
  sub_1800715C8(&v29, &v26, (__int64)&v22);
  if ( v27 && _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
  v5 = v33;
  if ( v33 )
  {
    if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v22;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v22 - 8);
      if ( (unsigned __int64)(v22 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v22) = 0;
  sub_180078958(a1, v37);
  v7 = (__int64 *)v37[0];
  v8 = v37[1];
  while ( 1 )
  {
    if ( v7 == (__int64 *)v8 )
    {
      sub_180012938(v37);
      v21 = 0LL;
      v10 = 0LL;
      goto LABEL_32;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v7 + 32LL))(*v7) )
      break;
LABEL_23:
    v7 += 2;
  }
  v36 = 0LL;
  sub_1800615B4(*v7 + 24, (__int64)&v36);
  if ( !(unsigned int)sub_18006ABFC(*v7) )
  {
    if ( BYTE8(v36) )
      sub_180061A34(v36);
    goto LABEL_23;
  }
  v9 = sub_18006AB7C(*v7, &v34, 0);
  v10 = *v9;
  *((_QWORD *)&v21 + 1) = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  v11 = v35;
  if ( v35 )
  {
    if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( BYTE8(v36) )
    sub_180061A34(v36);
  sub_180012938(v37);
LABEL_32:
  if ( v10 )
    v12 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 328LL))(v10, v31);
  else
    v12 = 0x8000000000000000uLL;
  v13 = *(_QWORD *)(a1 + 928);
  if ( v13 == 0x8000000000000000uLL || v12 == 0x8000000000000000uLL )
    v14 = 0;
  else
    v14 = v12 - v13;
  v15 = *(_DWORD *)(a1 + 960);
  if ( v15 )
  {
    if ( v15 == 1 )
      *(_DWORD *)(a1 + 936) = *(_DWORD *)(a1 + 956);
  }
  else
  {
    v16 = (float)v14 / 1000000000.0;
    v28 = v16;
    *(float *)(a1 + 936) = v16;
    v17 = *(float *)(a1 + 952);
    if ( v16 > v17 )
      *(float *)(a1 + 936) = v17;
  }
  v18 = sub_1800752B4(a1, 1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v18 + 64LL))(v18, &unk_180208BF0, 0LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v18 + 64LL))(v18, &unk_180208D10, 0LL) )
  {
    v20 = sub_180068F18(v14);
    sub_180076274(a1 + 992, v20);
    sub_1800759EC();
  }
  *(_QWORD *)(a1 + 928) = v12;
  sub_1800DD888(a1 + 368);
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  sub_18007235C((__int64 *)&v29);
  return sub_18010E9F8(v38);
}
