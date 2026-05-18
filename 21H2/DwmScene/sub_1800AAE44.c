/*
 * XREFs of sub_1800AAE44 @ 0x1800AAE44
 * Callers:
 *     sub_1800936A8 @ 0x1800936A8 (sub_1800936A8.c)
 *     sub_180094AE8 @ 0x180094AE8 (sub_180094AE8.c)
 *     sub_1800952D0 @ 0x1800952D0 (sub_1800952D0.c)
 *     sub_180095A24 @ 0x180095A24 (sub_180095A24.c)
 *     sub_180095B4C @ 0x180095B4C (sub_180095B4C.c)
 *     sub_1800A9FE8 @ 0x1800A9FE8 (sub_1800A9FE8.c)
 *     sub_1800EA230 @ 0x1800EA230 (sub_1800EA230.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180067E98 @ 0x180067E98 (sub_180067E98.c)
 *     sub_1800A6F3C @ 0x1800A6F3C (sub_1800A6F3C.c)
 *     get_srw_lock @ 0x1800F2BE8 (get_srw_lock.c)
 *     sub_1800F30BC @ 0x1800F30BC (sub_1800F30BC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800AAE44(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  _QWORD *v6; // rax
  __m128i *v7; // rax
  const void *v8; // rdx
  __m128i *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  signed __int32 v16; // eax
  bool v17; // zf
  __int64 *v18; // rax
  __m128i v19; // [rsp+30h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+40h] [rbp-C0h]
  __m128i Src; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  __m128i v24; // [rsp+80h] [rbp-80h]
  __int64 *v25; // [rsp+90h] [rbp-70h]
  __int64 v26[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v27[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v29; // [rsp+120h] [rbp+20h] BYREF
  __int128 v30; // [rsp+130h] [rbp+30h]

  v25 = a2;
  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_18000FE28(v27);
    v18 = sub_18000FE28(v26);
    sub_18002D8C4(pExceptionObject, v18, 278, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = (unsigned int)sub_180067E98(*a2);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16 * (v4 + 6)), a2);
  result = get_srw_lock(*a2);
  if ( !*(_QWORD *)(result + 16) )
  {
    v6 = sub_1800A6F3C(&v23, v4);
    v7 = (__m128i *)std::string::append(v6, " (", 2uLL);
    v22 = 0LL;
    Src = *v7;
    v22 = v7[1];
    v7[1].m128i_i64[0] = 0LL;
    v7[1].m128i_i64[1] = 15LL;
    v7->m128i_i8[0] = 0;
    v8 = (const void *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 40) >= 0x10uLL )
      v8 = *(const void **)(a1 + 16);
    v9 = (__m128i *)std::string::append(&Src, v8, *(_QWORD *)(a1 + 32));
    si128 = 0LL;
    v19 = *v9;
    si128 = v9[1];
    v9[1].m128i_i64[0] = 0LL;
    v9[1].m128i_i64[1] = 15LL;
    v9->m128i_i8[0] = 0;
    v10 = std::string::append(&v19, ")", 1uLL);
    v30 = 0LL;
    v29 = *(_OWORD *)v10;
    v30 = *((_OWORD *)v10 + 1);
    v10[2] = 0LL;
    v10[3] = 15LL;
    *(_BYTE *)v10 = 0;
    if ( si128.m128i_i64[1] >= 0x10uLL )
    {
      v11 = v19.m128i_i64[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v11 = *(_QWORD *)(v19.m128i_i64[0] - 8);
        if ( (unsigned __int64)(v19.m128i_i64[0] - v11 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v11, si128.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v11);
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    v19.m128i_i8[0] = 0;
    if ( v22.m128i_i64[1] >= 0x10uLL )
    {
      v12 = Src.m128i_i64[0];
      if ( (unsigned __int64)(v22.m128i_i64[1] + 1) >= 0x1000 )
      {
        v12 = *(_QWORD *)(Src.m128i_i64[0] - 8);
        if ( (unsigned __int64)(Src.m128i_i64[0] - v12 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v12, v22.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v12);
    }
    v22 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    Src.m128i_i8[0] = 0;
    if ( v24.m128i_i64[1] >= 0x10uLL )
    {
      v13 = v23;
      if ( (unsigned __int64)(v24.m128i_i64[1] + 1) >= 0x1000 )
      {
        v13 = *(_QWORD *)(v23 - 8);
        if ( (unsigned __int64)(v23 - v13 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v13, v24.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v13);
    }
    v24 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    LOBYTE(v23) = 0;
    result = sub_1800F30BC(*a2, &v29);
    if ( *((_QWORD *)&v30 + 1) >= 0x10uLL )
    {
      v14 = v29;
      if ( (unsigned __int64)(*((_QWORD *)&v30 + 1) + 1LL) >= 0x1000 )
      {
        v14 = *(_QWORD *)(v29 - 8);
        if ( (unsigned __int64)(v29 - v14 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v14, *((_QWORD *)&v30 + 1) + 40LL);
          __debugbreak();
        }
      }
      result = j_j__o_free(v14);
    }
  }
  v15 = (volatile signed __int32 *)a2[1];
  if ( v15 )
  {
    v16 = _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF);
    v17 = v16 == 1;
    result = (unsigned int)(v16 - 1);
    if ( v17 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return result;
}
