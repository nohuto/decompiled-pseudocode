/*
 * XREFs of sub_18003F610 @ 0x18003F610
 * Callers:
 *     sub_18003F3C0 @ 0x18003F3C0 (sub_18003F3C0.c)
 * Callees:
 *     sub_18000F54C @ 0x18000F54C (sub_18000F54C.c)
 *     sub_18000F7C8 @ 0x18000F7C8 (sub_18000F7C8.c)
 *     sub_180010454 @ 0x180010454 (sub_180010454.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_180026F5C @ 0x180026F5C (sub_180026F5C.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_1800389E8 @ 0x1800389E8 (sub_1800389E8.c)
 *     sub_180039510 @ 0x180039510 (sub_180039510.c)
 *     sub_18003F20C @ 0x18003F20C (sub_18003F20C.c)
 *     sub_180062F8C @ 0x180062F8C (sub_180062F8C.c)
 *     sub_180066CA8 @ 0x180066CA8 (sub_180066CA8.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_1800CB4FC @ 0x1800CB4FC (sub_1800CB4FC.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_18003F610(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v5; // r14
  double v6; // xmm0_8
  char v7; // r13
  int v8; // eax
  ULONG_PTR v9; // rbx
  char v10; // r15
  __int64 v11; // rsi
  __int64 *v12; // rcx
  __int64 *v13; // rbx
  unsigned int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  ULONG_PTR v20; // rbx
  __int64 v21; // rbx
  __int64 *v22; // rsi
  __int64 v23; // r14
  __int64 v24; // rcx
  int v25; // eax
  ULONG_PTR v26; // rbx
  int v27; // eax
  ULONG_PTR v28; // rbx
  __int64 v29; // rbx
  unsigned int v30; // eax
  int v31; // eax
  ULONG_PTR v32; // rbx
  __int64 v33; // rbx
  unsigned int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rbx
  __int64 v37; // rcx
  int v38; // eax
  ULONG_PTR v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rcx
  int v45; // eax
  ULONG_PTR v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // r12
  __int64 v55; // rsi
  _QWORD *v56; // rbx
  __int64 v57; // rcx
  int v58; // eax
  ULONG_PTR v59; // rbx
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 *v62; // rbx
  __int64 v63; // rcx
  int v64; // eax
  ULONG_PTR v65; // rbx
  __int64 v66; // rbx
  __int64 *v67; // rsi
  __int64 v68; // r14
  __int64 v69; // rcx
  int v70; // eax
  ULONG_PTR v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // r8
  __int64 v77; // rdx
  signed __int32 v78; // eax
  __int64 v79; // rcx
  __int64 result; // rax
  int v81; // r14d
  __int64 v82; // rsi
  __int64 v83; // r15
  __int64 v84; // r13
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  volatile signed __int32 *v90; // rbx
  volatile signed __int32 *v91; // rbx
  __int64 v92; // rdx
  int v93; // r14d
  __int64 v94; // rsi
  __int64 v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rcx
  volatile signed __int32 *v99; // rbx
  volatile signed __int32 *v100; // rbx
  __int64 v101; // rbx
  __int64 *v102; // rcx
  __int64 (__fastcall ***v103)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v104; // rcx
  __int64 v105; // rbx
  char v106; // [rsp+38h] [rbp-D0h]
  char v107; // [rsp+39h] [rbp-CFh]
  unsigned int v108; // [rsp+48h] [rbp-C0h]
  _QWORD *v109; // [rsp+48h] [rbp-C0h]
  _QWORD *v110; // [rsp+50h] [rbp-B8h]
  __int128 v111; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v112; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v113; // [rsp+70h] [rbp-98h] BYREF
  __int64 v114; // [rsp+78h] [rbp-90h] BYREF
  __int64 v115; // [rsp+80h] [rbp-88h] BYREF
  __int64 v116; // [rsp+88h] [rbp-80h] BYREF
  __int128 v117; // [rsp+98h] [rbp-70h] BYREF
  __int128 v118; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v119[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v120; // [rsp+C0h] [rbp-48h]
  _BYTE v121[16]; // [rsp+C8h] [rbp-40h] BYREF
  EXCEPTION_RECORD v122; // [rsp+D8h] [rbp-30h] BYREF
  EXCEPTION_RECORD v123; // [rsp+178h] [rbp+70h] BYREF
  EXCEPTION_RECORD v124; // [rsp+218h] [rbp+110h] BYREF
  EXCEPTION_RECORD v125; // [rsp+2B8h] [rbp+1B0h] BYREF
  EXCEPTION_RECORD v126; // [rsp+358h] [rbp+250h] BYREF
  EXCEPTION_RECORD v127; // [rsp+3F8h] [rbp+2F0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+498h] [rbp+390h] BYREF
  EXCEPTION_RECORD v129; // [rsp+538h] [rbp+430h] BYREF
  EXCEPTION_RECORD v130; // [rsp+5D8h] [rbp+4D0h] BYREF
  EXCEPTION_RECORD v131; // [rsp+678h] [rbp+570h] BYREF
  __int64 v132; // [rsp+718h] [rbp+610h] BYREF
  __int64 v133; // [rsp+720h] [rbp+618h] BYREF
  __int64 v134; // [rsp+728h] [rbp+620h] BYREF
  __int64 *v135; // [rsp+730h] [rbp+628h] BYREF
  __int64 (__fastcall ***v136)(_QWORD, void *, __int64 **); // [rsp+738h] [rbp+630h] BYREF
  __int128 v137; // [rsp+740h] [rbp+638h]
  unsigned __int64 v138; // [rsp+750h] [rbp+648h]
  __int64 v139; // [rsp+758h] [rbp+650h]
  _DWORD v140[3]; // [rsp+760h] [rbp+658h] BYREF
  __int64 v141; // [rsp+76Ch] [rbp+664h]
  int v142; // [rsp+774h] [rbp+66Ch]
  __int128 v143; // [rsp+778h] [rbp+670h] BYREF
  _DWORD v144[2]; // [rsp+788h] [rbp+680h] BYREF
  __int64 v145; // [rsp+790h] [rbp+688h]
  int v146; // [rsp+798h] [rbp+690h]
  __int128 v147; // [rsp+7A8h] [rbp+6A0h] BYREF
  __int128 v148; // [rsp+7B8h] [rbp+6B0h] BYREF
  __int128 v149; // [rsp+7C8h] [rbp+6C0h] BYREF
  _DWORD v150[12]; // [rsp+7D8h] [rbp+6D0h] BYREF
  __int128 v151; // [rsp+808h] [rbp+700h] BYREF
  _BYTE v152[20]; // [rsp+818h] [rbp+710h]
  __int64 v153; // [rsp+82Ch] [rbp+724h]
  __int128 v154; // [rsp+838h] [rbp+730h] BYREF
  __int128 v155; // [rsp+848h] [rbp+740h]
  _OWORD v156[2]; // [rsp+868h] [rbp+760h] BYREF
  void *retaddr; // [rsp+8E0h] [rbp+7D8h]

  v5 = (_QWORD *)a1;
  v110 = (_QWORD *)a1;
  v111 = 0LL;
  sub_18003F20C(a1, &v111);
  v132 = 0LL;
  sub_180024694(v111, &v132);
  v136 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, void *, __int64 **)))(*(_QWORD *)*a2 + 32LL))(
    *a2,
    &v136);
  v6 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  v107 = v7;
  v108 = (v7 != 0) + 1;
  *(_BYTE *)(*a3 + 1) = v7;
  v135 = 0LL;
  v8 = (**v136)(v136, &unk_18013CC70, &v135);
  v9 = v8;
  if ( v8 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_180010454(v135, "CameraBackBuffer");
  v10 = 0;
  v106 = 0;
  v11 = *a3;
  v12 = *(__int64 **)(*a3 + 8);
  v13 = v135;
  if ( v12 != v135 )
  {
    if ( v135 )
    {
      (*(void (__fastcall **)(__int64 *))(*v135 + 8))(v135);
      v12 = *(__int64 **)(v11 + 8);
    }
    *(_QWORD *)(v11 + 8) = v13;
    if ( v12 )
      (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*a3 + 8) + 80LL))(*(_QWORD *)(*a3 + 8), &v154);
    v14 = v155;
    v144[1] = (v7 != 0) + 4;
    v145 = 0LL;
    v146 = 1;
    v144[0] = v155;
    v15 = v132;
    v16 = *a3;
    v17 = (__int64 *)(*a3 + 48);
    v18 = *v17;
    if ( *v17 )
    {
      *v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v16 = *a3;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)v15 + 72LL))(
            v15,
            *(_QWORD *)(v16 + 8),
            v144,
            v17);
    v20 = v19;
    if ( v19 < 0 )
    {
      memset(&v129, 0, sizeof(v129));
      v129.ExceptionCode = -532265403;
      v129.ExceptionAddress = retaddr;
      v129.NumberParameters = 1;
      v129.ExceptionInformation[0] = v20;
      RaiseFailFastException(&v129, 0LL, 0);
    }
    v21 = *a3;
    v22 = (__int64 *)(*a3 + 96);
    if ( v7 )
    {
      HIDWORD(v145) = 1;
      v23 = v132;
      v24 = *v22;
      if ( *v22 )
      {
        *v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        v21 = *a3;
      }
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)v23 + 72LL))(
              v23,
              *(_QWORD *)(v21 + 8),
              v144,
              v22);
      v26 = v25;
      if ( v25 < 0 )
      {
        memset(&v130, 0, sizeof(v130));
        v130.ExceptionCode = -532265403;
        v130.ExceptionAddress = retaddr;
        v130.NumberParameters = 1;
        v130.ExceptionInformation[0] = v26;
        RaiseFailFastException(&v130, 0LL, 0);
      }
      v5 = v110;
    }
    else
    {
      v72 = *v22;
      v73 = *(_QWORD *)(v21 + 48);
      if ( *v22 != v73 )
      {
        if ( v73 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
          v72 = *v22;
        }
        *v22 = v73;
        if ( v72 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      }
    }
    *(_QWORD *)&v137 = v14 | 0x100000000LL;
    DWORD2(v137) = LODWORD(v6);
    HIDWORD(v137) = LODWORD(v6);
    LODWORD(v138) = 3;
    v139 = 0LL;
    v156[0] = v137;
    v156[1] = v138;
    v133 = 0LL;
    v27 = (**v136)(v136, &unk_18013DF90, (__int64 **)&v133);
    v28 = v27;
    if ( v27 < 0 )
    {
      memset(&v131, 0, sizeof(v131));
      v131.ExceptionCode = -532265403;
      v131.ExceptionAddress = retaddr;
      v131.NumberParameters = 1;
      v131.ExceptionInformation[0] = v28;
      RaiseFailFastException(&v131, 0LL, 0);
    }
    v29 = v133;
    if ( v133 )
    {
      v30 = strnlen("DxgiBackBuffer", 0xFFuLL);
      (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v29 + 24LL))(
        v29,
        &unk_1801D6830,
        v30,
        "DxgiBackBuffer");
      v29 = v133;
    }
    v134 = 0LL;
    v31 = (*(__int64 (__fastcall **)(__int64, bool, __int64 *))(*(_QWORD *)v29 + 96LL))(v29, v7 != 0, &v134);
    v32 = v31;
    if ( v31 < 0 )
    {
      memset(&v122, 0, sizeof(v122));
      v122.ExceptionCode = -532265403;
      v122.ExceptionAddress = retaddr;
      v122.NumberParameters = 1;
      v122.ExceptionInformation[0] = v32;
      RaiseFailFastException(&v122, 0LL, 0);
    }
    v33 = v134;
    if ( v134 )
    {
      v34 = strnlen("DxgiSurface", 0xFFuLL);
      (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v33 + 24LL))(
        v33,
        &unk_1801D6830,
        v34,
        "DxgiSurface");
    }
    v35 = v5[66];
    v36 = *a3;
    v37 = *(_QWORD *)(*a3 + 32);
    if ( v37 )
    {
      *(_QWORD *)(v36 + 32) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *, __int64))(*(_QWORD *)v35 + 496LL))(
            v35,
            v134,
            v156,
            v36 + 32);
    v39 = v38;
    if ( v38 < 0 )
    {
      memset(&v123, 0, sizeof(v123));
      v123.ExceptionCode = -532265403;
      v123.ExceptionAddress = retaddr;
      v123.NumberParameters = 1;
      v123.ExceptionInformation[0] = v39;
      RaiseFailFastException(&v123, 0LL, 0);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v5[66] + 592LL))(v5[66], *(_QWORD *)(*a3 + 32));
    v40 = *a3;
    *(_QWORD *)(v40 + 40) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 24LL))(*a2, v121);
    v151 = v154;
    *(_OWORD *)v152 = v155;
    *(_QWORD *)&v152[12] = 3LL;
    v153 = 0x20000LL;
    HIDWORD(v151) = 1;
    v41 = *a3;
    v42 = *(_QWORD *)(*a3 + 16);
    if ( v42 )
    {
      *(_QWORD *)(v41 + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      v41 = *a3;
    }
    v43 = v132;
    v44 = *(_QWORD *)(v41 + 16);
    if ( v44 )
    {
      *(_QWORD *)(v41 + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64))(*(_QWORD *)v43 + 40LL))(
            v43,
            &v151,
            0LL,
            v41 + 16);
    v46 = v45;
    if ( v45 < 0 )
    {
      memset(&v124, 0, sizeof(v124));
      v124.ExceptionCode = -532265403;
      v124.ExceptionAddress = retaddr;
      v124.NumberParameters = 1;
      v124.ExceptionInformation[0] = v46;
      RaiseFailFastException(&v124, 0LL, 0);
    }
    sub_180010454(*(__int64 **)(*a3 + 16), "BackBufferStaging");
    v47 = *a3;
    v48 = *(_QWORD *)(*a3 + 56);
    if ( v48 )
    {
      *(_QWORD *)(v47 + 56) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      v47 = *a3;
    }
    v49 = *(_QWORD *)(v47 + 104);
    if ( v49 )
    {
      *(_QWORD *)(v47 + 104) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
    v10 = 1;
    v50 = v134;
    if ( v134 )
    {
      v134 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    v51 = v133;
    if ( v133 )
    {
      v133 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
  }
  v52 = *a3;
  if ( *(_QWORD *)(*a3 + 56) && *(_QWORD *)(v52 + 104) )
  {
    v54 = v108;
    goto LABEL_80;
  }
  v53 = *(_DWORD *)(v52 + 44);
  v150[0] = *(_DWORD *)(v52 + 40);
  v150[1] = v53;
  v150[2] = 1;
  v54 = v108;
  v150[3] = (v7 != 0) + 1;
  v150[4] = 55;
  v150[5] = 1;
  v150[6] = 0;
  v150[7] = 0;
  v150[8] = 64;
  v150[9] = 0;
  v150[10] = 0;
  v55 = v132;
  v56 = (_QWORD *)(v52 + 24);
  v57 = *(_QWORD *)(v52 + 24);
  if ( v57 )
  {
    *v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  }
  v58 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD *))(*(_QWORD *)v55 + 40LL))(v55, v150, 0LL, v56);
  v59 = v58;
  if ( v58 < 0 )
  {
    memset(&v125, 0, sizeof(v125));
    v125.ExceptionCode = -532265403;
    v125.ExceptionAddress = retaddr;
    v125.NumberParameters = 1;
    v125.ExceptionInformation[0] = v59;
    RaiseFailFastException(&v125, 0LL, 0);
  }
  sub_180010454(*(__int64 **)(*a3 + 24), "BackBuffer_DepthStencilTexture");
  v140[0] = 0;
  v140[1] = (v7 != 0) + 3;
  v140[2] = 0;
  if ( (v7 != 0) == -2 )
    goto LABEL_56;
  if ( (v7 != 0) == -1 )
    goto LABEL_72;
  if ( !v7 )
  {
LABEL_56:
    LODWORD(v141) = 0;
    goto LABEL_57;
  }
  if ( v7 != 0 )
  {
LABEL_72:
    v141 = 0LL;
    goto LABEL_57;
  }
  if ( (v7 != 0) == 3 )
  {
    HIDWORD(v141) = -1;
    goto LABEL_56;
  }
LABEL_57:
  v142 = 1;
  v60 = v132;
  v61 = *a3;
  v62 = (__int64 *)(*a3 + 56);
  v63 = *v62;
  if ( *v62 )
  {
    *v62 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
    v61 = *a3;
  }
  v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)v60 + 80LL))(
          v60,
          *(_QWORD *)(v61 + 24),
          v140,
          v62);
  v65 = v64;
  if ( v64 < 0 )
  {
    memset(&v126, 0, sizeof(v126));
    v126.ExceptionCode = -532265403;
    v126.ExceptionAddress = retaddr;
    v126.NumberParameters = 1;
    v126.ExceptionInformation[0] = v65;
    RaiseFailFastException(&v126, 0LL, 0);
  }
  sub_180010454(*(__int64 **)(*a3 + 56), "BackBuffer_DepthStencilView_LeftEye");
  v66 = *a3;
  v67 = (__int64 *)(*a3 + 104);
  if ( v7 )
  {
    HIDWORD(v141) = 1;
    v68 = v132;
    v69 = *v67;
    if ( *v67 )
    {
      *v67 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
      v66 = *a3;
    }
    v70 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)v68 + 80LL))(
            v68,
            *(_QWORD *)(v66 + 24),
            v140,
            v67);
    v71 = v70;
    if ( v70 < 0 )
    {
      memset(&v127, 0, sizeof(v127));
      v127.ExceptionCode = -532265403;
      v127.ExceptionAddress = retaddr;
      v127.NumberParameters = 1;
      v127.ExceptionInformation[0] = v71;
      RaiseFailFastException(&v127, 0LL, 0);
    }
    sub_180010454(*(__int64 **)(*a3 + 104), "BackBuffer_DepthStencilView_RightEye");
    v5 = v110;
  }
  else
  {
    v74 = *v67;
    v75 = *(_QWORD *)(v66 + 56);
    if ( *v67 != v75 )
    {
      if ( v75 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 8LL))(v75);
        v74 = *v67;
      }
      *v67 = v75;
      if ( v74 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
    }
  }
  v106 = 1;
LABEL_80:
  v76 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v5 + 376LL))(v5, v119);
  v137 = 0LL;
  v77 = *(_QWORD *)(v76 + 8);
  if ( v77 )
  {
    while ( 1 )
    {
      v78 = *(_DWORD *)(v77 + 8);
      if ( !v78 )
        break;
      if ( v78 == _InterlockedCompareExchange((volatile signed __int32 *)(v77 + 8), v78 + 1, v78) )
      {
        v137 = *(_OWORD *)v76;
        break;
      }
    }
  }
  v79 = v120;
  if ( v120 && _InterlockedExchangeAdd((volatile signed __int32 *)(v120 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v79 + 8LL))(v79, v77, v76);
  result = sub_18006AB04(v137);
  v109 = (_QWORD *)result;
  if ( v10 )
  {
    v81 = 0;
    v82 = 0LL;
    v83 = v54;
    v84 = result;
    do
    {
      v148 = 0LL;
      sub_18000F54C(v137, &v148);
      v85 = _RTDynamicCast(
              v148,
              0LL,
              &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
              &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
              1);
      v86 = *a3;
      v87 = *(_QWORD *)(*a3 + 16);
      v112 = v87;
      if ( v87 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 8LL))(v87);
        v86 = *a3;
      }
      v88 = *(_QWORD *)(v86 + 8);
      v113 = v88;
      if ( v88 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 8LL))(v88);
        v86 = *a3;
      }
      v89 = *(_QWORD *)(v82 + v86 + 48);
      v114 = v89;
      if ( v89 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 8LL))(v89);
        v86 = *a3;
      }
      sub_18002C460(v85, &v114, &v113, &v112, *(_DWORD *)(v86 + 40), *(_DWORD *)(v86 + 44));
      v149 = 0LL;
      sub_18000F7C8(v84, &v149, 0);
      sub_180062F8C(v149, &v148);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(*a3 + 64 + 48LL * v81), &v149);
      v90 = (volatile signed __int32 *)*((_QWORD *)&v149 + 1);
      if ( *((_QWORD *)&v149 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v149 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v90)(v90);
          if ( _InterlockedExchangeAdd(v90 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 8LL))(v90);
        }
      }
      v91 = (volatile signed __int32 *)*((_QWORD *)&v148 + 1);
      if ( *((_QWORD *)&v148 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v148 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v91)(v91);
          if ( _InterlockedExchangeAdd(v91 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v91 + 8LL))(v91);
        }
      }
      ++v81;
      v82 += 48LL;
      --v83;
    }
    while ( v83 );
    if ( !v107 )
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(*a3 + 64), (_QWORD *)(*a3 + 112));
    (*(void (__fastcall **)(_QWORD *))(*v110 + 56LL))(v110);
    LOBYTE(v92) = 1;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v110 + 360LL))(v110, v92);
  }
  if ( v106 )
  {
    v93 = 0;
    v94 = 0LL;
    do
    {
      v147 = 0LL;
      sub_1800389E8(v137, &v147);
      v95 = _RTDynamicCast(
              v147,
              0LL,
              &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
              &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
              1);
      v96 = *a3;
      v97 = *(_QWORD *)(*a3 + 24);
      v115 = v97;
      if ( v97 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 8LL))(v97);
        v96 = *a3;
      }
      v98 = *(_QWORD *)(v94 + v96 + 56);
      v116 = v98;
      if ( v98 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 8LL))(v98);
      sub_180039510(v95, &v116, &v115, 5u);
      v143 = 0LL;
      sub_180026F5C(v109, &v143, 1u);
      v118 = 0LL;
      if ( *((_QWORD *)&v147 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v147 + 1) + 8LL));
      v118 = v147;
      sub_1800CB4FC(v143, &v118, 5LL);
      v117 = 0LL;
      if ( *((_QWORD *)&v143 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v143 + 1) + 8LL));
      v117 = v143;
      sub_180066CA8(v110, &v117);
      result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(*a3 + 80 + 48LL * v93), &v143);
      v99 = (volatile signed __int32 *)*((_QWORD *)&v143 + 1);
      if ( *((_QWORD *)&v143 + 1) )
      {
        result = (unsigned int)_InterlockedExchangeAdd(
                                 (volatile signed __int32 *)(*((_QWORD *)&v143 + 1) + 8LL),
                                 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v99)(v99);
          result = (unsigned int)_InterlockedExchangeAdd(v99 + 3, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v99 + 8LL))(v99);
        }
      }
      v100 = (volatile signed __int32 *)*((_QWORD *)&v147 + 1);
      if ( *((_QWORD *)&v147 + 1) )
      {
        result = (unsigned int)_InterlockedExchangeAdd(
                                 (volatile signed __int32 *)(*((_QWORD *)&v147 + 1) + 8LL),
                                 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v100)(v100);
          result = (unsigned int)_InterlockedExchangeAdd(v100 + 3, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v100 + 8LL))(v100);
        }
      }
      ++v93;
      v94 += 48LL;
      --v54;
    }
    while ( v54 );
    if ( !v107 )
      result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(*a3 + 80), (_QWORD *)(*a3 + 128));
  }
  if ( *((_QWORD *)&v137 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v137 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v101 = *((_QWORD *)&v137 + 1);
      (***((void (__fastcall ****)(_QWORD))&v137 + 1))(*((_QWORD *)&v137 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v101 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v137 + 1) + 8LL))(*((_QWORD *)&v137 + 1));
    }
  }
  v102 = v135;
  if ( v135 )
  {
    v135 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64 *))(*v102 + 16))(v102);
  }
  v103 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v136;
  if ( v136 )
  {
    v136 = 0LL;
    result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v103)[2])(v103);
  }
  v104 = v132;
  if ( v132 )
  {
    v132 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
  }
  if ( *((_QWORD *)&v111 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v111 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v105 = *((_QWORD *)&v111 + 1);
      (***((void (__fastcall ****)(_QWORD))&v111 + 1))(*((_QWORD *)&v111 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v105 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v111 + 1) + 8LL))(*((_QWORD *)&v111 + 1));
    }
  }
  return result;
}
