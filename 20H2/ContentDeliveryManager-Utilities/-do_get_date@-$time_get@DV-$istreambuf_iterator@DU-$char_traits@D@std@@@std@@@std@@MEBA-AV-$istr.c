/*
 * XREFs of ?do_get_date@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800CAE90
 * Callers:
 *     <none>
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800B1FFC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800B4E10 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B7574 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x1800C82C0 (-_Getint@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::do_get_date(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  void (__fastcall ***v12)(_QWORD, __int64); // r8
  struct std::_Facet_base *v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  int v15; // r13d
  char v16; // al
  _DWORD *v17; // rsi
  __int64 v18; // rcx
  unsigned __int8 *v19; // r8
  int v20; // edx
  int v21; // eax
  __int64 v22; // rbx
  _DWORD *v23; // rbx
  __int64 v24; // rcx
  unsigned __int8 *v25; // r8
  int v26; // edx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int8 *v30; // r8
  int v31; // eax
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int8 *v35; // r8
  int v36; // edx
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int8 *v39; // r8
  int v40; // edx
  int v41; // eax
  __int64 v42; // rbx
  _DWORD *v43; // rbx
  __int64 v44; // rcx
  unsigned __int8 *v45; // r8
  int v46; // edx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int8 *v50; // r8
  int v51; // eax
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned __int8 *v55; // r8
  int v56; // edx
  int v57; // eax
  __int64 v58; // rcx
  unsigned __int8 *v59; // r8
  int v60; // edx
  int v61; // eax
  void (__fastcall *v62)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64); // rax
  _DWORD *v63; // rbx
  __int128 v64; // xmm1
  _OWORD *result; // rax
  __int64 v66; // [rsp+30h] [rbp-50h]
  __int128 v67; // [rsp+50h] [rbp-30h] BYREF
  __int128 v68; // [rsp+60h] [rbp-20h] BYREF
  __int128 v69; // [rsp+70h] [rbp-10h] BYREF
  __int64 v70; // [rsp+C0h] [rbp+40h] BYREF
  _OWORD *v71; // [rsp+C8h] [rbp+48h]

  v71 = a2;
  v10 = **(_QWORD **)(a5 + 64);
  v70 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v13 = std::use_facet<std::ctype<char>>(&v70);
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
  v16 = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4);
  v17 = a6;
  if ( v16 )
  {
LABEL_23:
    v22 = a7;
    goto LABEL_41;
  }
  if ( !*(_BYTE *)(a3 + 8) )
  {
    v18 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v19 = **(unsigned __int8 ***)(v18 + 56)) == 0LL ? (v20 = 0) : (v20 = **(_DWORD **)(v18 + 80)),
          v20 <= 0 ? (v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18)) : (v21 = *v19),
          v21 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_BYTE *)(a3 + 9) = v21;
    }
    *(_BYTE *)(a3 + 8) = 1;
  }
  if ( (*(_WORD *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 4) != 0 )
  {
    v22 = a7;
    if ( v15 != 2 )
    {
      if ( v15 == 1 )
      {
        *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                  a1,
                  a3,
                  a4,
                  1,
                  31,
                  (_DWORD *)(a7 + 12),
                  (__int64)v13);
      }
      else
      {
        v69 = *(_OWORD *)a4;
        v68 = *(_OWORD *)a3;
        (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL))(
          a1,
          &v67,
          &v68,
          &v69,
          a5,
          v17,
          a7);
        *(_OWORD *)a3 = v67;
      }
      goto LABEL_41;
    }
    v23 = (_DWORD *)(a7 + 16);
    *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
              a1,
              a3,
              a4,
              1,
              12,
              (_DWORD *)(a7 + 16),
              (__int64)v13);
    --*v23;
    goto LABEL_23;
  }
  v67 = *(_OWORD *)a4;
  v68 = *(_OWORD *)a3;
  v22 = a7;
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
    a1,
    &v69,
    &v68,
    &v67,
    a5,
    v17,
    a7);
  *(_OWORD *)a3 = v69;
  v15 = 2;
LABEL_41:
  while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
  {
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v24 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v25 = **(unsigned __int8 ***)(v24 + 56)) == 0LL ? (v26 = 0) : (v26 = **(_DWORD **)(v24 + 80)),
            v26 <= 0 ? (v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24)) : (v27 = *v25),
            v27 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v27;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 0x48) == 0 )
      break;
    std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
  }
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    goto LABEL_72;
  if ( !*(_BYTE *)(a3 + 8) )
  {
    v29 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v30 = **(unsigned __int8 ***)(v29 + 56)) == 0LL ? (v28 = 0LL) : (v28 = **(unsigned int **)(v29 + 80)),
          (int)v28 <= 0 ? (v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29)) : (v31 = *v30),
          v31 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_BYTE *)(a3 + 9) = v31;
    }
    *(_BYTE *)(a3 + 8) = 1;
  }
  LOBYTE(v28) = *(_BYTE *)(a3 + 9);
  v32 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, v28, 0LL);
  if ( (unsigned __int8)v32 > 0x3Au )
    goto LABEL_72;
  v33 = 0x400900000000000LL;
  if ( !_bittest64(&v33, v32) )
    goto LABEL_72;
  do
  {
    std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
LABEL_72:
    if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
      break;
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v34 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v35 = **(unsigned __int8 ***)(v34 + 56)) == 0LL ? (v36 = 0) : (v36 = **(_DWORD **)(v34 + 80)),
            v36 <= 0 ? (v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34)) : (v37 = *v35),
            v37 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v37;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
  }
  while ( (*(_BYTE *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 0x48) != 0 );
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    goto LABEL_94;
  if ( !*(_BYTE *)(a3 + 8) )
  {
    v38 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v39 = **(unsigned __int8 ***)(v38 + 56)) == 0LL ? (v40 = 0) : (v40 = **(_DWORD **)(v38 + 80)),
          v40 <= 0 ? (v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 48LL))(v38)) : (v41 = *v39),
          v41 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_BYTE *)(a3 + 9) = v41;
    }
    *(_BYTE *)(a3 + 8) = 1;
  }
  if ( (*(_WORD *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 4) != 0 )
  {
    if ( ((v15 - 1) & 0xFFFFFFFD) != 0 )
    {
      *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                a1,
                a3,
                a4,
                1,
                31,
                (_DWORD *)(v22 + 12),
                (__int64)v13);
    }
    else
    {
      v43 = (_DWORD *)(v22 + 16);
      *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(a1, a3, a4, 1, 12, v43, (__int64)v13);
      --*v43;
    }
    goto LABEL_94;
  }
  if ( v15 == 2 )
  {
    *v17 |= 2u;
LABEL_94:
    v42 = a5;
    goto LABEL_109;
  }
  v69 = *(_OWORD *)a4;
  v68 = *(_OWORD *)a3;
  v66 = v22;
  v42 = a5;
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
    a1,
    &v67,
    &v68,
    &v69,
    a5,
    v17,
    v66);
  *(_OWORD *)a3 = v67;
  if ( v15 == 4 )
    v15 = 3;
LABEL_109:
  while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
  {
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v44 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v45 = **(unsigned __int8 ***)(v44 + 56)) == 0LL ? (v46 = 0) : (v46 = **(_DWORD **)(v44 + 80)),
            v46 <= 0 ? (v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 48LL))(v44)) : (v47 = *v45),
            v47 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v47;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 0x48) == 0 )
      break;
    std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
  }
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    goto LABEL_140;
  if ( !*(_BYTE *)(a3 + 8) )
  {
    v49 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v50 = **(unsigned __int8 ***)(v49 + 56)) == 0LL ? (v48 = 0LL) : (v48 = **(unsigned int **)(v49 + 80)),
          (int)v48 <= 0 ? (v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 48LL))(v49)) : (v51 = *v50),
          v51 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_BYTE *)(a3 + 9) = v51;
    }
    *(_BYTE *)(a3 + 8) = 1;
  }
  LOBYTE(v48) = *(_BYTE *)(a3 + 9);
  v52 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, v48, 0LL);
  if ( (unsigned __int8)v52 > 0x3Au )
    goto LABEL_140;
  v53 = 0x400900000000000LL;
  if ( !_bittest64(&v53, v52) )
    goto LABEL_140;
  do
  {
    std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
LABEL_140:
    if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
      break;
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v54 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v55 = **(unsigned __int8 ***)(v54 + 56)) == 0LL ? (v56 = 0) : (v56 = **(_DWORD **)(v54 + 80)),
            v56 <= 0 ? (v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54)) : (v57 = *v55),
            v57 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v57;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
  }
  while ( (*(_BYTE *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 0x48) != 0 );
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    goto LABEL_142;
  if ( !*(_BYTE *)(a3 + 8) )
  {
    v58 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v59 = **(unsigned __int8 ***)(v58 + 56)) == 0LL ? (v60 = 0) : (v60 = **(_DWORD **)(v58 + 80)),
          v60 <= 0 ? (v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 48LL))(v58)) : (v61 = *v59),
          v61 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_BYTE *)(a3 + 9) = v61;
    }
    *(_BYTE *)(a3 + 8) = 1;
  }
  if ( (*(_WORD *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 4) != 0 )
  {
    if ( v15 == 4 )
    {
      v63 = (_DWORD *)(a7 + 16);
      *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                a1,
                a3,
                a4,
                1,
                12,
                (_DWORD *)(a7 + 16),
                (__int64)v13);
      --*v63;
      goto LABEL_164;
    }
    if ( v15 == 3 )
    {
      *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                a1,
                a3,
                a4,
                1,
                31,
                (_DWORD *)(a7 + 12),
                (__int64)v13);
      goto LABEL_164;
    }
    v62 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL);
  }
  else
  {
    if ( v15 != 4 )
    {
LABEL_142:
      *v17 |= 2u;
      goto LABEL_164;
    }
    v62 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL);
  }
  v64 = *(_OWORD *)a3;
  v69 = *(_OWORD *)a4;
  v68 = v64;
  v62(a1, &v67, &v68, &v69, v42, v17, a7);
  *(_OWORD *)a3 = v67;
LABEL_164:
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    *v17 |= 1u;
  result = v71;
  *v71 = *(_OWORD *)a3;
  return result;
}
