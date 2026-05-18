/*
 * XREFs of sub_1800957B0 @ 0x1800957B0
 * Callers:
 *     sub_180097BE4 @ 0x180097BE4 (sub_180097BE4.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800957B0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-79h] BYREF
  __int128 v11; // [rsp+40h] [rbp-69h] BYREF
  __int128 v12; // [rsp+50h] [rbp-59h] BYREF
  __int128 v13; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v14[4]; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v15[4]; // [rsp+90h] [rbp-19h] BYREF
  _BYTE pExceptionObject[80]; // [rsp+B0h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  if ( a2 >= (*(_QWORD *)(a1 + 112) - v2) / 88 )
  {
    sub_18000FD48(v15);
    v9 = (unsigned int)sub_18000FD48(v14);
    sub_1800CB940((unsigned int)pExceptionObject, v9, 229, (unsigned int)v15, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v3 = (_QWORD *)(v2 + 88 * a2);
  v10 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(v3 + 3, (__int64 *)&v10);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v4 = *((_QWORD *)&v10 + 1);
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
  v11 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(v3 + 5, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v5 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  v12 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(v3 + 7, (__int64 *)&v12);
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v6 = *((_QWORD *)&v12 + 1);
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  v13 = 0LL;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v3 + 9, (__int64 *)&v13);
  if ( *((_QWORD *)&v13 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v8 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  return result;
}
