/*
 * XREFs of sub_180086F6C @ 0x180086F6C
 * Callers:
 *     sub_180014CA8 @ 0x180014CA8 (sub_180014CA8.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800714AC @ 0x1800714AC (sub_1800714AC.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180086F6C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  unsigned int v10; // eax
  _QWORD v11[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  v11[1] = a2;
  sub_18008933C(a1);
  v4 = *(_QWORD **)(a1 + 384);
  v5 = *(_QWORD **)(a1 + 376);
  if ( v5 == v4 )
    goto LABEL_12;
  do
  {
    if ( *v5 == *a2 )
      break;
    v5 += 2;
  }
  while ( v5 != v4 );
  if ( v5 == v4 )
  {
LABEL_12:
    sub_18000FE28(v13);
    v10 = (unsigned int)sub_18000FE28(v12);
    sub_1800D1210((unsigned int)pExceptionObject, v10, 379, (unsigned int)v13, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_1800714AC(a1 + 376, v11, (__int64)v5);
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 112LL))(*a2);
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    v8 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
