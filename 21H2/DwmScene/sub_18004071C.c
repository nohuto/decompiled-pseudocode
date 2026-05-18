/*
 * XREFs of sub_18004071C @ 0x18004071C
 * Callers:
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180017984 @ 0x180017984 (sub_180017984.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18003ED08 @ 0x18003ED08 (sub_18003ED08.c)
 *     sub_1800A0674 @ 0x1800A0674 (sub_1800A0674.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004071C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r12
  _QWORD *v5; // r14
  volatile signed __int32 *v6; // rbx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 *v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rdx
  signed __int32 v15; // eax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int128 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  _BYTE v34[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v35; // [rsp+A8h] [rbp-58h]
  _QWORD v36[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v37[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v38[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v39[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v40[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v42; // [rsp+1B0h] [rbp+B0h]

  v33 = a2;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  sub_180017984(v4, &v27, 1u);
  v5 = (_QWORD *)(a1 + 128);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 128), &v27);
  v6 = v28;
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = 69;
  if ( *(_BYTE *)(a2 + 6) )
  {
    v7 = 325;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 176), (_QWORD *)(a1 + 128));
  }
  v24 = 0LL;
  v8 = *(_QWORD *)(a1 + 136);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(a1 + 136);
  }
  *(_QWORD *)&v24 = *v5;
  *((_QWORD *)&v24 + 1) = v8;
  v9 = a2 + 8;
  sub_18003ED08(a2 + 8, (__int64)&v24, *(_DWORD *)a2, v7);
  v10 = (__int64 *)sub_1800A0674(*v5, v34, *(unsigned int *)(a1 + 88));
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), v10);
  v13 = v35;
  if ( v35 )
  {
    result = (unsigned int)_InterlockedDecrement(v35 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( *(_BYTE *)(a2 + 5) )
  {
    sub_18000FE28(v37);
    v23 = sub_18000FE28(v36);
    sub_18002D8C4(v40, v23, 411, (__int64)v37, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v40;
  }
  if ( *(_BYTE *)(a2 + 4) )
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      sub_18000FE28(v39);
      v22 = sub_18000FE28(v38);
      sub_18002D8C4(pExceptionObject, v22, 418, (__int64)v39, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v42 = 0LL;
    v14 = *(_QWORD *)(a1 + 80);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v14 + 8);
        if ( !v15 )
          break;
        if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
        {
          v42 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    sub_180017984(v4, &v29, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 160), &v29);
    v16 = v30;
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v25 = 0LL;
    v17 = *(_QWORD *)(a1 + 168);
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      v17 = *(_QWORD *)(a1 + 168);
    }
    *(_QWORD *)&v25 = *(_QWORD *)(a1 + 160);
    *((_QWORD *)&v25 + 1) = v17;
    sub_18003ED08(v9, (__int64)&v25, 3, 64);
    sub_180017984(v4, &v31, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 144), &v31);
    v18 = v32;
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
    v26 = 0LL;
    v19 = *(_QWORD *)(a1 + 152);
    if ( v19 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
      v19 = *(_QWORD *)(a1 + 152);
    }
    *(_QWORD *)&v26 = *(_QWORD *)(a1 + 144);
    *((_QWORD *)&v26 + 1) = v19;
    result = sub_18003ED08(v9, (__int64)&v26, 3, 1);
    if ( *((_QWORD *)&v42 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v20 = *((_QWORD *)&v42 + 1);
        (***((void (__fastcall ****)(_QWORD))&v42 + 1))(*((_QWORD *)&v42 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v42 + 1) + 8LL))(*((_QWORD *)&v42 + 1));
      }
    }
  }
  v21 = *(_QWORD *)(a2 + 64);
  if ( v21 )
  {
    LOBYTE(v12) = v21 != v9;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v12);
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  return result;
}
