/*
 * XREFs of sub_1800DBE40 @ 0x1800DBE40
 * Callers:
 *     _setlocale_set_cat_0 @ 0x1800AFE94 (_setlocale_set_cat_0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_18006DF9C @ 0x18006DF9C (sub_18006DF9C.c)
 *     sub_18006E020 @ 0x18006E020 (sub_18006E020.c)
 *     sub_180070328 @ 0x180070328 (sub_180070328.c)
 *     sub_1800AF948 @ 0x1800AF948 (sub_1800AF948.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_OWORD *__fastcall sub_1800DBE40(__int64 a1, _OWORD *a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  signed __int32 v16; // eax
  __int64 v17; // rdx
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rdi
  __int64 v20; // rdx
  signed __int32 v21; // eax
  volatile signed __int32 *v22; // rbx
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rbx
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int64 v33; // [rsp+40h] [rbp-C0h]
  __int128 v34; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  __int128 v37; // [rsp+80h] [rbp-80h] BYREF
  __int128 v38; // [rsp+90h] [rbp-70h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v43; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD *v44; // [rsp+F0h] [rbp-10h]
  _QWORD *v45; // [rsp+F8h] [rbp-8h]
  _BYTE v46[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v47; // [rsp+108h] [rbp+8h]
  _BYTE v48[24]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v50; // [rsp+140h] [rbp+40h]
  __int128 v51; // [rsp+148h] [rbp+48h]
  __int64 v52; // [rsp+158h] [rbp+58h] BYREF
  volatile signed __int32 *v53; // [rsp+160h] [rbp+60h]
  __int128 v54; // [rsp+170h] [rbp+70h] BYREF

  v44 = a2;
  v45 = a4;
  v50 = a5;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 376LL))(*a3, v46);
  v51 = 0LL;
  v10 = *(_QWORD *)(v9 + 8);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
      {
        v51 = *(_OWORD *)v9;
        break;
      }
    }
  }
  v12 = v47;
  if ( v47 && _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 8LL))(v12, v10, v9);
  v13 = *(_QWORD *)(a1 + 272);
  v14 = v51;
  v34 = 0LL;
  v15 = *(_QWORD *)(v51 + 16);
  if ( !v15 )
  {
LABEL_58:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v16 = *(_DWORD *)(v15 + 8);
    if ( !v16 )
      goto LABEL_58;
  }
  while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16) );
  v34 = *(_OWORD *)(v14 + 8);
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 88LL))(v13, &v34);
  sub_1800670E0(*(_QWORD *)(a1 + 288) + 16LL);
  v18 = (__int64 *)sub_180070328(v51, v17);
  v19 = (volatile signed __int32 *)v18[1];
  if ( v19 )
  {
    _InterlockedIncrement(v19 + 2);
    v19 = (volatile signed __int32 *)v18[1];
  }
  v33 = *v18;
  v35 = 0LL;
  v20 = *(_QWORD *)(v14 + 16);
  if ( !v20 )
  {
LABEL_59:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v48);
    throw (std::bad_weak_ptr *)v48;
  }
  do
  {
    v21 = *(_DWORD *)(v20 + 8);
    if ( !v21 )
      goto LABEL_59;
  }
  while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 8), v21 + 1, v21) );
  v35 = *(_OWORD *)(v14 + 8);
  sub_1800AF948(*(_QWORD *)(a1 + 272), &v52, (__int64 *)&v35);
  v22 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
  if ( *((_QWORD *)&v35 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 184LL))(*a3);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 200LL))(*a3, &v54);
  v36 = 0LL;
  v24 = v23[1];
  if ( v24 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 12));
    v24 = v23[1];
  }
  *(_QWORD *)&v36 = *v23;
  *((_QWORD *)&v36 + 1) = v24;
  sub_18006E020(v33, (__int64 *)&v36);
  v38 = 0LL;
  if ( *((_QWORD *)&v54 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 12LL));
  v38 = v54;
  sub_18006DF9C(v33, (__int64 *)&v38);
  v37 = 0LL;
  v25 = v23[1];
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 12));
    v25 = v23[1];
  }
  *(_QWORD *)&v37 = *v23;
  *((_QWORD *)&v37 + 1) = v25;
  sub_18006E020(v52, (__int64 *)&v37);
  v39 = 0LL;
  if ( *((_QWORD *)&v54 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 12LL));
  v39 = v54;
  sub_18006DF9C(v52, (__int64 *)&v39);
  v26 = *((_QWORD *)&v54 + 1);
  if ( *((_QWORD *)&v54 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  }
  v27 = v51;
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v51 + 104LL))(v51, &v52);
  *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD, _OWORD *, __int64, _QWORD *, __int64))(*(_QWORD *)*a4 + 16LL))(*a4, a2, v27, a3, a5);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 112LL))(v27, &v52);
  v40 = 0LL;
  sub_18006E020(v33, (__int64 *)&v40);
  v41 = 0LL;
  sub_18006DF9C(v33, (__int64 *)&v41);
  v42 = 0LL;
  sub_18006E020(v52, (__int64 *)&v42);
  v43 = 0LL;
  sub_18006DF9C(v52, (__int64 *)&v43);
  v28 = v53;
  if ( v53 )
  {
    if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  if ( *((_QWORD *)&v51 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v51 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v29 = *((_QWORD *)&v51 + 1);
      (***((void (__fastcall ****)(_QWORD))&v51 + 1))(*((_QWORD *)&v51 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v51 + 1) + 8LL))(*((_QWORD *)&v51 + 1));
    }
  }
  v30 = (volatile signed __int32 *)a4[1];
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
    }
  }
  v31 = *(volatile signed __int32 **)(a5 + 8);
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  return a2;
}
