/*
 * XREFs of ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B54F0
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x1800B85B0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B85B0.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x1800B86B0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B86B0.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x1800B87A0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B87A0.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18003AED0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800B44FC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800B48BC (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B5FFC (-_Getffldx@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800B7310 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B9A74 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CFC21 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<char,std::istreambuf_iterator<char>>::_Getffld(
        int a1,
        char *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  __int64 v10; // rbx
  void (__fastcall ***v11)(_QWORD, __int64); // r8
  struct std::_Facet_base *v12; // r15
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char *v14; // r14
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // rsi
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  __int64 v18; // rcx
  unsigned __int8 *v19; // r8
  int v20; // edx
  int v21; // eax
  char v22; // cl
  char v23; // si
  int v24; // ebx
  void **v25; // r13
  char v26; // r12
  unsigned __int64 v27; // r15
  __int64 v28; // rbx
  char v29; // al
  void **v30; // rsi
  int v31; // r13d
  __int64 v32; // rcx
  unsigned __int8 *v33; // r8
  int v34; // edx
  int v35; // eax
  char *v36; // rax
  char i; // cl
  unsigned __int64 v38; // rax
  void **v39; // rax
  void **v40; // rax
  void **v41; // rax
  __int64 v42; // rcx
  unsigned __int8 *v43; // r8
  int v44; // edx
  int v45; // eax
  void **v46; // rax
  char v47; // cl
  void **v48; // rax
  void **v49; // rax
  __int64 v50; // rcx
  unsigned __int8 *v51; // r8
  int v52; // edx
  int v53; // r15d
  __int64 v54; // rcx
  unsigned __int8 *v55; // r8
  int v56; // edx
  int v57; // eax
  char *v58; // rax
  char j; // cl
  unsigned __int64 v60; // rax
  int v61; // eax
  int v62; // ebx
  __int64 v63; // rcx
  unsigned __int8 *v64; // r8
  int v65; // edx
  int v66; // eax
  unsigned int v67; // r15d
  __int64 v68; // rcx
  unsigned __int8 *v69; // r8
  int v70; // edx
  int v71; // eax
  char *v72; // rax
  char k; // cl
  unsigned __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int8 *v76; // r8
  int v77; // edx
  int v78; // eax
  char v79; // cl
  int v80; // ebx
  __int64 v81; // rcx
  unsigned __int8 *v82; // r8
  int v83; // edx
  int v84; // eax
  char v85; // cl
  __int64 v86; // rcx
  unsigned __int8 *v87; // r8
  int v88; // edx
  int v89; // eax
  __int64 v90; // rcx
  unsigned __int8 *v91; // r8
  int v92; // edx
  int v93; // eax
  char *v94; // rax
  char m; // cl
  unsigned __int64 v96; // rax
  char v97; // [rsp+38h] [rbp-79h]
  char v98; // [rsp+39h] [rbp-78h]
  int v99; // [rsp+3Ch] [rbp-75h]
  __int64 v100; // [rsp+40h] [rbp-71h] BYREF
  struct std::_Facet_base *v101; // [rsp+48h] [rbp-69h] BYREF
  __int64 v102; // [rsp+50h] [rbp-61h]
  void **v103; // [rsp+58h] [rbp-59h]
  char *v104; // [rsp+60h] [rbp-51h]
  __int64 v105; // [rsp+68h] [rbp-49h]
  void *v106[3]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v107; // [rsp+88h] [rbp-29h]
  void *v108[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v109; // [rsp+A8h] [rbp-9h]
  _BYTE v110[10]; // [rsp+B0h] [rbp-1h] BYREF
  char v111; // [rsp+BAh] [rbp+9h]
  char v112; // [rsp+BBh] [rbp+Ah]
  char v113; // [rsp+BCh] [rbp+Bh]
  char v114; // [rsp+BDh] [rbp+Ch]

  v105 = -2LL;
  v6 = a4;
  v102 = a4;
  v104 = a2;
  if ( (*(_DWORD *)(a5 + 24) & 0x3000) == 0x3000 )
    return std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx(a1, (_DWORD)a2, (_DWORD)a3, a4, a5, a6);
  v10 = **(_QWORD **)(a5 + 64);
  v101 = (struct std::_Facet_base *)v10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 12288LL, a6);
  v12 = std::use_facet<std::numpunct<char>>((__int64 *)&v101);
  v101 = v12;
  if ( v10 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v13;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v12 + 40LL))(
    v12,
    v108,
    v11);
  v14 = a2;
  v98 = 0;
  v15 = **(_QWORD **)(a5 + 64);
  v100 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::ctype<char>>(&v100);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v16 + 56LL))(
    v16,
    "0123456789-+Ee",
    "",
    v110);
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v18 = *a3;
      if ( !*a3
        || ((v19 = **(unsigned __int8 ***)(v18 + 56)) == 0LL ? (v20 = 0) : (v20 = **(_DWORD **)(v18 + 80)),
            v20 <= 0 ? (v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18)) : (v21 = *v19),
            v21 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v21;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v22 = *((_BYTE *)a3 + 9);
    if ( v22 == v112 )
    {
      *a2 = 43;
    }
    else
    {
      if ( v22 != v111 )
        goto LABEL_27;
      *a2 = 45;
    }
    v14 = a2 + 1;
    std::istreambuf_iterator<char>::_Inc(a3);
  }
LABEL_27:
  v23 = 0;
  v97 = 0;
  v24 = 0;
  LODWORD(v100) = 0;
  v99 = 0;
  v25 = v108;
  if ( v109 >= 0x10 )
    v25 = (void **)v108[0];
  v103 = v25;
  if ( (unsigned __int8)(*(_BYTE *)v25 - 1) <= 0x7Du )
  {
    if ( v108[2] )
      v26 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 32LL))(v12);
    else
      v26 = 0;
    v27 = 15LL;
    v107 = 15LL;
    LOWORD(v106[0]) = 0;
    v106[2] = (void *)1;
    v28 = 0LL;
    v29 = std::istreambuf_iterator<char>::equal(a3, v102);
    v30 = (void **)v106[0];
    if ( v29 )
    {
LABEL_88:
      while ( v28 )
      {
        v47 = *(_BYTE *)v25;
        if ( *(_BYTE *)v25 == 127 )
          break;
        if ( --v28 )
        {
          v48 = v106;
          if ( v27 >= 0x10 )
            v48 = v30;
          if ( v47 != *((_BYTE *)v48 + v28) )
            goto LABEL_100;
        }
        if ( !v28 )
        {
          v49 = v106;
          if ( v27 >= 0x10 )
            v49 = v30;
          if ( v47 < *(char *)v49 )
            goto LABEL_100;
        }
        if ( *((char *)v25 + 1) > 0 )
          v25 = (void **)((char *)v25 + 1);
      }
      goto LABEL_101;
    }
    v31 = 0;
    while ( 1 )
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v32 = *a3;
        if ( !*a3
          || ((v33 = **(unsigned __int8 ***)(v32 + 56)) == 0LL ? (v34 = 0) : (v34 = **(_DWORD **)(v32 + 80)),
              v34 <= 0 ? (v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 48LL))(v32)) : (v35 = *v33),
              v35 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v35;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v36 = v110;
      for ( i = v110[0]; i && i != *((_BYTE *)a3 + 9); i = *v36 )
        ++v36;
      v38 = v36 - v110;
      if ( v38 >= 0xA )
      {
        v41 = v106;
        if ( v27 >= 0x10 )
          v41 = v30;
        if ( !*((_BYTE *)v41 + v28) || !v26 )
          goto LABEL_83;
        if ( !*((_BYTE *)a3 + 8) )
        {
          v42 = *a3;
          if ( !*a3
            || ((v43 = **(unsigned __int8 ***)(v42 + 56)) == 0LL ? (v44 = 0) : (v44 = **(_DWORD **)(v42 + 80)),
                v44 <= 0 ? (v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 48LL))(v42)) : (v45 = *v43),
                v45 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v45;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v26 )
        {
LABEL_83:
          LODWORD(v100) = v31;
          v25 = v103;
          if ( v28 )
          {
            v46 = v106;
            if ( v27 >= 0x10 )
              v46 = v30;
            if ( *((char *)v46 + v28) > 0 )
            {
              ++v28;
              goto LABEL_88;
            }
LABEL_100:
            v98 = 1;
          }
LABEL_101:
          if ( v27 >= 0x10 )
            operator delete(v30);
          v6 = v102;
          v23 = v97;
          v24 = v100;
LABEL_104:
          v12 = v101;
          if ( v23 && !v24 )
            *v14++ = 48;
          goto LABEL_107;
        }
        std::string::append((char *)v106, 1uLL, 0);
        ++v28;
      }
      else
      {
        v97 = 1;
        if ( v31 < 36 )
        {
          if ( v38 || v31 )
          {
            *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v38];
            ++v31;
          }
        }
        else
        {
          ++v99;
        }
        v39 = v106;
        if ( v27 >= 0x10 )
          v39 = v30;
        if ( *((_BYTE *)v39 + v28) == 127 )
          goto LABEL_82;
        v40 = v106;
        if ( v27 >= 0x10 )
          v40 = v30;
        ++*((_BYTE *)v40 + v28);
      }
      v30 = (void **)v106[0];
      v27 = v107;
LABEL_82:
      std::istreambuf_iterator<char>::_Inc(a3);
      if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v102) )
        goto LABEL_83;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    v53 = 0;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v54 = *a3;
        if ( !*a3
          || ((v55 = **(unsigned __int8 ***)(v54 + 56)) == 0LL ? (v56 = 0) : (v56 = **(_DWORD **)(v54 + 80)),
              v56 <= 0 ? (v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54)) : (v57 = *v55),
              v57 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v57;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v58 = v110;
      for ( j = v110[0]; j && j != *((_BYTE *)a3 + 9); j = *v58 )
        ++v58;
      v60 = v58 - v110;
      if ( v60 >= 0xA )
        break;
      if ( v24 < 36 )
      {
        if ( v60 || v24 )
        {
          *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v60];
          ++v24;
        }
      }
      else
      {
        ++v53;
      }
      v23 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v99 = v53;
    LODWORD(v100) = v24;
    goto LABEL_104;
  }
LABEL_107:
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v50 = *a3;
      if ( !*a3
        || ((v51 = **(unsigned __int8 ***)(v50 + 56)) == 0LL ? (v52 = 0) : (v52 = **(_DWORD **)(v50 + 80)),
            v52 <= 0 ? (v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 48LL))(v50)) : (v61 = *v51),
            v61 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v61;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 24LL))(v12) )
    {
      *v14++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( v24 )
  {
    v67 = v99;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      v62 = v99;
      do
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v63 = *a3;
          if ( !*a3
            || ((v64 = **(unsigned __int8 ***)(v63 + 56)) == 0LL ? (v65 = 0) : (v65 = **(_DWORD **)(v63 + 80)),
                v65 <= 0 ? (v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 48LL))(v63)) : (v66 = *v64),
                v66 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v66;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v110[0] )
          break;
        --v62;
        v23 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
      v99 = v62;
      v24 = v100;
    }
    v67 = v99;
    if ( v99 < 0 )
    {
      *v14++ = 48;
      v67 = ++v99;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v68 = *a3;
        if ( !*a3
          || ((v69 = **(unsigned __int8 ***)(v68 + 56)) == 0LL ? (v70 = 0) : (v70 = **(_DWORD **)(v68 + 80)),
              v70 <= 0 ? (v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 48LL))(v68)) : (v71 = *v69),
              v71 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v71;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v72 = v110;
      for ( k = v110[0]; k && k != *((_BYTE *)a3 + 9); k = *v72 )
        ++v72;
      v74 = v72 - v110;
      if ( v74 >= 0xA )
        break;
      if ( v24 < 36 )
      {
        *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v74];
        ++v24;
      }
      v23 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v67 = v99;
  }
  if ( v23 && !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v75 = *a3;
      if ( !*a3
        || ((v76 = **(unsigned __int8 ***)(v75 + 56)) == 0LL ? (v77 = 0) : (v77 = **(_DWORD **)(v75 + 80)),
            v77 <= 0 ? (v78 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v75 + 48LL))(v75)) : (v78 = *v76),
            v78 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v78;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v79 = *((_BYTE *)a3 + 9);
    if ( v79 == v114 || v79 == v113 )
    {
      *v14++ = 101;
      std::istreambuf_iterator<char>::_Inc(a3);
      v23 = 0;
      v80 = 0;
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v81 = *a3;
          if ( !*a3
            || ((v82 = **(unsigned __int8 ***)(v81 + 56)) == 0LL ? (v83 = 0) : (v83 = **(_DWORD **)(v81 + 80)),
                v83 <= 0 ? (v84 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 48LL))(v81)) : (v84 = *v82),
                v84 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v84;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v85 = *((_BYTE *)a3 + 9);
        if ( v85 == v112 )
        {
          *v14 = 43;
LABEL_224:
          ++v14;
          std::istreambuf_iterator<char>::_Inc(a3);
          goto LABEL_225;
        }
        if ( v85 == v111 )
        {
          *v14 = 45;
          goto LABEL_224;
        }
      }
LABEL_225:
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v86 = *a3;
            if ( !*a3
              || ((v87 = **(unsigned __int8 ***)(v86 + 56)) == 0LL ? (v88 = 0) : (v88 = **(_DWORD **)(v86 + 80)),
                  v88 <= 0 ? (v89 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 48LL))(v86)) : (v89 = *v87),
                  v89 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v89;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v110[0] )
            break;
          v23 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
        if ( v23 )
          *v14++ = 48;
      }
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v90 = *a3;
            if ( !*a3
              || ((v91 = **(unsigned __int8 ***)(v90 + 56)) == 0LL ? (v92 = 0) : (v92 = **(_DWORD **)(v90 + 80)),
                  v92 <= 0 ? (v93 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 48LL))(v90)) : (v93 = *v91),
                  v93 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v93;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          v94 = v110;
          for ( m = v110[0]; m && m != *((_BYTE *)a3 + 9); m = *v94 )
            ++v94;
          v96 = v94 - v110;
          if ( v96 >= 0xA )
            break;
          if ( v80 < 8 )
          {
            *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v96];
            ++v80;
          }
          v23 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
        v67 = v99;
      }
    }
  }
  if ( v98 || !v23 )
    v14 = v104;
  *v14 = 0;
  if ( v109 >= 0x10 )
    operator delete(v108[0]);
  return v67;
}
