/*
 * XREFs of sub_18006BD60 @ 0x18006BD60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006BD60(_QWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  _BYTE v9[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v10; // [rsp+38h] [rbp-51h]
  _QWORD v11[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v14; // [rsp+C0h] [rbp+37h]

  v2 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v9);
  v14 = 0LL;
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( !v4 )
        break;
      if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) )
      {
        v14 = *(_OWORD *)v2;
        break;
      }
    }
  }
  v5 = v10;
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, v3, v2);
  if ( !(_QWORD)v14 )
  {
    sub_18000FE28(v12);
    v8 = (unsigned int)sub_18000FE28(v11);
    sub_1800D1210((unsigned int)pExceptionObject, v8, 72, (unsigned int)v12, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_1800DC7F8(a1[26], v14, v2);
  if ( *((_QWORD *)&v14 + 1) )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v7 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  return result;
}
