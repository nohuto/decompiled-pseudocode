/*
 * XREFs of ?do_get_date@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800AE260
 * Callers:
 *     <none>
 * Callees:
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x18003B158 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18003B1C0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18007A814 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800AF090 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get_date(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  void (__fastcall ***v12)(_QWORD, __int64); // r8
  struct std::_Facet_base *v13; // r12
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  int v15; // r13d
  char v16; // bl
  _DWORD *v17; // r14
  __int128 v18; // xmm0
  _DWORD *v19; // rbx
  char v20; // r12
  char v21; // r13
  struct std::_Facet_base *v22; // r14
  char v23; // bl
  __int64 v24; // r15
  char v25; // al
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  char v28; // r12
  char v29; // r13
  char v30; // bl
  __int64 v31; // r15
  char v32; // al
  _DWORD *v33; // r14
  __int64 v34; // r15
  int v35; // ebx
  _DWORD *v36; // rbx
  char v37; // r12
  char v38; // r13
  struct std::_Facet_base *v39; // r14
  char v40; // bl
  __int64 v41; // r15
  char v42; // al
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // r12
  char v46; // r13
  char v47; // bl
  __int64 v48; // r15
  char v49; // al
  _DWORD *v50; // r14
  __int64 v51; // r15
  __int64 v52; // rcx
  void (__fastcall *v53)(__int64, __int128 *, __int128 *, _OWORD *, __int64, _DWORD *, __int64); // rax
  _DWORD *v54; // rbx
  __int128 v55; // xmm1
  _OWORD *result; // rax
  __int128 v57; // [rsp+50h] [rbp-31h] BYREF
  __int128 v58; // [rsp+60h] [rbp-21h] BYREF
  _OWORD v59[5]; // [rsp+70h] [rbp-11h] BYREF
  __int64 v62; // [rsp+E0h] [rbp+5Fh] BYREF
  struct std::_Facet_base *v63; // [rsp+E8h] [rbp+67h]

  v10 = **(_QWORD **)(a5 + 64);
  v62 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v13 = std::use_facet<std::ctype<wchar_t>>(&v62);
  v63 = v13;
  if ( v10 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v12 = v14;
    if ( v14 )
      (**v14)(v14, 1LL);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)a1 + 24LL))(
          a1,
          v11,
          v12);
  if ( !v15 )
    v15 = 2;
  LODWORD(v62) = v15;
  v16 = *((_BYTE *)a3 + 8);
  if ( !v16 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v16 = *((_BYTE *)a3 + 8);
  }
  if ( !*((_BYTE *)a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  v17 = a6;
  if ( *(_QWORD *)a3 )
  {
    if ( *a4 )
      goto LABEL_24;
  }
  else if ( !*a4 )
  {
    goto LABEL_24;
  }
  if ( !v16 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
          v13,
          4LL,
          *((unsigned __int16 *)a3 + 5)) )
  {
    v57 = *(_OWORD *)a4;
    v58 = *a3;
    (*(void (__fastcall **)(__int64, _OWORD *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
      a1,
      v59,
      &v58,
      &v57,
      a5,
      v17,
      a7);
    v18 = v59[0];
    LODWORD(v62) = 2;
LABEL_23:
    *a3 = v18;
    goto LABEL_24;
  }
  if ( v15 == 2 )
  {
    v19 = (_DWORD *)(a7 + 16);
    *v17 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
              a1,
              (_DWORD)a3,
              (_DWORD)a4,
              1,
              12,
              a7 + 16,
              (__int64)v13);
    --*v19;
  }
  else
  {
    if ( v15 != 1 )
    {
      v59[0] = *(_OWORD *)a4;
      v58 = *a3;
      (*(void (__fastcall **)(__int64, __int128 *, __int128 *, _OWORD *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL))(
        a1,
        &v57,
        &v58,
        v59,
        a5,
        v17,
        a7);
      v18 = v57;
      goto LABEL_23;
    }
    *v17 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
              a1,
              (_DWORD)a3,
              (_DWORD)a4,
              1,
              31,
              a7 + 12,
              (__int64)v13);
  }
LABEL_24:
  v20 = *((_BYTE *)a4 + 8);
  v21 = v20;
  v22 = v63;
  while ( 1 )
  {
    v23 = *((_BYTE *)a3 + 8);
    if ( !v23 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v23 = *((_BYTE *)a3 + 8);
    }
    if ( !v20 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
      v20 = *((_BYTE *)a4 + 8);
      v21 = v20;
    }
    v24 = *a4;
    if ( *(_QWORD *)a3 )
    {
      if ( v24 )
      {
LABEL_38:
        v25 = 1;
        goto LABEL_32;
      }
    }
    else if ( !v24 )
    {
      goto LABEL_38;
    }
    v25 = 0;
LABEL_32:
    if ( v25 )
      break;
    if ( !v23 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v23 = *((_BYTE *)a3 + 8);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v22 + 32LL))(
            v22,
            72LL,
            *((unsigned __int16 *)a3 + 5)) )
      break;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  if ( !v23 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v23 = *((_BYTE *)a3 + 8);
  }
  if ( !v21 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
    v24 = *a4;
  }
  v26 = 0x400900000000000LL;
  if ( *(_QWORD *)a3 )
  {
    if ( !v24 )
      goto LABEL_47;
  }
  else if ( v24 )
  {
LABEL_47:
    if ( !v23 )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v27 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v22 + 112LL))(
            v22,
            *((unsigned __int16 *)a3 + 5),
            0LL);
    if ( (unsigned __int8)v27 <= 0x3Au && _bittest64(&v26, v27) )
      std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  v28 = *((_BYTE *)a4 + 8);
  v29 = v28;
  while ( 2 )
  {
    v30 = *((_BYTE *)a3 + 8);
    if ( !v30 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v30 = *((_BYTE *)a3 + 8);
    }
    if ( !v28 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
      v28 = *((_BYTE *)a4 + 8);
      v29 = v28;
    }
    v31 = *a4;
    if ( *(_QWORD *)a3 )
    {
      if ( v31 )
        goto LABEL_66;
LABEL_59:
      v32 = 0;
    }
    else
    {
      if ( v31 )
        goto LABEL_59;
LABEL_66:
      v32 = 1;
    }
    if ( !v32 )
    {
      if ( !v30 )
      {
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        v30 = *((_BYTE *)a3 + 8);
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v22 + 32LL))(
             v22,
             72LL,
             *((unsigned __int16 *)a3 + 5)) )
      {
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
        continue;
      }
    }
    break;
  }
  v33 = a6;
  if ( !v30 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v30 = *((_BYTE *)a3 + 8);
  }
  if ( !v29 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
    v31 = *a4;
  }
  if ( *(_QWORD *)a3 )
  {
    if ( !v31 )
      goto LABEL_75;
  }
  else if ( v31 )
  {
LABEL_75:
    if ( !v30 )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v34 = (__int64)v63;
    if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v63 + 32LL))(
           v63,
           4LL,
           *((unsigned __int16 *)a3 + 5)) )
    {
      if ( (((_DWORD)v62 - 1) & 0xFFFFFFFD) != 0 )
      {
        *v33 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                  a1,
                  (_DWORD)a3,
                  (_DWORD)a4,
                  1,
                  31,
                  a7 + 12,
                  v34);
      }
      else
      {
        v36 = (_DWORD *)(a7 + 16);
        *v33 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                  a1,
                  (_DWORD)a3,
                  (_DWORD)a4,
                  1,
                  12,
                  a7 + 16,
                  v34);
        --*v36;
      }
    }
    else
    {
      v35 = v62;
      if ( (_DWORD)v62 == 2 )
      {
        *v33 |= 2u;
      }
      else
      {
        v59[0] = *(_OWORD *)a4;
        v58 = *a3;
        (*(void (__fastcall **)(__int64, __int128 *, __int128 *, _OWORD *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
          a1,
          &v57,
          &v58,
          v59,
          a5,
          v33,
          a7);
        *a3 = v57;
        if ( v35 == 4 )
          LODWORD(v62) = 3;
      }
    }
  }
  v37 = *((_BYTE *)a4 + 8);
  v38 = v37;
  v39 = v63;
  while ( 2 )
  {
    v40 = *((_BYTE *)a3 + 8);
    if ( !v40 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v40 = *((_BYTE *)a3 + 8);
    }
    if ( !v37 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
      v37 = *((_BYTE *)a4 + 8);
      v38 = v37;
    }
    v41 = *a4;
    if ( *(_QWORD *)a3 )
    {
      if ( v41 )
        goto LABEL_99;
LABEL_92:
      v42 = 0;
    }
    else
    {
      if ( v41 )
        goto LABEL_92;
LABEL_99:
      v42 = 1;
    }
    if ( !v42 )
    {
      if ( !v40 )
      {
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        v40 = *((_BYTE *)a3 + 8);
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v39 + 32LL))(
             v39,
             72LL,
             *((unsigned __int16 *)a3 + 5)) )
      {
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
        continue;
      }
    }
    break;
  }
  if ( !v40 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v40 = *((_BYTE *)a3 + 8);
  }
  if ( !v38 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
    v41 = *a4;
  }
  if ( *(_QWORD *)a3 )
  {
    if ( !v41 )
      goto LABEL_108;
  }
  else if ( v41 )
  {
LABEL_108:
    if ( !v40 )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v43 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v39 + 112LL))(
            v39,
            *((unsigned __int16 *)a3 + 5),
            0LL);
    if ( (unsigned __int8)v43 <= 0x3Au )
    {
      v44 = 0x400900000000000LL;
      if ( _bittest64(&v44, v43) )
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
    }
  }
  v45 = *((_BYTE *)a4 + 8);
  v46 = v45;
  while ( 2 )
  {
    v47 = *((_BYTE *)a3 + 8);
    if ( !v47 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v47 = *((_BYTE *)a3 + 8);
    }
    if ( !v45 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
      v45 = *((_BYTE *)a4 + 8);
      v46 = v45;
    }
    v48 = *a4;
    if ( *(_QWORD *)a3 )
    {
      if ( v48 )
        goto LABEL_127;
LABEL_120:
      v49 = 0;
    }
    else
    {
      if ( v48 )
        goto LABEL_120;
LABEL_127:
      v49 = 1;
    }
    if ( !v49 )
    {
      if ( !v47 )
      {
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        v47 = *((_BYTE *)a3 + 8);
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v39 + 32LL))(
             v39,
             72LL,
             *((unsigned __int16 *)a3 + 5)) )
      {
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
        continue;
      }
    }
    break;
  }
  v50 = a6;
  if ( !v47 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v47 = *((_BYTE *)a3 + 8);
  }
  if ( !v46 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
    v48 = *a4;
  }
  if ( *(_QWORD *)a3 )
  {
    if ( v48 )
      goto LABEL_140;
LABEL_134:
    if ( !v47 )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v51 = (__int64)v63;
    if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v63 + 32LL))(
           v63,
           4LL,
           *((unsigned __int16 *)a3 + 5)) )
    {
      v52 = a1;
      if ( (_DWORD)v62 == 4 )
      {
        v54 = (_DWORD *)(a7 + 16);
        *v50 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                  a1,
                  (_DWORD)a3,
                  (_DWORD)a4,
                  1,
                  12,
                  a7 + 16,
                  v51);
        --*v54;
        goto LABEL_147;
      }
      if ( (_DWORD)v62 == 3 )
      {
        *v50 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                  a1,
                  (_DWORD)a3,
                  (_DWORD)a4,
                  1,
                  31,
                  a7 + 12,
                  v51);
        goto LABEL_147;
      }
      v53 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, _OWORD *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL);
    }
    else
    {
      if ( (_DWORD)v62 != 4 )
        goto LABEL_140;
      v52 = a1;
      v53 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, _OWORD *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL);
    }
    v55 = *a3;
    v59[0] = *(_OWORD *)a4;
    v58 = v55;
    v53(v52, &v57, &v58, v59, a5, v50, a7);
    *a3 = v57;
  }
  else
  {
    if ( v48 )
      goto LABEL_134;
LABEL_140:
    *v50 |= 2u;
  }
LABEL_147:
  if ( !*((_BYTE *)a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !*((_BYTE *)a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *a4 )
      goto LABEL_155;
  }
  else
  {
    if ( *a4 )
      goto LABEL_156;
LABEL_155:
    *v50 |= 1u;
  }
LABEL_156:
  result = a2;
  *a2 = *a3;
  return result;
}
