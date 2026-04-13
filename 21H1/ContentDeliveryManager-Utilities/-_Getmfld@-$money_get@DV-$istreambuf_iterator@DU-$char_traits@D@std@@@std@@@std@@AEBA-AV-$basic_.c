/*
 * XREFs of ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x1800C6364
 * Callers:
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800C8500 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800C8600 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_1800C8600.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800381D0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004C960 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800AFDEC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800B2C00 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B5364 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800B5448 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x1800C50CC (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x1800C520C (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CB511 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
char *__fastcall std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        char *a7)
{
  char *v8; // r15
  __int64 v9; // rbx
  int v10; // esi
  struct std::_Facet_base *v11; // r12
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  int v13; // r14d
  char v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rbx
  int v17; // r14d
  struct std::_Facet_base *v18; // rcx
  void (__fastcall ***v19)(_QWORD, __int64); // rax
  unsigned __int64 v20; // rbx
  char v21; // al
  char v22; // bl
  __int64 v23; // r15
  __int64 v24; // rcx
  unsigned __int8 *v25; // r8
  int v26; // edx
  int v27; // r13d
  struct std::_Facet_base *v28; // rsi
  int v29; // r12d
  __int64 v30; // rbx
  char v31; // r15
  void **v32; // rcx
  unsigned __int64 v33; // r14
  char v34; // al
  void **v35; // rsi
  char *v36; // r12
  __int64 v37; // rcx
  unsigned __int8 *v38; // r8
  int v39; // edx
  int v40; // eax
  char *v41; // rax
  char i; // cl
  unsigned __int64 v43; // rax
  void **v44; // rax
  void **v45; // rax
  void **v46; // rax
  __int64 v47; // rcx
  unsigned __int8 *v48; // r8
  int v49; // edx
  int v50; // eax
  void **v51; // rax
  char v52; // r15
  void **v53; // rcx
  void *v54; // r9
  unsigned __int64 v55; // r8
  char v56; // dl
  void **v57; // rax
  void **v58; // rax
  char *v59; // r14
  __int64 v60; // rcx
  unsigned __int8 *v61; // r8
  int v62; // edx
  int v63; // eax
  char *v64; // rax
  char j; // cl
  unsigned __int64 v66; // rax
  char v67; // bl
  __int64 v68; // rcx
  unsigned __int8 *v69; // r8
  int v70; // edx
  int v71; // eax
  __int64 v72; // rcx
  unsigned __int8 *v73; // r8
  int v74; // edx
  int v75; // eax
  char *v76; // rax
  char k; // cl
  unsigned __int64 v78; // rax
  __int64 v79; // rbx
  int v80; // r14d
  void **v81; // rbx
  __int64 v82; // rcx
  unsigned __int8 *v83; // r8
  int v84; // edx
  int v85; // eax
  bool v86; // zf
  char v87; // bl
  unsigned int v88; // r14d
  int v89; // r14d
  void **v90; // rbx
  __int64 v91; // rcx
  unsigned __int8 *v92; // r8
  int v93; // edx
  int v94; // eax
  char v95; // bl
  unsigned int v96; // r14d
  int v97; // r14d
  __int64 v98; // rbx
  __int64 v99; // rbx
  __int64 v100; // rcx
  unsigned __int8 *v101; // r8
  int v102; // edx
  int v103; // eax
  void **v104; // rax
  __int64 v105; // rcx
  unsigned __int8 *v106; // r8
  int v107; // edx
  int v108; // eax
  void **v109; // rax
  void **v110; // rax
  void **v111; // rbx
  void **v112; // rcx
  __int64 v113; // rcx
  unsigned __int8 *v114; // r9
  int v115; // edx
  int v116; // eax
  unsigned __int64 v117; // r10
  void **v118; // r8
  char v119; // al
  void **v120; // rdx
  int v121; // eax
  unsigned __int64 v122; // rcx
  void **v123; // rbx
  void **v124; // rax
  __int64 v125; // rcx
  unsigned __int8 *v126; // r8
  int v127; // edx
  int v128; // eax
  void **v129; // rax
  char *v130; // rax
  char v132; // [rsp+3Ch] [rbp-BDh]
  char v133; // [rsp+40h] [rbp-B9h]
  struct std::_Facet_base *v134; // [rsp+48h] [rbp-B1h]
  unsigned __int64 v135; // [rsp+50h] [rbp-A9h]
  int v136; // [rsp+58h] [rbp-A1h]
  struct std::_Facet_base *v138; // [rsp+68h] [rbp-91h] BYREF
  char *v139; // [rsp+70h] [rbp-89h]
  char *v140; // [rsp+78h] [rbp-81h]
  _BYTE v141[4]; // [rsp+80h] [rbp-79h] BYREF
  int v142; // [rsp+84h] [rbp-75h]
  int v143; // [rsp+88h] [rbp-71h]
  __int64 v144; // [rsp+90h] [rbp-69h]
  char *v145; // [rsp+98h] [rbp-61h]
  void *v146[2]; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v147; // [rsp+B0h] [rbp-49h]
  unsigned __int64 v148; // [rsp+B8h] [rbp-41h]
  void *Src[2]; // [rsp+C0h] [rbp-39h] BYREF
  __int64 v150; // [rsp+D0h] [rbp-29h]
  unsigned __int64 v151; // [rsp+D8h] [rbp-21h]
  void *v152[2]; // [rsp+E0h] [rbp-19h] BYREF
  unsigned __int64 v153; // [rsp+F0h] [rbp-9h]
  unsigned __int64 v154; // [rsp+F8h] [rbp-1h]

  v144 = -2LL;
  v8 = a2;
  v139 = a2;
  v145 = a2;
  v140 = a7;
  v9 = **(_QWORD **)(a6 + 64);
  v138 = (struct std::_Facet_base *)v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( a5 )
  {
    v10 = 32;
    v11 = std::use_facet<std::moneypunct<char,1>>((__int64 *)&v138);
  }
  else
  {
    v10 = 64;
    v11 = std::use_facet<std::moneypunct<char,0>>((__int64 *)&v138);
  }
  v134 = v11;
  if ( v9 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  v13 = v10;
  v14 = 0;
  v133 = 0;
  v132 = 0;
  v154 = 15LL;
  v153 = 0LL;
  LOBYTE(v152[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v11 + 88LL))(v11, v141);
  *((_QWORD *)v8 + 3) = 15LL;
  *((_QWORD *)v8 + 2) = 0LL;
  *v8 = 0;
  v15 = a6;
  v16 = **(_QWORD **)(a6 + 64);
  v138 = (struct std::_Facet_base *)v16;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = v13 | 0x81;
  v136 = v17;
  v18 = std::use_facet<std::ctype<char>>((__int64 *)&v138);
  v138 = v18;
  if ( v16 )
  {
    v19 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v19 )
      (**v19)(v19, 1LL);
    v18 = v138;
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, char *))(*(_QWORD *)v18 + 56LL))(
    v18,
    "0123456789-",
    "",
    v140);
  v20 = 0LL;
  v135 = 0LL;
  while ( v20 < 4 )
  {
    v21 = v141[v20];
    if ( v21 == 32 )
      goto LABEL_18;
    if ( v21 == 36 )
    {
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 48LL))(v11, v146);
      v136 = v17 | 0x100;
      if ( (*(_BYTE *)(v15 + 24) & 8) == 0 && !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
      {
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v100 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v101 = **(unsigned __int8 ***)(v100 + 56)) == 0LL ? (v102 = 0) : (v102 = **(_DWORD **)(v100 + 80)),
                v102 <= 0
              ? (v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v100 + 48LL))(v100))
              : (v103 = *v101),
                v103 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v103;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        v104 = v146;
        if ( v148 >= 0x10 )
          v104 = (void **)v146[0];
        if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v104 )
          goto LABEL_273;
      }
      if ( v135 == 3 && v153 <= 1 )
      {
        if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
          goto LABEL_273;
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v105 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v106 = **(unsigned __int8 ***)(v105 + 56)) == 0LL ? (v107 = 0) : (v107 = **(_DWORD **)(v105 + 80)),
                v107 <= 0
              ? (v108 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v105 + 48LL))(v105))
              : (v108 = *v106),
                v108 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v108;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        v109 = v146;
        if ( v148 >= 0x10 )
          v109 = (void **)v146[0];
        if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v109 )
        {
LABEL_273:
          v110 = v146;
          v147 = 0LL;
          if ( v148 >= 0x10 )
            v110 = (void **)v146[0];
          *(_BYTE *)v110 = 0;
        }
      }
      v111 = v146;
      if ( v148 >= 0x10 )
        v111 = (void **)v146[0];
      while ( 1 )
      {
        v119 = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4);
        v117 = v148;
        v118 = (void **)v146[0];
        if ( v119 )
          break;
        v112 = v146;
        if ( v148 >= 0x10 )
          v112 = (void **)v146[0];
        if ( v111 == (void **)((char *)v112 + v147) )
          break;
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v113 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v114 = **(unsigned __int8 ***)(v113 + 56)) == 0LL ? (v115 = 0) : (v115 = **(_DWORD **)(v113 + 80)),
                v115 <= 0
              ? (v116 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 48LL))(v113),
                 v117 = v148,
                 v118 = (void **)v146[0])
              : (void **)(v116 = *v114),
                v116 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v116;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v111 )
          break;
        v111 = (void **)((char *)v111 + 1);
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
      }
      v120 = v146;
      if ( v117 >= 0x10 )
        v120 = v118;
      if ( v111 != (void **)((char *)v120 + v147) )
        v14 = 1;
      v133 = v14;
      if ( v117 >= 0x10 )
        operator delete(v118);
      goto LABEL_107;
    }
    if ( v21 != 43 )
    {
      if ( v21 == 118 )
      {
        v27 = 0;
        v143 = 0;
        v28 = v134;
        v29 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v134 + 72LL))(v134);
        v142 = v29;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v28 + 40LL))(v28, Src);
        v136 = v17 | 0x20000;
        v30 = 0LL;
        if ( v150 )
        {
          v31 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v134 + 32LL))(v134);
          if ( v31 )
          {
            v32 = Src;
            if ( v151 >= 0x10 )
              v32 = (void **)Src[0];
            if ( *(_BYTE *)v32 < 0x7Fu )
            {
              v33 = 15LL;
              v148 = 15LL;
              LOWORD(v146[0]) = 0;
              v147 = 1LL;
              v34 = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4);
              v35 = (void **)v146[0];
              if ( v34 )
                goto LABEL_80;
              v36 = v139;
              while ( 2 )
              {
                if ( !*(_BYTE *)(a3 + 8) )
                {
                  v37 = *(_QWORD *)a3;
                  if ( !*(_QWORD *)a3
                    || ((v38 = **(unsigned __int8 ***)(v37 + 56)) == 0LL ? (v39 = 0) : (v39 = **(_DWORD **)(v37 + 80)),
                        v39 <= 0
                      ? (v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 48LL))(v37))
                      : (v40 = *v38),
                        v40 == -1) )
                  {
                    *(_QWORD *)a3 = 0LL;
                  }
                  else
                  {
                    *(_BYTE *)(a3 + 9) = v40;
                  }
                  *(_BYTE *)(a3 + 8) = 1;
                }
                v41 = v140;
                for ( i = *v140; i && i != *(_BYTE *)(a3 + 9); i = *v41 )
                  ++v41;
                v43 = v41 - v140;
                if ( v43 >= 0xA )
                {
                  v46 = v146;
                  if ( v33 >= 0x10 )
                    v46 = v35;
                  if ( !*((_BYTE *)v46 + v30) )
                    goto LABEL_74;
                  if ( !*(_BYTE *)(a3 + 8) )
                  {
                    v47 = *(_QWORD *)a3;
                    if ( !*(_QWORD *)a3
                      || ((v48 = **(unsigned __int8 ***)(v47 + 56)) == 0LL ? (v49 = 0) : (v49 = **(_DWORD **)(v47 + 80)),
                          v49 <= 0
                        ? (v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 48LL))(v47))
                        : (v50 = *v48),
                          v50 == -1) )
                    {
                      *(_QWORD *)a3 = 0LL;
                    }
                    else
                    {
                      *(_BYTE *)(a3 + 9) = v50;
                    }
                    *(_BYTE *)(a3 + 8) = 1;
                  }
                  if ( *(_BYTE *)(a3 + 9) != v31 )
                  {
LABEL_74:
                    v29 = v142;
                    v27 = v143;
                    if ( !v30 )
                      goto LABEL_80;
                    v51 = v146;
                    if ( v33 >= 0x10 )
                      v51 = v35;
                    if ( *((char *)v51 + v30) <= (char)v143 )
                    {
                      v52 = 1;
                      v133 = 1;
                    }
                    else
                    {
                      ++v30;
LABEL_80:
                      v52 = v133;
                    }
                    v53 = Src;
                    v54 = Src[0];
                    v55 = v151;
                    if ( v151 >= 0x10 )
                      v53 = (void **)Src[0];
                    if ( !v52 )
                    {
                      while ( v30 )
                      {
                        v56 = *(_BYTE *)v53;
                        if ( *(_BYTE *)v53 == 127 )
                          break;
                        if ( --v30 )
                        {
                          v57 = v146;
                          if ( v33 >= 0x10 )
                            v57 = v35;
                          if ( v56 != *((_BYTE *)v57 + v30) )
                            goto LABEL_96;
                        }
                        if ( !v30 )
                        {
                          v58 = v146;
                          if ( v33 >= 0x10 )
                            v58 = v35;
                          if ( v56 < *(char *)v58 )
                          {
LABEL_96:
                            v14 = 1;
                            v133 = 1;
                            goto LABEL_101;
                          }
                        }
                        if ( *((char *)v53 + 1) > 0 )
                          v53 = (void **)((char *)v53 + 1);
                      }
                      if ( v33 >= 0x10 )
                        operator delete(v35);
                      v28 = v134;
LABEL_131:
                      v59 = v140;
                      goto LABEL_132;
                    }
                    v14 = v133;
LABEL_101:
                    if ( v33 >= 0x10 )
                    {
                      operator delete(v35);
                      v55 = v151;
                      v54 = Src[0];
                    }
                    if ( v55 >= 0x10 )
                      operator delete(v54);
                    v8 = v139;
                    goto LABEL_106;
                  }
                  std::string::append((char *)v146, 1uLL, 0);
                  ++v30;
LABEL_72:
                  v35 = (void **)v146[0];
                  v33 = v148;
                }
                else
                {
                  std::string::append(
                    v36,
                    1uLL,
                    `std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld'::`2'::_Src[v43]);
                  v44 = v146;
                  if ( v33 >= 0x10 )
                    v44 = v35;
                  if ( *((_BYTE *)v44 + v30) != 127 )
                  {
                    v45 = v146;
                    if ( v33 >= 0x10 )
                      v45 = v35;
                    ++*((_BYTE *)v45 + v30);
                    goto LABEL_72;
                  }
                }
                std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
                if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
                  goto LABEL_74;
                continue;
              }
            }
          }
          v8 = v139;
        }
        if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
        {
          v52 = v133;
          goto LABEL_131;
        }
        v59 = v140;
        do
        {
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v60 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v61 = **(unsigned __int8 ***)(v60 + 56)) == 0LL ? (v62 = 0) : (v62 = **(_DWORD **)(v60 + 80)),
                  v62 <= 0 ? (v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 48LL))(v60)) : (v63 = *v61),
                  v63 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v63;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          v64 = v59;
          for ( j = *v59; j && j != *(_BYTE *)(a3 + 9); j = *v64 )
            ++v64;
          v66 = v64 - v59;
          if ( v66 >= 0xA )
            break;
          std::string::append(v8, 1uLL, `std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld'::`2'::_Src[v66]);
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        }
        while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
        v28 = v134;
        v52 = v133;
LABEL_132:
        v67 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v28 + 24LL))(v28);
        if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) && v67 )
        {
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v68 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v69 = **(unsigned __int8 ***)(v68 + 56)) == 0LL ? (v70 = 0) : (v70 = **(_DWORD **)(v68 + 80)),
                  v70 <= 0 ? (v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 48LL))(v68)) : (v71 = *v69),
                  v71 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v71;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          if ( *(_BYTE *)(a3 + 9) == v67 )
          {
            std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
            if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
            {
LABEL_167:
              if ( v27 < v29 )
                v52 = 1;
              v133 = v52;
            }
            else
            {
              while ( v27 < v29 )
              {
                if ( !*(_BYTE *)(a3 + 8) )
                {
                  v72 = *(_QWORD *)a3;
                  if ( !*(_QWORD *)a3
                    || ((v73 = **(unsigned __int8 ***)(v72 + 56)) == 0LL ? (v74 = 0) : (v74 = **(_DWORD **)(v72 + 80)),
                        v74 <= 0
                      ? (v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 48LL))(v72))
                      : (v75 = *v73),
                        v75 == -1) )
                  {
                    *(_QWORD *)a3 = 0LL;
                  }
                  else
                  {
                    *(_BYTE *)(a3 + 9) = v75;
                  }
                  *(_BYTE *)(a3 + 8) = 1;
                }
                v76 = v59;
                for ( k = *v59; k && k != *(_BYTE *)(a3 + 9); k = *v76 )
                  ++v76;
                v78 = v76 - v59;
                if ( v78 < 0xA )
                {
                  std::string::append(
                    v139,
                    1uLL,
                    `std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld'::`2'::_Src[v78]);
                  ++v27;
                  std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
                  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
                    continue;
                }
                goto LABEL_167;
              }
            }
          }
        }
        v8 = v139;
        if ( *((_QWORD *)v139 + 2) )
        {
          if ( v27 < v29 )
          {
            v79 = (unsigned int)(v29 - v27);
            do
            {
              std::string::append(v8, 1uLL, 48);
              --v79;
            }
            while ( v79 );
          }
          v14 = v133;
        }
        else
        {
          v14 = 1;
          v133 = 1;
        }
        goto LABEL_176;
      }
      if ( v21 != 120 )
        goto LABEL_320;
LABEL_18:
      if ( v20 != 3 )
      {
        v22 = 0;
        if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
        {
          v23 = (__int64)v138;
          do
          {
            if ( !*(_BYTE *)(a3 + 8) )
            {
              v24 = *(_QWORD *)a3;
              if ( !*(_QWORD *)a3
                || ((v25 = **(unsigned __int8 ***)(v24 + 56)) == 0LL ? (v26 = 0) : (v26 = **(_DWORD **)(v24 + 80)),
                    v26 <= 0
                  ? (v121 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24))
                  : (v121 = *v25),
                    v121 == -1) )
              {
                *(_QWORD *)a3 = 0LL;
              }
              else
              {
                *(_BYTE *)(a3 + 9) = v121;
              }
              *(_BYTE *)(a3 + 8) = 1;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v23 + 24) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 0x48) == 0 )
              break;
            v22 = 1;
            std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          }
          while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
          v8 = v139;
          v11 = v134;
        }
        if ( v141[v135] == 32 )
        {
          if ( !v22 )
            v14 = 1;
          v133 = v14;
        }
        v20 = v135;
        goto LABEL_319;
      }
      goto LABEL_320;
    }
    if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    {
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v134 + 56LL))(v134, v146);
      v80 = v17 | 0x202;
      if ( !v147 )
        goto LABEL_195;
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v134 + 56LL))(v134, Src);
      v80 |= 0x404u;
      v81 = Src;
      if ( v151 >= 0x10 )
        v81 = (void **)Src[0];
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v82 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v83 = **(unsigned __int8 ***)(v82 + 56)) == 0LL ? (v84 = 0) : (v84 = **(_DWORD **)(v82 + 80)),
              v84 <= 0 ? (v85 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v82 + 48LL))(v82)) : (v85 = *v83),
              v85 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v85;
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      v86 = *(_BYTE *)v81 == *(_BYTE *)(a3 + 9);
      v87 = 1;
      if ( !v86 )
LABEL_195:
        v87 = 0;
      if ( (v80 & 4) != 0 )
      {
        v80 &= ~4u;
        if ( v151 >= 0x10 )
          operator delete(Src[0]);
        v151 = 15LL;
        v150 = 0LL;
        LOBYTE(Src[0]) = 0;
      }
      v88 = v80 & 0xFFFFFFFD;
      if ( v148 >= 0x10 )
        operator delete(v146[0]);
      if ( v87 )
      {
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v134 + 56LL))(v134, Src);
        v136 = v88 | 0x800;
        std::string::operator=(v152, Src);
LABEL_176:
        if ( v151 >= 0x10 )
          operator delete(Src[0]);
        goto LABEL_106;
      }
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v134 + 64LL))(v134, v146);
      v89 = v88 | 0x1008;
      if ( !v147 )
        goto LABEL_220;
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v134 + 64LL))(v134, Src);
      v89 |= 0x2010u;
      v90 = Src;
      if ( v151 >= 0x10 )
        v90 = (void **)Src[0];
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v91 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v92 = **(unsigned __int8 ***)(v91 + 56)) == 0LL ? (v93 = 0) : (v93 = **(_DWORD **)(v91 + 80)),
              v93 <= 0 ? (v94 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v91 + 48LL))(v91)) : (v94 = *v92),
              v94 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v94;
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      v86 = *(_BYTE *)v90 == *(_BYTE *)(a3 + 9);
      v95 = 1;
      if ( !v86 )
LABEL_220:
        v95 = 0;
      if ( (v89 & 0x10) != 0 )
      {
        v89 &= ~0x10u;
        if ( v151 >= 0x10 )
          operator delete(Src[0]);
        v151 = 15LL;
        v150 = 0LL;
        LOBYTE(Src[0]) = 0;
      }
      v96 = v89 & 0xFFFFFFF7;
      if ( v148 >= 0x10 )
        operator delete(v146[0]);
      if ( v95 )
      {
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v134 + 64LL))(v134, Src);
        v136 = v96 | 0x4000;
        std::string::operator=(v152, Src);
        if ( v151 >= 0x10 )
          operator delete(Src[0]);
        v132 = 1;
        goto LABEL_106;
      }
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v134 + 56LL))(v134, Src);
      v97 = v96 | 0x8000;
      v136 = v97;
      v98 = v150;
      if ( v151 >= 0x10 )
        operator delete(Src[0]);
      if ( v98 )
      {
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v134 + 64LL))(v134, Src);
        v136 = v97 | 0x10000;
        v99 = v150;
        if ( v151 >= 0x10 )
          operator delete(Src[0]);
        v11 = v134;
        v15 = a6;
        v86 = v99 == 0;
        v20 = v135;
        if ( v86 )
          v132 = 1;
        goto LABEL_320;
      }
LABEL_106:
      v11 = v134;
LABEL_107:
      v20 = v135;
LABEL_319:
      v15 = a6;
    }
LABEL_320:
    v135 = ++v20;
    v17 = v136;
    if ( v14 )
      break;
  }
  if ( v14 )
    goto LABEL_349;
  v122 = v153;
  if ( v153 <= 1 )
    goto LABEL_347;
  v123 = v152;
  if ( v154 >= 0x10 )
    v123 = (void **)v152[0];
  while ( 1 )
  {
    v124 = v152;
    if ( v154 >= 0x10 )
      v124 = (void **)v152[0];
    v123 = (void **)((char *)v123 + 1);
    if ( v123 == (void **)((char *)v124 + v122) )
      break;
    if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
      goto LABEL_343;
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v125 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v126 = **(unsigned __int8 ***)(v125 + 56)) == 0LL ? (v127 = 0) : (v127 = **(_DWORD **)(v125 + 80)),
            v127 <= 0 ? (v128 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v125 + 48LL))(v125)) : (v128 = *v126),
            v128 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v128;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
    if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v123 )
    {
LABEL_343:
      v122 = v153;
      break;
    }
    std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    v122 = v153;
  }
  v129 = v152;
  if ( v154 >= 0x10 )
    v129 = (void **)v152[0];
  if ( v123 != (void **)((char *)v129 + v122) )
  {
LABEL_349:
    *((_QWORD *)v8 + 2) = 0LL;
    if ( *((_QWORD *)v8 + 3) < 0x10uLL )
      v130 = v8;
    else
      v130 = *(char **)v8;
    *v130 = 0;
  }
  else
  {
LABEL_347:
    if ( v132 )
      std::string::insert(v8, 0LL, 1uLL, 45);
  }
  if ( v154 >= 0x10 )
    operator delete(v152[0]);
  return v8;
}
