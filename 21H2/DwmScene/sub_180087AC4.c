/*
 * XREFs of sub_180087AC4 @ 0x180087AC4
 * Callers:
 *     sub_180083830 @ 0x180083830 (sub_180083830.c)
 *     sub_18008BBC4 @ 0x18008BBC4 (sub_18008BBC4.c)
 *     sub_18008D718 @ 0x18008D718 (sub_18008D718.c)
 *     sub_18008DF3C @ 0x18008DF3C (sub_18008DF3C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800843C8 @ 0x1800843C8 (sub_1800843C8.c)
 *     sub_18008581C @ 0x18008581C (sub_18008581C.c)
 *     sub_180086D34 @ 0x180086D34 (sub_180086D34.c)
 *     sub_180088D7C @ 0x180088D7C (sub_180088D7C.c)
 *     sub_180088FAC @ 0x180088FAC (sub_180088FAC.c)
 *     sub_1800890D0 @ 0x1800890D0 (sub_1800890D0.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_18008C750 @ 0x18008C750 (sub_18008C750.c)
 *     sub_18008DD34 @ 0x18008DD34 (sub_18008DD34.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
unsigned __int64 __fastcall sub_180087AC4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rdx
  signed __int32 v10; // eax
  bool v11; // r12
  bool v12; // r15
  __int64 v13; // r8
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rdx
  volatile signed __int32 *v20; // rcx
  __int64 *v21; // rax
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rbx
  __m128i v24; // xmm6
  unsigned __int64 v25; // xmm1_8
  unsigned __int64 v26; // rbx
  __int64 *v27; // rax
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rbx
  signed __int64 v30; // r14
  unsigned __int64 result; // rax
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rbx
  volatile signed __int32 *v36; // rbx
  __int64 *v37; // rax
  __int64 *v38; // rax
  __int128 v39; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v40; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v41; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+78h] [rbp-90h] BYREF
  __int128 v43; // [rsp+88h] [rbp-80h] BYREF
  __int128 v44; // [rsp+98h] [rbp-70h] BYREF
  __m128i v45; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v46; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v51; // [rsp+E8h] [rbp-20h]
  _BYTE v52[24]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v53[4]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v54[4]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v55[4]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v56[4]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v57[8]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v59; // [rsp+208h] [rbp+100h]
  __int128 v60; // [rsp+218h] [rbp+110h]

  v47 = a2;
  sub_18008933C(a1);
  v39 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
LABEL_110:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v52);
    throw (std::bad_weak_ptr *)v52;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_110;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v39 = *(_OWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a1 + 368) )
  {
    sub_18000FE28(v54);
    v38 = sub_18000FE28(v53);
    sub_18002D8C4(v57, v38, 605, (__int64)v54, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v57;
  }
  if ( *a2 )
  {
    v44 = 0LL;
    v6 = a2[1];
    if ( v6 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      v6 = a2[1];
    }
    *(_QWORD *)&v44 = *a2;
    *((_QWORD *)&v44 + 1) = v6;
    if ( (unsigned __int8)sub_180088D7C(a1, &v44) )
    {
      sub_18000FE28(v56);
      v37 = sub_18000FE28(v55);
      sub_18002D8C4(pExceptionObject, v37, 608, (__int64)v56, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  sub_180089274(a1);
  v60 = 0LL;
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v60 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v59 = 0LL;
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v59 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v41 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( (_QWORD)v60 )
  {
    v11 = *a2 == 0;
    sub_180086D34(v60, &v39);
  }
  else
  {
    v12 = *a2 != 0;
  }
  if ( *a2 )
  {
    sub_1800843C8((_QWORD *)*a2, &v39);
    v13 = *a2;
    v43 = 0LL;
    v14 = *(_QWORD *)(v13 + 80);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v14 + 8);
        if ( !v15 )
          break;
        if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
        {
          v43 = *(_OWORD *)(v13 + 72);
          break;
        }
      }
    }
    std::shared_ptr<__ExceptionPtr>::operator=(&v41, (__int64 *)&v43);
    if ( *((_QWORD *)&v43 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v16 = *((_QWORD *)&v43 + 1);
        (***((void (__fastcall ****)(_QWORD))&v43 + 1))(*((_QWORD *)&v43 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v43 + 1) + 8LL))(*((_QWORD *)&v43 + 1));
      }
    }
  }
  v17 = a2[1];
  if ( v17 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v17 + 12), 1u);
    v17 = a2[1];
  }
  *(_QWORD *)(a1 + 56) = *a2;
  v18 = *(volatile signed __int32 **)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v17;
  if ( v18 && _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
  if ( (_QWORD)v59 != (_QWORD)v41 )
  {
    sub_1800890D0(a1);
    v42 = 0LL;
    if ( *((_QWORD *)&v39 + 1) )
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 1u);
    v42 = v39;
    if ( (_QWORD)v39 )
    {
      v19 = v42;
      do
      {
        if ( *((_QWORD *)&v41 + 1) )
          _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 12LL), 1u);
        *(_QWORD *)(v19 + 72) = v41;
        v20 = *(volatile signed __int32 **)(v19 + 80);
        *(_QWORD *)(v19 + 80) = *((_QWORD *)&v41 + 1);
        if ( v20 && _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        v21 = sub_18008581C(v39, &v48, (__int64 *)&v42);
        std::shared_ptr<__ExceptionPtr>::operator=(&v42, v21);
        v22 = v49;
        if ( v49 )
        {
          if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          }
        }
        v19 = v42;
      }
      while ( (_QWORD)v42 );
    }
    if ( *((_QWORD *)&v42 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v23 = *((_QWORD *)&v42 + 1);
        (***((void (__fastcall ****)(_QWORD))&v42 + 1))(*((_QWORD *)&v42 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v42 + 1) + 8LL))(*((_QWORD *)&v42 + 1));
      }
    }
    sub_180088FAC(a1);
  }
  v40 = 0LL;
  if ( *((_QWORD *)&v39 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 1u);
  v24 = (__m128i)v39;
  v40 = (__m128i)v39;
  if ( (_QWORD)v39 )
  {
    while ( 1 )
    {
      if ( v12 && (_QWORD)v41 )
      {
        v45 = 0LL;
        v25 = _mm_srli_si128(v24, 8).m128i_u64[0];
        v26 = v25;
        if ( v25 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
          v26 = v40.m128i_u64[1];
          v24 = v40;
        }
        v45 = v24;
        sub_18008DD34(v41, &v45);
      }
      else
      {
        v26 = v40.m128i_u64[1];
      }
      if ( v11 && (_QWORD)v59 )
      {
        v46 = 0LL;
        if ( v26 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
          v24 = v40;
        }
        v46 = v24;
        sub_18008C750(v59, &v46);
      }
      v27 = sub_18008581C(v39, &v50, v40.m128i_i64);
      std::shared_ptr<__ExceptionPtr>::operator=(&v40, v27);
      v28 = v51;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        }
      }
      if ( !v40.m128i_i64[0] )
        break;
      v24 = v40;
    }
  }
  if ( v40.m128i_i64[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
    {
      v29 = v40.m128i_i64[1];
      (**(void (__fastcall ***)(__int64))v40.m128i_i64[1])(v40.m128i_i64[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40.m128i_i64[1] + 8LL))(v40.m128i_i64[1]);
    }
  }
  v30 = _InterlockedExchangeAdd64(&qword_18020F6C0, 1uLL);
  *(_QWORD *)(a1 + 208) = v30 + 1;
  result = *(_QWORD *)(a1 + 216);
  if ( v30 + 1 >= result )
    result = v30 + 1;
  *(_QWORD *)(a1 + 216) = result;
  if ( *((_QWORD *)&v41 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v32 = *((_QWORD *)&v41 + 1);
      (***((void (__fastcall ****)(_QWORD))&v41 + 1))(*((_QWORD *)&v41 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v41 + 1) + 8LL))(*((_QWORD *)&v41 + 1));
    }
  }
  if ( *((_QWORD *)&v59 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v33 = *((_QWORD *)&v59 + 1);
      (***((void (__fastcall ****)(_QWORD))&v59 + 1))(*((_QWORD *)&v59 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v59 + 1) + 8LL))(*((_QWORD *)&v59 + 1));
    }
  }
  if ( *((_QWORD *)&v60 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v60 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v34 = *((_QWORD *)&v60 + 1);
      (***((void (__fastcall ****)(_QWORD))&v60 + 1))(*((_QWORD *)&v60 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v60 + 1) + 8LL))(*((_QWORD *)&v60 + 1));
    }
  }
  if ( *((_QWORD *)&v39 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v35 = *((_QWORD *)&v39 + 1);
      (***((void (__fastcall ****)(_QWORD))&v39 + 1))(*((_QWORD *)&v39 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v39 + 1) + 8LL))(*((_QWORD *)&v39 + 1));
    }
  }
  v36 = (volatile signed __int32 *)a2[1];
  if ( v36 )
  {
    result = (unsigned int)_InterlockedDecrement(v36 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
      result = (unsigned int)_InterlockedDecrement(v36 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
    }
  }
  return result;
}
