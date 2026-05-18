/*
 * XREFs of sub_18006A690 @ 0x18006A690
 * Callers:
 *     sub_18006B210 @ 0x18006B210 (sub_18006B210.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_180068D9C @ 0x180068D9C (sub_180068D9C.c)
 *     sub_18009AB9C @ 0x18009AB9C (sub_18009AB9C.c)
 *     sub_1800DCA4C @ 0x1800DCA4C (sub_1800DCA4C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006A690(_QWORD *a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rbx
  __m128i *p_si128; // r14
  volatile signed __int32 *v7; // rdi
  __int64 result; // rax
  __int128 v9; // [rsp+28h] [rbp-59h]
  __int128 v10; // [rsp+48h] [rbp-39h] BYREF
  __int128 v11; // [rsp+58h] [rbp-29h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+68h] [rbp-19h] BYREF
  int v13[4]; // [rsp+88h] [rbp+7h] BYREF
  __m128i si128; // [rsp+98h] [rbp+17h] BYREF
  int v15; // [rsp+A8h] [rbp+27h]
  int v16; // [rsp+ACh] [rbp+2Bh]
  __int64 v17; // [rsp+B0h] [rbp+2Fh] BYREF

  v2 = (_QWORD *)a1[498];
  v3 = a1[2];
  if ( !v3 )
  {
LABEL_22:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v4 = *(_DWORD *)(v3 + 8);
    if ( !v4 )
      goto LABEL_22;
  }
  while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) );
  *(_QWORD *)&v9 = a1[1];
  v5 = a1[2];
  *((_QWORD *)&v9 + 1) = v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801C53B0);
  v15 = 4;
  v16 = 5;
  p_si128 = &si128;
  do
  {
    *(_OWORD *)v13 = 0LL;
    v10 = 0LL;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = *((_QWORD *)&v9 + 1);
    }
    v10 = v9;
    sub_180068D9C(v2, v13, &v10);
    sub_18006294C(*(__int64 *)v13, 2, 0);
    sub_18009AB9C(v13[0]);
    v11 = 0LL;
    if ( *(_QWORD *)&v13[2] )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&v13[2] + 8LL));
      v5 = *((_QWORD *)&v9 + 1);
    }
    v11 = *(_OWORD *)v13;
    sub_1800DCA4C(a1 + 76, &v11, p_si128->m128i_u32[0]);
    v7 = *(volatile signed __int32 **)&v13[2];
    if ( *(_QWORD *)&v13[2] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v13[2] + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      v5 = *((_QWORD *)&v9 + 1);
    }
    p_si128 = (__m128i *)((char *)p_si128 + 4);
    result = (__int64)&v17;
  }
  while ( p_si128 != (__m128i *)&v17 );
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
    if ( !(_DWORD)result )
    {
      (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 12LL));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
    }
  }
  return result;
}
