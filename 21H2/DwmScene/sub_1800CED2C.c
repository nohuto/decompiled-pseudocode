/*
 * XREFs of sub_1800CED2C @ 0x1800CED2C
 * Callers:
 *     sub_1800A6074 @ 0x1800A6074 (sub_1800A6074.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_1800CDEB4 @ 0x1800CDEB4 (sub_1800CDEB4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800CED2C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  __int64 v6; // rax
  _QWORD *i; // rsi
  _QWORD *v8; // r12
  __int128 v9; // rcx
  unsigned int v10; // ebx
  __int64 **v11; // r15
  __int64 *v12; // rcx
  __int64 *v13; // rax
  volatile signed __int32 *v14; // rbx
  __int64 *v16; // rax
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v21; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v22; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v23; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v24; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 152) )
  {
    sub_18000FE28(v19);
    v16 = sub_18000FE28(v18);
    sub_18002D8C4(pExceptionObject, v16, 78, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    v4 = a2[1];
  }
  *(_QWORD *)(a1 + 120) = *a2;
  v5 = *(volatile signed __int32 **)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v4;
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  *(_BYTE *)(a1 + 152) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v24 = 0LL;
  v25 = 0LL;
  sub_18007E228(v6, &v24);
  v8 = (_QWORD *)*((_QWORD *)&v24 + 1);
  for ( i = (_QWORD *)v24; i != v8; i += 2 )
  {
    v21 = 0LL;
    *((_QWORD *)&v9 + 1) = i[1];
    if ( *((_QWORD *)&v9 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
      *((_QWORD *)&v9 + 1) = i[1];
    }
    *(_QWORD *)&v9 = *i;
    v21 = v9;
    if ( (_QWORD)v9 )
    {
      v10 = sub_18007040C(v9);
      if ( v10 )
      {
        v11 = (__int64 **)(a1 + 136);
        v12 = *(__int64 **)(a1 + 136);
        v13 = (__int64 *)v12[1];
        if ( *((_BYTE *)v13 + 25) )
          goto LABEL_20;
        do
        {
          if ( *((_DWORD *)v13 + 8) >= v10 )
          {
            v12 = v13;
            v13 = (__int64 *)*v13;
          }
          else
          {
            v13 = (__int64 *)v13[2];
          }
        }
        while ( !*((_BYTE *)v13 + 25) );
        if ( v12 == *v11 || v10 < *((_DWORD *)v12 + 8) )
LABEL_20:
          v12 = *v11;
        if ( v12 == *v11 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64, __int128 *, _QWORD, __int128 *))(*(_QWORD *)a1 + 48LL))(a1, &v23, *a2, &v21);
          v22 = v10;
          sub_1800CDEB4((__int64 *)(a1 + 136), (__int64)&v17, &v22);
          std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v17 + 40), &v23);
          if ( !(_QWORD)v23 )
            *(_BYTE *)(a1 + 152) = 0;
          v14 = (volatile signed __int32 *)*((_QWORD *)&v23 + 1);
          if ( *((_QWORD *)&v23 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
              if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
            }
          }
        }
        *((_QWORD *)&v9 + 1) = *((_QWORD *)&v21 + 1);
      }
      else
      {
        *((_QWORD *)&v9 + 1) = *((_QWORD *)&v21 + 1);
      }
    }
    if ( *((_QWORD *)&v9 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
      }
    }
  }
  sub_180012A18((__int64 *)&v24);
  return 1;
}
