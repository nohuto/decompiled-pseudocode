/*
 * XREFs of sub_1800B2294 @ 0x1800B2294
 * Callers:
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800B2294(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
  {
LABEL_13:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v4 = *(_DWORD *)(v3 + 8);
    if ( !v4 )
      goto LABEL_13;
  }
  while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) );
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(volatile signed __int32 **)(a1 + 16);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v6 )
    _InterlockedIncrement(v6 + 2);
  *a2 = v5;
  a2[1] = v6;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
