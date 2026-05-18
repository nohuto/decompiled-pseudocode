/*
 * XREFs of sub_1800B482C @ 0x1800B482C
 * Callers:
 *     sub_1800B47C0 @ 0x1800B47C0 (sub_1800B47C0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     sub_1800B4460 @ 0x1800B4460 (sub_1800B4460.c)
 *     sub_1800B4F80 @ 0x1800B4F80 (sub_1800B4F80.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
int __fastcall sub_1800B482C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  char v7; // di
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  char v15; // si
  signed __int32 v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  volatile signed __int32 *v20; // rbx
  signed __int32 v21; // eax
  char v22; // si
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rbx
  int result; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  struct _Mtx_internal_imp_t *v33; // [rsp+30h] [rbp-D0h]
  __int128 v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h]
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v38[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v39[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v40[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v41[5]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v43[64]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v44; // [rsp+170h] [rbp+70h]
  __int128 v45; // [rsp+180h] [rbp+80h] BYREF

  v36 = a4;
  v35 = a3;
  v7 = 0;
  v33 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v8 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v8 )
    goto LABEL_61;
  v9 = *a2;
  v44 = 0LL;
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
      {
        v44 = *(_OWORD *)(v9 + 56);
        break;
      }
    }
  }
  v12 = 1LL;
  if ( !(_QWORD)v44 )
  {
    v14 = (volatile signed __int32 *)v33;
LABEL_17:
    v15 = 1;
    goto LABEL_18;
  }
  v13 = 0LL;
  v14 = 0LL;
  v9 = *(_QWORD *)(v44 + 80);
  if ( v9 )
  {
    do
    {
      v16 = *(_DWORD *)(v9 + 8);
      if ( !v16 )
      {
        v7 = 1;
        goto LABEL_17;
      }
    }
    while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v16 + 1, v16) );
    v13 = *(_QWORD *)(v44 + 72);
    v14 = *(volatile signed __int32 **)(v44 + 80);
  }
  v7 = 1;
  if ( !v13 )
    goto LABEL_17;
  v15 = 0;
LABEL_18:
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( v14 )
    {
      if ( !_InterlockedDecrement(v14 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, _QWORD, __int64, __int64))v14)(v14, v44, v9, 1LL);
        if ( !_InterlockedDecrement(v14 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  if ( v15 )
  {
LABEL_62:
    sub_18000FE28(v39);
    v31 = (unsigned int)sub_18000FE28(v38);
    sub_1800D1210((unsigned int)pExceptionObject, v31, 68, (unsigned int)v39, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v45 = 0LL;
  sub_1800B4F80(a1, &v45, v9, v12);
  if ( !(_QWORD)v45 )
  {
    v20 = (volatile signed __int32 *)v34;
LABEL_34:
    v22 = 0;
    goto LABEL_35;
  }
  v18 = v44;
  v19 = 0LL;
  v20 = 0LL;
  v17 = *(_QWORD *)(v44 + 80);
  if ( v17 )
  {
    while ( 1 )
    {
      v21 = *(_DWORD *)(v17 + 8);
      if ( !v21 )
        break;
      if ( v21 == _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), v21 + 1, v21) )
      {
        v19 = *(_QWORD *)(v44 + 72);
        v20 = *(volatile signed __int32 **)(v44 + 80);
        break;
      }
    }
  }
  v7 |= 2u;
  if ( v19 == (_QWORD)v45 )
    goto LABEL_34;
  v22 = 1;
LABEL_35:
  if ( (v7 & 2) != 0 )
  {
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64, __int64))v20)(v20, v17, v18, v19);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
  }
  if ( v22 )
  {
    sub_18000FE28(v41);
    v32 = (unsigned int)sub_18000FE28(v40);
    sub_1800D1210((unsigned int)v43, v32, 75, (unsigned int)v41, 0);
    throw (Spectre::Engine::EngineException *)v43;
  }
  v23 = *(__int64 **)(a1 + 48);
  if ( *(__int64 **)(a1 + 56) == v23 )
  {
    sub_18001101C((_QWORD *)(a1 + 40), v23, a2);
  }
  else
  {
    *v23 = 0LL;
    v23[1] = 0LL;
    v24 = a2[1];
    if ( v24 )
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
    *v23 = *a2;
    v23[1] = a2[1];
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  v34 = 0LL;
  v25 = a2[1];
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 12));
    v25 = a2[1];
  }
  *(_QWORD *)&v34 = *a2;
  *((_QWORD *)&v34 + 1) = v25;
  sub_1800B4460((__int64 **)(a1 + 88), (__int64)&v37, &v34);
  v26 = v37;
  *(_QWORD *)(v37 + 48) = v35;
  *(_QWORD *)(v26 + 56) = v36;
  *(_DWORD *)(v26 + 64) = a5;
  v27 = *((_QWORD *)&v34 + 1);
  if ( *((_QWORD *)&v34 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  }
  if ( *((_QWORD *)&v45 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v28 = *((_QWORD *)&v45 + 1);
      (***((void (__fastcall ****)(_QWORD))&v45 + 1))(*((_QWORD *)&v45 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v45 + 1) + 8LL))(*((_QWORD *)&v45 + 1));
    }
  }
  if ( *((_QWORD *)&v44 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    v29 = *((_QWORD *)&v44 + 1);
    (***((void (__fastcall ****)(_QWORD))&v44 + 1))(*((_QWORD *)&v44 + 1));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v44 + 1) + 8LL))(*((_QWORD *)&v44 + 1));
  }
  result = Mtx_unlock(v33);
  if ( result )
  {
    std::_Throw_C_error(result);
LABEL_61:
    std::_Throw_C_error(v8);
    goto LABEL_62;
  }
  return result;
}
