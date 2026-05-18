/*
 * XREFs of sub_18008169C @ 0x18008169C
 * Callers:
 *     sub_180014BC8 @ 0x180014BC8 (sub_180014BC8.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18006BBDC @ 0x18006BBDC (sub_18006BBDC.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008169C(__int64 a1, _QWORD *a2)
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
  sub_180083A6C(a1);
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
    sub_18000FD48(v13);
    v10 = (unsigned int)sub_18000FD48(v12);
    sub_1800CB940((unsigned int)pExceptionObject, v10, 379, (unsigned int)v13, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18006BBDC(a1 + 376, v11, (__int64)v5);
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
