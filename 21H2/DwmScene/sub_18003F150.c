/*
 * XREFs of sub_18003F150 @ 0x18003F150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180010534 @ 0x180010534 (sub_180010534.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180017984 @ 0x180017984 (sub_180017984.c)
 *     sub_180018B88 @ 0x180018B88 (sub_180018B88.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_18002C458 @ 0x18002C458 (sub_18002C458.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18002F66C @ 0x18002F66C (sub_18002F66C.c)
 *     sub_180036B88 @ 0x180036B88 (sub_180036B88.c)
 *     sub_18003E534 @ 0x18003E534 (sub_18003E534.c)
 *     sub_18003E878 @ 0x18003E878 (sub_18003E878.c)
 *     sub_18003FE78 @ 0x18003FE78 (sub_18003FE78.c)
 *     sub_18004071C @ 0x18004071C (sub_18004071C.c)
 *     sub_180067F58 @ 0x180067F58 (sub_180067F58.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall sub_18003F150(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v7; // r15
  __int64 v8; // rdx
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r8
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  signed __int32 v14; // eax
  __int16 v15; // cx
  void ***v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  volatile signed __int32 *v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _DWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rbx
  volatile signed __int32 *v28; // rbx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 **v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rcx
  _BYTE *v40; // rdx
  volatile signed __int32 *v41; // rbx
  __int64 *v42; // rax
  unsigned int v43; // eax
  __int128 v44; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v45; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v47; // [rsp+70h] [rbp-90h]
  __int128 v48; // [rsp+80h] [rbp-80h]
  __int128 *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v51; // [rsp+A0h] [rbp-60h]
  __int128 v52; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54[5]; // [rsp+C8h] [rbp-38h] BYREF
  void **v55; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v56; // [rsp+F8h] [rbp-8h]
  __int128 v57; // [rsp+108h] [rbp+8h]
  __int128 *v58; // [rsp+118h] [rbp+18h]
  void ***v59; // [rsp+128h] [rbp+28h]
  int v60; // [rsp+130h] [rbp+30h] BYREF
  char v61; // [rsp+134h] [rbp+34h]
  bool v62; // [rsp+135h] [rbp+35h]
  bool v63; // [rsp+136h] [rbp+36h]
  char v64[56]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v65; // [rsp+170h] [rbp+70h]
  int v66; // [rsp+178h] [rbp+78h] BYREF
  char v67; // [rsp+17Ch] [rbp+7Ch]
  bool v68; // [rsp+17Dh] [rbp+7Dh]
  bool v69; // [rsp+17Eh] [rbp+7Eh]
  char v70[56]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v71; // [rsp+1B8h] [rbp+B8h]
  __int64 v72[3]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int64 v73; // [rsp+1D8h] [rbp+D8h]
  __int64 v74[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v75; // [rsp+1F8h] [rbp+F8h]
  __int64 v76[4]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v77[4]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v78[4]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v79[4]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v80[64]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v82; // [rsp+300h] [rbp+200h] BYREF
  __int64 v83; // [rsp+308h] [rbp+208h] BYREF
  __int128 v84; // [rsp+310h] [rbp+210h] BYREF
  __int128 v85; // [rsp+320h] [rbp+220h] BYREF
  __int128 v86; // [rsp+330h] [rbp+230h] BYREF
  int v87; // [rsp+340h] [rbp+240h]
  char v88; // [rsp+344h] [rbp+244h]
  bool v89; // [rsp+345h] [rbp+245h]
  bool v90; // [rsp+346h] [rbp+246h]
  _BYTE v91[56]; // [rsp+348h] [rbp+248h] BYREF
  _BYTE *v92; // [rsp+380h] [rbp+280h]
  int v93; // [rsp+390h] [rbp+290h] BYREF
  int v94; // [rsp+394h] [rbp+294h]
  __int128 v95; // [rsp+398h] [rbp+298h]
  int v96; // [rsp+408h] [rbp+308h] BYREF
  int v97; // [rsp+410h] [rbp+310h] BYREF

  v97 = a3;
  v96 = a2;
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
      {
        v7 = *(_QWORD *)(a1 + 72);
        v10 = *(volatile signed __int32 **)(a1 + 80);
        if ( v10 )
        {
          if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
            if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          }
        }
        break;
      }
    }
  }
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    sub_18000FE28(v77);
    v43 = (unsigned int)sub_18000FE28(v76);
    sub_1800D1210((unsigned int)v80, v43, 52, (unsigned int)v77, 0);
    throw (Spectre::Engine::EngineException *)v80;
  }
  v86 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = *(_QWORD *)(a1 + 80);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
      {
        v11 = *(_QWORD *)(a1 + 72);
        v12 = *(volatile signed __int32 **)(a1 + 80);
        break;
      }
    }
  }
  v86 = 0LL;
  if ( v12 )
    _InterlockedAdd(v12 + 2, 1u);
  *(_QWORD *)&v86 = v11;
  *((_QWORD *)&v86 + 1) = v12;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v15 = a5;
  *(_BYTE *)(a1 + 256) = (a5 & 0x40) != 0;
  v92 = 0LL;
  v87 = a4;
  v88 = HIBYTE(v15) & 1;
  v89 = (v15 & 0x400) != 0;
  v90 = (v15 & 0x200) != 0;
  *(_QWORD *)&v47 = a1;
  *((_QWORD *)&v47 + 1) = &v96;
  *(_QWORD *)&v48 = &v97;
  *((_QWORD *)&v48 + 1) = &a5;
  v49 = &v86;
  v55 = &std::_Func_impl_no_alloc<_lambda_4af3746430e5e2c46cf50146b08287aa_,void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::`vftable';
  v56 = v47;
  v57 = v48;
  v58 = &v86;
  v59 = &v55;
  sub_18002C458((__int64)&v55, (__int64)v91);
  if ( v59 )
  {
    v16 = &v55;
    LOBYTE(v16) = v59 != &v55;
    ((void (__fastcall *)(void ***, void ***))(*v59)[4])(v59, v16);
  }
  a5 = a5 & 0xFFFFF8BA | 1;
  if ( v89 && a4 != 1 )
  {
    sub_18000FE28(v79);
    v42 = sub_18000FE28(v78);
    sub_18002D8C4(pExceptionObject, v42, 97, (__int64)v79, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v17 = (_QWORD *)sub_1800703D4(v7);
  sub_180017984(v17, &v50, 1u);
  v18 = (_QWORD *)(a1 + 128);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 128), &v50);
  v19 = v51;
  if ( v51 )
  {
    if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v20 = (_QWORD *)sub_180067F58(a1, v72);
  v21 = std::string::append(v20, "Shared Texture", 0xEuLL);
  v53 = 0uLL;
  v52 = *(_OWORD *)v21;
  v53 = *((_OWORD *)v21 + 1);
  v21[2] = 0LL;
  v21[3] = 15LL;
  *(_BYTE *)v21 = 0;
  sub_180068194(*v18, &v52);
  if ( v73 >= 0x10 )
  {
    v22 = v72[0];
    if ( v73 + 1 >= 0x1000 )
    {
      v22 = *(_QWORD *)(v72[0] - 8);
      if ( (unsigned __int64)(v72[0] - v22 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v22, v73 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v22);
  }
  sub_18006821C(*v18, 1LL);
  sub_18006821C(*v18, 2LL);
  sub_18006821C(*v18, 4LL);
  if ( v88 || v89 || v90 )
  {
    v85 = 0LL;
    sub_18003E534(v7, &v85);
    v54[2] = 0LL;
    v54[3] = 15LL;
    LOBYTE(v54[0]) = 0;
    LOBYTE(v23) = 0;
    sub_18000FC14(v54, 0x1CuLL, v23, "DepthBuffer Readable Sampler");
    sub_180068194(v85, v54);
    if ( v88 )
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 208), &v85);
    if ( v89 )
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 240), &v85);
    if ( v90 )
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 224), &v85);
    v84 = 0LL;
    sub_18003E878((__int64)&v84);
    v24 = (_DWORD *)v84;
    *(_DWORD *)v84 = 0;
    v24[1] = 2;
    v24[2] = 2;
    v24[3] = 2;
    v25 = v85;
    v45 = 0LL;
    v26 = *((_QWORD *)&v84 + 1);
    if ( *((_QWORD *)&v84 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v84 + 1) + 8LL));
      v26 = *((_QWORD *)&v84 + 1);
    }
    v45 = v84;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 48LL))(v25, &v45);
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 8), 0xFFFFFFFF) == 1 )
      {
        v27 = *((_QWORD *)&v84 + 1);
        (***((void (__fastcall ****)(_QWORD))&v84 + 1))(*((_QWORD *)&v84 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v84 + 1) + 8LL))(*((_QWORD *)&v84 + 1));
      }
    }
    v28 = (volatile signed __int32 *)*((_QWORD *)&v85 + 1);
    if ( *((_QWORD *)&v85 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v85 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
  }
  v95 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v29 = 2;
  else
    v29 = (a5 & 8) != 0;
  v93 = sub_18002F66C(a4, v29);
  if ( *(_BYTE *)(a1 + 256) )
  {
    v94 = 5;
    v60 = v87;
    v61 = v88;
    v62 = v89;
    v63 = v90;
    v65 = 0LL;
    if ( v92 )
      v65 = (**(__int64 (__fastcall ***)(_BYTE *, char *))v92)(v92, v64);
    sub_18004071C(a1, &v60);
  }
  else
  {
    v94 = 3;
    v66 = v87;
    v67 = v88;
    v68 = v89;
    v69 = v90;
    v71 = 0LL;
    if ( v92 )
      v71 = (**(__int64 (__fastcall ***)(_BYTE *, char *))v92)(v92, v70);
    sub_18003FE78(a1, &v66);
  }
  v83 = 0LL;
  sub_180029F64(v86, &v83);
  v44 = 0LL;
  v30 = *(_QWORD *)(a1 + 104);
  if ( v30 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
    v30 = *(_QWORD *)(a1 + 104);
  }
  v46[0] = *(_QWORD *)(a1 + 96);
  v46[1] = v30;
  sub_180018B88(&v44, v46);
  v82 = 0LL;
  sub_180036B88(v44, &v82);
  v31 = v83;
  v32 = (__int64 **)(a1 + 112);
  v33 = *(_QWORD *)(a1 + 112);
  if ( v33 )
  {
    *v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v31 + 80LL))(v31, v82, &v93, a1 + 112);
  sub_18002BE74(v86, v34);
  v35 = sub_180067F58(a1, v74);
  if ( *(_QWORD *)(v35 + 24) >= 0x10uLL )
    v35 = *(_QWORD *)v35;
  sub_180010534(*v32, (const char *)v35);
  if ( v75 >= 0x10 )
  {
    v36 = v74[0];
    if ( v75 + 1 >= 0x1000 )
    {
      v36 = *(_QWORD *)(v74[0] - 8);
      if ( (unsigned __int64)(v74[0] - v36 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v36, v75 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v36);
  }
  v37 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  if ( *((_QWORD *)&v44 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL)) )
    {
      v38 = *((_QWORD *)&v44 + 1);
      (***((void (__fastcall ****)(_QWORD))&v44 + 1))(*((_QWORD *)&v44 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v38 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v44 + 1) + 8LL))(*((_QWORD *)&v44 + 1));
    }
  }
  v39 = v83;
  if ( v83 )
  {
    v83 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  if ( v92 )
  {
    v40 = v91;
    LOBYTE(v40) = v92 != v91;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v92 + 32LL))(v92, v40);
    v92 = 0LL;
  }
  v41 = (volatile signed __int32 *)*((_QWORD *)&v86 + 1);
  if ( *((_QWORD *)&v86 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 8LL)) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v41)(v41);
    if ( !_InterlockedDecrement(v41 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
  }
}
