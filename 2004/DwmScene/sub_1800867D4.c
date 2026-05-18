/*
 * XREFs of sub_1800867D4 @ 0x1800867D4
 * Callers:
 *     sub_180087B9C @ 0x180087B9C (sub_180087B9C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18001EF80 @ 0x18001EF80 (sub_18001EF80.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_180043BDC @ 0x180043BDC (sub_180043BDC.c)
 *     sub_180054FC4 @ 0x180054FC4 (sub_180054FC4.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_1800820A8 @ 0x1800820A8 (sub_1800820A8.c)
 *     sub_18008217C @ 0x18008217C (sub_18008217C.c)
 *     sub_180084A3C @ 0x180084A3C (sub_180084A3C.c)
 *     sub_180085270 @ 0x180085270 (sub_180085270.c)
 *     sub_1800856DC @ 0x1800856DC (sub_1800856DC.c)
 *     sub_180086D34 @ 0x180086D34 (sub_180086D34.c)
 *     sub_180087518 @ 0x180087518 (sub_180087518.c)
 *     sub_180088464 @ 0x180088464 (sub_180088464.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall sub_1800867D4(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // r15
  volatile signed __int32 *v7; // rbx
  _QWORD *v8; // rax
  const void **v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v24[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-50h]
  _QWORD *v27; // [rsp+C0h] [rbp-40h]
  _BYTE v28[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v29; // [rsp+D0h] [rbp-30h]
  _BYTE v30[16]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v31[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v32[4]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v33[32]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v34[40]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v36; // [rsp+1B8h] [rbp+B8h] BYREF
  __m128i v37; // [rsp+1C8h] [rbp+C8h]

  v27 = a2;
  pExceptionObject[8] = a3;
  sub_18006187C(a1 + 16, (__int64)a2);
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18001269C(v24, (__int64)a3);
  v6 = *(_QWORD *)sub_180087518(a1, v28, v24);
  v7 = v29;
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  if ( v6 )
  {
    v17 = sub_18001EF80(v32);
    v18 = (_QWORD *)sub_180043BDC((__int64)v33, (__int64)"Scene::CreateLayer() - a layer with ID ", (__int64)v17);
    v19 = sub_18002C218((__int64)v34, v18, " already exists");
    v20 = sub_18000FD48(v31);
    sub_180027FF4(pExceptionObject, v20, 755, v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v21 = 0LL;
  sub_180086D34(a1, &v21, &unk_1801C6AD0);
  v8 = sub_18001EF80(&v25);
  v9 = sub_180054FC4(v8, 0LL, "LayerRoot:", 0xAuLL);
  v37 = 0LL;
  v36 = *(_OWORD *)v9;
  v37 = *((__m128i *)v9 + 1);
  v9[2] = 0LL;
  v9[3] = (const void *)15;
  *(_BYTE *)v9 = 0;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v10 = v25;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v10 = *(_QWORD *)(v25 - 8);
      if ( (unsigned __int64)(v25 - v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v10);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v25) = 0;
  sub_18008217C(v21, (__int64 *)&v36);
  *(_OWORD *)a2 = 0LL;
  sub_1800856DC((__int64)a2, (__int64)a3, (__int64)&v21);
  v11 = sub_180084A3C(a1 + 88, *(_QWORD *)(a1 + 88), (__int64)a3, a2);
  sub_180085270((__int64 **)(a1 + 88), (__int64)v30, 0, (__int64)(v11 + 4), v11);
  *(_OWORD *)v22 = 0LL;
  v12 = a2[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a2[1];
  }
  v22[0] = *a2;
  v22[1] = v12;
  sub_1800820A8(v21, v22);
  v23 = 0LL;
  v13 = *((_QWORD *)&v21 + 1);
  if ( *((_QWORD *)&v21 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL));
    v13 = *((_QWORD *)&v21 + 1);
  }
  v23 = v21;
  sub_180088464(a1, &v23);
  if ( v37.m128i_i64[1] >= 0x10uLL )
  {
    v14 = v36;
    if ( (unsigned __int64)(v37.m128i_i64[1] + 1) >= 0x1000 )
    {
      v14 = *(_QWORD *)(v36 - 8);
      if ( (unsigned __int64)(v36 - v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v37.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v14);
  }
  v37 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v36) = 0;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 0xFFFFFFFF) == 1 )
    {
      v15 = *((_QWORD *)&v21 + 1);
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  unknown_libname_101(a3);
  return a2;
}
