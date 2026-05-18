/*
 * XREFs of sub_1800F8650 @ 0x1800F8650
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180075A7C @ 0x180075A7C (sub_180075A7C.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     sub_1800F6930 @ 0x1800F6930 (sub_1800F6930.c)
 *     sub_1800F7244 @ 0x1800F7244 (sub_1800F7244.c)
 *     sub_18011C608 @ 0x18011C608 (sub_18011C608.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800F8650(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rsi
  int v12; // xmm1_4
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  volatile signed __int32 *v16; // rbx
  __int64 result; // rax
  volatile signed __int32 *v18; // rbx
  __int128 v19; // [rsp+38h] [rbp-C8h]
  __int128 v20; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v21[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v24; // [rsp+78h] [rbp-88h]
  _BYTE pExceptionObject[24]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C4h] [rbp-3Ch]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+D0h] [rbp-30h]
  int v32; // [rsp+D4h] [rbp-2Ch]
  __int64 v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+150h] [rbp+50h]
  __int64 v35; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v36; // [rsp+168h] [rbp+68h]

  v19 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v19 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v20 = 0LL;
  v4 = *(_QWORD *)(v19 + 80);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v20 = *(_OWORD *)(v19 + 72);
        break;
      }
    }
  }
  v6 = sub_1800EB244(a1);
  sub_180075A7C(v6, &v35, (__int64 *)&v20);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  if ( *((_QWORD *)&v19 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
  }
  v22 = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  if ( !v8 )
  {
LABEL_47:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v9 = *(_DWORD *)(v8 + 8);
    if ( !v9 )
      goto LABEL_47;
  }
  while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) );
  v10 = *(volatile signed __int32 **)(a1 + 16);
  v11 = v10 + 2;
  if ( v10 )
    _InterlockedIncrement(v11);
  *(_QWORD *)&v22 = a1 + 1900;
  *((_QWORD *)&v22 + 1) = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v12 = *(_DWORD *)(a1 + 1852);
  if ( v10 )
    _InterlockedIncrement(v11);
  v26[0] = v22;
  v26[1] = (__int64)v10;
  v27 = 0LL;
  v28 = v12;
  v29 = 0;
  v31 = 1;
  v32 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v30 = (unsigned int)(int)(float)(*(float *)(a1 + 1860) * 1000000000.0);
  v13 = v35;
  v14 = (_QWORD *)sub_18011C608(v35 + 48, v21, 6LL);
  sub_1800F6930(v13, &v23, v26, v14);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1784), &v23);
  v16 = v24;
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  *(_BYTE *)(a1 + 1898) = 1;
  result = sub_1800F7244(v26, v15);
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v11);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v18 = v36;
  if ( v36 )
  {
    result = (unsigned int)_InterlockedDecrement(v36 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      result = (unsigned int)_InterlockedDecrement(v18 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  return result;
}
