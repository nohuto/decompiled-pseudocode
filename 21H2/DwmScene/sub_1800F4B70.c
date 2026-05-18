/*
 * XREFs of sub_1800F4B70 @ 0x1800F4B70
 * Callers:
 *     sub_180091EE0 @ 0x180091EE0 (sub_180091EE0.c)
 *     sub_18009A450 @ 0x18009A450 (sub_18009A450.c)
 *     sub_1800F46B8 @ 0x1800F46B8 (sub_1800F46B8.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     get_srw_lock @ 0x1800F2BE8 (get_srw_lock.c)
 *     sub_1800F39EC @ 0x1800F39EC (sub_1800F39EC.c)
 *     sub_1800F3AFC @ 0x1800F3AFC (sub_1800F3AFC.c)
 *     sub_1800F40B8 @ 0x1800F40B8 (sub_1800F40B8.c)
 *     sub_1800F4E38 @ 0x1800F4E38 (sub_1800F4E38.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F4B70(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 *v10; // rcx
  __int64 *v11; // r8
  __int64 *v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 srw_lock; // rax
  volatile signed __int32 *v18; // rbx
  __int64 *v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-A9h]
  __int64 v21; // [rsp+38h] [rbp-A1h] BYREF
  volatile signed __int32 *v22; // [rsp+40h] [rbp-99h]
  __int64 *v23; // [rsp+48h] [rbp-91h]
  __int64 v24; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v25[4]; // [rsp+60h] [rbp-79h] BYREF
  _QWORD v26[4]; // [rsp+80h] [rbp-59h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+A0h] [rbp-39h] BYREF
  unsigned int v28; // [rsp+E0h] [rbp+7h] BYREF
  __int128 v29; // [rsp+E8h] [rbp+Fh] BYREF

  v23 = a2;
  result = sub_18007040C(*a2);
  if ( !(_DWORD)result || (result = *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 32) == result) )
  {
    v6 = (volatile signed __int32 *)a2[1];
    if ( !v6 )
      return result;
    goto LABEL_25;
  }
  sub_18006714C(*a2 + 24, v5);
  v7 = a1 + 128;
  if ( !*(_QWORD *)(a1 + 128) )
  {
    v8 = (_QWORD *)sub_1800703D4(*a2);
    sub_1800F39EC(v8, &v21, 1);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 128), &v21);
    v9 = v22;
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  result = sub_18007040C(*a2);
  v20 = result;
  v10 = *(__int64 **)(*(_QWORD *)v7 + 112LL);
  v11 = v10;
  v12 = (__int64 *)v10[1];
  if ( *((_BYTE *)v12 + 25) )
    goto LABEL_17;
  do
  {
    if ( *((_DWORD *)v12 + 8) >= (unsigned int)result )
    {
      v11 = v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  while ( !*((_BYTE *)v12 + 25) );
  if ( v11 == v10 || (unsigned int)result < *((_DWORD *)v11 + 8) )
LABEL_17:
    v11 = *(__int64 **)(*(_QWORD *)v7 + 112LL);
  if ( v11 == v10 )
  {
    v29 = 0LL;
    sub_1800F3AFC(*a2, (__int64 *)&v29);
    v13 = v29;
    v14 = *(_QWORD *)(a1 + 32);
    v15 = (*(_QWORD *)(a1 + 40) - v14) >> 2;
    v16 = *(_QWORD *)v29;
    srw_lock = get_srw_lock(*(_QWORD *)(a1 + 16));
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(v16 + 40))(
            v13,
            v14,
            (unsigned int)(4 * v15),
            2LL,
            srw_lock) )
    {
      sub_18000FE28(v26);
      v19 = sub_18000FE28(v25);
      sub_18002D8C4(pExceptionObject, v19, 189, (__int64)v26, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    sub_1800F4E38(*(_QWORD *)(a1 + 128), &v29);
    v28 = v20;
    sub_1800F40B8((__int64 **)(a1 + 88), (__int64)&v24, &v28);
    result = v24;
    *(_DWORD *)(v24 + 32) = 0;
    v18 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
    if ( *((_QWORD *)&v29 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        result = (unsigned int)_InterlockedDecrement(v18 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
LABEL_25:
    result = (unsigned int)_InterlockedDecrement(v6 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
