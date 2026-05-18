/*
 * XREFs of sub_1800FE2C0 @ 0x1800FE2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002C458 @ 0x18002C458 (sub_18002C458.c)
 *     sub_18007B34C @ 0x18007B34C (sub_18007B34C.c)
 *     sub_1800F0B14 @ 0x1800F0B14 (sub_1800F0B14.c)
 *     sub_1800FC200 @ 0x1800FC200 (sub_1800FC200.c)
 *     sub_1800FCB14 @ 0x1800FCB14 (sub_1800FCB14.c)
 *     sub_1800FCE78 @ 0x1800FCE78 (sub_1800FCE78.c)
 *     sub_180121ED8 @ 0x180121ED8 (sub_180121ED8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800FE2C0(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // xmm1_4
  __int64 v9; // rdi
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  __int64 result; // rax
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int128 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+48h] [rbp-B8h]
  __int128 v20; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v23; // [rsp+78h] [rbp-88h]
  _QWORD v24[7]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v27; // [rsp+D8h] [rbp-28h]
  _OWORD v28[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+104h] [rbp+4h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  int v32; // [rsp+110h] [rbp+10h]
  int v33; // [rsp+114h] [rbp+14h]
  __int64 v34; // [rsp+150h] [rbp+50h]
  _BYTE v35[56]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v36; // [rsp+190h] [rbp+90h]

  v19 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v19 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v20 = 0LL;
  v4 = *(_QWORD *)(v19 + 80);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v20 = *(_OWORD *)(v19 + 72);
        break;
      }
    }
  }
  v6 = sub_1800F0B14(a1);
  sub_18007B34C(v6, &v26, (__int64 *)&v20);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  if ( *((_QWORD *)&v19 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
  }
  v18 = 0LL;
  sub_1800FCE78(a1, &v18);
  v8 = *(_DWORD *)(a1 + 1840);
  v28[0] = 0LL;
  v9 = *((_QWORD *)&v18 + 1);
  if ( *((_QWORD *)&v18 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL));
    v9 = *((_QWORD *)&v18 + 1);
  }
  *(_QWORD *)&v28[0] = v18;
  *((_QWORD *)&v28[0] + 1) = v9;
  v28[1] = 0LL;
  v29 = v8;
  v30 = 0;
  v32 = 1;
  v33 = 0;
  v34 = 0LL;
  v36 = 0LL;
  v31 = (unsigned int)(int)(float)(*(float *)(a1 + 1848) * 1000000000.0);
  v24[0] = &std::_Func_impl_no_alloc<_lambda_fcaedbef7d98823495185e1c274ee3d7_,void,>::`vftable';
  v24[1] = a1;
  v25 = v24;
  sub_18002C458((__int64)v24, (__int64)v35);
  if ( v25 )
  {
    v10 = v24;
    LOBYTE(v10) = v25 != v24;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v25 + 32LL))(v25, v10);
  }
  v11 = v26;
  v12 = (_QWORD *)sub_180121ED8(v26 + 48, v21, 6LL);
  sub_1800FC200(v11, &v22, (__int64 *)v28, v12);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1768), &v22);
  v14 = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
    v9 = *((_QWORD *)&v18 + 1);
  }
  *(_WORD *)(a1 + 1896) = 1;
  result = sub_1800FCB14(v28, v13);
  if ( v9 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 8));
    if ( !(_DWORD)result )
    {
      v16 = *((_QWORD *)&v18 + 1);
      (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
    }
  }
  v17 = v27;
  if ( v27 )
  {
    result = (unsigned int)_InterlockedDecrement(v27 + 2);
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
