/*
 * XREFs of sub_1800A5574 @ 0x1800A5574
 * Callers:
 *     sub_18008DDD8 @ 0x18008DDD8 (sub_18008DDD8.c)
 *     sub_18008F218 @ 0x18008F218 (sub_18008F218.c)
 *     sub_18008FA00 @ 0x18008FA00 (sub_18008FA00.c)
 *     sub_180090154 @ 0x180090154 (sub_180090154.c)
 *     sub_18009027C @ 0x18009027C (sub_18009027C.c)
 *     sub_1800A4718 @ 0x1800A4718 (sub_1800A4718.c)
 *     sub_1800E4960 @ 0x1800E4960 (sub_1800E4960.c)
 *     sub_1800E6880 @ 0x1800E6880 (sub_1800E6880.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_1800625C8 @ 0x1800625C8 (sub_1800625C8.c)
 *     sub_1800A166C @ 0x1800A166C (sub_1800A166C.c)
 *     get_srw_lock @ 0x1800ED318 (get_srw_lock.c)
 *     sub_1800ED7EC @ 0x1800ED7EC (sub_1800ED7EC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800A5574(__int64 a1, __int64 *a2)
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
    sub_18000FD48(v27);
    v18 = sub_18000FD48(v26);
    sub_180027FF4(pExceptionObject, v18, 278, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = (unsigned int)sub_1800625C8(*a2);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16 * (v4 + 6)), a2);
  result = get_srw_lock(*a2);
  if ( !*(_QWORD *)(result + 16) )
  {
    v6 = sub_1800A166C(&v23, v4);
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
    si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
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
    v22 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
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
    v24 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    LOBYTE(v23) = 0;
    result = sub_1800ED7EC(*a2, &v29);
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
