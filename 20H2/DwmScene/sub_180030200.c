/*
 * XREFs of sub_180030200 @ 0x180030200
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000FF40 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_103 @ 0x1800135FC (unknown_libname_103.c)
 *     sub_1800186E0 @ 0x1800186E0 (sub_1800186E0.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800246C4 @ 0x1800246C4 (sub_1800246C4.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     ?data@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x180026E34 (-data@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAPEBDXZ.c)
 *     sub_180026F44 @ 0x180026F44 (sub_180026F44.c)
 *     unknown_libname_104 @ 0x18002BD80 (unknown_libname_104.c)
 *     sub_18002DCD0 @ 0x18002DCD0 (sub_18002DCD0.c)
 *     unknown_libname_160 @ 0x18002DED0 (unknown_libname_160.c)
 *     sub_18002DFAC @ 0x18002DFAC (sub_18002DFAC.c)
 *     sub_18002E210 @ 0x18002E210 (sub_18002E210.c)
 *     sub_180030D6C @ 0x180030D6C (sub_180030D6C.c)
 *     sub_1800312E8 @ 0x1800312E8 (sub_1800312E8.c)
 *     sub_18009ADC0 @ 0x18009ADC0 (sub_18009ADC0.c)
 *     sub_18009ADDC @ 0x18009ADDC (sub_18009ADDC.c)
 *     sub_18009AE50 @ 0x18009AE50 (sub_18009AE50.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     sub_1800CB9E8 @ 0x1800CB9E8 (sub_1800CB9E8.c)
 *     _o__invalid_parameter_noinfo @ 0x18011E029 (_o__invalid_parameter_noinfo.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     j_??2@YAPEAX_K@Z @ 0x18011EB80 (j_--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
_QWORD *__fastcall sub_180030200(__int64 a1, _QWORD *a2)
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
  void *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rbx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  void *v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  void **v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int128 v46; // [rsp+78h] [rbp-88h] BYREF
  __int128 v47; // [rsp+88h] [rbp-78h] BYREF
  __int128 v48; // [rsp+98h] [rbp-68h]
  __int128 v49; // [rsp+A8h] [rbp-58h]
  _DWORD v50[15]; // [rsp+C0h] [rbp-40h]
  __m128i si128; // [rsp+FCh] [rbp-4h]
  int v52; // [rsp+10Ch] [rbp+Ch]
  int v53; // [rsp+110h] [rbp+10h]
  int v54; // [rsp+114h] [rbp+14h]
  int v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+11Ch] [rbp+1Ch]
  int v57; // [rsp+120h] [rbp+20h]
  __int128 v58; // [rsp+130h] [rbp+30h] BYREF
  __int64 v59; // [rsp+140h] [rbp+40h]
  __int64 v60[3]; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v61[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v62; // [rsp+180h] [rbp+80h] BYREF
  __int64 v63[4]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v64[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v65[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v66[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v67[4]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v68[4]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v69[4]; // [rsp+250h] [rbp+150h] BYREF
  _QWORD v70[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v71[4]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v72[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v73[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v74[64]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v76[64]; // [rsp+390h] [rbp+290h] BYREF
  void *Src[2]; // [rsp+3D0h] [rbp+2D0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+3E0h] [rbp+2E0h] BYREF
  EXCEPTION_RECORD v79; // [rsp+480h] [rbp+380h] BYREF
  __int64 v80; // [rsp+520h] [rbp+420h] BYREF
  __int64 v81; // [rsp+528h] [rbp+428h] BYREF
  __int64 v82; // [rsp+530h] [rbp+430h] BYREF
  __int64 v83; // [rsp+538h] [rbp+438h] BYREF
  _QWORD v84[4]; // [rsp+540h] [rbp+440h] BYREF
  _BYTE v85[12]; // [rsp+560h] [rbp+460h] BYREF
  int v86; // [rsp+56Ch] [rbp+46Ch]
  __int64 v87; // [rsp+57Ch] [rbp+47Ch]
  __int64 v88; // [rsp+584h] [rbp+484h]
  _BYTE v89[20]; // [rsp+590h] [rbp+490h] BYREF
  __int64 v90; // [rsp+5A4h] [rbp+4A4h]
  __int64 v91; // [rsp+5ACh] [rbp+4ACh]
  void *retaddr; // [rsp+5F8h] [rbp+4F8h]

  v4 = *(__int64 **)(a1 + 112);
  if ( v4 )
    v5 = *v4;
  else
    v5 = 0LL;
  if ( v5 && (*(_DWORD *)(v5 + 20) & 0x10) != 0 )
  {
    sub_18000FD48(v64);
    v39 = (unsigned int)sub_18000FD48(v63);
    sub_1800CB940((unsigned int)v73, v39, 350, (unsigned int)v64, 0);
    throw (Spectre::Engine::EngineException *)v73;
  }
  if ( *((_DWORD *)v4 + 3) > 1u )
  {
    sub_18000FD48(v66);
    v40 = (unsigned int)sub_18000FD48(v65);
    sub_1800CB940((unsigned int)v74, v40, 355, (unsigned int)v66, 0);
    throw (Spectre::Engine::EngineException *)v74;
  }
  v46 = 0LL;
  v47 = 0LL;
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
        v47 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_1800186E0(&v46, (__int64 *)&v47);
  v81 = 0LL;
  v8 = v46;
  sub_180024694(v46, &v81);
  v80 = 0LL;
  sub_1800246C4(v8, &v80);
  v44 = 0LL;
  v45 = 0LL;
  v9 = *(_QWORD *)(a1 + 168);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 80LL))(v9, v85);
    v87 = 3LL;
    v88 = 0x20000LL;
    v86 = 1;
    v82 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v81 + 40LL))(v81, v85, 0LL, &v82);
    sub_1800265A4(v8, v10);
    if ( v10 < 0 )
    {
      sub_18000FD48(v84);
      v31 = unknown_libname_104(v84, " File=");
      unknown_libname_104(v31, "..\\Source\\TextureD3D11.cpp");
      v32 = unknown_libname_104(v84, " Line=");
      unknown_libname_104(v32, "384");
      v33 = unknown_libname_104(v84, " Message=");
      unknown_libname_104(v33, "\"TextureD3D11::GetDeviceBuffer(): unable to create texture (2D)\"");
      unknown_libname_160(v60);
      sub_1800312E8(v67, v85, v60);
      v34 = unknown_libname_104(v84, " Details=\"");
      v35 = (_QWORD *)unknown_libname_103(v34);
      unknown_libname_104(v35, "\"");
      std::string::_Tidy_deallocate(v67);
      sub_18002E210(v60);
      sub_180026F44(v68, v10);
      v36 = unknown_libname_104(v84, " HRESULT=");
      unknown_libname_103(v36);
      std::string::_Tidy_deallocate(v68);
      std::string::data(v84);
      sub_18000FD48(v70);
      v37 = (unsigned int)sub_18000FD48(v69);
      sub_1800CB9E8((unsigned int)pExceptionObject, v37, 384, v10, (__int64)v70, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v11 = *(_QWORD *)(a1 + 168);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(a1 + 168));
    v44 = v11;
    v12 = v82;
    v13 = v82;
    if ( v82 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
      v12 = v82;
    }
    v45 = v13;
    if ( v12 )
    {
      v82 = 0LL;
LABEL_30:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 176);
    if ( !v14 )
    {
      sub_18000FD48(v72);
      v38 = (unsigned int)sub_18000FD48(v71);
      sub_1800CB940((unsigned int)v76, v38, 415, (unsigned int)v72, 0);
      throw (Spectre::Engine::EngineException *)v76;
    }
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 80LL))(v14, v89);
    v90 = 3LL;
    v91 = 0x20000LL;
    v83 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v81 + 48LL))(v81, v89, 0LL, &v83);
    v16 = v15;
    sub_1800265A4(v8, v15);
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
    v44 = v11;
    v12 = v83;
    v13 = v83;
    if ( v83 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 8LL))(v83);
      v12 = v83;
    }
    v45 = v13;
    if ( v12 )
    {
      v83 = 0LL;
      goto LABEL_30;
    }
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v80 + 376LL))(v80, v13, v11);
  v62 = 0LL;
  *(_OWORD *)Src = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v80 + 112LL))(
          v80,
          v13,
          0LL,
          1LL,
          0,
          Src);
  v18 = v17;
  sub_1800265A4(v8, v17);
  if ( (v18 & 0x80000000) != 0LL )
  {
    memset(&v79, 0, sizeof(v79));
    v79.ExceptionCode = -532265403;
    v79.ExceptionAddress = retaddr;
    v79.NumberParameters = 1;
    v79.ExceptionInformation[0] = v18;
    RaiseFailFastException(&v79, 0LL, 0);
  }
  v19 = sub_18009ADC0(a1);
  v50[0] = 0;
  v50[1] = 4;
  v50[2] = 4;
  v50[3] = 4;
  v50[4] = 8;
  v50[5] = 12;
  v50[6] = 16;
  v50[7] = 4;
  v50[8] = 4;
  v50[9] = 8;
  v50[10] = 12;
  v50[11] = 16;
  v50[12] = 2;
  v50[13] = 1;
  v50[14] = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013D360);
  v52 = 2;
  v53 = 4;
  v54 = 8;
  v55 = 4;
  v56 = 1;
  v57 = 2;
  LODWORD(v43) = v50[v19];
  LODWORD(v41) = Src[1];
  v42 = (int)Src[1];
  if ( *(_QWORD *)(a1 + 176) )
  {
    v20 = HIDWORD(Src[1]);
  }
  else
  {
    v21 = sub_18009ADDC(a1);
    v22 = sub_18009AE50(a1);
    v23 = sub_18009ADC0(a1);
    v20 = sub_180030D6C(v23, v22, v21, &v42);
  }
  v24 = v20 * *(_DWORD *)(v5 + 8);
  v25 = operator new(v24);
  v26 = v25;
  if ( v25 )
    memset(v25, 0, (unsigned int)v24);
  else
    v26 = 0LL;
  if ( v24 )
  {
    if ( v26 )
    {
      if ( Src[0] )
      {
        memcpy(v26, Src[0], v24);
        goto LABEL_45;
      }
      memset(v26, 0, v24);
    }
    *(_DWORD *)o__errno() = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_45:
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v80 + 120LL))(v80, v13, 0LL);
  *(_QWORD *)&v48 = 0LL;
  *((_QWORD *)&v48 + 1) = v24;
  *(_QWORD *)&v49 = __PAIR64__((unsigned int)v41, (unsigned int)v43);
  *((_QWORD *)&v49 + 1) = v20;
  v43 = &v41;
  v61[0] = v48;
  v61[1] = v49;
  v41 = v26;
  v58 = 0LL;
  v59 = 0LL;
  sub_18002DCD0(&v58, (char *)v61, (char *)&v62);
  sub_18002DFAC(a2, &v58, &v41);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v27 = v80;
  if ( v80 )
  {
    v80 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = v81;
  if ( v81 )
  {
    v81 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( *((_QWORD *)&v46 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v29 = *((_QWORD *)&v46 + 1);
      (***((void (__fastcall ****)(_QWORD))&v46 + 1))(*((_QWORD *)&v46 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 8LL))(*((_QWORD *)&v46 + 1));
    }
  }
  return a2;
}
