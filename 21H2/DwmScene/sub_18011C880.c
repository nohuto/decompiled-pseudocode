/*
 * XREFs of sub_18011C880 @ 0x18011C880
 * Callers:
 *     sub_18007FB54 @ 0x18007FB54 (sub_18007FB54.c)
 * Callees:
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_18011C40C @ 0x18011C40C (sub_18011C40C.c)
 *     sub_18011C804 @ 0x18011C804 (sub_18011C804.c)
 *     sub_18011CC10 @ 0x18011CC10 (sub_18011CC10.c)
 *     _o_floor @ 0x180123928 (_o_floor.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18011C880(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // eax
  __int64 *v6; // r14
  bool i; // zf
  __int64 v8; // rbx
  __int64 v9; // r13
  char v10; // r15
  __int64 v11; // rsi
  double v12; // xmm6_8
  double v13; // xmm1_8
  double v14; // xmm7_8
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rbx
  _QWORD *v22; // r14
  _QWORD *j; // rsi
  __int64 *v24; // rbx
  __int64 **v25; // rax
  int v27; // [rsp+28h] [rbp-69h]
  char v28; // [rsp+38h] [rbp-59h]
  __int128 v29; // [rsp+40h] [rbp-51h] BYREF
  int v30; // [rsp+50h] [rbp-41h]
  __int64 *v31; // [rsp+58h] [rbp-39h]
  __int64 v32; // [rsp+60h] [rbp-31h]
  __int64 *v33; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v34[8]; // [rsp+70h] [rbp-21h] BYREF
  __int128 v35; // [rsp+78h] [rbp-19h] BYREF
  __int64 v36; // [rsp+88h] [rbp-9h]
  __int64 v37; // [rsp+90h] [rbp-1h] BYREF
  double v38; // [rsp+98h] [rbp+7h] BYREF

  v36 = 0LL;
  v35 = 0LL;
  (***(void (__fastcall ****)(_QWORD, __int64 *))(a1 + 136))(*(_QWORD *)(a1 + 136), &v37);
  v32 = a1 + 56;
  v2 = Mtx_lock((_Mtx_t)(a1 + 56));
  if ( v2 )
  {
LABEL_45:
    std::_Throw_C_error(v2);
LABEL_46:
    std::_Throw_C_error(v5);
LABEL_47:
    std::_Xbad_function_call();
    JUMPOUT(0x18011CC0DLL);
  }
  LOBYTE(v27) = v28;
  sub_18011C40C((__int64 *)a1, *(__int64 **)(a1 + 8), *(char **)(a1 + 24), *(char **)(a1 + 32));
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 != v3 )
  {
    do
    {
      unknown_libname_102(v4, 0);
      v4 += 16LL;
    }
    while ( v4 != v3 );
    v4 = *(_QWORD *)(a1 + 24);
  }
  *(_QWORD *)(a1 + 32) = v4;
  v5 = Mtx_unlock((_Mtx_t)(a1 + 56));
  if ( v5 )
    goto LABEL_46;
  v6 = *(__int64 **)a1;
  v31 = *(__int64 **)(a1 + 8);
  for ( i = v6 == v31; !i; i = v6 == v31 )
  {
    v29 = 0LL;
    v8 = v6[1];
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = v6[1];
    }
    v9 = *v6;
    *(_QWORD *)&v29 = v9;
    *((_QWORD *)&v29 + 1) = v8;
    v10 = 1;
    if ( *(_BYTE *)(v9 + 168) )
      goto LABEL_24;
    v11 = v29;
    v12 = (double)((int)v37 - *(_DWORD *)(v29 + 8)) / 1000000000.0 / ((double)(int)*(_QWORD *)(v29 + 16) / 1000000000.0);
    v13 = 0.0;
    v14 = 0.0;
    v15 = (int)v12;
    v16 = *(unsigned int *)(v29 + 24);
    v30 = *(_DWORD *)(v29 + 24);
    v17 = *(unsigned int *)(v29 + 28);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 == 1 )
      {
        if ( v15 < (int)v16 )
          v13 = v12 - o_floor(v17);
        v14 = v13;
      }
    }
    else if ( v15 < (int)v16 )
    {
      v14 = v12 - o_floor(v17);
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v11 + 32) + 8LL))(
            *(_QWORD *)(v11 + 32),
            v16,
            *(_QWORD *)v11);
    if ( v10 && *(_QWORD *)(v11 + 96) )
    {
      v38 = ((double)v15 + v14) / (double)*(int *)(v11 + 24);
      v18 = *(_QWORD *)(v11 + 96);
      if ( !v18 )
        goto LABEL_47;
      (*(void (__fastcall **)(__int64, double *))(*(_QWORD *)v18 + 16LL))(v18, &v38);
    }
    if ( v15 < v30 )
    {
LABEL_24:
      if ( !*(_BYTE *)(v9 + 168) && v10 )
        goto LABEL_35;
      v11 = v29;
    }
    if ( *(_QWORD *)(v11 + 160) && v10 )
    {
      v19 = *(_QWORD *)(v11 + 160);
      if ( !v19 )
      {
        std::_Xbad_function_call();
        goto LABEL_45;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = (_QWORD *)*((_QWORD *)&v35 + 1);
    if ( v36 == *((_QWORD *)&v35 + 1) )
    {
      sub_18001101C(&v35, *((_QWORD **)&v35 + 1), &v29);
    }
    else
    {
      **((_QWORD **)&v35 + 1) = 0LL;
      v20[1] = 0LL;
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v11 = v29;
      }
      *v20 = v11;
      v20[1] = v8;
      *((_QWORD *)&v35 + 1) += 16LL;
    }
LABEL_35:
    if ( *((_QWORD *)&v29 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v21 = *((_QWORD *)&v29 + 1);
      (***((void (__fastcall ****)(_QWORD))&v29 + 1))(*((_QWORD *)&v29 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v29 + 1) + 8LL))(*((_QWORD *)&v29 + 1));
    }
    v6 += 2;
  }
  v22 = (_QWORD *)*((_QWORD *)&v35 + 1);
  for ( j = (_QWORD *)v35; j != v22; j += 2 )
  {
    v24 = *(__int64 **)(a1 + 8);
    v25 = sub_18011C804(&v33, *(__int64 **)a1, v24, j);
    sub_18011CC10(a1, v34, *v25, v24, v27);
  }
  return sub_180012A18((__int64 *)&v35);
}
