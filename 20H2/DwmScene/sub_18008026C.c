/*
 * XREFs of sub_18008026C @ 0x18008026C
 * Callers:
 *     sub_1800FC140 @ 0x1800FC140 (sub_1800FC140.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008026C(__int64 a1, _QWORD *a2)
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

  sub_1800839A4(a1);
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
    sub_1800839A4(*a2);
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
