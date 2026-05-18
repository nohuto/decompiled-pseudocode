/*
 * XREFs of sub_180078E1C @ 0x180078E1C
 * Callers:
 *     sub_180016EC0 @ 0x180016EC0 (sub_180016EC0.c)
 *     sub_1800170A4 @ 0x1800170A4 (sub_1800170A4.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180024850 @ 0x180024850 (sub_180024850.c)
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18007044C @ 0x18007044C (sub_18007044C.c)
 *     sub_1800704CC @ 0x1800704CC (sub_1800704CC.c)
 *     sub_180070BB8 @ 0x180070BB8 (sub_180070BB8.c)
 *     sub_180071D90 @ 0x180071D90 (sub_180071D90.c)
 *     sub_18007606C @ 0x18007606C (sub_18007606C.c)
 *     sub_18007948C @ 0x18007948C (sub_18007948C.c)
 *     sub_18007A810 @ 0x18007A810 (sub_18007A810.c)
 *     sub_18007B1E8 @ 0x18007B1E8 (sub_18007B1E8.c)
 *     sub_18007CC84 @ 0x18007CC84 (sub_18007CC84.c)
 *     sub_18007CFC0 @ 0x18007CFC0 (sub_18007CFC0.c)
 *     sub_1800A555C @ 0x1800A555C (sub_1800A555C.c)
 *     sub_1800B47C0 @ 0x1800B47C0 (sub_1800B47C0.c)
 *     sub_1800B4C68 @ 0x1800B4C68 (sub_1800B4C68.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_180078E1C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  const char *v7; // rax
  const char *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  _QWORD *v12; // rax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 i; // r14
  __int64 v21; // rbx
  __int64 v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rax
  void ***v25; // rcx
  __int64 *v26; // rbx
  __int64 *v27; // r14
  void ***v28; // rdx
  __int64 result; // rax
  unsigned int v30; // eax
  __int128 v31; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v37[3]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+A0h] [rbp-60h]
  _QWORD v39[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v40[5]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v42; // [rsp+140h] [rbp+40h] BYREF
  __int128 v43; // [rsp+150h] [rbp+50h] BYREF
  __int128 v44; // [rsp+160h] [rbp+60h] BYREF
  __int128 v45; // [rsp+170h] [rbp+70h] BYREF
  __int128 v46; // [rsp+180h] [rbp+80h] BYREF
  __int128 v47; // [rsp+190h] [rbp+90h] BYREF
  __int128 v48; // [rsp+1A0h] [rbp+A0h] BYREF
  void **v49; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v50; // [rsp+1B8h] [rbp+B8h]
  volatile signed __int32 *v51; // [rsp+1C0h] [rbp+C0h]
  void ***v52; // [rsp+1E8h] [rbp+E8h]

  v48 = 0LL;
  sub_180066E3C(a1 + 8, (__int64)&v48);
  v47 = 0LL;
  sub_180066E3C(a1 + 1104, (__int64)&v47);
  sub_18006714C(*a2 + 24, v4);
  if ( !*(_DWORD *)(a1 + 552) && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v5 = *(_QWORD **)(a1 + 88);
    v6 = *(_QWORD **)(a1 + 96);
    while ( v5 != v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5) )
      {
        sub_18000FE28(v40);
        v30 = (unsigned int)sub_18000FE28(v39);
        sub_1800D1210((unsigned int)pExceptionObject, v30, 1202, (unsigned int)v40, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v5 += 2;
    }
  }
  sub_18011BCAC(
    &unk_18020F648,
    3LL,
    "-----------------------------------------------------------------------------------");
  v7 = (const char *)sub_180024850(v37);
  v8 = v7;
  if ( *((_QWORD *)v7 + 3) >= 0x10uLL )
    v8 = *(const char **)v7;
  v9 = sub_18007040C(*a2);
  sub_18011BCAC(&unk_18020F648, 3LL, "Engine::CreateDevice() -- attaching device id %u -- %s", v9, v8);
  if ( v38 >= 0x10 )
  {
    v10 = v37[0];
    if ( v38 + 1 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v37[0] - 8LL);
      if ( (unsigned __int64)(v37[0] - v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v38 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v10);
  }
  if ( (unsigned int)sub_1800704CC(*a2) )
  {
    v42 = 0LL;
    sub_18007948C(a1, &v42, 1LL, 0LL);
    v44 = 0LL;
    v33 = 0LL;
    sub_18007A810(a1, &v44, 0LL, &v33);
    if ( (_QWORD)v44 )
      sub_1800B47C0(v42, &v44);
    v11 = (volatile signed __int32 *)*((_QWORD *)&v44 + 1);
    if ( *((_QWORD *)&v44 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    v12 = sub_18007044C(*a2, &v34, 0);
    sub_1800B4C68(v42, v12);
    v13 = v35;
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v31 = 0LL;
    v14 = a2[1];
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
      v14 = a2[1];
    }
    *(_QWORD *)&v31 = *a2;
    *((_QWORD *)&v31 + 1) = v14;
    sub_18007606C((__int64 **)(a1 + 184), (__int64)&v36, (__int64)&v31);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v36 + 48), &v42);
    v15 = *((_QWORD *)&v31 + 1);
    if ( *((_QWORD *)&v31 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 12LL), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    v16 = (volatile signed __int32 *)*((_QWORD *)&v42 + 1);
    if ( *((_QWORD *)&v42 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  v45 = 0LL;
  sub_180066E84(a1 + 112, (__int64)&v45);
  v17 = *(__int64 **)(a1 + 96);
  if ( *(__int64 **)(a1 + 104) == v17 )
  {
    sub_18001101C((_QWORD *)(a1 + 88), v17, a2);
  }
  else
  {
    *v17 = 0LL;
    v17[1] = 0LL;
    v18 = a2[1];
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    *v17 = *a2;
    v17[1] = a2[1];
    *(_QWORD *)(a1 + 96) += 16LL;
  }
  if ( BYTE8(v45) )
    sub_180067304(v45);
  sub_18007CFC0(a1);
  v32 = 0LL;
  v19 = a2[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a2[1];
  }
  *(_QWORD *)&v32 = *a2;
  *((_QWORD *)&v32 + 1) = v19;
  sub_1800A555C(*(_QWORD *)(a1 + 512), &v32);
  for ( i = 0LL; i < (__int64)(*(_QWORD *)(a1 + 896) - *(_QWORD *)(a1 + 888)) >> 4; ++i )
  {
    v43 = 0LL;
    sub_18007B1E8(a1, &v43, i);
    v21 = v43;
    if ( (_QWORD)v43 && sub_180067F88(v43, 2) )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 16LL))(v21, a2);
    if ( *((_QWORD *)&v43 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v22 = *((_QWORD *)&v43 + 1);
        (***((void (__fastcall ****)(_QWORD))&v43 + 1))(*((_QWORD *)&v43 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v43 + 1) + 8LL))(*((_QWORD *)&v43 + 1));
      }
    }
  }
  v23 = (volatile signed __int32 *)a2[1];
  if ( v23 )
  {
    _InterlockedIncrement(v23 + 2);
    v23 = (volatile signed __int32 *)a2[1];
  }
  v24 = *a2;
  v52 = 0LL;
  v49 = &std::_Func_impl_no_alloc<_lambda_87405cc2c55410793a5c9c24c44d1dd2_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
  v50 = 0LL;
  v51 = 0LL;
  if ( v23 )
    _InterlockedIncrement(v23 + 2);
  v50 = v24;
  v51 = v23;
  v25 = &v49;
  v52 = &v49;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
    v25 = v52;
  }
  v26 = *(__int64 **)(a1 + 704);
  v27 = *(__int64 **)(a1 + 712);
  if ( v26 != v27 )
  {
    do
    {
      v46 = 0LL;
      sub_180066E84(*v26 + 16, (__int64)&v46);
      sub_180071D90(*v26, (__int64)&v49);
      if ( BYTE8(v46) )
        sub_180067304(v46);
      v26 += 2;
    }
    while ( v26 != v27 );
    v25 = v52;
  }
  if ( v25 )
  {
    v28 = &v49;
    LOBYTE(v28) = v25 != &v49;
    ((void (__fastcall *)(void ***, void ***))(*v25)[4])(v25, v28);
  }
  sub_180070BB8(*a2);
  result = sub_18007CC84(a1);
  if ( BYTE8(v47) )
    result = sub_180067304(v47);
  if ( BYTE8(v48) )
    return sub_180067304(v48);
  return result;
}
