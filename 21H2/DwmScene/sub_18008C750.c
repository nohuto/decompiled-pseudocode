/*
 * XREFs of sub_18008C750 @ 0x18008C750
 * Callers:
 *     sub_180087AC4 @ 0x180087AC4 (sub_180087AC4.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18008F9D4 @ 0x18008F9D4 (sub_18008F9D4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008C750(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  _QWORD *v6; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  v6 = a2;
  if ( !*a2 )
  {
    sub_18000FE28(v8);
    v5 = sub_18000FE28(v7);
    sub_18002D8C4(pExceptionObject, v5, 936, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = *(_QWORD **)(*a2 + 368LL);
  result = sub_18008F9D4(a1 + 120, &v6);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
