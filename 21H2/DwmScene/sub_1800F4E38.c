/*
 * XREFs of sub_1800F4E38 @ 0x1800F4E38
 * Callers:
 *     sub_1800F4B70 @ 0x1800F4B70 (sub_1800F4B70.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800F4140 @ 0x1800F4140 (sub_1800F4140.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F4E38(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 result; // rax
  volatile signed __int32 *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12[4]; // [rsp+48h] [rbp-10h] BYREF

  v12[0] = *(_DWORD *)(*a2 + 88);
  sub_1800F4140(a1 + 14, (__int64)&v10, v12);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v10 + 40), a2);
  v4 = a1[13];
  if ( !v4 )
  {
LABEL_16:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_16;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v6 = a1[12];
  v7 = (volatile signed __int32 *)a1[13];
  result = *a2;
  if ( v7 )
    _InterlockedIncrement(v7 + 3);
  *(_QWORD *)(result + 104) = v6;
  v9 = *(volatile signed __int32 **)(result + 112);
  *(_QWORD *)(result + 112) = v7;
  if ( v9 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  if ( v7 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
