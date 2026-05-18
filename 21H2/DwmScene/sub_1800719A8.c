/*
 * XREFs of sub_1800719A8 @ 0x1800719A8
 * Callers:
 *     sub_180078800 @ 0x180078800 (sub_180078800.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18006EF68 @ 0x18006EF68 (sub_18006EF68.c)
 *     sub_18006F0B8 @ 0x18006F0B8 (sub_18006F0B8.c)
 *     sub_180076564 @ 0x180076564 (sub_180076564.c)
 *     sub_180084514 @ 0x180084514 (sub_180084514.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800719A8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 *v12; // [rsp+20h] [rbp-59h] BYREF
  __int128 v13; // [rsp+28h] [rbp-51h] BYREF
  __int64 v14; // [rsp+38h] [rbp-41h] BYREF
  __int64 v15; // [rsp+40h] [rbp-39h]
  __int128 v16; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v17; // [rsp+60h] [rbp-19h]
  __int64 *v18; // [rsp+68h] [rbp-11h]
  _BYTE pExceptionObject[32]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v20; // [rsp+90h] [rbp+17h] BYREF

  sub_18008933C(a1);
  sub_180089274(a1);
  v12 = 0LL;
  v17 = *(__int64 **)(a1 + 384);
  v18 = *(__int64 **)(a1 + 376);
  sub_18006F0B8(&v12, v18, v17, 0);
  if ( v12 == *(__int64 **)(a1 + 384) )
  {
    v5 = 0LL;
    v15 = 0LL;
    v4 = 0LL;
  }
  else
  {
    sub_18006EF68(&v14, v12);
    v4 = v14;
    v5 = v15;
  }
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    {
      v6 = v15;
      (**(void (__fastcall ***)(__int64))v15)(v15);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v20 = 0LL;
    v13 = 0LL;
    v8 = *(_QWORD *)(a1 + 16);
    if ( !v8 )
    {
LABEL_27:
      std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
      throw (std::bad_weak_ptr *)pExceptionObject;
    }
    do
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        goto LABEL_27;
    }
    while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) );
    v13 = *(_OWORD *)(a1 + 8);
    sub_180076564(&v20, &v13);
    if ( *((_QWORD *)&v13 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v10 = *((_QWORD *)&v13 + 1);
        (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
      }
    }
    v16 = 0LL;
    if ( *((_QWORD *)&v20 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL));
    v16 = v20;
    sub_180084514(a1, &v16);
    v11 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    *(_OWORD *)a2 = v20;
  }
  return a2;
}
