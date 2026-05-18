/*
 * XREFs of sub_1800CC478 @ 0x1800CC478
 * Callers:
 *     sub_1800CC860 @ 0x1800CC860 (sub_1800CC860.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800680A4 @ 0x1800680A4 (sub_1800680A4.c)
 *     sub_1800CC56C @ 0x1800CC56C (sub_1800CC56C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800CC478(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // rbx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+38h] [rbp-20h] BYREF

  *(_OWORD *)a2 = 0LL;
  sub_1800CC56C(a1 + 496);
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
LABEL_11:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_11;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v8 = *(_OWORD *)(a1 + 8);
  sub_1800680A4(*a2, &v8);
  v6 = (volatile signed __int32 *)*((_QWORD *)&v8 + 1);
  if ( *((_QWORD *)&v8 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
