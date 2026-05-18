/*
 * XREFs of sub_180099E2C @ 0x180099E2C
 * Callers:
 *     sub_180099BB8 @ 0x180099BB8 (sub_180099BB8.c)
 *     sub_18009A9F8 @ 0x18009A9F8 (sub_18009A9F8.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18009919C @ 0x18009919C (sub_18009919C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180099E2C(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  signed __int32 v6; // eax
  __int64 result; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // [rsp+28h] [rbp-50h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v13[10]; // [rsp+50h] [rbp-28h] BYREF

  v4 = *a2;
  v13[0] = *(_DWORD *)(*a2 + 88);
  sub_18009919C(a1 + 14, (__int64)&v11, v13);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v11 + 40), a2);
  v5 = a1[13];
  if ( !v5 )
  {
LABEL_20:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v6 = *(_DWORD *)(v5 + 8);
    if ( !v6 )
      goto LABEL_20;
  }
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6) );
  result = a1[12];
  v8 = (volatile signed __int32 *)a1[13];
  if ( v8 )
    _InterlockedIncrement(v8 + 3);
  *(_QWORD *)(v4 + 96) = result;
  v9 = *(volatile signed __int32 **)(v4 + 104);
  *(_QWORD *)(v4 + 104) = v8;
  if ( v9 )
  {
    result = (unsigned int)_InterlockedDecrement(v9 + 3);
    if ( !(_DWORD)result )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v10 = (volatile signed __int32 *)a2[1];
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return result;
}
