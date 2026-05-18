/*
 * XREFs of sub_1800174E8 @ 0x1800174E8
 * Callers:
 *     sub_18001AC20 @ 0x18001AC20 (sub_18001AC20.c)
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_1800329B4 @ 0x1800329B4 (sub_1800329B4.c)
 *     sub_18003EDE0 @ 0x18003EDE0 (sub_18003EDE0.c)
 *     sub_18003FE78 @ 0x18003FE78 (sub_18003FE78.c)
 *     sub_1800A02C8 @ 0x1800A02C8 (sub_1800A02C8.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800175DC @ 0x1800175DC (sub_1800175DC.c)
 *     sub_1800680A4 @ 0x1800680A4 (sub_1800680A4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800174E8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // rbx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+38h] [rbp-20h] BYREF

  *(_OWORD *)a2 = 0LL;
  sub_1800175DC(a1 + 496);
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
