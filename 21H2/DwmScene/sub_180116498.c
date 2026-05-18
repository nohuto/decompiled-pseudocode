/*
 * XREFs of sub_180116498 @ 0x180116498
 * Callers:
 *     sub_180097618 @ 0x180097618 (sub_180097618.c)
 * Callees:
 *     sub_180096E84 @ 0x180096E84 (sub_180096E84.c)
 *     sub_1800F6218 @ 0x1800F6218 (sub_1800F6218.c)
 *     sub_1800FB354 @ 0x1800FB354 (sub_1800FB354.c)
 *     sub_180114F0C @ 0x180114F0C (sub_180114F0C.c)
 *     sub_1801150E4 @ 0x1801150E4 (sub_1801150E4.c)
 *     sub_18011530C @ 0x18011530C (sub_18011530C.c)
 *     sub_18011535C @ 0x18011535C (sub_18011535C.c)
 *     sub_180115644 @ 0x180115644 (sub_180115644.c)
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

// Hidden C++ exception states: #wind=21
__int64 __fastcall sub_180116498(
        size_t *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int a5,
        char a6,
        unsigned int a7,
        char a8,
        __int64 a9,
        size_t a10,
        __int64 a11)
{
  unsigned __int64 v12; // rsi
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rsi
  volatile signed __int32 *v28; // rsi
  __int64 v29; // rcx
  volatile signed __int32 *v30; // rsi
  __int64 v31; // rdx
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rsi
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rsi
  __int64 v36; // rcx
  const char *v37; // r8
  __int64 v38; // rcx
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  __int64 v41; // rcx
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  __int128 v44; // [rsp+60h] [rbp-158h] BYREF
  __int128 v45; // [rsp+70h] [rbp-148h] BYREF
  __int128 v46; // [rsp+80h] [rbp-138h] BYREF
  size_t *v47; // [rsp+90h] [rbp-128h]
  __int64 *v48; // [rsp+98h] [rbp-120h]
  __int64 *v49; // [rsp+A0h] [rbp-118h]
  __int128 v50; // [rsp+A8h] [rbp-110h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-100h] BYREF
  __int128 v52; // [rsp+C8h] [rbp-F0h] BYREF
  const Spectre::Framework::GeometryProcessingException *v53; // [rsp+D8h] [rbp-E0h] BYREF
  _QWORD pExceptionObject[3]; // [rsp+E0h] [rbp-D8h] BYREF
  _QWORD v55[3]; // [rsp+F8h] [rbp-C0h] BYREF
  size_t Size; // [rsp+110h] [rbp-A8h] BYREF
  size_t v57; // [rsp+118h] [rbp-A0h] BYREF
  size_t v58; // [rsp+120h] [rbp-98h] BYREF
  __int64 v59; // [rsp+128h] [rbp-90h] BYREF
  char v60; // [rsp+130h] [rbp-88h]
  char v61; // [rsp+138h] [rbp-80h]
  void *v62[2]; // [rsp+140h] [rbp-78h] BYREF
  void *v63[2]; // [rsp+150h] [rbp-68h] BYREF
  __int128 v64; // [rsp+160h] [rbp-58h] BYREF
  __int64 v65; // [rsp+170h] [rbp-48h]

  v12 = a3;
  v47 = a1;
  v48 = a2;
  v49 = a4;
  v59 = a10;
  v58 = a10;
  *(_QWORD *)&v46 = a11;
  if ( !(unsigned __int8)sub_1801171C8(a3, "ComputeTangentsAndNormals") )
  {
    v45 = 0LL;
    v46 = 0LL;
    v58 = a10;
    v15 = *(_QWORD *)(a9 + 56);
    if ( v15 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, size_t *))(*(_QWORD *)v15 + 16LL))(
                 v15,
                 &v46,
                 &v45,
                 &v58);
      v18 = (volatile signed __int32 *)*((_QWORD *)&v46 + 1);
      if ( *((_QWORD *)&v46 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          result = (unsigned int)_InterlockedDecrement(v18 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        }
      }
      v19 = (volatile signed __int32 *)*((_QWORD *)&v45 + 1);
      goto LABEL_26;
    }
    std::_Xbad_function_call();
LABEL_68:
    sub_180096E84(pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  *(_OWORD *)v63 = 0LL;
  v60 = 0;
  v20 = 16 * v12;
  if ( !is_mul_ok(v12, 0x10uLL) )
    v20 = -1LL;
  *(_OWORD *)v63 = 0LL;
  v21 = o__aligned_malloc(v20, 16LL);
  sub_18011535C(v63, v21);
  if ( !v63[0] )
    goto LABEL_68;
  memset(v63[0], 0, 16 * v12);
  v64 = 0LL;
  v65 = 0LL;
  sub_1800FB354(&v64, (unsigned int)(2 * v12));
  *(_QWORD *)&v45 = v64;
  Size = 12 * v12;
  *(_QWORD *)&v44 = v64 + 12 * v12;
  *(_OWORD *)v62 = 0LL;
  v61 = 0;
  v22 = 12 * v12;
  if ( !is_mul_ok(v12, 0xCuLL) )
    v22 = -1LL;
  *(_OWORD *)v62 = 0LL;
  v23 = o__aligned_malloc(v22, 16LL);
  sub_18011530C(v62, v23);
  if ( !v62[0] )
  {
    sub_180096E84(v55);
    throw (std::bad_alloc *)v55;
  }
  memset(v62[0], 0, Size);
  try
  {
    Size = *a1;
    v57 = *a2;
    if ( a6 )
    {
      if ( *a4 )
      {
        sub_180117098(a5, a7);
        sub_1801150E4(Size, v12, *a4, a5, v57, a7, (_QWORD *)v46, (__int64)v62[0], v45, v44);
      }
      else
      {
        sub_180117130((unsigned int)v12, a7);
        sub_180115644(Size, v12, v57, a7, (_QWORD *)v46, (__int64)v62[0], v45, v44);
      }
    }
    else
    {
      sub_180117098(a5, a7);
      sub_180114F0C(Size, v12, *a4, a5, v57, a7, (_QWORD *)v46, (__int64)v62[0], v45, v44);
    }
  }
  catch ( Spectre::Utils::CancelledException )
  {
    throw;
  }
  catch ( const Spectre::Framework::GeometryProcessingException *v53 )
  {
    v37 = (char *)v53 + 24;
    if ( *((_QWORD *)v53 + 6) >= 0x10uLL )
      v37 = *(const char **)v37;
    sub_18011BCAC(&unk_180214B30, 3LL, v37);
    v50 = 0LL;
    v44 = 0LL;
    Size = v58;
    v38 = *(_QWORD *)(a9 + 56);
    if ( !v38 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, size_t *))(*(_QWORD *)v38 + 16LL))(v38, &v44, &v50, &Size);
    v39 = (volatile signed __int32 *)*((_QWORD *)&v44 + 1);
    if ( *((_QWORD *)&v44 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
      }
    }
    v40 = (volatile signed __int32 *)*((_QWORD *)&v50 + 1);
    if ( *((_QWORD *)&v50 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
      }
    }
    goto LABEL_44;
  }
  catch ( ... )
  {
    sub_18011BCAC(&unk_180214B30, 3LL, "ComputeTangentsAndNormals threw exception");
    v52 = 0LL;
    v51 = 0LL;
    v57 = v58;
    v41 = *(_QWORD *)(a9 + 56);
    if ( !v41 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, size_t *))(*(_QWORD *)v41 + 16LL))(v41, &v51, &v52, &v57);
    v42 = (volatile signed __int32 *)*((_QWORD *)&v51 + 1);
    if ( *((_QWORD *)&v51 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v51 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v42)(v42);
        if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
      }
    }
    v43 = (volatile signed __int32 *)*((_QWORD *)&v52 + 1);
    if ( *((_QWORD *)&v52 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
        if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
      }
    }
LABEL_44:
    v30 = (volatile signed __int32 *)v62[1];
    if ( v62[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v62[1] + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      }
    }
    sub_1800F6218((__int64 *)&v64);
    v32 = (volatile signed __int32 *)v63[1];
    if ( v63[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v63[1] + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      }
    }
    v33 = (volatile signed __int32 *)v47[1];
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      }
    }
    v34 = (volatile signed __int32 *)v48[1];
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      }
    }
    result = (__int64)v49;
    v35 = (volatile signed __int32 *)v49[1];
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
    v36 = *(_QWORD *)(a9 + 56);
    if ( v36 )
    {
      LOBYTE(v31) = v36 != a9;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 32LL))(v36, v31);
      *(_QWORD *)(a9 + 56) = 0LL;
    }
    return result;
  }
  sub_180116F40(v63[0], v12, v62[0], v45, v44, a8);
  v24 = *(_QWORD *)(a9 + 56);
  if ( !v24 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x180116C4ALL);
  }
  (*(void (__fastcall **)(__int64, void **, void **, __int64 *))(*(_QWORD *)v24 + 16LL))(v24, v63, v62, &v59);
  v25 = (volatile signed __int32 *)v62[1];
  if ( v62[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v62[1] + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  result = sub_1800F6218((__int64 *)&v64);
  v19 = (volatile signed __int32 *)v63[1];
LABEL_26:
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      result = (unsigned int)_InterlockedDecrement(v19 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v26 = (volatile signed __int32 *)a1[1];
  if ( v26 )
  {
    result = (unsigned int)_InterlockedDecrement(v26 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
      result = (unsigned int)_InterlockedDecrement(v26 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  v27 = (volatile signed __int32 *)a2[1];
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
  v28 = (volatile signed __int32 *)a4[1];
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
  v29 = *(_QWORD *)(a9 + 56);
  if ( v29 )
  {
    LOBYTE(v17) = v29 != a9;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v17);
    *(_QWORD *)(a9 + 56) = 0LL;
  }
  return result;
}
