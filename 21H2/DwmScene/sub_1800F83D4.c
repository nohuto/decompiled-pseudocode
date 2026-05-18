/*
 * XREFs of sub_1800F83D4 @ 0x1800F83D4
 * Callers:
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800ED8D0 @ 0x1800ED8D0 (sub_1800ED8D0.c)
 *     sub_1800EE3D4 @ 0x1800EE3D4 (sub_1800EE3D4.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F83D4(__int64 a1, int a2, int a3, int a4, char a5)
{
  char v6; // cl
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int128 v15; // [rsp+50h] [rbp-10h] BYREF

  v6 = a5 & 0xE | 1;
  if ( *(_BYTE *)(a1 + 124) != v6
    || *(_DWORD *)(a1 + 112) != a2
    || *(_DWORD *)(a1 + 116) != a3
    || *(_DWORD *)(a1 + 120) != a4
    || (result = a5 & 1, *(_BYTE *)(a1 + 125) != (_BYTE)result) )
  {
    *(_DWORD *)(a1 + 112) = a2;
    *(_BYTE *)(a1 + 124) = v6;
    *(_BYTE *)(a1 + 125) = a5 & 1;
    *(_DWORD *)(a1 + 116) = a3;
    v12 = 0LL;
    *(_DWORD *)(a1 + 120) = a4;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 48), (__int64 *)&v12);
    if ( *((_QWORD *)&v12 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v8 = *((_QWORD *)&v12 + 1);
        (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
      }
    }
    v13 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 64), (__int64 *)&v13);
    if ( *((_QWORD *)&v13 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v9 = *((_QWORD *)&v13 + 1);
        (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
      }
    }
    v14 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 80), (__int64 *)&v14);
    if ( *((_QWORD *)&v14 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v10 = *((_QWORD *)&v14 + 1);
        (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
      }
    }
    v15 = 0LL;
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), (__int64 *)&v15);
    if ( *((_QWORD *)&v15 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v11 = *((_QWORD *)&v15 + 1);
        (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
      }
    }
  }
  return result;
}
