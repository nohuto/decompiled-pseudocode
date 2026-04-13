/*
 * XREFs of ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B3AFC
 * Callers:
 *     ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B2FF0 (-_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18003A3E0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800B1FFC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800B23BC (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800B4E10 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B7574 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CD721 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v6; // r12
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  struct std::_Facet_base *v11; // r14
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // rsi
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _WORD *v16; // r15
  __int64 v17; // rcx
  unsigned __int8 *v18; // r8
  int v19; // edx
  int v20; // eax
  char v21; // cl
  char *v22; // r15
  __int64 v23; // rbx
  int v24; // esi
  __int64 v25; // rcx
  unsigned __int8 *v26; // r8
  int v27; // edx
  int v28; // eax
  __int64 v29; // rcx
  unsigned __int8 *v30; // r8
  int v31; // edx
  int v32; // eax
  char v33; // cl
  void **v34; // r13
  char v35; // r12
  unsigned __int64 v36; // r14
  char v37; // al
  void **v38; // rsi
  int v39; // r13d
  __int64 v40; // rcx
  unsigned __int8 *v41; // r8
  int v42; // edx
  int v43; // eax
  char *v44; // rax
  char i; // cl
  unsigned __int64 v46; // rax
  void **v47; // rax
  void **v48; // rax
  void **v49; // rax
  __int64 v50; // rcx
  unsigned __int8 *v51; // r8
  int v52; // edx
  int v53; // eax
  void **v54; // rax
  char v55; // cl
  void **v56; // rax
  void **v57; // rax
  char v58; // si
  __int64 v59; // rcx
  unsigned __int8 *v60; // r8
  int v61; // edx
  __int64 v62; // rcx
  unsigned __int8 *v63; // r8
  int v64; // edx
  int v65; // eax
  char *v66; // rax
  char j; // cl
  unsigned __int64 v68; // rax
  int v69; // eax
  int v70; // ebx
  __int64 v71; // rcx
  unsigned __int8 *v72; // r8
  int v73; // edx
  int v74; // eax
  int v75; // r14d
  __int64 v76; // rcx
  unsigned __int8 *v77; // r8
  int v78; // edx
  int v79; // eax
  char *v80; // rax
  char k; // cl
  unsigned __int64 v82; // rax
  __int64 v83; // rcx
  unsigned __int8 *v84; // r8
  int v85; // edx
  int v86; // eax
  char v87; // cl
  int v88; // ebx
  __int64 v89; // rcx
  unsigned __int8 *v90; // r8
  int v91; // edx
  int v92; // eax
  char v93; // cl
  __int64 v94; // rcx
  unsigned __int8 *v95; // r8
  int v96; // edx
  int v97; // eax
  __int64 v98; // rcx
  unsigned __int8 *v99; // r8
  int v100; // edx
  int v101; // eax
  char *v102; // rax
  char m; // cl
  unsigned __int64 v104; // rax
  char v106; // [rsp+38h] [rbp-99h]
  char v107; // [rsp+39h] [rbp-98h]
  int v108; // [rsp+3Ch] [rbp-95h]
  __int64 v109; // [rsp+40h] [rbp-91h] BYREF
  struct std::_Facet_base *v110; // [rsp+48h] [rbp-89h] BYREF
  __int64 v111; // [rsp+50h] [rbp-81h]
  void **v112; // [rsp+58h] [rbp-79h]
  char *v113; // [rsp+60h] [rbp-71h]
  int *v114; // [rsp+68h] [rbp-69h]
  __int64 v115; // [rsp+70h] [rbp-61h]
  void *v116[3]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v117; // [rsp+90h] [rbp-41h]
  void *v118[3]; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 v119; // [rsp+B0h] [rbp-21h]
  _BYTE v120[22]; // [rsp+B8h] [rbp-19h] BYREF
  char v121; // [rsp+CEh] [rbp-3h]
  char v122; // [rsp+CFh] [rbp-2h]
  char v123; // [rsp+D0h] [rbp-1h]
  char v124; // [rsp+D1h] [rbp+0h]
  char v125; // [rsp+D2h] [rbp+1h]
  char v126; // [rsp+D3h] [rbp+2h]

  v115 = -2LL;
  v6 = a4;
  v111 = a4;
  v113 = a2;
  v114 = a6;
  v9 = **(_QWORD **)(a5 + 64);
  v110 = (struct std::_Facet_base *)v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = std::use_facet<std::numpunct<char>>((__int64 *)&v110);
  v110 = v11;
  if ( v9 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v12;
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v118,
    v10);
  v13 = **(_QWORD **)(a5 + 64);
  v109 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<char>>(&v109);
  if ( v13 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v14 + 56LL))(
    v14,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v120);
  v16 = a2;
  v107 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v17 = *a3;
      if ( !*a3
        || ((v18 = **(unsigned __int8 ***)(v17 + 56)) == 0LL ? (v19 = 0) : (v19 = **(_DWORD **)(v17 + 80)),
            v19 <= 0 ? (v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17)) : (v20 = *v18),
            v20 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v20;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v21 = *((_BYTE *)a3 + 9);
    if ( v21 == v122 )
    {
      *a2 = 43;
    }
    else
    {
      if ( v21 != v121 )
        goto LABEL_25;
      *a2 = 45;
    }
    v16 = a2 + 1;
    std::istreambuf_iterator<char>::_Inc(a3);
  }
LABEL_25:
  *v16 = 30768;
  v22 = (char *)(v16 + 1);
  v106 = 0;
  v23 = 0LL;
  LODWORD(v109) = 0;
  v24 = 0;
  v108 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v25 = *a3;
      if ( !*a3
        || ((v26 = **(unsigned __int8 ***)(v25 + 56)) == 0LL ? (v27 = 0) : (v27 = **(_DWORD **)(v25 + 80)),
            v27 <= 0 ? (v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25)) : (v28 = *v26),
            v28 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v28;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v120[0] )
    {
      std::istreambuf_iterator<char>::_Inc(a3);
      if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
        goto LABEL_55;
      if ( !*((_BYTE *)a3 + 8) )
      {
        v29 = *a3;
        if ( !*a3
          || ((v30 = **(unsigned __int8 ***)(v29 + 56)) == 0LL ? (v31 = 0) : (v31 = **(_DWORD **)(v29 + 80)),
              v31 <= 0 ? (v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29)) : (v32 = *v30),
              v32 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v32;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v33 = *((_BYTE *)a3 + 9);
      if ( v33 == v124 || v33 == v123 )
        std::istreambuf_iterator<char>::_Inc(a3);
      else
LABEL_55:
        v106 = 1;
    }
  }
  v34 = v118;
  if ( v119 >= 0x10 )
    v34 = (void **)v118[0];
  v112 = v34;
  if ( (unsigned __int8)(*(_BYTE *)v34 - 1) <= 0x7Du )
  {
    if ( v118[2] )
      v35 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 32LL))(v11);
    else
      v35 = 0;
    v36 = 15LL;
    v117 = 15LL;
    LOWORD(v116[0]) = 0;
    v116[2] = (void *)1;
    v37 = std::istreambuf_iterator<char>::equal(a3, v111);
    v38 = (void **)v116[0];
    if ( v37 )
    {
LABEL_117:
      while ( v23 )
      {
        v55 = *(_BYTE *)v34;
        if ( *(_BYTE *)v34 == 127 )
          break;
        if ( --v23 )
        {
          v56 = v116;
          if ( v36 >= 0x10 )
            v56 = v38;
          if ( v55 != *((_BYTE *)v56 + v23) )
            goto LABEL_129;
        }
        if ( !v23 )
        {
          v57 = v116;
          if ( v36 >= 0x10 )
            v57 = v38;
          if ( v55 < *(char *)v57 )
            goto LABEL_129;
        }
        if ( *((char *)v34 + 1) > 0 )
          v34 = (void **)((char *)v34 + 1);
      }
      goto LABEL_130;
    }
    v39 = v109;
    while ( 1 )
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v40 = *a3;
        if ( !*a3
          || ((v41 = **(unsigned __int8 ***)(v40 + 56)) == 0LL ? (v42 = 0) : (v42 = **(_DWORD **)(v40 + 80)),
              v42 <= 0 ? (v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 48LL))(v40)) : (v43 = *v41),
              v43 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v43;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v44 = v120;
      for ( i = v120[0]; i && i != *((_BYTE *)a3 + 9); i = *v44 )
        ++v44;
      v46 = v44 - v120;
      if ( v46 >= 0x16 )
      {
        v49 = v116;
        if ( v36 >= 0x10 )
          v49 = v38;
        if ( !*((_BYTE *)v49 + v23) || !v35 )
          goto LABEL_112;
        if ( !*((_BYTE *)a3 + 8) )
        {
          v50 = *a3;
          if ( !*a3
            || ((v51 = **(unsigned __int8 ***)(v50 + 56)) == 0LL ? (v52 = 0) : (v52 = **(_DWORD **)(v50 + 80)),
                v52 <= 0 ? (v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 48LL))(v50)) : (v53 = *v51),
                v53 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v53;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v35 )
        {
LABEL_112:
          LODWORD(v109) = v39;
          v34 = v112;
          if ( v23 )
          {
            v54 = v116;
            if ( v36 >= 0x10 )
              v54 = v38;
            if ( *((char *)v54 + v23) > 0 )
            {
              ++v23;
              goto LABEL_117;
            }
LABEL_129:
            v107 = 1;
          }
LABEL_130:
          if ( v36 >= 0x10 )
            operator delete(v38);
          v6 = v111;
          LODWORD(v23) = v109;
LABEL_133:
          v11 = v110;
          goto LABEL_134;
        }
        std::string::append((char *)v116, 1uLL, 0);
        ++v23;
      }
      else
      {
        v106 = 1;
        if ( v39 < 36 )
        {
          if ( v46 || v39 )
          {
            *v22++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v46];
            ++v39;
          }
        }
        else
        {
          ++v108;
        }
        v47 = v116;
        if ( v36 >= 0x10 )
          v47 = v38;
        if ( *((_BYTE *)v47 + v23) == 127 )
          goto LABEL_111;
        v48 = v116;
        if ( v36 >= 0x10 )
          v48 = v38;
        ++*((_BYTE *)v48 + v23);
      }
      v38 = (void **)v116[0];
      v36 = v117;
LABEL_111:
      std::istreambuf_iterator<char>::_Inc(a3);
      if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v111) )
        goto LABEL_112;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v62 = *a3;
        if ( !*a3
          || ((v63 = **(unsigned __int8 ***)(v62 + 56)) == 0LL ? (v64 = 0) : (v64 = **(_DWORD **)(v62 + 80)),
              v64 <= 0 ? (v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 48LL))(v62)) : (v65 = *v63),
              v65 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v65;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v66 = v120;
      for ( j = v120[0]; j && j != *((_BYTE *)a3 + 9); j = *v66 )
        ++v66;
      v68 = v66 - v120;
      if ( v68 >= 0x16 )
        break;
      if ( (int)v23 < 36 )
      {
        if ( v68 || (_DWORD)v23 )
        {
          *v22++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v68];
          LODWORD(v23) = v23 + 1;
        }
      }
      else
      {
        ++v24;
      }
      v106 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v108 = v24;
    LODWORD(v109) = v23;
    goto LABEL_133;
  }
LABEL_134:
  v58 = v106;
  if ( v106 && !(_DWORD)v23 )
    *v22++ = 48;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v59 = *a3;
      if ( !*a3
        || ((v60 = **(unsigned __int8 ***)(v59 + 56)) == 0LL ? (v61 = 0) : (v61 = **(_DWORD **)(v59 + 80)),
            v61 <= 0 ? (v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 48LL))(v59)) : (v69 = *v60),
            v69 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v69;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 24LL))(v11) )
    {
      *v22++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( (_DWORD)v23 )
  {
    v75 = v108;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      v70 = v108;
      do
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v71 = *a3;
          if ( !*a3
            || ((v72 = **(unsigned __int8 ***)(v71 + 56)) == 0LL ? (v73 = 0) : (v73 = **(_DWORD **)(v71 + 80)),
                v73 <= 0 ? (v74 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 48LL))(v71)) : (v74 = *v72),
                v74 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v74;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v120[0] )
          break;
        --v70;
        v58 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
      v108 = v70;
      LODWORD(v23) = v109;
    }
    v75 = v108;
    if ( v108 < 0 )
    {
      *v22++ = 48;
      v75 = ++v108;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v76 = *a3;
        if ( !*a3
          || ((v77 = **(unsigned __int8 ***)(v76 + 56)) == 0LL ? (v78 = 0) : (v78 = **(_DWORD **)(v76 + 80)),
              v78 <= 0 ? (v79 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 48LL))(v76)) : (v79 = *v77),
              v79 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v79;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v80 = v120;
      for ( k = v120[0]; k && k != *((_BYTE *)a3 + 9); k = *v80 )
        ++v80;
      v82 = v80 - v120;
      if ( v82 >= 0x16 )
        break;
      if ( (int)v23 < 36 )
      {
        *v22++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v82];
        LODWORD(v23) = v23 + 1;
      }
      v58 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v75 = v108;
  }
  if ( v58 && !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v83 = *a3;
      if ( !*a3
        || ((v84 = **(unsigned __int8 ***)(v83 + 56)) == 0LL ? (v85 = 0) : (v85 = **(_DWORD **)(v83 + 80)),
            v85 <= 0 ? (v86 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 48LL))(v83)) : (v86 = *v84),
            v86 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v86;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v87 = *((_BYTE *)a3 + 9);
    if ( v87 == v126 || v87 == v125 )
    {
      *v22++ = 112;
      std::istreambuf_iterator<char>::_Inc(a3);
      v58 = 0;
      v88 = 0;
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v89 = *a3;
          if ( !*a3
            || ((v90 = **(unsigned __int8 ***)(v89 + 56)) == 0LL ? (v91 = 0) : (v91 = **(_DWORD **)(v89 + 80)),
                v91 <= 0 ? (v92 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 48LL))(v89)) : (v92 = *v90),
                v92 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v92;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v93 = *((_BYTE *)a3 + 9);
        if ( v93 == v122 )
        {
          *v22 = 43;
LABEL_253:
          ++v22;
          std::istreambuf_iterator<char>::_Inc(a3);
          goto LABEL_254;
        }
        if ( v93 == v121 )
        {
          *v22 = 45;
          goto LABEL_253;
        }
      }
LABEL_254:
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v94 = *a3;
            if ( !*a3
              || ((v95 = **(unsigned __int8 ***)(v94 + 56)) == 0LL ? (v96 = 0) : (v96 = **(_DWORD **)(v94 + 80)),
                  v96 <= 0 ? (v97 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 48LL))(v94)) : (v97 = *v95),
                  v97 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v97;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v120[0] )
            break;
          v58 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
        if ( v58 )
          *v22++ = 48;
      }
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v98 = *a3;
            if ( !*a3
              || ((v99 = **(unsigned __int8 ***)(v98 + 56)) == 0LL ? (v100 = 0) : (v100 = **(_DWORD **)(v98 + 80)),
                  v100 <= 0 ? (v101 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 48LL))(v98)) : (v101 = *v99),
                  v101 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v101;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          v102 = v120;
          for ( m = v120[0]; m && m != *((_BYTE *)a3 + 9); m = *v102 )
            ++v102;
          v104 = v102 - v120;
          if ( v104 >= 0x16 )
            break;
          if ( v88 < 8 )
          {
            *v22++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v104];
            ++v88;
          }
          v58 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
        v75 = v108;
      }
    }
  }
  if ( v107 || !v58 )
    v22 = v113;
  *v22 = 0;
  *v114 = v75;
  if ( v119 >= 0x10 )
    operator delete(v118[0]);
  return 0LL;
}
