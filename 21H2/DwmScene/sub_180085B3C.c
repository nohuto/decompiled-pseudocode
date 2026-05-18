/*
 * XREFs of sub_180085B3C @ 0x180085B3C
 * Callers:
 *     sub_180101A10 @ 0x180101A10 (sub_180101A10.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180085B3C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rsi
  __int64 v7; // r8
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdx
  signed __int32 v10; // eax
  int v12; // [rsp+20h] [rbp-58h]
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-30h] BYREF

  sub_180089274(a1);
  *(_OWORD *)a2 = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
LABEL_23:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_23;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  *a2 = *(_QWORD *)(a1 + 8);
  a2[1] = *(_QWORD *)(a1 + 16);
  v12 = 3;
  while ( 1 )
  {
    v6 = *a2;
    sub_180089274(*a2);
    v7 = 0LL;
    v8 = 0LL;
    v9 = *(_QWORD *)(v6 + 64);
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
        {
          v7 = *(_QWORD *)(v6 + 56);
          v8 = *(volatile signed __int32 **)(v6 + 64);
          break;
        }
      }
    }
    v12 |= 4u;
    v14[0] = v7;
    v14[1] = v8;
    if ( !v7 )
      break;
    std::shared_ptr<__ExceptionPtr>::operator=(a2, v14);
    if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a2;
}
