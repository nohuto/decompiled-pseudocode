/*
 * XREFs of ?_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@PEA_W@Z @ 0x1800C1104
 * Callers:
 *     ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800C5750 (-do_get@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istre.c)
 *     ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800C5850 (-do_get@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_1800C5850.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180037A0C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18003AB44 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18003AED0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18003B1C0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18003CD14 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18007A814 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800B9B58 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$00@std@@@std@@YAAEBV?$moneypunct@_W$00@0@AEBVlocale@0@@Z @ 0x1800BDCDC (--$use_facet@V-$moneypunct@_W$00@std@@@std@@YAAEBV-$moneypunct@_W$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$0A@@std@@@std@@YAAEBV?$moneypunct@_W$0A@@0@AEBVlocale@0@@Z @ 0x1800BDE1C (--$use_facet@V-$moneypunct@_W$0A@@std@@@std@@YAAEBV-$moneypunct@_W$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CFC21 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
char *__fastcall std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getmfld(
        __int64 a1,
        char *a2,
        __int64 *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int16 *a7)
{
  char *v8; // r14
  char v9; // r13
  __int64 v10; // rbx
  int v11; // edi
  struct std::_Facet_base *v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  int v14; // esi
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // esi
  struct std::_Facet_base *v18; // rcx
  void (__fastcall ***v19)(_QWORD, __int64); // rax
  unsigned __int64 v20; // rbx
  char v21; // al
  char v22; // bl
  __int64 v23; // r14
  unsigned __int16 *v24; // rax
  __int64 v25; // rbx
  int v26; // edi
  int v27; // r13d
  __int16 v28; // r12
  void **v29; // rcx
  unsigned __int64 v30; // r14
  char v31; // al
  void **v32; // rdi
  char *v33; // r13
  __int16 v34; // dx
  __int16 *v35; // rax
  __int16 i; // cx
  unsigned __int64 v37; // rax
  void **v38; // rax
  void **v39; // rax
  void **v40; // rax
  void **v41; // rax
  char v42; // al
  void **v43; // rcx
  void *v44; // r9
  unsigned __int64 v45; // r8
  char v46; // dl
  void **v47; // rax
  void **v48; // rax
  __int16 v49; // bx
  unsigned __int64 v50; // rcx
  void **v51; // rbx
  void **v52; // rax
  __int16 *v53; // r12
  __int16 v54; // dx
  __int16 *v55; // rax
  __int16 j; // cx
  unsigned __int64 v57; // rax
  __int16 v58; // dx
  __int16 *v59; // rax
  __int16 k; // cx
  unsigned __int64 v61; // rax
  char v62; // al
  __int64 v63; // rbx
  bool v64; // cf
  void **v65; // rcx
  int v66; // esi
  void **v67; // rbx
  char v68; // bl
  unsigned int v69; // esi
  int v70; // esi
  void **v71; // rbx
  char v72; // bl
  unsigned int v73; // esi
  __int64 v74; // rbx
  __int64 v75; // rbx
  bool v76; // zf
  void **v77; // rbx
  void **v78; // rax
  void **v79; // rbx
  void **v80; // rax
  void **v81; // rbx
  void **v82; // rax
  unsigned __int64 v83; // r8
  __int64 v84; // rdx
  void **v85; // rax
  void **v86; // rax
  char *v87; // rax
  char v89; // [rsp+3Ch] [rbp-BDh]
  char v90; // [rsp+40h] [rbp-B9h]
  unsigned __int64 v91; // [rsp+48h] [rbp-B1h]
  struct std::_Facet_base *v92; // [rsp+50h] [rbp-A9h]
  struct std::_Facet_base *v94; // [rsp+60h] [rbp-99h] BYREF
  __int64 v95; // [rsp+68h] [rbp-91h]
  char *v96; // [rsp+70h] [rbp-89h]
  int v97; // [rsp+78h] [rbp-81h]
  int v98; // [rsp+7Ch] [rbp-7Dh]
  _BYTE v99[8]; // [rsp+80h] [rbp-79h] BYREF
  __int16 *v100; // [rsp+88h] [rbp-71h]
  __int64 v101; // [rsp+90h] [rbp-69h]
  char *v102; // [rsp+98h] [rbp-61h]
  void *v103[2]; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-49h]
  unsigned __int64 v105; // [rsp+B8h] [rbp-41h]
  void *v106[2]; // [rsp+C0h] [rbp-39h] BYREF
  __int64 v107; // [rsp+D0h] [rbp-29h]
  unsigned __int64 v108; // [rsp+D8h] [rbp-21h]
  void *v109[2]; // [rsp+E0h] [rbp-19h] BYREF
  unsigned __int64 v110; // [rsp+F0h] [rbp-9h]
  unsigned __int64 v111; // [rsp+F8h] [rbp-1h]

  v101 = -2LL;
  v8 = a2;
  v96 = a2;
  v102 = a2;
  v100 = a7;
  v9 = 0;
  v10 = **(_QWORD **)(a6 + 64);
  v94 = (struct std::_Facet_base *)v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  if ( a5 )
  {
    v11 = 32;
    v12 = std::use_facet<std::moneypunct<wchar_t,1>>((__int64 *)&v94);
  }
  else
  {
    v11 = 64;
    v12 = std::use_facet<std::moneypunct<wchar_t,0>>((__int64 *)&v94);
  }
  v92 = v12;
  if ( v10 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v14 = v11;
  v90 = 0;
  v89 = 0;
  v111 = 7LL;
  v110 = 0LL;
  LOWORD(v109[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v12 + 88LL))(v12, v99);
  *((_QWORD *)v8 + 3) = 15LL;
  *((_QWORD *)v8 + 2) = 0LL;
  *v8 = 0;
  v15 = a6;
  v16 = **(_QWORD **)(a6 + 64);
  v94 = (struct std::_Facet_base *)v16;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = v14 | 0x81;
  v18 = std::use_facet<std::ctype<wchar_t>>((__int64 *)&v94);
  v94 = v18;
  if ( v16 )
  {
    v19 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v19 )
      (**v19)(v19, 1LL);
    v18 = v94;
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, __int16 *))(*(_QWORD *)v18 + 88LL))(
    v18,
    "0123456789-",
    "",
    v100);
  v20 = 0LL;
  v91 = 0LL;
  while ( v20 < 4 )
  {
    v21 = v99[v20];
    switch ( v21 )
    {
      case ' ':
        goto LABEL_18;
      case '$':
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 48LL))(v12, v103);
        v17 |= 0x100u;
        if ( (*(_BYTE *)(v15 + 24) & 8) != 0 || std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
          goto LABEL_191;
        v77 = v103;
        if ( v105 >= 8 )
          v77 = (void **)v103[0];
        if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) == *(_WORD *)v77 )
        {
LABEL_191:
          if ( v91 == 3 && v110 <= 1 )
          {
            if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
              goto LABEL_192;
            v79 = v103;
            if ( v105 >= 8 )
              v79 = (void **)v103[0];
            if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) != *(_WORD *)v79 )
            {
LABEL_192:
              v104 = 0LL;
              v80 = v103;
              if ( v105 >= 8 )
                v80 = (void **)v103[0];
              *(_WORD *)v80 = 0;
            }
          }
        }
        else
        {
          v104 = 0LL;
          v78 = v103;
          if ( v105 >= 8 )
            v78 = (void **)v103[0];
          *(_WORD *)v78 = 0;
        }
        v81 = v103;
        if ( v105 >= 8 )
          v81 = (void **)v103[0];
        while ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
        {
          v82 = v103;
          v65 = (void **)v103[0];
          v83 = v105;
          if ( v105 >= 8 )
            v82 = (void **)v103[0];
          v84 = v104;
          if ( v81 == (void **)((char *)v82 + 2 * v104) )
            goto LABEL_205;
          if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) != *(_WORD *)v81 )
            break;
          v81 = (void **)((char *)v81 + 2);
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
        v83 = v105;
        v84 = v104;
        v65 = (void **)v103[0];
LABEL_205:
        v85 = v103;
        if ( v83 >= 8 )
          v85 = v65;
        if ( v81 != (void **)((char *)v85 + 2 * v84) )
          v9 = 1;
        v90 = v9;
        if ( v83 < 8 )
          goto LABEL_91;
        goto LABEL_135;
      case '+':
        if ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v103);
          v66 = v17 | 0x202;
          if ( !v104 )
            goto LABEL_142;
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v106);
          v66 |= 0x404u;
          v67 = v106;
          if ( v108 >= 8 )
            v67 = (void **)v106[0];
          if ( *(_WORD *)v67 == *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) )
            v68 = 1;
          else
LABEL_142:
            v68 = 0;
          if ( (v66 & 4) != 0 )
          {
            v66 &= ~4u;
            if ( v108 >= 8 )
              operator delete(v106[0]);
            v108 = 7LL;
            v107 = 0LL;
            LOWORD(v106[0]) = 0;
          }
          v69 = v66 & 0xFFFFFFFD;
          if ( v105 >= 8 )
            operator delete(v103[0]);
          if ( v68 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v106);
            v17 = v69 | 0x800;
            if ( v111 >= 8 )
              operator delete(v109[0]);
            v111 = 7LL;
            v110 = 0LL;
            LOWORD(v109[0]) = 0;
            std::wstring::_Assign_rv(v109, v106);
            v64 = v108 < 8;
            goto LABEL_133;
          }
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v103);
          v70 = v69 | 0x1008;
          if ( !v104 )
            goto LABEL_158;
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v106);
          v70 |= 0x2010u;
          v71 = v106;
          if ( v108 >= 8 )
            v71 = (void **)v106[0];
          if ( *(_WORD *)v71 == *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) )
            v72 = 1;
          else
LABEL_158:
            v72 = 0;
          if ( (v70 & 0x10) != 0 )
          {
            v70 &= ~0x10u;
            if ( v108 >= 8 )
              operator delete(v106[0]);
            v108 = 7LL;
            v107 = 0LL;
            LOWORD(v106[0]) = 0;
          }
          v73 = v70 & 0xFFFFFFF7;
          if ( v105 >= 8 )
            operator delete(v103[0]);
          if ( v72 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v106);
            v17 = v73 | 0x4000;
            if ( v111 >= 8 )
              operator delete(v109[0]);
            v111 = 7LL;
            v110 = 0LL;
            LOWORD(v109[0]) = 0;
            std::wstring::_Assign_rv(v109, v106);
            if ( v108 >= 8 )
              operator delete(v106[0]);
            v89 = 1;
            goto LABEL_91;
          }
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v106);
          v17 = v73 | 0x8000;
          v74 = v107;
          if ( v108 >= 8 )
            operator delete(v106[0]);
          if ( v74 )
          {
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v106);
            v17 |= 0x10000u;
            v75 = v107;
            if ( v108 >= 8 )
              operator delete(v106[0]);
            v15 = a6;
            v76 = v75 == 0;
            v20 = v91;
            if ( v76 )
              v89 = 1;
            break;
          }
LABEL_91:
          v20 = v91;
        }
        v15 = a6;
        break;
      case 'v':
        v25 = 0LL;
        v26 = 0;
        LODWORD(v95) = 0;
        v27 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 72LL))(v12);
        v98 = v27;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 40LL))(v12, v106);
        v17 |= 0x20000u;
        v97 = v17;
        if ( v107 )
        {
          v28 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 32LL))(v12);
          if ( v28 )
          {
            v29 = v106;
            if ( v108 >= 0x10 )
              v29 = (void **)v106[0];
            if ( *(_BYTE *)v29 < 0x7Fu )
            {
              v30 = 15LL;
              v105 = 15LL;
              LOWORD(v103[0]) = 0;
              v104 = 1LL;
              v31 = std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4);
              v32 = (void **)v103[0];
              if ( v31 )
                goto LABEL_60;
              v33 = v96;
              while ( 2 )
              {
                v34 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
                v35 = v100;
                for ( i = *v100; i && i != v34; i = *v35 )
                  ++v35;
                v37 = v35 - v100;
                if ( v37 >= 0xA )
                {
                  v40 = v103;
                  if ( v30 >= 0x10 )
                    v40 = v32;
                  if ( !*((_BYTE *)v40 + v25)
                    || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) != v28 )
                  {
LABEL_54:
                    v17 = v97;
                    v27 = v98;
                    if ( !v25 )
                      goto LABEL_60;
                    v41 = v103;
                    if ( v30 >= 0x10 )
                      v41 = v32;
                    if ( *((char *)v41 + v25) <= 0 )
                    {
                      v42 = 1;
                      v90 = 1;
                    }
                    else
                    {
                      ++v25;
LABEL_60:
                      v42 = v90;
                    }
                    v43 = v106;
                    v44 = v106[0];
                    v45 = v108;
                    if ( v108 >= 0x10 )
                      v43 = (void **)v106[0];
                    if ( !v42 )
                    {
                      while ( v25 )
                      {
                        v46 = *(_BYTE *)v43;
                        if ( *(_BYTE *)v43 == 127 )
                          break;
                        if ( --v25 )
                        {
                          v47 = v103;
                          if ( v30 >= 0x10 )
                            v47 = v32;
                          if ( v46 != *((_BYTE *)v47 + v25) )
                            goto LABEL_76;
                        }
                        if ( !v25 )
                        {
                          v48 = v103;
                          if ( v30 >= 0x10 )
                            v48 = v32;
                          if ( v46 < *(char *)v48 )
                          {
LABEL_76:
                            v9 = 1;
                            v90 = 1;
                            goto LABEL_86;
                          }
                        }
                        if ( *((char *)v43 + 1) > 0 )
                          v43 = (void **)((char *)v43 + 1);
                      }
                      if ( v30 >= 0x10 )
                        operator delete(v32);
                      v8 = v96;
LABEL_80:
                      v26 = v95;
                      v12 = v92;
                      goto LABEL_81;
                    }
                    v9 = v90;
LABEL_86:
                    if ( v30 >= 0x10 )
                    {
                      operator delete(v32);
                      v45 = v108;
                      v44 = v106[0];
                    }
                    if ( v45 >= 0x10 )
                      operator delete(v44);
                    v8 = v96;
                    v12 = v92;
                    goto LABEL_91;
                  }
                  std::string::append((char *)v103, 1uLL, 0);
                  ++v25;
LABEL_52:
                  v32 = (void **)v103[0];
                  v30 = v105;
                }
                else
                {
                  std::string::append(
                    v33,
                    1uLL,
                    `std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getmfld'::`2'::_Src[v37]);
                  v38 = v103;
                  if ( v30 >= 0x10 )
                    v38 = v32;
                  if ( *((_BYTE *)v38 + v25) != 127 )
                  {
                    v39 = v103;
                    if ( v30 >= 0x10 )
                      v39 = v32;
                    ++*((_BYTE *)v39 + v25);
                    goto LABEL_52;
                  }
                }
                std::istreambuf_iterator<unsigned short>::_Inc(a3);
                if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
                  goto LABEL_54;
                continue;
              }
            }
          }
          v12 = v92;
        }
        if ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
        {
          v53 = v100;
          do
          {
            v54 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
            v55 = v53;
            for ( j = *v53; j && j != v54; j = *v55 )
              ++v55;
            v57 = v55 - v53;
            if ( v57 >= 0xA )
              break;
            std::string::append(
              v8,
              1uLL,
              `std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getmfld'::`2'::_Src[v57]);
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          while ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) );
          v17 = v97;
          v27 = v98;
          goto LABEL_80;
        }
LABEL_81:
        v49 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 24LL))(v12);
        if ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4)
          && v49
          && *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) == v49 )
        {
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          while ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
          {
            if ( v26 >= v27 )
              goto LABEL_125;
            v58 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
            v59 = v100;
            for ( k = *v100; k && k != v58; k = *v59 )
              ++v59;
            v61 = v59 - v100;
            if ( v61 >= 0xA )
              break;
            std::string::append(
              v8,
              1uLL,
              `std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getmfld'::`2'::_Src[v61]);
            ++v26;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          v62 = v90;
          if ( v26 < v27 )
            v62 = 1;
          v90 = v62;
        }
LABEL_125:
        if ( *((_QWORD *)v8 + 2) )
        {
          if ( v26 < v27 )
          {
            v63 = (unsigned int)(v27 - v26);
            do
            {
              std::string::append(v8, 1uLL, 48);
              --v63;
            }
            while ( v63 );
            v12 = v92;
          }
          v9 = v90;
        }
        else
        {
          v9 = 1;
          v90 = 1;
        }
        v64 = v108 < 0x10;
LABEL_133:
        if ( v64 )
          goto LABEL_91;
        v65 = (void **)v106[0];
LABEL_135:
        operator delete(v65);
        goto LABEL_91;
      case 'x':
LABEL_18:
        if ( v20 != 3 )
        {
          v22 = 0;
          if ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
          {
            v23 = (__int64)v94;
            do
            {
              v24 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 32LL))(
                      v23,
                      72LL,
                      *v24) )
                break;
              v22 = 1;
              std::istreambuf_iterator<unsigned short>::_Inc(a3);
            }
            while ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) );
            v8 = v96;
            v12 = v92;
            v9 = v90;
          }
          v15 = a6;
          if ( v99[v91] == 32 )
          {
            if ( !v22 )
              v9 = 1;
            v90 = v9;
          }
          v20 = v91;
        }
        break;
    }
    v91 = ++v20;
    if ( v9 )
      break;
  }
  if ( v9 )
    goto LABEL_217;
  v50 = v110;
  if ( v110 <= 1 )
    goto LABEL_215;
  v51 = v109;
  if ( v111 >= 8 )
    v51 = (void **)v109[0];
  while ( 1 )
  {
    v52 = v109;
    if ( v111 >= 8 )
      v52 = (void **)v109[0];
    v51 = (void **)((char *)v51 + 2);
    if ( v51 == (void **)((char *)v52 + 2 * v50) )
      break;
    if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4)
      || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) != *(_WORD *)v51 )
    {
      v50 = v110;
      break;
    }
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    v50 = v110;
  }
  v86 = v109;
  if ( v111 >= 8 )
    v86 = (void **)v109[0];
  if ( v51 != (void **)((char *)v86 + 2 * v50) )
  {
LABEL_217:
    *((_QWORD *)v8 + 2) = 0LL;
    if ( *((_QWORD *)v8 + 3) < 0x10uLL )
      v87 = v8;
    else
      v87 = *(char **)v8;
    *v87 = 0;
  }
  else
  {
LABEL_215:
    if ( v89 )
      std::string::insert(v8, 0LL, 1uLL, 45);
  }
  if ( v111 >= 8 )
    operator delete(v109[0]);
  return v8;
}
