/*
 * XREFs of sub_1800F4650 @ 0x1800F4650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_18008CE5C @ 0x18008CE5C (sub_18008CE5C.c)
 *     sub_18008CFA4 @ 0x18008CFA4 (sub_18008CFA4.c)
 *     sub_18008CFC4 @ 0x18008CFC4 (sub_18008CFC4.c)
 *     sub_180095AD0 @ 0x180095AD0 (sub_180095AD0.c)
 *     sub_180097B10 @ 0x180097B10 (sub_180097B10.c)
 *     sub_180097B58 @ 0x180097B58 (sub_180097B58.c)
 *     sub_1800AC348 @ 0x1800AC348 (sub_1800AC348.c)
 *     sub_1800AC570 @ 0x1800AC570 (sub_1800AC570.c)
 *     sub_1800F00AC @ 0x1800F00AC (sub_1800F00AC.c)
 *     sub_1800F0318 @ 0x1800F0318 (sub_1800F0318.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800F4650(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rdx
  signed __int32 v15; // eax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  __m128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  _QWORD **v22; // rax
  volatile signed __int32 *v23; // rbx
  __int64 v24; // r10
  __int64 v25; // rdx
  signed __int32 v26; // eax
  volatile signed __int32 *v27; // rbx
  __int64 v28; // rcx
  __int64 result; // rax
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int128 v32; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+70h] [rbp-98h] BYREF
  __int128 v36; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v37[3]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+A8h] [rbp-60h]
  _QWORD v39[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v40[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v41[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v42[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v43; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v44[2]; // [rsp+108h] [rbp+0h] BYREF
  __m128i si128; // [rsp+118h] [rbp+10h]
  _QWORD *v46; // [rsp+128h] [rbp+20h]
  _QWORD *v47; // [rsp+130h] [rbp+28h]
  _BYTE v48[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v49; // [rsp+140h] [rbp+38h]
  __int128 v50; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v51[24]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+170h] [rbp+68h] BYREF
  __m128i v53; // [rsp+188h] [rbp+80h]

  v46 = a4;
  v47 = a5;
  v32 = 0LL;
  v9 = *(_QWORD *)(a1 + 240);
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = *(_QWORD *)(a1 + 240);
  }
  *(_QWORD *)&v32 = *(_QWORD *)(a1 + 232);
  *((_QWORD *)&v32 + 1) = v9;
  sub_1800AC570(*(_QWORD *)(a1 + 24), (__int64 *)&v32);
  *(_OWORD *)v41 = 0LL;
  sub_1800AC348(*(_QWORD *)(a1 + 24), v41);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v33 = 0LL;
  v10 = *(_QWORD *)(a1 + 256);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = *(_QWORD *)(a1 + 256);
  }
  *(_QWORD *)&v33 = *(_QWORD *)(a1 + 248);
  *((_QWORD *)&v33 + 1) = v10;
  v11 = (__int64 *)(a1 + 72);
  sub_180097B58(*(_QWORD *)(a1 + 72), &v33);
  sub_18008CFA4(*(_QWORD *)(a1 + 248), -1LL, 0);
  sub_18008CFC4(*(_QWORD **)(a1 + 248), 0, 0, 2);
  v39[0] = *a5;
  v39[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_1800F00AC(*(_QWORD *)(a1 + 200), &qword_18020D148, v39);
  v34 = 0LL;
  v12 = *(_QWORD *)(a1 + 48);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *(_QWORD *)(a1 + 48);
  }
  *(_QWORD *)&v34 = *(_QWORD *)(a1 + 40);
  *((_QWORD *)&v34 + 1) = v12;
  sub_1800F0318(*(_QWORD *)(a1 + 200), (__int64)&qword_18020D148, &v34);
  v38 = 15LL;
  v37[2] = 13LL;
  strcpy((char *)v37, "Bloom Phase 1");
  v13 = *(_QWORD *)(a1 + 24);
  v35 = 0LL;
  v14 = *(_QWORD *)(a2 + 16);
  if ( !v14 )
  {
LABEL_48:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v15 = *(_DWORD *)(v14 + 8);
    if ( !v15 )
      goto LABEL_48;
  }
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) );
  v35 = *(_OWORD *)(a2 + 8);
  (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64, _QWORD *))(*(_QWORD *)v13 + 208LL))(
    v13,
    &v35,
    a3,
    a1 + 72,
    v37);
  v16 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
  if ( *((_QWORD *)&v35 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  if ( v38 >= 0x10 )
  {
    v17 = v37[0];
    if ( v38 + 1 >= 0x1000 )
    {
      v17 = *(_QWORD *)(v37[0] - 8LL);
      if ( (unsigned __int64)(v37[0] - v17 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v17, v38 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v17);
  }
  v18 = (__m128)*(unsigned int *)(a1 + 280);
  v18.m128_f32[0] = fmaxf(v18.m128_f32[0], 0.0);
  v18.m128_f32[0] = fminf(v18.m128_f32[0], 1.0);
  v40[0] = *a4;
  v40[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  sub_1800F00AC(*(_QWORD *)(a1 + 200), &qword_18020D148, v40);
  sub_18008CE5C(*(_QWORD *)(a1 + 248), (__int64)&qword_18020CFE8, 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v19 = sub_18006AB04(a2);
  v20 = sub_1800752B4(v19, 1);
  v21 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v20 + 72LL))(v20, &unk_18020A0D0, 14LL);
  v22 = (_QWORD **)sub_180095AD0(*v11, (__int64)v48);
  sub_18008CFC4(*v22, v21, 0, 2);
  v23 = v49;
  if ( v49 )
  {
    if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  v53 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), (__m128)xmmword_18020DC08);
  v42[0] = v53.m128i_i64[0];
  v42[1] = _mm_srli_si128(v53, 8).m128i_u64[0];
  sub_180097B10((_DWORD *)*v11, v42);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v44[0]) = 0;
  sub_18000FB34(v44, 0x13uLL, 0LL, "Bloom Scene Overlay");
  v24 = *(_QWORD *)(a1 + 24);
  v36 = 0LL;
  v25 = *(_QWORD *)(a2 + 16);
  if ( !v25 )
  {
LABEL_49:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v51);
    throw (std::bad_weak_ptr *)v51;
  }
  do
  {
    v26 = *(_DWORD *)(v25 + 8);
    if ( !v26 )
      goto LABEL_49;
  }
  while ( v26 != _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26) );
  v36 = *(_OWORD *)(a2 + 8);
  (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64, __int64 *))(*(_QWORD *)v24 + 208LL))(
    v24,
    &v36,
    a3,
    a1 + 72,
    v44);
  v27 = (volatile signed __int32 *)*((_QWORD *)&v36 + 1);
  if ( *((_QWORD *)&v36 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v28 = v44[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v28 = *(_QWORD *)(v44[0] - 8);
      if ( (unsigned __int64)(v44[0] - v28 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v28, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v28);
  }
  v50 = xmmword_18020DC08;
  sub_180097B10((_DWORD *)*v11, &v50);
  v43 = 0LL;
  result = sub_1800F00AC(*(_QWORD *)(a1 + 200), &qword_18020D148, &v43);
  v30 = (volatile signed __int32 *)a4[1];
  if ( v30 )
  {
    result = (unsigned int)_InterlockedDecrement(v30 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
      result = (unsigned int)_InterlockedDecrement(v30 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
    }
  }
  v31 = (volatile signed __int32 *)a5[1];
  if ( v31 )
  {
    result = (unsigned int)_InterlockedDecrement(v31 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      result = (unsigned int)_InterlockedDecrement(v31 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  return result;
}
