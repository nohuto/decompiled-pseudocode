/*
 * XREFs of sub_1800A9FE8 @ 0x1800A9FE8
 * Callers:
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_18010FAC0 @ 0x18010FAC0 (sub_18010FAC0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800A565C @ 0x1800A565C (sub_1800A565C.c)
 *     sub_1800AAE44 @ 0x1800AAE44 (sub_1800AAE44.c)
 *     sub_1800F2648 @ 0x1800F2648 (sub_1800F2648.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A9FE8(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 *v3; // rsi
  __int64 v4; // rbx
  __int64 *v5; // rax
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rbx
  unsigned int v8; // esi
  _QWORD *v9; // r14
  __int64 *v10; // rax
  __int64 result; // rax
  volatile signed __int32 *v12; // rbx
  __int64 *v13; // rax
  __int128 v14; // [rsp+38h] [rbp-79h] BYREF
  __int128 v15; // [rsp+48h] [rbp-69h] BYREF
  __int128 v16; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v17[8]; // [rsp+68h] [rbp-49h] BYREF
  volatile signed __int32 *v18; // [rsp+70h] [rbp-41h]
  _QWORD v19[4]; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v20[4]; // [rsp+98h] [rbp-19h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+B8h] [rbp+7h] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_18000FE28(v20);
    v13 = sub_18000FE28(v19);
    sub_18002D8C4(pExceptionObject, v13, 457, (__int64)v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v2 = 0;
  v3 = (__int64 *)(a1 + 104);
  do
  {
    v14 = 0LL;
    v4 = *v3;
    if ( *v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = *v3;
    }
    *(_QWORD *)&v14 = *(v3 - 1);
    *((_QWORD *)&v14 + 1) = v4;
    if ( !(_QWORD)v14 )
    {
      v5 = (__int64 *)sub_1800A565C(*(__int128 **)(a1 + 440), &v16, v2);
      std::shared_ptr<__ExceptionPtr>::operator=(&v14, v5);
      v6 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
      if ( *((_QWORD *)&v16 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
          if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
        }
      }
      sub_1800F27BC(v14);
      v15 = 0LL;
      v4 = *((_QWORD *)&v14 + 1);
      if ( *((_QWORD *)&v14 + 1) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
        v4 = *((_QWORD *)&v14 + 1);
      }
      v15 = v14;
      sub_1800AAE44(a1, &v15);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      {
        v7 = *((_QWORD *)&v14 + 1);
        (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
      }
    }
    ++v2;
    v3 += 2;
  }
  while ( v2 < 0xA );
  *(_DWORD *)(a1 + 432) = 1;
  v8 = 0;
  v9 = (_QWORD *)(a1 + 96);
  do
  {
    v10 = (__int64 *)sub_1800F2648(*v9, v17);
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16 * ((int)v8 + 16LL)), v10);
    v12 = v18;
    if ( v18 )
    {
      result = (unsigned int)_InterlockedDecrement(v18 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        result = (unsigned int)_InterlockedDecrement(v12 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    ++v8;
    v9 += 2;
  }
  while ( v8 < 0xA );
  return result;
}
