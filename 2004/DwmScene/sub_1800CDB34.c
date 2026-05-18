/*
 * XREFs of sub_1800CDB34 @ 0x1800CDB34
 * Callers:
 *     sub_1800CD200 @ 0x1800CD200 (sub_1800CD200.c)
 *     sub_1800CD3A8 @ 0x1800CD3A8 (sub_1800CD3A8.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180062744 @ 0x180062744 (sub_180062744.c)
 *     sub_180068A28 @ 0x180068A28 (sub_180068A28.c)
 *     sub_18006AA58 @ 0x18006AA58 (sub_18006AA58.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CDB34(__int64 a1, __int64 a2)
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
  sub_1800615B4(a2 + 24, (__int64)&v15);
  v5 = (_QWORD ***)sub_18006AA58(a2, v4);
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
  sub_180068A28(*v5, (__int64)&v13, *(_QWORD *)(a1 + 136), v9);
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
  v11 = sub_18006AB3C(a2);
  result = sub_180062744(a1, v11);
  if ( BYTE8(v15) )
    return sub_180061A34(v15);
  return result;
}
