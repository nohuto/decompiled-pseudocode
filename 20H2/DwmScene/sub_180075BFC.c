/*
 * XREFs of sub_180075BFC @ 0x180075BFC
 * Callers:
 *     sub_180076870 @ 0x180076870 (sub_180076870.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 *     sub_180070C1C @ 0x180070C1C (sub_180070C1C.c)
 *     sub_180070DD0 @ 0x180070DD0 (sub_180070DD0.c)
 *     sub_180070E48 @ 0x180070E48 (sub_180070E48.c)
 *     sub_180070FFC @ 0x180070FFC (sub_180070FFC.c)
 *     sub_180071074 @ 0x180071074 (sub_180071074.c)
 *     sub_1800710EC @ 0x1800710EC (sub_1800710EC.c)
 *     sub_18009F388 @ 0x18009F388 (sub_18009F388.c)
 *     sub_18009FA08 @ 0x18009FA08 (sub_18009FA08.c)
 *     sub_1800A13DC @ 0x1800A13DC (sub_1800A13DC.c)
 *     sub_1800CEFC0 @ 0x1800CEFC0 (sub_1800CEFC0.c)
 *     sub_1800CEFDC @ 0x1800CEFDC (sub_1800CEFDC.c)
 *     sub_1801152FC @ 0x1801152FC (sub_1801152FC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180075BFC(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rcx
  __int64 *v7; // rax
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  unsigned int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 **v14; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 result; // rax
  __int64 v27; // rbx
  __int128 v28; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v35[5]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v36[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v37; // [rsp+D0h] [rbp-30h]
  _BYTE v38[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v39; // [rsp+E0h] [rbp-20h]
  _QWORD v40[4]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v41[40]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v43; // [rsp+170h] [rbp+70h] BYREF
  __int128 v44; // [rsp+180h] [rbp+80h] BYREF
  __int128 v45; // [rsp+190h] [rbp+90h] BYREF
  __int128 v46; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v47; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v48; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v49[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int64 v50; // [rsp+1E8h] [rbp+E8h]

  v4 = a1[64];
  if ( a1[78] - a1[77] >= 4uLL )
    sub_1800A13DC(a1[64]);
  v28 = 0LL;
  v5 = a1[81];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a1[81];
  }
  v6 = (_DWORD *)a1[80];
  *(_QWORD *)&v28 = v6;
  *((_QWORD *)&v28 + 1) = v5;
  if ( !v6 )
  {
    v7 = (__int64 *)sub_1800CEFDC(v36, a2);
    std::shared_ptr<__ExceptionPtr>::operator=(&v28, v7);
    v8 = v37;
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v6 = (_DWORD *)v28;
  }
  if ( v6[2] != a2 )
  {
    sub_18000FD48(v40);
    sub_1801152FC(pExceptionObject, v40, 0LL);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  v48 = 0LL;
  (*(void (__fastcall **)(_DWORD *, __int128 *))(*(_QWORD *)v6 + 8LL))(v6, &v48);
  v9 = (__int64 *)v48;
  v10 = *(__int64 **)v48;
  while ( v10 != v9 )
  {
    v49[2] = 0LL;
    v50 = 0LL;
    sub_18001CDF8(v49, (__int64)(v10 + 4));
    v11 = *((_DWORD *)v10 + 20);
    v35[4] = v41;
    v12 = sub_1800CEFC0(v10 + 8, v41);
    v35[2] = 0LL;
    v35[3] = 0LL;
    sub_18001CDF8(v35, (__int64)v49);
    sub_18009FA08(v4, v35, v11, v12);
    if ( v50 >= 0x10 )
    {
      v13 = v49[0];
      if ( v50 + 1 >= 0x1000 )
      {
        v13 = *(_QWORD *)(v49[0] - 8LL);
        if ( (unsigned __int64)(v49[0] - v13 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v13, v50 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v13);
    }
    v14 = (__int64 **)v10[2];
    if ( *((_BYTE *)v14 + 25) )
    {
      for ( i = (__int64 *)v10[1]; !*((_BYTE *)i + 25) && v10 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v10 = i;
      v10 = i;
    }
    else
    {
      v10 = (__int64 *)v10[2];
      for ( j = *v14; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v10 = j;
    }
  }
  v17 = (__int64 *)sub_180070FFC((__int64)v38);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 8, v17);
  v18 = v39;
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  v29 = 0LL;
  v19 = a1[9];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a1[9];
  }
  *(_QWORD *)&v29 = a1[8];
  *((_QWORD *)&v29 + 1) = v19;
  sub_18009F388(a1[64], &v29);
  v47 = 0LL;
  sub_180070E48((__int64)&v47);
  v30 = 0LL;
  if ( *((_QWORD *)&v47 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL));
  v30 = v47;
  sub_18009F388(a1[64], &v30);
  v46 = 0LL;
  sub_180071074((__int64)&v46);
  v31 = 0LL;
  if ( *((_QWORD *)&v46 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL));
  v31 = v46;
  sub_18009F388(a1[64], &v31);
  v45 = 0LL;
  sub_180070DD0((__int64)&v45);
  v32 = 0LL;
  if ( *((_QWORD *)&v45 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL));
  v32 = v45;
  sub_18009F388(a1[64], &v32);
  v44 = 0LL;
  sub_1800710EC((__int64)&v44);
  v33 = 0LL;
  if ( *((_QWORD *)&v44 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL));
  v33 = v44;
  sub_18009F388(a1[64], &v33);
  v43 = 0LL;
  sub_180070C1C((__int64)&v43);
  v34 = 0LL;
  v20 = *((_QWORD *)&v43 + 1);
  if ( *((_QWORD *)&v43 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL));
    v20 = *((_QWORD *)&v43 + 1);
  }
  v34 = v43;
  sub_18009F388(a1[64], &v34);
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), 0xFFFFFFFF) == 1 )
    {
      v21 = *((_QWORD *)&v43 + 1);
      (***((void (__fastcall ****)(_QWORD))&v43 + 1))(*((_QWORD *)&v43 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v43 + 1) + 8LL))(*((_QWORD *)&v43 + 1));
    }
  }
  if ( *((_QWORD *)&v44 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v22 = *((_QWORD *)&v44 + 1);
      (***((void (__fastcall ****)(_QWORD))&v44 + 1))(*((_QWORD *)&v44 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v44 + 1) + 8LL))(*((_QWORD *)&v44 + 1));
    }
  }
  if ( *((_QWORD *)&v45 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v23 = *((_QWORD *)&v45 + 1);
      (***((void (__fastcall ****)(_QWORD))&v45 + 1))(*((_QWORD *)&v45 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v45 + 1) + 8LL))(*((_QWORD *)&v45 + 1));
    }
  }
  if ( *((_QWORD *)&v46 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v24 = *((_QWORD *)&v46 + 1);
      (***((void (__fastcall ****)(_QWORD))&v46 + 1))(*((_QWORD *)&v46 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 8LL))(*((_QWORD *)&v46 + 1));
    }
  }
  if ( *((_QWORD *)&v47 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v25 = *((_QWORD *)&v47 + 1);
      (***((void (__fastcall ****)(_QWORD))&v47 + 1))(*((_QWORD *)&v47 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v47 + 1) + 8LL))(*((_QWORD *)&v47 + 1));
    }
  }
  result = sub_18006CEA4((__int64 *)&v48, (__int64)&v48);
  if ( *((_QWORD *)&v28 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v27 = *((_QWORD *)&v28 + 1);
      (***((void (__fastcall ****)(_QWORD))&v28 + 1))(*((_QWORD *)&v28 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
    }
  }
  return result;
}
