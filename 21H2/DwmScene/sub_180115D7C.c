/*
 * XREFs of sub_180115D7C @ 0x180115D7C
 * Callers:
 *     sub_180097A9C @ 0x180097A9C (sub_180097A9C.c)
 * Callees:
 *     sub_180096E84 @ 0x180096E84 (sub_180096E84.c)
 *     sub_1800F6218 @ 0x1800F6218 (sub_1800F6218.c)
 *     sub_1800FB354 @ 0x1800FB354 (sub_1800FB354.c)
 *     sub_180114BC0 @ 0x180114BC0 (sub_180114BC0.c)
 *     sub_180114D64 @ 0x180114D64 (sub_180114D64.c)
 *     sub_1801153AC @ 0x1801153AC (sub_1801153AC.c)
 *     sub_180115524 @ 0x180115524 (sub_180115524.c)
 *     sub_180116F40 @ 0x180116F40 (sub_180116F40.c)
 *     sub_180117098 @ 0x180117098 (sub_180117098.c)
 *     sub_180117130 @ 0x180117130 (sub_180117130.c)
 *     sub_1801171C8 @ 0x1801171C8 (sub_1801171C8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_180115D7C(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        unsigned int a8,
        char a9,
        __int64 a10,
        __int64 a11,
        _QWORD *a12)
{
  unsigned __int64 v12; // rsi
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rdx
  volatile signed __int32 *v17; // rsi
  volatile signed __int32 *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rsi
  volatile signed __int32 *v25; // rsi
  __int64 result; // rax
  volatile signed __int32 *v27; // rsi
  volatile signed __int32 *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdx
  volatile signed __int32 *v31; // rsi
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rsi
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rsi
  __int64 v36; // rcx
  const char *v37; // r8
  __int64 v38; // rcx
  volatile signed __int32 *v39; // rbx
  __int64 v40; // rcx
  volatile signed __int32 *v41; // rbx
  __int128 v42; // [rsp+60h] [rbp-118h] BYREF
  __int128 v43; // [rsp+70h] [rbp-108h] BYREF
  __int128 v44; // [rsp+80h] [rbp-F8h] BYREF
  __int64 *v45; // [rsp+90h] [rbp-E8h]
  __int64 *v46; // [rsp+98h] [rbp-E0h]
  _QWORD *v47; // [rsp+A0h] [rbp-D8h]
  __int64 *v48; // [rsp+A8h] [rbp-D0h]
  __int64 *v49; // [rsp+B0h] [rbp-C8h]
  __int64 v50; // [rsp+B8h] [rbp-C0h]
  _QWORD *v51; // [rsp+C0h] [rbp-B8h]
  const Spectre::Framework::GeometryProcessingException *v52; // [rsp+C8h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[3]; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v57; // [rsp+100h] [rbp-78h] BYREF
  char v58; // [rsp+108h] [rbp-70h]
  void *v59[2]; // [rsp+110h] [rbp-68h] BYREF
  __int128 v60; // [rsp+120h] [rbp-58h] BYREF
  __int64 v61; // [rsp+130h] [rbp-48h]

  v12 = a4;
  v46 = a3;
  v45 = a2;
  v51 = a1;
  v47 = a1;
  v48 = a2;
  v49 = a3;
  v14 = a5;
  *(_QWORD *)&v42 = a5;
  v50 = a5;
  v57 = a11;
  v55 = a11;
  if ( !(unsigned __int8)sub_1801171C8(a4, "ComputeTangents") )
  {
    v44 = 0LL;
    v55 = a11;
    v15 = *(_QWORD *)(a10 + 56);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v15 + 16LL))(v15, &v44, &v55);
      v17 = (volatile signed __int32 *)*((_QWORD *)&v44 + 1);
      if ( *((_QWORD *)&v44 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
      v18 = (volatile signed __int32 *)a1[1];
      goto LABEL_23;
    }
    std::_Xbad_function_call();
LABEL_65:
    sub_180096E84(pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  *(_OWORD *)v59 = 0LL;
  v58 = 0;
  v19 = 16 * v12;
  if ( !is_mul_ok(v12, 0x10uLL) )
    v19 = -1LL;
  *(_OWORD *)v59 = 0LL;
  v20 = o__aligned_malloc(v19, 16LL);
  sub_1801153AC(v59, v20);
  if ( !v59[0] )
    goto LABEL_65;
  memset(v59[0], 0, 16 * v12);
  v60 = 0LL;
  v61 = 0LL;
  sub_1800FB354(&v60, (unsigned int)(2 * v12));
  try
  {
    *(_QWORD *)&v44 = v60;
    *(_QWORD *)&v43 = v60 + 12 * v12;
    v21 = *a1;
    v22 = *v45;
    v54 = *v45;
    v56 = *v46;
    if ( a7 )
    {
      if ( *(_QWORD *)v42 )
      {
        sub_180117098(a6, a8);
        v14 = v42;
        sub_180114D64(v21, v12, *(_QWORD *)v42, a6, v54, a8, a12, v44, v43);
      }
      else
      {
        sub_180117130((unsigned int)v12, a8);
        sub_180115524(v21, v12, v22, a8, a12, v44, v43);
        v14 = v42;
      }
    }
    else
    {
      sub_180117098(a6, a8);
      v14 = v42;
      sub_180114BC0(v21, v12, *(_QWORD *)v42, a6, v54, a8, a12, v44, v43);
    }
  }
  catch ( Spectre::Utils::CancelledException )
  {
    throw;
  }
  catch ( const Spectre::Framework::GeometryProcessingException *v52 )
  {
    v37 = (char *)v52 + 24;
    if ( *((_QWORD *)v52 + 6) >= 0x10uLL )
      v37 = *(const char **)v37;
    sub_18011BCAC(&unk_180214B30, 3LL, v37);
    v43 = 0LL;
    v56 = v55;
    v38 = *(_QWORD *)(a10 + 56);
    if ( !v38 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v38 + 16LL))(v38, &v43, &v56);
    v39 = (volatile signed __int32 *)*((_QWORD *)&v43 + 1);
    if ( *((_QWORD *)&v43 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
      }
    }
    goto LABEL_41;
  }
  catch ( ... )
  {
    sub_18011BCAC(&unk_180214B30, 3LL, "ComputeTangents threw exception");
    v42 = 0LL;
    v54 = v55;
    v40 = *(_QWORD *)(a10 + 56);
    if ( !v40 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v40 + 16LL))(v40, &v42, &v54);
    v41 = (volatile signed __int32 *)*((_QWORD *)&v42 + 1);
    if ( *((_QWORD *)&v42 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v41)(v41);
        if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
      }
    }
LABEL_41:
    sub_1800F6218((__int64 *)&v60);
    v31 = (volatile signed __int32 *)v59[1];
    if ( v59[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v59[1] + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      }
    }
    v32 = (volatile signed __int32 *)v47[1];
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      }
    }
    v33 = (volatile signed __int32 *)v48[1];
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      }
    }
    v34 = (volatile signed __int32 *)v49[1];
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      }
    }
    result = v50;
    v35 = *(volatile signed __int32 **)(v50 + 8);
    if ( v35 )
    {
      result = (unsigned int)_InterlockedDecrement(v35 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
        result = (unsigned int)_InterlockedDecrement(v35 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      }
    }
    v36 = *(_QWORD *)(a10 + 56);
    if ( v36 )
    {
      LOBYTE(v30) = v36 != a10;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 32LL))(v36, v30);
      *(_QWORD *)(a10 + 56) = 0LL;
    }
    return result;
  }
  sub_180116F40(v59[0], v12, v56, v44, v43, a9);
  v23 = *(_QWORD *)(a10 + 56);
  if ( !v23 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x180116496LL);
  }
  (*(void (__fastcall **)(__int64, void **, __int64 *))(*(_QWORD *)v23 + 16LL))(v23, v59, &v57);
  sub_1800F6218((__int64 *)&v60);
  v24 = (volatile signed __int32 *)v59[1];
  if ( v59[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v59[1] + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  v18 = (volatile signed __int32 *)v51[1];
LABEL_23:
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  v25 = (volatile signed __int32 *)v45[1];
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  result = (__int64)v46;
  v27 = (volatile signed __int32 *)v46[1];
  if ( v27 )
  {
    result = (unsigned int)_InterlockedDecrement(v27 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      result = (unsigned int)_InterlockedDecrement(v27 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  v28 = *(volatile signed __int32 **)(v14 + 8);
  if ( v28 )
  {
    result = (unsigned int)_InterlockedDecrement(v28 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      result = (unsigned int)_InterlockedDecrement(v28 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  v29 = *(_QWORD *)(a10 + 56);
  if ( v29 )
  {
    LOBYTE(v16) = v29 != a10;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v16);
    *(_QWORD *)(a10 + 56) = 0LL;
  }
  return result;
}
