/*
 * XREFs of sub_180115870 @ 0x180115870
 * Callers:
 *     sub_1800972FC @ 0x1800972FC (sub_1800972FC.c)
 * Callees:
 *     sub_180086C14 @ 0x180086C14 (sub_180086C14.c)
 *     sub_180096E84 @ 0x180096E84 (sub_180096E84.c)
 *     sub_1801148D8 @ 0x1801148D8 (sub_1801148D8.c)
 *     sub_180114A4C @ 0x180114A4C (sub_180114A4C.c)
 *     sub_1801152BC @ 0x1801152BC (sub_1801152BC.c)
 *     sub_180115444 @ 0x180115444 (sub_180115444.c)
 *     sub_180117098 @ 0x180117098 (sub_180117098.c)
 *     sub_180117130 @ 0x180117130 (sub_180117130.c)
 *     sub_1801171C8 @ 0x1801171C8 (sub_1801171C8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180115870(
        _QWORD *a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8,
        _QWORD *a9)
{
  unsigned __int64 v11; // rsi
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  volatile signed __int32 *v16; // rsi
  volatile signed __int32 *v17; // rsi
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  volatile signed __int32 *v23; // rsi
  volatile signed __int32 *v24; // rsi
  __int64 v25; // rcx
  volatile signed __int32 *v26; // rsi
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rsi
  __int64 v30; // rcx
  const char *v31; // r8
  __int64 v32; // rcx
  volatile signed __int32 *v33; // rbx
  __int64 v34; // rcx
  volatile signed __int32 *v35; // rbx
  __int128 v39; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v40; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+80h] [rbp-A8h] BYREF
  const Spectre::Framework::GeometryProcessingException *v42; // [rsp+90h] [rbp-98h] BYREF
  _QWORD pExceptionObject[3]; // [rsp+98h] [rbp-90h] BYREF
  _QWORD *v44; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD *v45; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD *v46; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-60h] BYREF
  char v48; // [rsp+D0h] [rbp-58h]
  void *v49[2]; // [rsp+D8h] [rbp-50h] BYREF

  v11 = a2;
  v47 = (__int64)a8;
  v46 = a8;
  v44 = a9;
  if ( !(unsigned __int8)sub_1801171C8(a2, "ComputeNormals") )
  {
    v39 = 0LL;
    v46 = a8;
    v13 = *(_QWORD *)(a7 + 56);
    if ( v13 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD **))(*(_QWORD *)v13 + 16LL))(v13, &v39, &v46);
      v16 = (volatile signed __int32 *)*((_QWORD *)&v39 + 1);
      if ( *((_QWORD *)&v39 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          result = (unsigned int)_InterlockedDecrement(v16 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
      v17 = (volatile signed __int32 *)a1[1];
      goto LABEL_27;
    }
    std::_Xbad_function_call();
LABEL_53:
    sub_180096E84(pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  *(_OWORD *)v49 = 0LL;
  v48 = 0;
  v18 = v11;
  v19 = 12 * v11;
  if ( !is_mul_ok(v11, 0xCuLL) )
    v19 = -1LL;
  *(_OWORD *)v49 = 0LL;
  v20 = o__aligned_malloc(v19, 16LL);
  sub_1801152BC((__int64 *)v49, v20);
  if ( !v49[0] )
    goto LABEL_53;
  memset(v49[0], 0, 12 * v11);
  try
  {
    v45 = (_QWORD *)*a1;
    if ( a5 )
    {
      if ( !*a3 )
      {
        sub_180117130((unsigned int)v11, a6);
        sub_180115444((int)v45, v11, a6, v44, (__int64)v49[0]);
        goto LABEL_74;
      }
      sub_180117098(a4, a6);
      sub_180114A4C((int)v45, v11, *a3, a4, a6, v44, (__int64)v49[0]);
    }
    else
    {
      sub_180117098(a4, a6);
      sub_1801148D8((int)v45, v11, *a3, a4, a6, v44, (__int64)v49[0]);
    }
    v18 = v11;
  }
  catch ( Spectre::Utils::CancelledException )
  {
    throw;
  }
  catch ( const Spectre::Framework::GeometryProcessingException *v42 )
  {
    v31 = (char *)v42 + 24;
    if ( *((_QWORD *)v42 + 6) >= 0x10uLL )
      v31 = *(const char **)v31;
    sub_18011BCAC(&unk_180214B30, 3LL, v31);
    v40 = 0LL;
    v45 = v46;
    v32 = *(_QWORD *)(a7 + 56);
    if ( !v32 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD **))(*(_QWORD *)v32 + 16LL))(v32, &v40, &v45);
    v33 = (volatile signed __int32 *)*((_QWORD *)&v40 + 1);
    if ( *((_QWORD *)&v40 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      }
    }
    goto LABEL_37;
  }
  catch ( ... )
  {
    sub_18011BCAC(&unk_180214B30, 3LL, "ComputeNormals threw unexpected exception");
    v41 = 0LL;
    v44 = v46;
    v34 = *(_QWORD *)(a7 + 56);
    if ( !v34 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD **))(*(_QWORD *)v34 + 16LL))(v34, &v41, &v44);
    v35 = (volatile signed __int32 *)*((_QWORD *)&v41 + 1);
    if ( *((_QWORD *)&v41 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      }
    }
LABEL_37:
    v26 = (volatile signed __int32 *)v49[1];
    if ( v49[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v49[1] + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
      }
    }
    v28 = (volatile signed __int32 *)a1[1];
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
    result = (__int64)a3;
    v29 = (volatile signed __int32 *)a3[1];
    if ( v29 )
    {
      result = (unsigned int)_InterlockedDecrement(v29 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        result = (unsigned int)_InterlockedDecrement(v29 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
    }
    v30 = *(_QWORD *)(a7 + 56);
    if ( v30 )
    {
      LOBYTE(v27) = v30 != a7;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 32LL))(v30, v27);
      *(_QWORD *)(a7 + 56) = 0LL;
    }
    return result;
  }
LABEL_74:
  if ( (_DWORD)v11 )
  {
    v21 = 0LL;
    do
    {
      sub_180086C14((char *)v49[0] + v21);
      v21 += 12LL;
      --v18;
    }
    while ( v18 );
  }
  v22 = *(_QWORD *)(a7 + 56);
  if ( !v22 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, void **, __int64 *))(*(_QWORD *)v22 + 16LL))(v22, v49, &v47);
  v23 = (volatile signed __int32 *)v49[1];
  if ( v49[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v49[1] + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  result = (__int64)a1;
  v17 = (volatile signed __int32 *)a1[1];
LABEL_27:
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  v24 = (volatile signed __int32 *)a3[1];
  if ( v24 )
  {
    result = (unsigned int)_InterlockedDecrement(v24 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      result = (unsigned int)_InterlockedDecrement(v24 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  v25 = *(_QWORD *)(a7 + 56);
  if ( v25 )
  {
    LOBYTE(v15) = v25 != a7;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 32LL))(v25, v15);
    *(_QWORD *)(a7 + 56) = 0LL;
  }
  return result;
}
