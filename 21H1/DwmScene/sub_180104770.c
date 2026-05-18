/*
 * XREFs of sub_180104770 @ 0x180104770
 * Callers:
 *     sub_1800D9100 @ 0x1800D9100 (sub_1800D9100.c)
 *     sub_180104770 @ 0x180104770 (sub_180104770.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180013BE8 @ 0x180013BE8 (sub_180013BE8.c)
 *     sub_180097B58 @ 0x180097B58 (sub_180097B58.c)
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 *     sub_180104770 @ 0x180104770 (sub_180104770.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180104770(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 *a6)
{
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  volatile signed __int32 *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 result; // rax
  __int64 v26; // rdx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rbx
  __int128 v32; // [rsp+30h] [rbp-D0h]
  __int128 v33; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+68h] [rbp-98h] BYREF
  __int128 v36; // [rsp+78h] [rbp-88h] BYREF
  __int128 v37; // [rsp+88h] [rbp-78h] BYREF
  __int128 v38; // [rsp+98h] [rbp-68h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v40; // [rsp+B8h] [rbp-48h]
  __int128 v41; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v42; // [rsp+D0h] [rbp-30h]
  __int64 *v43; // [rsp+D8h] [rbp-28h]
  __int64 *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 *v46; // [rsp+F0h] [rbp-10h]
  __int128 *v47; // [rsp+F8h] [rbp-8h]
  _BYTE *v48; // [rsp+100h] [rbp+0h]
  _BYTE v49[56]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h] BYREF
  __int64 v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  volatile signed __int32 *v54; // [rsp+160h] [rbp+60h]

  v40 = a1;
  v42 = a2;
  v43 = a3;
  v44 = a4;
  v45 = a5;
  v46 = a6;
  v9 = (_QWORD *)a1[19];
  v10 = (_QWORD *)a1[20];
  while ( v9 != v10 )
  {
    v47 = &v35;
    v48 = v49;
    v35 = 0LL;
    v11 = a6[1];
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = a6[1];
    }
    *(_QWORD *)&v35 = *a6;
    *((_QWORD *)&v35 + 1) = v11;
    v50 = 0LL;
    v12 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
    if ( v12 )
      v50 = (**v12)(v12, v49);
    v36 = 0LL;
    v13 = a4[1];
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v13 = a4[1];
    }
    *(_QWORD *)&v36 = *a4;
    *((_QWORD *)&v36 + 1) = v13;
    v37 = 0LL;
    v14 = a3[1];
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v14 = a3[1];
    }
    *(_QWORD *)&v37 = *a3;
    *((_QWORD *)&v37 + 1) = v14;
    v38 = 0LL;
    v15 = a2[1];
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v15 = a2[1];
    }
    *(_QWORD *)&v38 = *a2;
    *((_QWORD *)&v38 + 1) = v15;
    sub_180104770(*v9, (unsigned int)&v38, (unsigned int)&v37, (unsigned int)&v36, (__int64)v49, (__int64)&v35);
    v9 += 2;
  }
  v16 = *(_QWORD *)(a5 + 56);
  if ( !v16 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x180104C8ALL);
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 16LL))(v16, &v51);
  v34 = 0LL;
  v17 = v52;
  if ( v52 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v52 + 8));
    v17 = v52;
  }
  v18 = v51;
  *(_QWORD *)&v34 = v51;
  *((_QWORD *)&v34 + 1) = v17;
  v19 = v54;
  if ( v54 )
  {
    _InterlockedIncrement(v54 + 2);
    v19 = v54;
    v18 = v34;
  }
  *(_QWORD *)&v32 = v53;
  *((_QWORD *)&v32 + 1) = v19;
  v33 = 0LL;
  sub_180013BE8(v18, &v33);
  if ( v19 )
    _InterlockedIncrement(v19 + 2);
  v41 = v32;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v33 + 88), &v41);
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v39 = 0LL;
  v20 = a6[1];
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v20 = a6[1];
  }
  *(_QWORD *)&v39 = *a6;
  *((_QWORD *)&v39 + 1) = v20;
  v21 = v33;
  sub_180097B58(v33, &v39);
  *(_BYTE *)(v21 + 72) = 0;
  v22 = v40;
  std::shared_ptr<__ExceptionPtr>::operator=(v40 + 3, a2);
  std::shared_ptr<__ExceptionPtr>::operator=(v22 + 5, a3);
  std::shared_ptr<__ExceptionPtr>::operator=(v22 + 1, a4);
  std::shared_ptr<__ExceptionPtr>::operator=(v22 + 7, (__int64 *)&v34);
  std::shared_ptr<__ExceptionPtr>::operator=(v22 + 9, (__int64 *)&v33);
  std::shared_ptr<__ExceptionPtr>::operator=(v22 + 11, a6);
  if ( *((_QWORD *)&v33 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v23 = *((_QWORD *)&v33 + 1);
      (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
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
  if ( *((_QWORD *)&v34 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v24 = *((_QWORD *)&v34 + 1);
      (***((void (__fastcall ****)(_QWORD))&v34 + 1))(*((_QWORD *)&v34 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v34 + 1) + 8LL))(*((_QWORD *)&v34 + 1));
    }
  }
  result = sub_1800D5EAC((__int64)&v51);
  v27 = (volatile signed __int32 *)a2[1];
  if ( v27 )
  {
    result = (unsigned int)_InterlockedDecrement(v27 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      result = (unsigned int)_InterlockedDecrement(v27 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  v28 = (volatile signed __int32 *)a3[1];
  if ( v28 )
  {
    result = (unsigned int)_InterlockedDecrement(v28 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      result = (unsigned int)_InterlockedDecrement(v28 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  v29 = (volatile signed __int32 *)a4[1];
  if ( v29 )
  {
    result = (unsigned int)_InterlockedDecrement(v29 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
      result = (unsigned int)_InterlockedDecrement(v29 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  v30 = *(_QWORD *)(a5 + 56);
  if ( v30 )
  {
    LOBYTE(v26) = v30 != a5;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 32LL))(v30, v26);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  v31 = (volatile signed __int32 *)a6[1];
  if ( v31 )
  {
    result = (unsigned int)_InterlockedDecrement(v31 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      result = (unsigned int)_InterlockedDecrement(v31 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  return result;
}
