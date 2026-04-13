/*
 * XREFs of ?_Getffldx@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800967D0
 * Callers:
 *     ?_Getffld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180095990 (-_Getffld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18003AED0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x18003B158 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18003B1C0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18007A814 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x180097AD4 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  __int64 v11; // r15
  int v12; // r13d
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  __int64 v14; // rbx
  struct std::_Facet_base *v15; // rsi
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  void **v17; // rdx
  _WORD *v18; // rbx
  char v19; // cl
  __int16 v20; // ax
  char *v21; // rbx
  int v22; // esi
  void **v23; // rax
  __int16 v24; // r15
  __int16 v25; // ax
  unsigned __int64 v26; // r12
  __int64 v27; // rsi
  _QWORD *v28; // r13
  char *v29; // rax
  char v30; // cl
  _QWORD *v31; // rax
  char *v32; // rax
  __int16 *v33; // rcx
  __int16 j; // ax
  unsigned __int64 v35; // rcx
  int v36; // edx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // r15
  char v41; // r12
  __int16 *v42; // rcx
  __int16 i; // ax
  unsigned __int64 v44; // rcx
  __int16 *v46; // rcx
  __int16 k; // ax
  unsigned __int64 v48; // rcx
  __int16 v49; // ax
  int v50; // esi
  char v51; // cl
  __int16 v52; // ax
  __int16 *v53; // rax
  __int16 m; // cx
  unsigned __int64 v55; // rax
  char v56; // [rsp+38h] [rbp-A9h]
  char v57; // [rsp+39h] [rbp-A8h]
  int v58; // [rsp+3Ch] [rbp-A5h]
  __int64 v59; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v60; // [rsp+48h] [rbp-99h] BYREF
  void **v61; // [rsp+50h] [rbp-91h]
  char *v62; // [rsp+58h] [rbp-89h]
  int *v63; // [rsp+60h] [rbp-81h]
  __int64 v64; // [rsp+68h] [rbp-79h]
  _QWORD v65[3]; // [rsp+70h] [rbp-71h] BYREF
  __int64 v66; // [rsp+88h] [rbp-59h]
  void *v67[3]; // [rsp+90h] [rbp-51h] BYREF
  unsigned __int64 v68; // [rsp+A8h] [rbp-39h]
  _WORD v69[22]; // [rsp+B0h] [rbp-31h] BYREF
  __int16 v70; // [rsp+DCh] [rbp-5h]
  __int16 v71; // [rsp+DEh] [rbp-3h]
  __int16 v72; // [rsp+E0h] [rbp-1h]
  __int16 v73; // [rsp+E2h] [rbp+1h]
  __int16 v74; // [rsp+E4h] [rbp+3h]
  __int16 v75; // [rsp+E6h] [rbp+5h]

  v64 = -2LL;
  v62 = a2;
  v63 = a6;
  v9 = **(_QWORD **)(a5 + 64);
  v60 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = std::use_facet<std::numpunct<wchar_t>>(&v60);
  v60 = v11;
  v12 = 0;
  if ( v9 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v13;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(__int64, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v67,
    v10);
  v14 = **(_QWORD **)(a5 + 64);
  v59 = v14;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = std::use_facet<std::ctype<wchar_t>>(&v59);
  if ( v14 )
  {
    v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v16 )
      (**v16)(v16, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _WORD *))(*(_QWORD *)v15 + 88LL))(
    v15,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v69);
  v18 = a2;
  v57 = 0;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_24;
  }
  else if ( !*(_QWORD *)a4 )
  {
    goto LABEL_24;
  }
  v19 = *(_BYTE *)(a3 + 8);
  if ( !v19 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v19 = *(_BYTE *)(a3 + 8);
  }
  v20 = *(_WORD *)(a3 + 10);
  if ( v20 == v71 )
  {
    *a2 = 43;
LABEL_23:
    v18 = a2 + 1;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
    goto LABEL_24;
  }
  if ( !v19 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v20 = *(_WORD *)(a3 + 10);
  }
  if ( v20 == v70 )
  {
    *a2 = 45;
    goto LABEL_23;
  }
LABEL_24:
  *v18 = 30768;
  v21 = (char *)(v18 + 1);
  v56 = 0;
  v22 = 0;
  LODWORD(v59) = 0;
  v58 = 0;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_32;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_32:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( *(_WORD *)(a3 + 10) != v69[0] )
      goto LABEL_42;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_41;
    }
    else if ( !*(_QWORD *)a4 )
    {
LABEL_41:
      v56 = 1;
      goto LABEL_42;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v25 = *(_WORD *)(a3 + 10);
    if ( v25 == v73 )
      goto LABEL_54;
    if ( !*(_BYTE *)(a3 + 8) )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v25 = *(_WORD *)(a3 + 10);
    }
    if ( v25 == v72 )
    {
LABEL_54:
      std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
      goto LABEL_42;
    }
    goto LABEL_41;
  }
LABEL_42:
  v23 = v67;
  if ( v68 >= 0x10 )
    v23 = (void **)v67[0];
  v61 = v23;
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
          goto LABEL_130;
      }
      else if ( !*(_QWORD *)a4 )
      {
        goto LABEL_130;
      }
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v42 = v69;
      for ( i = v69[0]; i && i != *(_WORD *)(a3 + 10); i = *v42 )
        ++v42;
      v44 = v42 - v69;
      if ( v44 >= 0x16 )
      {
LABEL_130:
        v58 = v12;
        goto LABEL_114;
      }
      if ( v22 < 36 )
      {
        if ( v44 || v22 )
        {
          *v21++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v44];
          ++v22;
        }
      }
      else
      {
        ++v12;
      }
      v56 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
    }
  }
  if ( v67[2] )
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
  else
    v24 = 0;
  v26 = 15LL;
  v66 = 15LL;
  LOWORD(v65[0]) = 0;
  v65[2] = 1LL;
  v27 = 0LL;
  v28 = (_QWORD *)v65[0];
  while ( 1 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_63;
    }
    else if ( !*(_QWORD *)a4 )
    {
      goto LABEL_63;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v33 = v69;
    for ( j = v69[0]; j && j != *(_WORD *)(a3 + 10); j = *v33 )
      ++v33;
    v35 = v33 - v69;
    if ( v35 >= 0x16 )
      break;
    v56 = 1;
    v36 = v59;
    if ( (int)v59 < 36 )
    {
      if ( v35 || (_DWORD)v59 )
      {
        *v21++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v35];
        LODWORD(v59) = v36 + 1;
      }
    }
    else
    {
      ++v58;
    }
    v37 = v65;
    if ( v26 >= 0x10 )
      v37 = v28;
    if ( *((_BYTE *)v37 + v27) != 127 )
    {
      v38 = v65;
      if ( v26 >= 0x10 )
        v38 = v28;
      ++*((_BYTE *)v38 + v27);
      goto LABEL_108;
    }
LABEL_109:
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  v39 = v65;
  if ( v26 >= 0x10 )
    v39 = v28;
  if ( *((_BYTE *)v39 + v27) && v24 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( *(_WORD *)(a3 + 10) == v24 )
    {
      std::string::append((char *)v65, 1uLL, 0);
      ++v27;
LABEL_108:
      v28 = (_QWORD *)v65[0];
      v26 = v66;
      goto LABEL_109;
    }
  }
LABEL_63:
  if ( v27 )
  {
    v29 = (char *)v65;
    if ( v26 >= 0x10 )
      v29 = (char *)v28;
    if ( v29[v27] > 0 )
    {
      ++v27;
      goto LABEL_68;
    }
LABEL_110:
    v57 = 1;
  }
  else
  {
LABEL_68:
    v17 = v61;
    while ( v27 )
    {
      v30 = *(_BYTE *)v17;
      if ( *(_BYTE *)v17 == 127 )
        break;
      if ( --v27 )
      {
        v31 = v65;
        if ( v26 >= 0x10 )
          v31 = v28;
        if ( v30 != *((_BYTE *)v31 + v27) )
          goto LABEL_110;
      }
      if ( !v27 )
      {
        v32 = (char *)v65;
        if ( v26 >= 0x10 )
          v32 = (char *)v28;
        if ( v30 < *v32 )
          goto LABEL_110;
      }
      if ( *((char *)v17 + 1) > 0 )
        v17 = (void **)((char *)v17 + 1);
    }
  }
  if ( v26 >= 0x10 )
    operator delete(v28);
  v12 = v58;
  v22 = v59;
LABEL_114:
  v40 = v60;
  v41 = v56;
  if ( v56 && !v22 )
    *v21++ = 48;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_146;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_146:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( *(_WORD *)(a3 + 10) == (*(unsigned __int16 (__fastcall **)(__int64, void **))(*(_QWORD *)v40 + 24LL))(v40, v17) )
    {
      *v21++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
    }
  }
  if ( v22 )
    goto LABEL_159;
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
    if ( *(_WORD *)(a3 + 10) != v69[0] )
      break;
    --v12;
    v41 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  v58 = v12;
  if ( v12 < 0 )
  {
    *v21++ = 48;
    v58 = v12 + 1;
  }
  while ( 1 )
  {
LABEL_159:
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
    v46 = v69;
    for ( k = v69[0]; k && k != *(_WORD *)(a3 + 10); k = *v46 )
      ++v46;
    v48 = v46 - v69;
    if ( v48 >= 0x16 )
      break;
    if ( v22 < 36 )
    {
      *v21++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v48];
      ++v22;
    }
    v41 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  if ( v41 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_172;
    }
    else if ( !*(_QWORD *)a4 )
    {
      goto LABEL_172;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v49 = *(_WORD *)(a3 + 10);
    if ( v49 == v75 )
      goto LABEL_201;
    if ( !*(_BYTE *)(a3 + 8) )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v49 = *(_WORD *)(a3 + 10);
    }
    if ( v49 == v74 )
    {
LABEL_201:
      *v21++ = 112;
      std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
      v41 = 0;
      v50 = 0;
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      if ( !*(_BYTE *)(a4 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
      if ( *(_QWORD *)a3 )
      {
        if ( *(_QWORD *)a4 )
          goto LABEL_219;
      }
      else if ( !*(_QWORD *)a4 )
      {
        goto LABEL_219;
      }
      v51 = *(_BYTE *)(a3 + 8);
      if ( !v51 )
      {
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        v51 = *(_BYTE *)(a3 + 8);
      }
      v52 = *(_WORD *)(a3 + 10);
      if ( v52 == v71 )
      {
        *v21 = 43;
      }
      else
      {
        if ( !v51 )
        {
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
          v52 = *(_WORD *)(a3 + 10);
        }
        if ( v52 != v70 )
          goto LABEL_219;
        *v21 = 45;
      }
      ++v21;
      while ( 1 )
      {
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
LABEL_219:
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
        if ( *(_WORD *)(a3 + 10) != v69[0] )
          break;
        v41 = 1;
      }
      if ( v41 )
        *v21++ = 48;
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
        v53 = v69;
        for ( m = v69[0]; m && m != *(_WORD *)(a3 + 10); m = *v53 )
          ++v53;
        v55 = v53 - v69;
        if ( v55 >= 0x16 )
          break;
        if ( v50 < 8 )
        {
          *v21++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v55];
          ++v50;
        }
        v41 = 1;
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
      }
    }
  }
LABEL_172:
  if ( v57 || !v41 )
    v21 = v62;
  *v21 = 0;
  *v63 = v58;
  if ( v68 >= 0x10 )
    operator delete(v67[0]);
  return 0LL;
}
