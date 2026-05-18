/*
 * XREFs of sub_18008599C @ 0x18008599C
 * Callers:
 *     sub_18008CF70 @ 0x18008CF70 (sub_18008CF70.c)
 *     sub_1801023A0 @ 0x1801023A0 (sub_1801023A0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008599C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  signed __int32 v10; // eax
  __int64 v11; // rbx
  int v13; // [rsp+20h] [rbp-40h]
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF

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
  v13 = 3;
  while ( 1 )
  {
    v6 = *a2;
    sub_180089274(*a2);
    v15 = 0LL;
    v7 = *(_QWORD *)(v6 + 64);
    if ( v7 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v7 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v10 + 1, v10) )
        {
          *(_QWORD *)&v15 = *(_QWORD *)(v6 + 56);
          v8 = *(_QWORD *)(v6 + 64);
          *((_QWORD *)&v15 + 1) = v8;
          goto LABEL_9;
        }
      }
    }
    v8 = *((_QWORD *)&v15 + 1);
LABEL_9:
    v13 |= 4u;
    if ( !(_QWORD)v15 )
      break;
    std::shared_ptr<__ExceptionPtr>::operator=(a2, &v15);
    if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v15 + 1);
      (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
    }
  }
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v11 = *((_QWORD *)&v15 + 1);
      (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
    }
  }
  return a2;
}
