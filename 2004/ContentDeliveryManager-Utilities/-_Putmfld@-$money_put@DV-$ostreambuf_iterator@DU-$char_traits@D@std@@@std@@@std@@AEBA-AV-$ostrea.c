/*
 * XREFs of ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x1800CA320
 * Callers:
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800CBF90 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DO@Z @ 0x1800CC1B0 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_1800CC1B0.c)
 * Callees:
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004EFC0 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x1800B294C (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800B7AA8 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x1800C772C (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x1800C786C (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CDB71 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall std::money_put<char,std::ostreambuf_iterator<char>>::_Putmfld(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6,
        char a7,
        __int64 a8,
        char a9)
{
  __int128 *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64); // rax
  struct std::_Facet_base *v14; // r12
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  unsigned int v16; // ebx
  unsigned __int64 v17; // r13
  void **v18; // rax
  void **v19; // rax
  char v20; // r14
  void **v21; // rbx
  size_t v22; // rsi
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 i; // rdx
  char v28; // al
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // r14
  int v32; // ebx
  __int128 v33; // xmm0
  __int64 v34; // r13
  char v35; // al
  unsigned __int8 v36; // si
  __int128 v37; // xmm0
  void **v38; // rbx
  unsigned __int8 *v39; // rbx
  unsigned __int64 v40; // rsi
  unsigned __int8 *v41; // rbx
  __int64 v42; // rsi
  unsigned __int64 v43; // rsi
  unsigned __int8 v44; // al
  __int64 v45; // rsi
  __int64 v46; // rbx
  unsigned __int8 *v47; // rbx
  unsigned __int8 *v48; // rbx
  __int128 v49; // xmm0
  unsigned __int64 v50; // rsi
  unsigned __int8 v51; // al
  unsigned __int8 *v52; // rcx
  unsigned __int8 *v53; // rbx
  __int64 v54; // rsi
  unsigned __int8 *v55; // rax
  unsigned __int8 *v56; // rbx
  __int64 v57; // rsi
  __int128 v58; // xmm0
  _OWORD *v59; // rbx
  unsigned int v61; // [rsp+2Ch] [rbp-D5h]
  __int64 v62; // [rsp+30h] [rbp-D1h] BYREF
  __int64 v63; // [rsp+38h] [rbp-C9h]
  __int64 v64; // [rsp+40h] [rbp-C1h]
  __int128 *v65; // [rsp+48h] [rbp-B9h]
  __int64 v66; // [rsp+50h] [rbp-B1h]
  _OWORD *v67; // [rsp+58h] [rbp-A9h]
  __int64 v68; // [rsp+60h] [rbp-A1h]
  __int64 v69; // [rsp+68h] [rbp-99h]
  __int128 Src_8; // [rsp+78h] [rbp-89h] BYREF
  unsigned __int64 v71; // [rsp+90h] [rbp-71h]
  void *v72[2]; // [rsp+98h] [rbp-69h] BYREF
  unsigned __int64 v73; // [rsp+A8h] [rbp-59h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-51h]
  void *v75[3]; // [rsp+B8h] [rbp-49h] BYREF
  unsigned __int64 v76; // [rsp+D0h] [rbp-31h]
  void *v77[2]; // [rsp+D8h] [rbp-29h] BYREF
  __int64 v78; // [rsp+E8h] [rbp-19h]
  unsigned __int64 v79; // [rsp+F0h] [rbp-11h]

  v68 = -2LL;
  v9 = a3;
  v65 = a3;
  v67 = a2;
  v10 = a5;
  v66 = a5;
  v11 = a8;
  v64 = a8;
  v69 = a8;
  v12 = **(_QWORD **)(a5 + 64);
  v62 = v12;
  v13 = *(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL);
  if ( a4 )
  {
    v13(v12);
    v14 = std::use_facet<std::moneypunct<char,1>>(&v62);
  }
  else
  {
    v13(v12);
    v14 = std::use_facet<std::moneypunct<char,0>>(&v62);
  }
  if ( v12 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 40LL))(v14, v75);
  v16 = abs32((*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 72LL))(v14));
  v61 = v16;
  v17 = v16;
  if ( *(_QWORD *)(a8 + 16) > (unsigned __int64)v16 )
  {
    v18 = v75;
    if ( v76 >= 0x10 )
      v18 = (void **)v75[0];
    if ( *(_BYTE *)v18 != 127 )
    {
      v19 = v75;
      if ( v76 >= 0x10 )
        v19 = (void **)v75[0];
      if ( *(char *)v19 > 0 )
      {
        v20 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 32LL))(v14);
        v21 = v75;
        if ( v76 >= 0x10 )
          v21 = (void **)v75[0];
        v22 = *(_QWORD *)(a8 + 16) - v17;
        v23 = *(_BYTE *)v21;
        if ( *(_BYTE *)v21 != 127 )
        {
          do
          {
            if ( v23 <= 0 || v23 >= v22 )
              break;
            v22 -= v23;
            std::string::insert((char *)a8, v22, 1uLL, v20);
            if ( *((char *)v21 + 1) > 0 )
              v21 = (void **)((char *)v21 + 1);
            v23 = *(_BYTE *)v21;
          }
          while ( *(_BYTE *)v21 != 127 );
          v9 = v65;
        }
        v16 = v61;
        v10 = v66;
      }
    }
  }
  else
  {
    std::string::insert((char *)a8, 0LL, v16 - *(_QWORD *)(a8 + 16) + 1LL, a9);
  }
  v74 = 15LL;
  v73 = 0LL;
  LOBYTE(v72[0]) = 0;
  v24 = *(_QWORD *)v14;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int64 *))(v24 + 88))(v14, &v62);
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 *))(*(_QWORD *)v14 + 64LL))(v14, &Src_8);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int64 *))(v24 + 80))(v14, &v62);
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 *))(*(_QWORD *)v14 + 56LL))(v14, &Src_8);
  }
  std::string::operator=(v72, (void **)&Src_8);
  if ( v71 >= 0x10 )
    operator delete((void *)Src_8);
  v79 = 15LL;
  v78 = 0LL;
  LOBYTE(v77[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 *))(*(_QWORD *)v14 + 48LL))(v14, &Src_8);
    std::string::operator=(v77, (void **)&Src_8);
    if ( v71 >= 0x10 )
      operator delete((void *)Src_8);
  }
  LOBYTE(v25) = 0;
  v26 = 0LL;
  for ( i = 0LL; i < 4; ++i )
  {
    v28 = *((_BYTE *)&v62 + i);
    switch ( v28 )
    {
      case ' ':
        ++v26;
LABEL_46:
        v25 = (unsigned __int8)v25;
        if ( i != 3 )
          v25 = 1LL;
        continue;
      case '$':
        v26 += v78;
        continue;
      case '+':
        v26 += v73;
        continue;
    }
    if ( v28 != 118 )
    {
      if ( v28 != 120 )
        continue;
      goto LABEL_46;
    }
    v29 = v17 + 1;
    if ( *(_QWORD *)(a8 + 16) > v17 )
      v29 = *(_QWORD *)(a8 + 16);
    v26 += v29 + (v16 != 0);
  }
  v30 = *(_QWORD *)(v10 + 40);
  if ( v30 <= 0 || v30 <= v26 )
    v31 = 0LL;
  else
    v31 = v30 - v26;
  v32 = *(_DWORD *)(v10 + 24) & 0x1C0;
  LODWORD(v63) = v32;
  if ( v32 != 64 && (v32 != 256 || !(_BYTE)v25) )
  {
    v33 = *v9;
    Src_8 = *v9;
    if ( v31 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, a6);
        --v31;
      }
      while ( v31 );
      v33 = Src_8;
      v11 = v64;
    }
    *v9 = v33;
    v31 = 0LL;
  }
  v34 = 0LL;
  while ( 2 )
  {
    v35 = *((_BYTE *)&v62 + v34);
    if ( v35 != 32 )
    {
      switch ( v35 )
      {
        case '$':
          v56 = (unsigned __int8 *)v77;
          if ( v79 >= 0x10 )
            v56 = (unsigned __int8 *)v77[0];
          v37 = *v9;
          Src_8 = *v9;
          v57 = v78;
          if ( !v78 )
            goto LABEL_87;
          do
          {
            std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v56++);
            --v57;
          }
          while ( v57 );
          break;
        case '+':
          if ( !v73 )
            goto LABEL_73;
          v55 = (unsigned __int8 *)v72;
          if ( v74 >= 0x10 )
            v55 = (unsigned __int8 *)v72[0];
          Src_8 = *v9;
          std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v55);
          v37 = Src_8;
          goto LABEL_72;
        case 'v':
          if ( !v61 )
          {
            if ( *(_QWORD *)(v11 + 24) < 0x10uLL )
              v41 = (unsigned __int8 *)v11;
            else
              v41 = *(unsigned __int8 **)v11;
            v37 = *v9;
            Src_8 = *v9;
            v42 = *(_QWORD *)(v11 + 16);
            if ( v42 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v41++);
                --v42;
              }
              while ( v42 );
              break;
            }
LABEL_87:
            v32 = v63;
LABEL_72:
            *v9 = v37;
            goto LABEL_73;
          }
          v43 = *(_QWORD *)(v11 + 16);
          if ( v43 > v61 )
          {
            if ( *(_QWORD *)(v11 + 24) < 0x10uLL )
              v48 = (unsigned __int8 *)v11;
            else
              v48 = *(unsigned __int8 **)v11;
            v49 = *v9;
            Src_8 = *v9;
            v50 = v43 - v61;
            if ( v50 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v48++);
                --v50;
              }
              while ( v50 );
              v49 = Src_8;
              v11 = v64;
              v9 = v65;
            }
            *v9 = v49;
            v51 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v14 + 24LL))(
                    v14,
                    i,
                    v25);
            std::ostreambuf_iterator<char>::operator=((__int64)v9, v51);
            if ( *(_QWORD *)(v11 + 24) < 0x10uLL )
              v52 = (unsigned __int8 *)v11;
            else
              v52 = *(unsigned __int8 **)v11;
            v53 = &v52[*(_QWORD *)(v11 + 16) - v61];
            Src_8 = *v9;
            v54 = v61;
            do
            {
              std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v53++);
              --v54;
            }
            while ( v54 );
          }
          else
          {
            std::ostreambuf_iterator<char>::operator=((__int64)v9, a9);
            v44 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 24LL))(v14);
            std::ostreambuf_iterator<char>::operator=((__int64)v9, v44);
            v37 = *v9;
            Src_8 = *v9;
            v45 = *(_QWORD *)(v11 + 16);
            v46 = v61 - v45;
            if ( v61 != v45 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, a9);
                --v46;
              }
              while ( v46 );
              v11 = v64;
              v45 = *(_QWORD *)(v64 + 16);
              v37 = Src_8;
              v9 = v65;
            }
            if ( *(_QWORD *)(v11 + 24) < 0x10uLL )
              v47 = (unsigned __int8 *)v11;
            else
              v47 = *(unsigned __int8 **)v11;
            Src_8 = v37;
            if ( !v45 )
              goto LABEL_87;
            do
            {
              std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v47++);
              --v45;
            }
            while ( v45 );
          }
          break;
        case 'x':
          v36 = a6;
          goto LABEL_67;
        default:
          goto LABEL_73;
      }
      v37 = Src_8;
      v11 = v64;
      v9 = v65;
      goto LABEL_87;
    }
    Src_8 = *v9;
    v36 = a6;
    std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, a6);
    *v9 = Src_8;
LABEL_67:
    if ( v32 == 256 )
    {
      v37 = *v9;
      Src_8 = *v9;
      if ( v31 )
      {
        do
        {
          std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, v36);
          --v31;
        }
        while ( v31 );
        v37 = Src_8;
        v11 = v64;
      }
      v31 = 0LL;
      goto LABEL_72;
    }
LABEL_73:
    if ( (unsigned __int64)++v34 < 4 )
      continue;
    break;
  }
  if ( v73 > 1 )
  {
    v38 = v72;
    if ( v74 >= 0x10 )
      v38 = (void **)v72[0];
    v39 = (unsigned __int8 *)v38 + 1;
    Src_8 = *v9;
    v40 = v73 - 1;
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v39++);
      --v40;
    }
    while ( v40 );
    *v9 = Src_8;
  }
  *(_QWORD *)(v66 + 40) = 0LL;
  v58 = *v9;
  Src_8 = *v9;
  if ( v31 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, a6);
      --v31;
    }
    while ( v31 );
    v58 = Src_8;
  }
  v59 = v67;
  *v67 = v58;
  if ( v79 >= 0x10 )
    operator delete(v77[0]);
  v79 = 15LL;
  v78 = 0LL;
  LOBYTE(v77[0]) = 0;
  if ( v74 >= 0x10 )
    operator delete(v72[0]);
  v74 = 15LL;
  v73 = 0LL;
  LOBYTE(v72[0]) = 0;
  if ( v76 >= 0x10 )
    operator delete(v75[0]);
  v76 = 15LL;
  v75[2] = 0LL;
  LOBYTE(v75[0]) = 0;
  if ( *(_QWORD *)(v11 + 24) >= 0x10uLL )
    operator delete(*(void **)v11);
  *(_QWORD *)(v11 + 24) = 15LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_BYTE *)v11 = 0;
  return v59;
}
