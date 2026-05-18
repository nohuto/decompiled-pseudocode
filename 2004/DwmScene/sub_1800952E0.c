/*
 * XREFs of sub_1800952E0 @ 0x1800952E0
 * Callers:
 *     sub_1800951F0 @ 0x1800951F0 (sub_1800951F0.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180013E8C @ 0x180013E8C (sub_180013E8C.c)
 *     sub_180093D74 @ 0x180093D74 (sub_180093D74.c)
 *     sub_180094344 @ 0x180094344 (sub_180094344.c)
 *     sub_1800EB130 @ 0x1800EB130 (sub_1800EB130.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800952E0(__int64 a1, _QWORD *a2, int *a3)
{
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rcx
  _DWORD *v14; // rcx
  __int64 result; // rax
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int128 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v24; // [rsp+58h] [rbp-A8h]
  _QWORD v25[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v27[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v28[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v29[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v30[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v31[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v32[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v33[8]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v34[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v35[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD pExceptionObject[12]; // [rsp+220h] [rbp+120h] BYREF

  v24 = a2;
  v22 = 0LL;
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = a2[1];
  }
  *(_QWORD *)&v22 = *a2;
  *((_QWORD *)&v22 + 1) = v6;
  sub_1800EB130(a1, &v22);
  v23 = 0LL;
  sub_180013E8C((__int64 *)&v23, a2);
  v7 = *a3;
  if ( (*a3 & 8) != 0 )
  {
    sub_18000FD48(v26);
    v19 = sub_18000FD48(v25);
    sub_180094344(v33, v19, 82, (__int64)v26, 0);
    throw (Spectre::Engine::EngineNotImplException *)v33;
  }
  if ( (_QWORD)v23 + 104LL != a1 + 104 )
  {
    sub_180093D74((__int64 *)(v23 + 104), *(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 112));
    v7 = *a3;
  }
  if ( (v7 & 4) != 0 )
  {
    sub_18000FD48(v28);
    v20 = sub_18000FD48(v27);
    sub_180094344(v34, v20, 95, (__int64)v28, 0);
    throw (Spectre::Engine::EngineNotImplException *)v34;
  }
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v23 + 88), (_QWORD *)(a1 + 88));
  if ( (*(_BYTE *)a3 & 0x10) != 0 )
  {
    sub_18000FD48(v30);
    v21 = sub_18000FD48(v29);
    sub_180094344(v35, v21, 104, (__int64)v30, 0);
    throw (Spectre::Engine::EngineNotImplException *)v35;
  }
  v8 = v23;
  v9 = *(_QWORD *)(a1 + 144);
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
    v9 = *(_QWORD *)(a1 + 144);
  }
  *(_QWORD *)(v8 + 136) = *(_QWORD *)(a1 + 136);
  v10 = *(volatile signed __int32 **)(v8 + 144);
  *(_QWORD *)(v8 + 144) = v9;
  if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( (*(_BYTE *)a3 & 0x20) != 0 )
  {
    sub_18000FD48(v32);
    v18 = sub_18000FD48(v31);
    sub_180094344(pExceptionObject, v18, 113, (__int64)v32, 0);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  v11 = v23;
  v12 = *(_QWORD *)(a1 + 160);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
    v12 = *(_QWORD *)(a1 + 160);
  }
  *(_QWORD *)(v11 + 152) = *(_QWORD *)(a1 + 152);
  v13 = *(volatile signed __int32 **)(v11 + 160);
  *(_QWORD *)(v11 + 160) = v12;
  if ( v13 && _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = (_DWORD *)v23;
  *(_BYTE *)(v23 + 168) = *(_BYTE *)(a1 + 168);
  v14[43] = *(_DWORD *)(a1 + 172);
  v14[44] = *(_DWORD *)(a1 + 176);
  v14[45] = *(_DWORD *)(a1 + 180);
  result = *(unsigned int *)(a1 + 184);
  v14[46] = result;
  if ( *((_QWORD *)&v23 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v16 = *((_QWORD *)&v23 + 1);
      (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
    }
  }
  v17 = (volatile signed __int32 *)a2[1];
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return result;
}
