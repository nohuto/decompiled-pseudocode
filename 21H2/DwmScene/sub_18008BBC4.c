/*
 * XREFs of sub_18008BBC4 @ 0x18008BBC4
 * Callers:
 *     sub_18008B704 @ 0x18008B704 (sub_18008B704.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_180087AC4 @ 0x180087AC4 (sub_180087AC4.c)
 *     sub_18008C604 @ 0x18008C604 (sub_18008C604.c)
 *     sub_18008D440 @ 0x18008D440 (sub_18008D440.c)
 *     sub_18008FB40 @ 0x18008FB40 (sub_18008FB40.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008BBC4(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  signed __int64 v11; // rcx
  __int64 v12; // rbx
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v21; // [rsp+48h] [rbp-B8h]
  __int128 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  _QWORD *v24; // [rsp+68h] [rbp-98h]
  char v25[8]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-88h]
  __int64 v27[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v30[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v31[8]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v33; // [rsp+180h] [rbp+80h] BYREF

  v19 = a2;
  v33 = a3;
  v24 = a4;
  sub_18006714C(a1 + 16, a2);
  if ( !*a4 )
  {
    v9 = (__int64 *)sub_18008D440(*a5, v25);
    std::shared_ptr<__ExceptionPtr>::operator=(a4, v9);
    v10 = v26;
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  if ( a3 == -1LL )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 1uLL);
    v33 = v11;
  }
  else
  {
    v11 = v33;
    if ( v33 >= *(_QWORD *)(a1 + 72) )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 72), v33 + 1);
      v11 = v33;
    }
  }
  if ( v11 == -1 )
  {
    sub_18000FE28(v28);
    v18 = sub_18000FE28(v27);
    sub_18002D8C4(v31, v18, 318, (__int64)v28, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v31;
  }
  v23 = *(_QWORD *)(a1 + 128);
  v12 = v23;
  sub_18008FB40(a1 + 120, &v19, &v33);
  if ( v19 != v12 )
  {
    sub_18000FE28(v30);
    v17 = sub_18000FE28(v29);
    sub_18002D8C4(pExceptionObject, v17, 323, (__int64)v30, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a4 )
  {
    v13 = (volatile signed __int32 *)(*a5 + 76LL);
    v21 = v13;
    while ( _interlockedbittestandset(v13, 0) )
      v13 = v21;
    v20 = 0LL;
    sub_18008C604(a1, &v20, &v33);
    v22 = 0LL;
    v14 = a4[1];
    if ( v14 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
      v14 = a4[1];
    }
    *(_QWORD *)&v22 = *a4;
    *((_QWORD *)&v22 + 1) = v14;
    sub_180087AC4(v20, (__int64 *)&v22);
    *(_BYTE *)(*a5 + 72LL) = 1;
    *(_OWORD *)a2 = v20;
    v20 = 0uLL;
    *v21 = 0;
    v15 = (volatile signed __int32 *)a4[1];
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          goto LABEL_25;
      }
    }
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    v15 = (volatile signed __int32 *)a4[1];
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
LABEL_25:
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  return a2;
}
