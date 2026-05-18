/*
 * XREFs of sub_1800D3404 @ 0x1800D3404
 * Callers:
 *     sub_1800D2AD0 @ 0x1800D2AD0 (sub_1800D2AD0.c)
 *     sub_1800D2C78 @ 0x1800D2C78 (sub_1800D2C78.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180068014 @ 0x180068014 (sub_180068014.c)
 *     sub_18006E2F8 @ 0x18006E2F8 (sub_18006E2F8.c)
 *     sub_180070328 @ 0x180070328 (sub_180070328.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D3404(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD ***v5; // r10
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rax
  unsigned int v9; // r9d
  volatile signed __int32 *v10; // rbx
  unsigned int v11; // eax
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+48h] [rbp-20h] BYREF

  v15 = 0LL;
  sub_180066E84(a2 + 24, (__int64)&v15);
  v5 = (_QWORD ***)sub_180070328(a2, v4);
  v13 = 0LL;
  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
  {
LABEL_16:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_16;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  v13 = *(_OWORD *)(a1 + 96);
  v8 = *(_QWORD *)(a1 + 112);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 12);
  else
    v9 = 0;
  sub_18006E2F8(*v5, (__int64)&v13, *(_QWORD *)(a1 + 136), v9);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = sub_18007040C(a2);
  result = sub_180068014(a1, v11);
  if ( BYTE8(v15) )
    return sub_180067304(v15);
  return result;
}
