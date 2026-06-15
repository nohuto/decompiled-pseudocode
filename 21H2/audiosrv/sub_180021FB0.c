/*
 * XREFs of sub_180021FB0 @ 0x180021FB0
 * Callers:
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180013360 @ 0x180013360 (sub_180013360.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 * Callees:
 *     sub_18000E6E0 @ 0x18000E6E0 (sub_18000E6E0.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233E0 @ 0x1800233E0 (sub_1800233E0.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_180032210 @ 0x180032210 (sub_180032210.c)
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 *     sub_180047420 @ 0x180047420 (sub_180047420.c)
 *     sub_180047E7C @ 0x180047E7C (sub_180047E7C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052550 @ 0x180052550 (sub_180052550.c)
 *     sub_180067BDC @ 0x180067BDC (sub_180067BDC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _o___std_exception_destroy @ 0x18006AA7E (_o___std_exception_destroy.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B6294 @ 0x1800B6294 (sub_1800B6294.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180021FB0(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v8; // r13
  int v10; // eax
  int v11; // ebx
  int v12; // r15d
  int v13; // esi
  BOOL v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  _QWORD *v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int128 v24; // xmm0
  void *v25; // rcx
  _OWORD *v26; // rcx
  __int64 v27; // rax
  BOOL v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rbx
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  BOOL v36; // ebx
  __int64 v37; // rcx
  int v38; // eax
  unsigned __int64 v39; // rsi
  __int64 v40; // rbx
  struct _RTL_CRITICAL_SECTION *v41; // rsi
  char *v42; // r13
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // ecx
  unsigned int v46; // esi
  int v47; // r9d
  __int64 v48; // rax
  int v49; // esi
  __int64 v50; // r8
  _QWORD *v51; // rcx
  int v52; // edx
  int v53; // r10d
  const char *v54; // rcx
  int v55; // eax
  __int64 v56; // rax
  _OWORD *v57; // rdx
  _OWORD *v58; // rax
  __int64 v59; // rax
  _OWORD *v60; // rcx
  BOOL v61; // ebx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rbx
  int v65; // edx
  int v66; // r8d
  __int64 v67; // r9
  unsigned __int64 v68; // rax
  int v69; // ebx
  struct _RTL_CRITICAL_SECTION *v70; // rsi
  unsigned int v71; // edx
  unsigned __int64 v72; // rax
  int v73; // ecx
  unsigned __int16 *v74; // rbx
  const void *v75; // r15
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbx
  void *v79; // rax
  void *v80; // rdi
  unsigned __int64 v81; // r8
  LPVOID v82; // rax
  void *v83; // rcx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r9
  __int64 v89; // rdx
  _QWORD *v90; // rax
  int v91; // eax
  char *v92; // rsi
  __int64 v93; // rbx
  _QWORD *v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  void *v98; // rcx
  __int64 v99; // rdx
  _QWORD *v100; // r11
  __int64 v101; // r10
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // r8d
  int v108; // r9d
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  int v113; // eax
  int v114; // [rsp+40h] [rbp-C0h]
  int v115; // [rsp+48h] [rbp-B8h]
  _OWORD *v116; // [rsp+48h] [rbp-B8h]
  __int64 v118; // [rsp+50h] [rbp-B0h]
  unsigned int i; // [rsp+50h] [rbp-B0h]
  __int64 v120; // [rsp+58h] [rbp-A8h] BYREF
  int v121[4]; // [rsp+60h] [rbp-A0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v123; // [rsp+80h] [rbp-80h]
  PROPVARIANT v124[2]; // [rsp+90h] [rbp-70h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  LPVOID v126; // [rsp+A8h] [rbp-58h] BYREF
  const char *v127; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v128; // [rsp+B8h] [rbp-48h]
  LPVOID pv; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v130; // [rsp+C8h] [rbp-38h]
  PROPVARIANT v131[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-20h]
  PROPVARIANT v133[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v134; // [rsp+F8h] [rbp-8h]
  __m256i v135; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall **v136)(); // [rsp+120h] [rbp+20h] BYREF
  char v137[16]; // [rsp+128h] [rbp+28h] BYREF
  __int64 (__fastcall **v138)(); // [rsp+138h] [rbp+38h] BYREF
  char v139[16]; // [rsp+140h] [rbp+40h] BYREF
  __int64 (__fastcall **v140)(); // [rsp+150h] [rbp+50h] BYREF
  char v141[16]; // [rsp+158h] [rbp+58h] BYREF
  __int64 (__fastcall **v142)(); // [rsp+168h] [rbp+68h] BYREF
  char v143[16]; // [rsp+170h] [rbp+70h] BYREF
  __m256i v144; // [rsp+180h] [rbp+80h] BYREF
  char v145[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v146[24]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v147[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v148; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v149; // [rsp+1F8h] [rbp+F8h]
  void *retaddr; // [rsp+258h] [rbp+158h]

  v128 = a3;
  v8 = a2;
  v114 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  pv = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &pv);
  v11 = v10;
  if ( v10 < 0 )
  {
    sub_18004BD84(retaddr, 4689LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v10);
    goto LABEL_158;
  }
  if ( a7 || a6 )
  {
    v85 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD, __int64, __int64))(*(_QWORD *)qword_18019EED0 + 56LL))(
            qword_18019EED0,
            pv,
            0LL,
            a6,
            a7);
    v11 = v85;
    if ( v85 < 0 )
    {
      sub_18004BD84(retaddr, 4694LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v85);
      goto LABEL_158;
    }
  }
  v126 = 0LL;
  v12 = 1;
  if ( !a4 )
    goto LABEL_36;
  v124[0] = &v126;
  v124[1] = 0LL;
  LOBYTE(Src) = 1;
  *(_OWORD *)pvar = *(_OWORD *)v128;
  v11 = sub_18000E6E0(a1, v8, (__int128 *)pvar, &v124[1]);
  if ( v11 < 0 )
  {
    v13 = v8;
    if ( (_DWORD)v8 == 2 )
    {
      v13 = 0;
    }
    else if ( (_DWORD)v8 )
    {
      goto LABEL_17;
    }
    v14 = 1;
    v15 = *(_QWORD *)(a1 + 80);
    if ( v15 )
    {
      *(_OWORD *)pvar = 0LL;
      v123 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
             v15,
             &xmmword_18015B7F8,
             pvar) >= 0
        && LOWORD(pvar[0]) == 19 )
      {
        v14 = LODWORD(pvar[1]) == 0;
      }
      PropVariantClear(pvar);
      if ( !v14 )
      {
        v16 = a1 + 168;
LABEL_19:
        v17 = *(_DWORD *)(v16 + 8);
        if ( v17 )
        {
          v18 = 0;
          if ( v17 <= 0 )
            goto LABEL_25;
          while ( 1 )
          {
            v19 = (_QWORD *)(*(_QWORD *)v16 + 16LL * v18);
            v20 = *v19 - 0x4965933DC18E2F7ELL;
            if ( *v19 == 0x4965933DC18E2F7ELL )
              v20 = v19[1] + 0xCD572DD10E12E49LL;
            if ( !v20 )
              break;
            if ( ++v18 >= v17 )
              goto LABEL_25;
          }
          if ( v18 == -1 )
          {
LABEL_25:
            v21 = 0;
            if ( v17 <= 0 )
              goto LABEL_171;
            while ( 1 )
            {
              v22 = (_QWORD *)(*(_QWORD *)v16 + 16LL * v21);
              v23 = *v22 - 0x4FD1B4939E90EA20LL;
              if ( *v22 == 0x4FD1B4939E90EA20LL )
                v23 = v22[1] + 0x30A9569EEC81575FLL;
              if ( !v23 )
                break;
              if ( ++v21 >= v17 )
                goto LABEL_171;
            }
            if ( v21 == -1 )
LABEL_171:
              v24 = *(_OWORD *)sub_180023320(v16, 0LL);
            else
              v24 = xmmword_18015B798;
          }
          else
          {
            v24 = xmmword_18015B810;
          }
        }
        else
        {
          v24 = xmmword_18015B730;
        }
        v135.m256i_i64[0] = a1;
        v135.m256i_i32[2] = v8;
        *(_OWORD *)((char *)&v135.m256i_u64[1] + 4) = v24;
        v144 = v135;
        v11 = sub_18001F9C0(a1, 0, 0, v8, (__int128 *)v144.m256i_i8, &v124[1]);
        goto LABEL_32;
      }
    }
LABEL_17:
    if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 152) )
    {
      v86 = sub_180118A38(&v136, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      sub_180118968(v86);
    }
    v16 = *(_QWORD *)(a1 + 160) + 16LL * v13;
    goto LABEL_19;
  }
LABEL_32:
  if ( (_BYTE)Src )
  {
    v25 = *(void **)v124[0];
    *(_QWORD *)v124[0] = v124[1];
    if ( v25 )
      CoTaskMemFree(v25);
  }
  if ( v11 < 0 )
  {
    sub_18004BD84(retaddr, 4704LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v11);
    goto LABEL_156;
  }
LABEL_36:
  if ( !a5 )
    goto LABEL_153;
  v26 = (_OWORD *)v128;
  v27 = *(_QWORD *)v128 - 0x4FD1B4939E90EA20LL;
  if ( *(_QWORD *)v128 == 0x4FD1B4939E90EA20LL )
    v27 = *(_QWORD *)(v128 + 8) + 0x30A9569EEC81575FLL;
  if ( v27 )
  {
LABEL_249:
    *(_OWORD *)pvar = *v26;
    v113 = sub_180020090(a1, v8, (__int64 *)pvar, a5);
    v11 = v113;
    if ( v113 < 0 )
    {
      sub_18004BD84(retaddr, 4723LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v113);
      goto LABEL_156;
    }
LABEL_153:
    if ( a4 )
    {
      v82 = v126;
      v126 = 0LL;
      *a4 = v82;
    }
    v11 = 0;
    goto LABEL_156;
  }
  v148 = 0uLL;
  v121[0] = 0;
  *(_OWORD *)pvar = xmmword_18015B798;
  if ( (_DWORD)v8 )
    goto LABEL_46;
  v28 = 1;
  v29 = *(_QWORD *)(a1 + 80);
  if ( !v29 )
    goto LABEL_46;
  *(_OWORD *)v124 = 0LL;
  Src = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v29 + 40LL))(
         v29,
         &xmmword_18015B7F8,
         v124) >= 0
    && LOWORD(v124[0]) == 19 )
  {
    v28 = LODWORD(v124[1]) == 0;
  }
  PropVariantClear(v124);
  if ( v28 )
  {
LABEL_46:
    if ( v8 >= *(_QWORD *)(a1 + 1656) )
    {
      v112 = sub_180118A38(&v135, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      sub_180118968(v112);
    }
    v30 = 96 * v8;
    sub_1800230F0(96 * v8 + *(_QWORD *)(a1 + 1664));
    if ( v8 >= *(_QWORD *)(a1 + 1672) )
    {
      v111 = sub_180118A38(&v144, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      sub_180118968(v111);
    }
    sub_1800230F0(v30 + *(_QWORD *)(a1 + 1680));
    if ( v8 >= *(_QWORD *)(a1 + 1688) )
    {
      v110 = sub_180118A38(v147, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      sub_180118968(v110);
    }
    sub_1800230F0(v30 + *(_QWORD *)(a1 + 1696));
    if ( v8 >= *(_QWORD *)(a1 + 152) )
    {
      v109 = sub_180118A38(v146, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      sub_180118968(v109);
    }
    v31 = *(_QWORD *)(a1 + 160) + 16 * v8;
  }
  else
  {
    v31 = a1 + 168;
  }
  v32 = 0;
  v33 = *(_DWORD *)(v31 + 8);
  if ( v33 <= 0 )
    goto LABEL_177;
  v34 = *(_QWORD *)v31;
  while ( 1 )
  {
    v35 = *(_QWORD *)(v34 + 16LL * v32) - (unsigned __int64)pvar[0];
    if ( !v35 )
      v35 = *(_QWORD *)(v34 + 16LL * v32 + 8) - (unsigned __int64)pvar[1];
    if ( !v35 )
      break;
    if ( ++v32 >= v33 )
      goto LABEL_177;
  }
  if ( v32 == -1 )
  {
LABEL_177:
    v69 = 0;
    goto LABEL_121;
  }
  v36 = 1;
  v37 = *(_QWORD *)(a1 + 80);
  if ( !v37 )
    goto LABEL_62;
  *(_OWORD *)v131 = 0LL;
  v132 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v37 + 40LL))(
         v37,
         &xmmword_18015B7F8,
         v131) >= 0
    && LOWORD(v131[0]) == 19 )
  {
    v36 = LODWORD(v131[1]) == 0;
  }
  PropVariantClear(v131);
  if ( v36 || (_DWORD)v8 == 3 )
LABEL_62:
    v38 = 1;
  else
    v38 = 0;
  v39 = v8;
  if ( v8 >= *(_QWORD *)(a1 + 1672) )
  {
    v106 = sub_180118A38(v145, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v106);
  }
  v40 = *(_QWORD *)(a1 + 1680) + 96 * v8;
  v127 = (const char *)v40;
  if ( v38 )
  {
    if ( !*(_BYTE *)(v40 + 52) )
    {
LABEL_72:
      v46 = 0;
      if ( *(int *)(v40 + 40) > 0 )
      {
        do
        {
          for ( i = 0; (signed int)i < *(_DWORD *)(*(_QWORD *)sub_180023320(v40 + 32, v46) + 8LL); ++i )
          {
            v94 = (_QWORD *)sub_180023320(v40 + 32, v46);
            v95 = sub_180023320(*v94, i);
            if ( (unsigned int)sub_180022EE0(&v148, v95) == -1 )
            {
              v96 = (_QWORD *)sub_180023320(v40 + 32, v46);
              v97 = sub_180023320(*v96, i);
              if ( !(unsigned int)sub_1800273F8(&v148, v97) )
              {
                v98 = retaddr;
                v99 = 584LL;
                goto LABEL_203;
              }
            }
          }
          ++v46;
        }
        while ( (signed int)v46 < *(_DWORD *)(v40 + 40) );
        v47 = HIDWORD(v148);
      }
      else
      {
        v47 = 0;
      }
      v48 = *(_QWORD *)(v40 + 16);
      if ( v48 )
      {
        v49 = 0;
        if ( *(int *)(v48 + 8) > 0 )
        {
          v50 = 0LL;
          v120 = 0LL;
          while ( 1 )
          {
            if ( v49 < 0 || v49 >= *(_DWORD *)(v48 + 8) )
            {
              sub_1800BB2C8(3221225612LL);
              __debugbreak();
            }
            v51 = (_QWORD *)(*(_QWORD *)v48 + 16LL * v49);
            v52 = 0;
            v53 = DWORD2(v148);
            if ( SDWORD2(v148) > 0 )
            {
              while ( 1 )
              {
                v100 = (_QWORD *)(v148 + 16LL * v52);
                v101 = *v100 - *v51;
                if ( *v100 == *v51 )
                  v101 = v100[1] - v51[1];
                if ( !v101 )
                  break;
                ++v52;
                v53 = DWORD2(v148);
                if ( v52 >= SDWORD2(v148) )
                  goto LABEL_80;
              }
              if ( v52 != -1 )
              {
                v57 = (_OWORD *)v148;
                goto LABEL_90;
              }
              v53 = DWORD2(v148);
            }
LABEL_80:
            if ( v49 >= *(_DWORD *)(v48 + 8) )
            {
              sub_1800BB2C8(3221225612LL);
              __debugbreak();
            }
            v54 = (const char *)(v50 + *(_QWORD *)v48);
            v127 = v54;
            if ( v53 == v47 )
            {
              if ( v47 )
              {
                v55 = 2 * v53;
                v115 = 2 * v53;
                if ( (v53 & 0x40000000) != 0 )
                  goto LABEL_217;
              }
              else
              {
                v55 = 1;
                v115 = 1;
              }
              if ( (unsigned __int64)v55 > 0x7FFFFFF || (v56 = o__recalloc(v148, v55, 16LL)) == 0 )
              {
LABEL_217:
                v98 = retaddr;
                v99 = 596LL;
LABEL_203:
                sub_18004BD84(
                  v98,
                  v99,
                  "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  2147942414LL);
                break;
              }
              v47 = v115;
              HIDWORD(v148) = v115;
              v57 = (_OWORD *)v56;
              *(_QWORD *)&v148 = v56;
              v50 = v120;
              v54 = v127;
              v53 = DWORD2(v148);
            }
            else
            {
              v57 = (_OWORD *)v148;
            }
            v58 = &v57[v53];
            if ( v58 )
              *v58 = *(_OWORD *)v54;
            ++DWORD2(v148);
LABEL_90:
            ++v49;
            v50 += 16LL;
            v120 = v50;
            v48 = *(_QWORD *)(v40 + 16);
            if ( v49 >= *(_DWORD *)(v48 + 8) )
            {
              v39 = (int)v8;
              goto LABEL_92;
            }
          }
        }
      }
      v39 = (int)v8;
      goto LABEL_205;
    }
    v41 = (struct _RTL_CRITICAL_SECTION *)(v40 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v40 + 56));
    v130 = v40 + 56;
    v42 = 0LL;
    pvar[0] = 0LL;
    v43 = 0;
    pvar[1] = 0LL;
    v44 = 0;
    LODWORD(v120) = 0;
    if ( *(int *)(v40 + 40) > 0 )
    {
      while ( 1 )
      {
        v87 = sub_180023320(v40 + 32, v44);
        if ( !(unsigned int)sub_1800233E0(pvar, v87) )
          break;
        v44 = v120 + 1;
        LODWORD(v120) = v44;
        if ( (signed int)v44 >= *(_DWORD *)(v40 + 40) )
        {
          v42 = (char *)pvar[0];
          v43 = (int)pvar[1];
          goto LABEL_67;
        }
      }
      v88 = 2147942414LL;
      v89 = 502LL;
    }
    else
    {
LABEL_67:
      v45 = 0;
      LODWORD(v120) = 0;
      if ( v43 <= 0 )
      {
LABEL_68:
        if ( v42 )
        {
          if ( v43 > 0 )
          {
            v92 = v42;
            v93 = (unsigned int)v43;
            do
            {
              sub_1800322B0(v92);
              v92 += 16;
              --v93;
            }
            while ( v93 );
            v40 = (__int64)v127;
            v41 = (struct _RTL_CRITICAL_SECTION *)(v127 + 56);
          }
          _o_free(v42);
        }
        if ( !v41 )
          goto LABEL_71;
LABEL_70:
        LeaveCriticalSection(v41);
LABEL_71:
        LODWORD(v8) = a2;
        goto LABEL_72;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)sub_180023320(pvar, (unsigned int)v45) + 20LL) )
        {
          v90 = (_QWORD *)sub_180023320(pvar, (unsigned int)v120);
          v91 = sub_180052550(*v90, v40);
          if ( v91 < 0 )
            break;
        }
        v45 = v120 + 1;
        LODWORD(v120) = v45;
        v43 = (int)pvar[1];
        if ( v45 >= SLODWORD(pvar[1]) )
          goto LABEL_68;
      }
      v88 = (unsigned int)v91;
      v89 = 508LL;
    }
    sub_18004BD84(retaddr, v89, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v88);
    sub_180032210(pvar);
    if ( v40 == -56 )
      goto LABEL_71;
    goto LABEL_70;
  }
  sub_180067BDC(&v148, v40);
  if ( DWORD2(v148) != *(_DWORD *)(v40 + 8) )
    sub_18004BD84(retaddr, 570LL, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
LABEL_205:
  v57 = (_OWORD *)v148;
LABEL_92:
  LODWORD(v120) = 0;
  if ( SDWORD2(v148) <= 0 )
  {
LABEL_225:
    v69 = v121[0];
  }
  else
  {
    v59 = 0LL;
    v118 = 0LL;
    v60 = v57;
    v116 = v57;
    while ( 1 )
    {
      if ( v59 < 0 )
      {
        sub_1800BB2C8(3221225612LL);
        __debugbreak();
      }
      *(_OWORD *)pvar = *v60;
      if ( (_DWORD)v8 )
        goto LABEL_253;
      v61 = 1;
      v62 = *(_QWORD *)(a1 + 80);
      if ( !v62 )
        goto LABEL_253;
      *(_OWORD *)v133 = 0LL;
      v134 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v62 + 40LL))(
             v62,
             &xmmword_18015B7F8,
             v133) >= 0
        && LOWORD(v133[0]) == 19 )
      {
        v61 = LODWORD(v133[1]) == 0;
      }
      PropVariantClear(v133);
      if ( v61 )
      {
LABEL_253:
        if ( v39 >= *(_QWORD *)(a1 + 1656) )
        {
          v105 = sub_180118A38(&v136, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          sub_180118968(v105);
        }
        if ( (v114 & 0x40) != 0 )
        {
          v114 &= ~0x40u;
          v136 = &off_180149EB8;
          o___std_exception_destroy(v137);
        }
        v63 = 96 * v39;
        sub_1800230F0(96 * v39 + *(_QWORD *)(a1 + 1664));
        if ( v39 >= *(_QWORD *)(a1 + 1672) )
        {
          v104 = sub_180118A38(&v142, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          sub_180118968(v104);
        }
        if ( (v114 & 0x80u) != 0 )
        {
          v114 &= ~0x80u;
          v142 = &off_180149EB8;
          o___std_exception_destroy(v143);
        }
        sub_1800230F0(v63 + *(_QWORD *)(a1 + 1680));
        if ( v39 >= *(_QWORD *)(a1 + 1688) )
        {
          v103 = sub_180118A38(&v140, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          sub_180118968(v103);
        }
        if ( (v114 & 0x100) != 0 )
        {
          v114 &= ~0x100u;
          v140 = &off_180149EB8;
          o___std_exception_destroy(v141);
        }
        sub_1800230F0(v63 + *(_QWORD *)(a1 + 1696));
        if ( v39 >= *(_QWORD *)(a1 + 152) )
        {
          v102 = sub_180118A38(&v138, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          sub_180118968(v102);
        }
        if ( (v114 & 0x200) != 0 )
        {
          v114 &= ~0x200u;
          v138 = &off_180149EB8;
          o___std_exception_destroy(v139);
        }
        v64 = *(_QWORD *)(a1 + 160) + 16 * v39;
      }
      else
      {
        v64 = a1 + 168;
      }
      v65 = 0;
      v66 = *(_DWORD *)(v64 + 8);
      if ( v66 <= 0 )
        break;
      v67 = *(_QWORD *)v64;
      while ( 1 )
      {
        v68 = *(_QWORD *)(v67 + 16LL * v65) - (unsigned __int64)pvar[0];
        if ( !v68 )
          v68 = *(_QWORD *)(v67 + 16LL * v65 + 8) - (unsigned __int64)pvar[1];
        if ( !v68 )
          break;
        if ( ++v65 >= v66 )
          goto LABEL_120;
      }
      if ( v65 == -1 )
        break;
      LODWORD(v120) = v120 + 1;
      v59 = ++v118;
      v60 = ++v116;
      if ( (int)v120 >= SDWORD2(v148) )
        goto LABEL_225;
    }
LABEL_120:
    v69 = 1;
  }
LABEL_121:
  if ( (_QWORD)v148 )
    _o_free(v148);
  if ( !v69 )
  {
    v26 = (_OWORD *)v128;
    goto LABEL_249;
  }
  v70 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8688);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
  v130 = a1 + 8688;
  *(_OWORD *)v124 = 0LL;
  Src = 0LL;
  *a5 = 0LL;
  if ( (_DWORD)v8 != 3 )
    v12 = 0;
  *(_OWORD *)pvar = *(_OWORD *)v128;
  v71 = 0;
  while ( 1 )
  {
    v72 = qword_18019D7B0[2 * v71] - (unsigned __int64)pvar[0];
    if ( !v72 )
      v72 = qword_18019D7B0[2 * v71 + 1] - (unsigned __int64)pvar[1];
    if ( !v72 )
      break;
    if ( ++v71 >= 9 )
    {
      v11 = -2147023728;
      goto LABEL_149;
    }
  }
  v148 = xmmword_1801601D8;
  if ( v12 )
    v73 = 602;
  else
    v73 = 2;
  v149 = v73 + v71;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *, PROPVARIANT))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         &v148,
         v124,
         pvar[0]) >= 0
    && LOWORD(v124[0]) == 65
    && LODWORD(v124[1]) >= 0x12 )
  {
    v74 = (unsigned __int16 *)Src;
    if ( LODWORD(v124[1]) == *((unsigned __int16 *)Src + 8) + 18LL )
    {
LABEL_136:
      v75 = v74;
      if ( v74 && (int)sub_18001FEF0((__int64)v74) >= 0 )
      {
        if ( ((*v74 - 1) & 0xFFFD) == 0 )
          goto LABEL_146;
        if ( *v74 == 0xFFFE )
        {
          v76 = 0x10000000000001LL - *((_QWORD *)v74 + 3);
          if ( *((_QWORD *)v74 + 3) == 0x10000000000001LL )
            v76 = 0x719B3800AA000080LL - *((_QWORD *)v74 + 4);
          if ( !v76 )
            goto LABEL_146;
          v77 = 0x10000000000003LL - *((_QWORD *)v74 + 3);
          if ( *((_QWORD *)v74 + 3) == 0x10000000000003LL )
            v77 = 0x719B3800AA000080LL - *((_QWORD *)v74 + 4);
          if ( !v77 )
          {
LABEL_146:
            v78 = v74[8];
            v79 = CoTaskMemAlloc(v78 + 18);
            v80 = v79;
            if ( v79 )
            {
              memcpy(v79, v75, v78 + 18);
              v11 = 0;
            }
            else
            {
              v11 = -2147024882;
            }
            *a5 = v80;
            goto LABEL_149;
          }
        }
      }
      goto LABEL_239;
    }
  }
  PropVariantClear(v124);
  v11 = sub_180047E7C(a1, (unsigned int)v8);
  if ( v11 < 0 )
    goto LABEL_149;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         &v148,
         v124) >= 0
    && LOWORD(v124[0]) == 65
    && (unsigned int)sub_180047420(v124) )
  {
    v74 = (unsigned __int16 *)Src;
    goto LABEL_136;
  }
LABEL_239:
  v11 = -2004287480;
LABEL_149:
  PropVariantClear(v124);
  if ( v11 < 0
    && (unsigned int)dword_18019C448 > 3
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&dword_18019C448,
         (const struct _TlgProvider_t *)0x14,
         v81) )
  {
    v121[0] = v11;
    LODWORD(v120) = 7007;
    v127 = "CEndpointCharacteristics::GetDevicePipeFormat";
    sub_1800B6294(
      (unsigned int)&dword_18019C448,
      (unsigned int)&unk_18016A283,
      v107,
      v108,
      (__int64)&v127,
      (__int64)&v120,
      (__int64)v121);
  }
  if ( v70 )
    LeaveCriticalSection(v70);
  if ( v11 >= 0 )
    goto LABEL_153;
  sub_18004BD84(retaddr, 4716LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v11);
LABEL_156:
  v83 = v126;
  v126 = 0LL;
  if ( v83 )
    CoTaskMemFree(v83);
LABEL_158:
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)v11;
}
