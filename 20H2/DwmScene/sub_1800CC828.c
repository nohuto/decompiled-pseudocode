/*
 * XREFs of sub_1800CC828 @ 0x1800CC828
 * Callers:
 *     sub_1800CC680 @ 0x1800CC680 (sub_1800CC680.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     sub_1800CBC74 @ 0x1800CBC74 (sub_1800CBC74.c)
 *     sub_1800CBFB0 @ 0x1800CBFB0 (sub_1800CBFB0.c)
 *     sub_1800CC134 @ 0x1800CC134 (sub_1800CC134.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CC828(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  unsigned int v5; // r15d
  __int64 *v6; // r14
  char v7; // si
  int v8; // ecx
  char v9; // al
  __int64 result; // rax
  __int64 v11; // rsi
  volatile signed __int32 *v12; // rbx
  signed __int32 v13; // eax
  bool v14; // zf
  __int64 *v15; // rax
  __int64 v16; // [rsp+40h] [rbp-79h] BYREF
  __int64 v17; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v18[4]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v19[4]; // [rsp+80h] [rbp-39h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+A0h] [rbp-19h] BYREF
  unsigned int v21; // [rsp+E0h] [rbp+27h] BYREF
  unsigned int v22[10]; // [rsp+E8h] [rbp+2Fh] BYREF

  v4 = *a2;
  v5 = *(_DWORD *)(*a2 + 88);
  v6 = (__int64 *)(a1 + 144);
  v7 = 1;
  if ( *(_QWORD *)(a1 + 152) && (*(_DWORD *)(a1 + 152) != 1 || *(_DWORD *)(*(_QWORD *)*v6 + 32LL) != v5) )
  {
    v7 = 0;
    v8 = *(_DWORD *)(a1 + 96);
    if ( v8 != *(_DWORD *)(v4 + 96) )
      goto LABEL_19;
    if ( v8 )
    {
      if ( v8 != 1 )
        goto LABEL_19;
      v9 = sub_1800CBC74((__int64 *)(a1 + 112), (_QWORD *)(v4 + 112));
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v4 + 104);
    }
    if ( v9 )
      goto LABEL_10;
LABEL_19:
    sub_18000FD48(v19);
    v15 = sub_18000FD48(v18);
    sub_1800CB940(pExceptionObject, v15, 177LL, (__int64)v19, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
LABEL_10:
  v21 = v5;
  sub_1800CC134(v6, (__int64)&v16, &v21);
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v16 + 40), a2);
  if ( v7 )
  {
    v22[0] = v5;
    sub_1800CC134(v6, (__int64)&v17, v22);
    v11 = *(_QWORD *)(v17 + 40);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(v11 + 96);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(v11 + 104);
    if ( a1 + 112 != v11 + 112 )
      sub_1800CBFB0((__int64 *)(a1 + 112), *(char **)(v11 + 112), *(char **)(v11 + 120));
    result = *(_QWORD *)(v11 + 136);
    *(_QWORD *)(a1 + 136) = result;
  }
  v12 = (volatile signed __int32 *)a2[1];
  if ( v12 )
  {
    v13 = _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF);
    v14 = v13 == 1;
    result = (unsigned int)(v13 - 1);
    if ( v14 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return result;
}
