/*
 * XREFs of ?_Getffld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180095400
 * Callers:
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x1800945D0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800945D0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x1800946E0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800946E0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x1800947F0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800947F0.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18003A830 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x18003AAD8 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18003AB40 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18007A1F4 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Getffldx@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180096240 (-_Getffldx@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x180097544 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld(
        int a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rbx
  void (__fastcall ***v11)(_QWORD, __int64); // r8
  __int64 v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char *v14; // r14
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // rsi
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  void **v18; // rdx
  __int16 v19; // ax
  char v20; // si
  int v21; // ebx
  int v22; // r13d
  void **v23; // rax
  __int16 v24; // r12
  unsigned __int64 v25; // rsi
  __int64 v26; // rbx
  _QWORD *v27; // r13
  char *v28; // rax
  char v29; // cl
  _QWORD *v30; // rax
  char *v31; // rax
  __int16 *v32; // rcx
  __int16 j; // ax
  unsigned __int64 v34; // rcx
  int v35; // edx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // r12
  __int16 *v40; // rcx
  __int16 i; // ax
  unsigned __int64 v42; // rcx
  __int16 *v43; // rcx
  __int16 k; // ax
  unsigned __int64 v45; // rcx
  __int16 v46; // ax
  int v47; // ebx
  char v48; // cl
  __int16 v49; // ax
  __int16 *v50; // rax
  __int16 m; // cx
  unsigned __int64 v52; // rax
  char v53; // [rsp+38h] [rbp-89h]
  char v54; // [rsp+39h] [rbp-88h]
  unsigned int v55; // [rsp+3Ch] [rbp-85h]
  __int64 v56; // [rsp+40h] [rbp-81h] BYREF
  __int64 v57; // [rsp+48h] [rbp-79h] BYREF
  void **v58; // [rsp+50h] [rbp-71h]
  char *v59; // [rsp+58h] [rbp-69h]
  __int64 v60; // [rsp+60h] [rbp-61h]
  _QWORD v61[3]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v62; // [rsp+80h] [rbp-41h]
  void *v63[3]; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int64 v64; // [rsp+A0h] [rbp-21h]
  _WORD v65[10]; // [rsp+A8h] [rbp-19h] BYREF
  __int16 v66; // [rsp+BCh] [rbp-5h]
  __int16 v67; // [rsp+BEh] [rbp-3h]
  __int16 v68; // [rsp+C0h] [rbp-1h]
  __int16 v69; // [rsp+C2h] [rbp+1h]

  v60 = -2LL;
  v59 = a2;
  if ( (*(_DWORD *)(a5 + 24) & 0x3000) == 0x3000 )
    return std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffldx(a1, (_DWORD)a2, a3, a4, a5, a6);
  v10 = **(_QWORD **)(a5 + 64);
  v57 = v10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 12288LL, a6);
  v12 = std::use_facet<std::numpunct<wchar_t>>(&v57);
  v57 = v12;
  if ( v10 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v13;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(__int64, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v12 + 40LL))(
    v12,
    v63,
    v11);
  v14 = a2;
  v54 = 0;
  v15 = **(_QWORD **)(a5 + 64);
  v56 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::ctype<wchar_t>>(&v56);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v15 = 0LL;
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _WORD *))(*(_QWORD *)v16 + 88LL))(
    v16,
    "0123456789-+Ee",
    "",
    v65);
  if ( *(_BYTE *)(a3 + 8) == (_BYTE)v15 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( *(_BYTE *)(a4 + 8) == (_BYTE)v15 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( *(_QWORD *)a3 == v15 )
  {
    if ( *(_QWORD *)a4 == v15 )
      goto LABEL_26;
  }
  else if ( *(_QWORD *)a4 != v15 )
  {
    goto LABEL_26;
  }
  if ( *(_BYTE *)(a3 + 8) == (_BYTE)v15 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  v19 = *(_WORD *)(a3 + 10);
  if ( v19 == v67 )
  {
    *a2 = 43;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 8) == (_BYTE)v15 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v19 = *(_WORD *)(a3 + 10);
    }
    if ( v19 != v66 )
      goto LABEL_26;
    *a2 = 45;
  }
  v14 = a2 + 1;
  std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
LABEL_26:
  v20 = 0;
  v53 = 0;
  v21 = 0;
  LODWORD(v56) = 0;
  v22 = 0;
  v55 = 0;
  v23 = v63;
  if ( v64 >= 0x10 )
    v23 = (void **)v63[0];
  v58 = v23;
  if ( (unsigned __int8)(*(_BYTE *)v23 - 1) > 0x7Du )
  {
    while ( 1 )
    {
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      if ( !*(_BYTE *)(a4 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
      if ( *(_QWORD *)a3 )
      {
        if ( *(_QWORD *)a4 )
          goto LABEL_106;
      }
      else if ( !*(_QWORD *)a4 )
      {
        goto LABEL_106;
      }
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v40 = v65;
      for ( i = v65[0]; i && i != *(_WORD *)(a3 + 10); i = *v40 )
        ++v40;
      v42 = v40 - v65;
      if ( v42 >= 0xA )
      {
LABEL_106:
        v55 = v22;
        goto LABEL_90;
      }
      if ( v21 < 36 )
      {
        if ( v42 || v21 )
        {
          *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v42];
          ++v21;
        }
      }
      else
      {
        ++v22;
      }
      v20 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
    }
  }
  if ( v63[2] )
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
  else
    v24 = 0;
  v25 = 15LL;
  v62 = 15LL;
  LOWORD(v61[0]) = 0;
  v61[2] = 1LL;
  v26 = 0LL;
  v27 = (_QWORD *)v61[0];
  while ( 1 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_39;
    }
    else if ( !*(_QWORD *)a4 )
    {
      goto LABEL_39;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v32 = v65;
    for ( j = v65[0]; j && j != *(_WORD *)(a3 + 10); j = *v32 )
      ++v32;
    v34 = v32 - v65;
    if ( v34 >= 0xA )
      break;
    v53 = 1;
    v35 = v56;
    if ( (int)v56 < 36 )
    {
      if ( v34 || (_DWORD)v56 )
      {
        *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v34];
        LODWORD(v56) = v35 + 1;
      }
    }
    else
    {
      ++v55;
    }
    v36 = v61;
    if ( v25 >= 0x10 )
      v36 = v27;
    if ( *((_BYTE *)v36 + v26) != 127 )
    {
      v37 = v61;
      if ( v25 >= 0x10 )
        v37 = v27;
      ++*((_BYTE *)v37 + v26);
      goto LABEL_84;
    }
LABEL_85:
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  v38 = v61;
  if ( v25 >= 0x10 )
    v38 = v27;
  if ( *((_BYTE *)v38 + v26) && v24 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( *(_WORD *)(a3 + 10) == v24 )
    {
      std::string::append((char *)v61, 1uLL, 0);
      ++v26;
LABEL_84:
      v27 = (_QWORD *)v61[0];
      v25 = v62;
      goto LABEL_85;
    }
  }
LABEL_39:
  if ( v26 )
  {
    v28 = (char *)v61;
    if ( v25 >= 0x10 )
      v28 = (char *)v27;
    if ( v28[v26] > 0 )
    {
      ++v26;
      goto LABEL_44;
    }
LABEL_86:
    v54 = 1;
  }
  else
  {
LABEL_44:
    v18 = v58;
    while ( v26 )
    {
      v29 = *(_BYTE *)v18;
      if ( *(_BYTE *)v18 == 127 )
        break;
      if ( --v26 )
      {
        v30 = v61;
        if ( v25 >= 0x10 )
          v30 = v27;
        if ( v29 != *((_BYTE *)v30 + v26) )
          goto LABEL_86;
      }
      if ( !v26 )
      {
        v31 = (char *)v61;
        if ( v25 >= 0x10 )
          v31 = (char *)v27;
        if ( v29 < *v31 )
          goto LABEL_86;
      }
      if ( *((char *)v18 + 1) > 0 )
        v18 = (void **)((char *)v18 + 1);
    }
  }
  if ( v25 >= 0x10 )
    operator delete(v27);
  v22 = v55;
  v20 = v53;
  v21 = v56;
LABEL_90:
  v39 = v57;
  if ( v20 && !v21 )
    *v14++ = 48;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_122;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_122:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( *(_WORD *)(a3 + 10) == (*(unsigned __int16 (__fastcall **)(__int64, void **))(*(_QWORD *)v39 + 24LL))(v39, v18) )
    {
      *v14++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
    }
  }
  if ( v21 )
    goto LABEL_135;
  while ( 1 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( *(_WORD *)(a3 + 10) != v65[0] )
      break;
    --v22;
    v20 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  v55 = v22;
  if ( v22 < 0 )
  {
    *v14++ = 48;
    v55 = v22 + 1;
  }
  while ( 1 )
  {
LABEL_135:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v43 = v65;
    for ( k = v65[0]; k && k != *(_WORD *)(a3 + 10); k = *v43 )
      ++v43;
    v45 = v43 - v65;
    if ( v45 >= 0xA )
      break;
    if ( v21 < 36 )
    {
      *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v45];
      ++v21;
    }
    v20 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  if ( v20 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_148;
    }
    else if ( !*(_QWORD *)a4 )
    {
      goto LABEL_148;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v46 = *(_WORD *)(a3 + 10);
    if ( v46 == v69 )
      goto LABEL_177;
    if ( !*(_BYTE *)(a3 + 8) )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v46 = *(_WORD *)(a3 + 10);
    }
    if ( v46 == v68 )
    {
LABEL_177:
      *v14++ = 101;
      std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
      v20 = 0;
      v47 = 0;
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      if ( !*(_BYTE *)(a4 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
      if ( *(_QWORD *)a3 )
      {
        if ( *(_QWORD *)a4 )
          goto LABEL_195;
      }
      else if ( !*(_QWORD *)a4 )
      {
        goto LABEL_195;
      }
      v48 = *(_BYTE *)(a3 + 8);
      if ( !v48 )
      {
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        v48 = *(_BYTE *)(a3 + 8);
      }
      v49 = *(_WORD *)(a3 + 10);
      if ( v49 == v67 )
      {
        *v14 = 43;
      }
      else
      {
        if ( !v48 )
        {
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
          v49 = *(_WORD *)(a3 + 10);
        }
        if ( v49 != v66 )
          goto LABEL_195;
        *v14 = 45;
      }
      ++v14;
      while ( 1 )
      {
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
LABEL_195:
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        if ( !*(_BYTE *)(a4 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
        if ( *(_QWORD *)a3 )
        {
          if ( *(_QWORD *)a4 )
            break;
        }
        else if ( !*(_QWORD *)a4 )
        {
          break;
        }
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        if ( *(_WORD *)(a3 + 10) != v65[0] )
          break;
        v20 = 1;
      }
      if ( v20 )
        *v14++ = 48;
      while ( 1 )
      {
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        if ( !*(_BYTE *)(a4 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
        if ( *(_QWORD *)a3 )
        {
          if ( *(_QWORD *)a4 )
            break;
        }
        else if ( !*(_QWORD *)a4 )
        {
          break;
        }
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        v50 = v65;
        for ( m = v65[0]; m && m != *(_WORD *)(a3 + 10); m = *v50 )
          ++v50;
        v52 = v50 - v65;
        if ( v52 >= 0xA )
          break;
        if ( v47 < 8 )
        {
          *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v52];
          ++v47;
        }
        v20 = 1;
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
      }
    }
  }
LABEL_148:
  if ( v54 || !v20 )
    v14 = v59;
  *v14 = 0;
  if ( v64 >= 0x10 )
    operator delete(v63[0]);
  return v55;
}
