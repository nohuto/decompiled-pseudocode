/*
 * XREFs of sub_180035AD0 @ 0x180035AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180010020 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_105 @ 0x1800136DC (unknown_libname_105.c)
 *     sub_180018B88 @ 0x180018B88 (sub_180018B88.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     ?data@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x18002C704 (-data@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAPEBDXZ.c)
 *     sub_18002C814 @ 0x18002C814 (sub_18002C814.c)
 *     unknown_libname_106 @ 0x180031650 (unknown_libname_106.c)
 *     sub_1800335A0 @ 0x1800335A0 (sub_1800335A0.c)
 *     unknown_libname_162 @ 0x1800337A0 (unknown_libname_162.c)
 *     sub_18003387C @ 0x18003387C (sub_18003387C.c)
 *     sub_180033AE0 @ 0x180033AE0 (sub_180033AE0.c)
 *     sub_18003663C @ 0x18003663C (sub_18003663C.c)
 *     sub_180036BB8 @ 0x180036BB8 (sub_180036BB8.c)
 *     sub_1800A0690 @ 0x1800A0690 (sub_1800A0690.c)
 *     sub_1800A06AC @ 0x1800A06AC (sub_1800A06AC.c)
 *     sub_1800A0720 @ 0x1800A0720 (sub_1800A0720.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     sub_1800D12B8 @ 0x1800D12B8 (sub_1800D12B8.c)
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     j_??2@YAPEAX_K@Z @ 0x180124450 (j_--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
_QWORD *__fastcall sub_180035AD0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // r13
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  ULONG_PTR v16; // rbx
  int v17; // eax
  ULONG_PTR v18; // r14
  int v19; // eax
  unsigned int v20; // r15d
  unsigned int v21; // r14d
  unsigned int v22; // esi
  unsigned int v23; // eax
  unsigned __int64 v24; // r14
  void *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  void *v43; // [rsp+50h] [rbp-B0h] BYREF
  int v44; // [rsp+58h] [rbp-A8h] BYREF
  void **v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  __int128 v48; // [rsp+78h] [rbp-88h] BYREF
  __int128 v49; // [rsp+88h] [rbp-78h] BYREF
  __int128 v50; // [rsp+98h] [rbp-68h]
  __int128 v51; // [rsp+A8h] [rbp-58h]
  _DWORD v52[15]; // [rsp+C0h] [rbp-40h]
  __m128i si128; // [rsp+FCh] [rbp-4h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  int v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+114h] [rbp+14h]
  int v57; // [rsp+118h] [rbp+18h]
  int v58; // [rsp+11Ch] [rbp+1Ch]
  int v59; // [rsp+120h] [rbp+20h]
  __int128 v60; // [rsp+130h] [rbp+30h] BYREF
  __int64 v61; // [rsp+140h] [rbp+40h]
  __int64 v62[3]; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v63[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v64; // [rsp+180h] [rbp+80h] BYREF
  __int64 v65[4]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v66[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v67[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v68[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v69[4]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v70[4]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v71[4]; // [rsp+250h] [rbp+150h] BYREF
  _QWORD v72[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v73[4]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v74[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v75[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v76[64]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v78[64]; // [rsp+390h] [rbp+290h] BYREF
  void *Src[2]; // [rsp+3D0h] [rbp+2D0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+3E0h] [rbp+2E0h] BYREF
  EXCEPTION_RECORD v81; // [rsp+480h] [rbp+380h] BYREF
  __int64 v82; // [rsp+520h] [rbp+420h] BYREF
  __int64 v83; // [rsp+528h] [rbp+428h] BYREF
  __int64 v84; // [rsp+530h] [rbp+430h] BYREF
  __int64 v85; // [rsp+538h] [rbp+438h] BYREF
  _QWORD v86[4]; // [rsp+540h] [rbp+440h] BYREF
  _BYTE v87[12]; // [rsp+560h] [rbp+460h] BYREF
  int v88; // [rsp+56Ch] [rbp+46Ch]
  __int64 v89; // [rsp+57Ch] [rbp+47Ch]
  __int64 v90; // [rsp+584h] [rbp+484h]
  _BYTE v91[20]; // [rsp+590h] [rbp+490h] BYREF
  __int64 v92; // [rsp+5A4h] [rbp+4A4h]
  __int64 v93; // [rsp+5ACh] [rbp+4ACh]
  void *retaddr; // [rsp+5F8h] [rbp+4F8h]

  v4 = *(__int64 **)(a1 + 112);
  if ( v4 )
    v5 = *v4;
  else
    v5 = 0LL;
  if ( v5 && (*(_DWORD *)(v5 + 20) & 0x10) != 0 )
  {
    sub_18000FE28(v66);
    v41 = (unsigned int)sub_18000FE28(v65);
    sub_1800D1210((unsigned int)v75, v41, 350, (unsigned int)v66, 0);
    throw (Spectre::Engine::EngineException *)v75;
  }
  if ( *((_DWORD *)v4 + 3) > 1u )
  {
    sub_18000FE28(v68);
    v42 = (unsigned int)sub_18000FE28(v67);
    sub_1800D1210((unsigned int)v76, v42, 355, (unsigned int)v68, 0);
    throw (Spectre::Engine::EngineException *)v76;
  }
  v48 = 0LL;
  v49 = 0LL;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
      {
        v49 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_180018B88(&v48, (__int64 *)&v49);
  v83 = 0LL;
  v8 = v48;
  sub_180029F64(v48, &v83);
  v82 = 0LL;
  sub_180029F94(v8, &v82);
  v46 = 0LL;
  v47 = 0LL;
  v9 = *(_QWORD *)(a1 + 168);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 80LL))(v9, v87);
    v89 = 3LL;
    v90 = 0x20000LL;
    v88 = 1;
    v84 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v83 + 40LL))(v83, v87, 0LL, &v84);
    sub_18002BE74(v8, v10);
    if ( v10 < 0 )
    {
      sub_18000FE28(v86);
      v33 = unknown_libname_106(v86, " File=");
      unknown_libname_106(v33, "..\\Source\\TextureD3D11.cpp");
      v34 = unknown_libname_106(v86, " Line=");
      unknown_libname_106(v34, "384");
      v35 = unknown_libname_106(v86, " Message=");
      unknown_libname_106(v35, "\"TextureD3D11::GetDeviceBuffer(): unable to create texture (2D)\"");
      unknown_libname_162(v62);
      sub_180036BB8(v69, v87, v62);
      v36 = unknown_libname_106(v86, " Details=\"");
      v37 = (_QWORD *)unknown_libname_105(v36);
      unknown_libname_106(v37, "\"");
      std::string::_Tidy_deallocate(v69);
      sub_180033AE0(v62);
      sub_18002C814(v70, v10);
      v38 = unknown_libname_106(v86, " HRESULT=");
      unknown_libname_105(v38);
      std::string::_Tidy_deallocate(v70);
      std::string::data(v86);
      sub_18000FE28(v72);
      v39 = (unsigned int)sub_18000FE28(v71);
      sub_1800D12B8((unsigned int)pExceptionObject, v39, 384, v10, (__int64)v72, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v11 = *(_QWORD *)(a1 + 168);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(a1 + 168));
    v46 = v11;
    v12 = v84;
    v13 = v84;
    if ( v84 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 8LL))(v84);
      v12 = v84;
    }
    v47 = v13;
    if ( v12 )
    {
      v84 = 0LL;
LABEL_30:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 176);
    if ( !v14 )
    {
      sub_18000FE28(v74);
      v40 = (unsigned int)sub_18000FE28(v73);
      sub_1800D1210((unsigned int)v78, v40, 415, (unsigned int)v74, 0);
      throw (Spectre::Engine::EngineException *)v78;
    }
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 80LL))(v14, v91);
    v92 = 3LL;
    v93 = 0x20000LL;
    v85 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v83 + 48LL))(v83, v91, 0LL, &v85);
    v16 = v15;
    sub_18002BE74(v8, v15);
    if ( (v16 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v16;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v11 = *(_QWORD *)(a1 + 176);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(a1 + 176));
    v46 = v11;
    v12 = v85;
    v13 = v85;
    if ( v85 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 8LL))(v85);
      v12 = v85;
    }
    v47 = v13;
    if ( v12 )
    {
      v85 = 0LL;
      goto LABEL_30;
    }
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v82 + 376LL))(v82, v13, v11);
  v64 = 0LL;
  *(_OWORD *)Src = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v82 + 112LL))(
          v82,
          v13,
          0LL,
          1LL,
          0,
          Src);
  v18 = v17;
  sub_18002BE74(v8, v17);
  if ( (v18 & 0x80000000) != 0LL )
  {
    memset(&v81, 0, sizeof(v81));
    v81.ExceptionCode = -532265403;
    v81.ExceptionAddress = retaddr;
    v81.NumberParameters = 1;
    v81.ExceptionInformation[0] = v18;
    RaiseFailFastException(&v81, 0LL, 0);
  }
  v19 = sub_1800A0690(a1);
  v52[0] = 0;
  v52[1] = 4;
  v52[2] = 4;
  v52[3] = 4;
  v52[4] = 8;
  v52[5] = 12;
  v52[6] = 16;
  v52[7] = 4;
  v52[8] = 4;
  v52[9] = 8;
  v52[10] = 12;
  v52[11] = 16;
  v52[12] = 2;
  v52[13] = 1;
  v52[14] = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801436B0);
  v54 = 2;
  v55 = 4;
  v56 = 8;
  v57 = 4;
  v58 = 1;
  v59 = 2;
  LODWORD(v45) = v52[v19];
  LODWORD(v43) = Src[1];
  v44 = (int)Src[1];
  if ( *(_QWORD *)(a1 + 176) )
  {
    v20 = HIDWORD(Src[1]);
  }
  else
  {
    v21 = sub_1800A06AC(a1);
    v22 = sub_1800A0720(a1);
    v23 = sub_1800A0690(a1);
    v20 = sub_18003663C(v23, v22, v21, &v44);
  }
  v24 = v20 * *(_DWORD *)(v5 + 8);
  v25 = operator new(v24);
  v28 = v25;
  if ( v25 )
    memset(v25, 0, (unsigned int)v24);
  else
    v28 = 0LL;
  if ( v24 )
  {
    if ( v28 )
    {
      if ( Src[0] )
      {
        memcpy(v28, Src[0], v24);
        goto LABEL_45;
      }
      memset(v28, 0, v24);
    }
    *(_DWORD *)o__errno(v27, v26) = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_45:
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v82 + 120LL))(v82, v13, 0LL);
  *(_QWORD *)&v50 = 0LL;
  *((_QWORD *)&v50 + 1) = v24;
  *(_QWORD *)&v51 = __PAIR64__((unsigned int)v43, (unsigned int)v45);
  *((_QWORD *)&v51 + 1) = v20;
  v45 = &v43;
  v63[0] = v50;
  v63[1] = v51;
  v43 = v28;
  v60 = 0LL;
  v61 = 0LL;
  sub_1800335A0(&v60, (char *)v63, (char *)&v64);
  sub_18003387C(a2, &v60, &v43);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v29 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = v83;
  if ( v83 )
  {
    v83 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  if ( *((_QWORD *)&v48 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v31 = *((_QWORD *)&v48 + 1);
      (***((void (__fastcall ****)(_QWORD))&v48 + 1))(*((_QWORD *)&v48 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v48 + 1) + 8LL))(*((_QWORD *)&v48 + 1));
    }
  }
  return a2;
}
