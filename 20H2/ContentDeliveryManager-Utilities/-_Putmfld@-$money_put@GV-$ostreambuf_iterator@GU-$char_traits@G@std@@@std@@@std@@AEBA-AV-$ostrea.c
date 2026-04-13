/*
 * XREFs of ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x1800C1D28
 * Callers:
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800C47F0 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GO@Z @ 0x1800C4A30 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800C4A30.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180036D6C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$use_facet@V?$moneypunct@G$00@std@@@std@@YAAEBV?$moneypunct@G$00@0@AEBVlocale@0@@Z @ 0x1800BB55C (--$use_facet@V-$moneypunct@G$00@std@@@std@@YAAEBV-$moneypunct@G$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@G$0A@@std@@@std@@YAAEBV?$moneypunct@G$0A@@0@AEBVlocale@0@@Z @ 0x1800BB69C (--$use_facet@V-$moneypunct@G$0A@@std@@@std@@YAAEBV-$moneypunct@G$0A@@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800BC0B0 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x1800C6798 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CD721 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall std::money_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Putmfld(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7,
        __int64 a8,
        unsigned __int16 a9)
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
  unsigned __int16 v20; // r14
  void **v21; // rbx
  unsigned __int64 v22; // rsi
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
  unsigned __int16 v36; // si
  __int128 v37; // xmm0
  void **v38; // rbx
  unsigned __int16 *v39; // rbx
  unsigned __int64 v40; // rsi
  __int64 v41; // rbx
  unsigned __int16 *v42; // rbx
  __int64 v43; // rsi
  unsigned __int64 v44; // rsi
  unsigned __int16 v45; // ax
  __int64 v46; // rsi
  __int64 v47; // rbx
  unsigned __int16 *v48; // rbx
  unsigned __int16 *v49; // rbx
  __int128 v50; // xmm0
  unsigned __int64 v51; // rsi
  unsigned __int16 v52; // ax
  unsigned __int16 *v53; // rcx
  unsigned __int16 *v54; // rbx
  __int64 v55; // rsi
  unsigned __int16 *v56; // rax
  unsigned __int16 *v57; // rbx
  __int64 v58; // rsi
  __int128 v59; // xmm0
  _OWORD *v60; // rbx
  int v62; // [rsp+2Ch] [rbp-D5h]
  __int64 v63; // [rsp+30h] [rbp-D1h] BYREF
  __int64 v64; // [rsp+38h] [rbp-C9h]
  __int64 v65; // [rsp+40h] [rbp-C1h]
  __int128 *v66; // [rsp+48h] [rbp-B9h]
  __int64 v67; // [rsp+50h] [rbp-B1h]
  _OWORD *v68; // [rsp+58h] [rbp-A9h]
  __int64 v69; // [rsp+60h] [rbp-A1h]
  __int64 v70; // [rsp+68h] [rbp-99h]
  void *v71[2]; // [rsp+78h] [rbp-89h] BYREF
  unsigned __int64 v72; // [rsp+90h] [rbp-71h]
  void *v73[2]; // [rsp+98h] [rbp-69h] BYREF
  unsigned __int64 v74; // [rsp+A8h] [rbp-59h]
  unsigned __int64 v75; // [rsp+B0h] [rbp-51h]
  void *v76[2]; // [rsp+B8h] [rbp-49h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-39h]
  unsigned __int64 v78; // [rsp+D0h] [rbp-31h]
  void *v79[3]; // [rsp+D8h] [rbp-29h] BYREF
  unsigned __int64 v80; // [rsp+F0h] [rbp-11h]

  v69 = -2LL;
  v9 = a3;
  v66 = a3;
  v68 = a2;
  v10 = a5;
  v67 = a5;
  v11 = a8;
  v65 = a8;
  v70 = a8;
  v12 = **(_QWORD **)(a5 + 64);
  v63 = v12;
  v13 = *(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL);
  if ( a4 )
  {
    v13(v12);
    v14 = std::use_facet<std::moneypunct<unsigned short,1>>(&v63);
  }
  else
  {
    v13(v12);
    v14 = std::use_facet<std::moneypunct<unsigned short,0>>(&v63);
  }
  if ( v12 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 40LL))(v14, v79);
  v16 = abs32((*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 72LL))(v14));
  LODWORD(v64) = v16;
  v17 = v16;
  if ( *(_QWORD *)(a8 + 16) > (unsigned __int64)v16 )
  {
    v18 = v79;
    if ( v80 >= 0x10 )
      v18 = (void **)v79[0];
    if ( *(_BYTE *)v18 != 127 )
    {
      v19 = v79;
      if ( v80 >= 0x10 )
        v19 = (void **)v79[0];
      if ( *(char *)v19 > 0 )
      {
        v20 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 32LL))(v14);
        v21 = v79;
        if ( v80 >= 0x10 )
          v21 = (void **)v79[0];
        v22 = *(_QWORD *)(a8 + 16) - v17;
        v23 = *(_BYTE *)v21;
        if ( *(_BYTE *)v21 != 127 )
        {
          do
          {
            if ( v23 <= 0 || v23 >= v22 )
              break;
            v22 -= v23;
            std::wstring::insert(a8, v22, 1LL, v20);
            if ( *((char *)v21 + 1) > 0 )
              v21 = (void **)((char *)v21 + 1);
            v23 = *(_BYTE *)v21;
          }
          while ( *(_BYTE *)v21 != 127 );
          v9 = v66;
        }
        v16 = v64;
        v10 = v67;
      }
    }
  }
  else
  {
    std::wstring::insert(a8, 0LL, v16 - *(_QWORD *)(a8 + 16) + 1LL, a9);
  }
  v75 = 7LL;
  v74 = 0LL;
  LOWORD(v73[0]) = 0;
  v24 = *(_QWORD *)v14;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int64 *))(v24 + 88))(v14, &v63);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 64LL))(v14, v71);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int64 *))(v24 + 80))(v14, &v63);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 56LL))(v14, v71);
  }
  if ( v75 >= 8 )
    operator delete(v73[0]);
  v75 = 7LL;
  v74 = 0LL;
  LOWORD(v73[0]) = 0;
  std::wstring::_Assign_rv(v73, v71);
  if ( v72 >= 8 )
    operator delete(v71[0]);
  v78 = 7LL;
  v77 = 0LL;
  LOWORD(v76[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 48LL))(v14, v71);
    if ( v78 >= 8 )
      operator delete(v76[0]);
    v78 = 7LL;
    v77 = 0LL;
    LOWORD(v76[0]) = 0;
    std::wstring::_Assign_rv(v76, v71);
    if ( v72 >= 8 )
      operator delete(v71[0]);
  }
  LOBYTE(v25) = 0;
  v26 = 0LL;
  for ( i = 0LL; i < 4; ++i )
  {
    v28 = *((_BYTE *)&v63 + i);
    switch ( v28 )
    {
      case ' ':
        ++v26;
LABEL_50:
        v25 = (unsigned __int8)v25;
        if ( i != 3 )
          v25 = 1LL;
        continue;
      case '$':
        v26 += v77;
        continue;
      case '+':
        v26 += v74;
        continue;
    }
    if ( v28 != 118 )
    {
      if ( v28 != 120 )
        continue;
      goto LABEL_50;
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
  v62 = v32;
  if ( v32 != 64 && (v32 != 256 || !(_BYTE)v25) )
  {
    v33 = *v9;
    *(_OWORD *)v71 = *v9;
    if ( v31 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, a6);
        --v31;
      }
      while ( v31 );
      v33 = *(_OWORD *)v71;
      v11 = v65;
    }
    *v9 = v33;
    v31 = 0LL;
  }
  v34 = 0LL;
  while ( 2 )
  {
    v35 = *((_BYTE *)&v63 + v34);
    if ( v35 != 32 )
    {
      switch ( v35 )
      {
        case '$':
          v57 = (unsigned __int16 *)v76;
          if ( v78 >= 8 )
            v57 = (unsigned __int16 *)v76[0];
          v37 = *v9;
          *(_OWORD *)v71 = *v9;
          v58 = v77;
          if ( !v77 )
            goto LABEL_91;
          do
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, *v57++);
            --v58;
          }
          while ( v58 );
          break;
        case '+':
          if ( !v74 )
            goto LABEL_77;
          v56 = (unsigned __int16 *)v73;
          if ( v75 >= 8 )
            v56 = (unsigned __int16 *)v73[0];
          *(_OWORD *)v71 = *v9;
          std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, *v56);
          v37 = *(_OWORD *)v71;
          goto LABEL_76;
        case 'v':
          v41 = (unsigned int)v64;
          if ( !(_DWORD)v64 )
          {
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v42 = (unsigned __int16 *)v11;
            else
              v42 = *(unsigned __int16 **)v11;
            v37 = *v9;
            *(_OWORD *)v71 = *v9;
            v43 = *(_QWORD *)(v11 + 16);
            if ( v43 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, *v42++);
                --v43;
              }
              while ( v43 );
              break;
            }
LABEL_91:
            v32 = v62;
LABEL_76:
            *v9 = v37;
            goto LABEL_77;
          }
          v44 = *(_QWORD *)(v11 + 16);
          if ( v44 > (unsigned int)v64 )
          {
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v49 = (unsigned __int16 *)v11;
            else
              v49 = *(unsigned __int16 **)v11;
            v50 = *v9;
            *(_OWORD *)v71 = *v9;
            v51 = v44 - (unsigned int)v64;
            if ( v51 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, *v49++);
                --v51;
              }
              while ( v51 );
              v50 = *(_OWORD *)v71;
              v11 = v65;
              v9 = v66;
            }
            *v9 = v50;
            v52 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v14 + 24LL))(
                    v14,
                    i,
                    v25);
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, v52);
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v53 = (unsigned __int16 *)v11;
            else
              v53 = *(unsigned __int16 **)v11;
            v54 = &v53[*(_QWORD *)(v11 + 16) - (unsigned int)v64];
            v37 = *v9;
            *(_OWORD *)v71 = *v9;
            v55 = (unsigned int)v64;
            if ( !(_DWORD)v64 )
              goto LABEL_91;
            do
            {
              std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, *v54++);
              --v55;
            }
            while ( v55 );
          }
          else
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, a9);
            v45 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 24LL))(v14);
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, v45);
            v37 = *v9;
            *(_OWORD *)v71 = *v9;
            v46 = *(_QWORD *)(v11 + 16);
            v47 = v41 - v46;
            if ( v47 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, a9);
                --v47;
              }
              while ( v47 );
              v11 = v65;
              v46 = *(_QWORD *)(v65 + 16);
              v37 = *(_OWORD *)v71;
              v9 = v66;
            }
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v48 = (unsigned __int16 *)v11;
            else
              v48 = *(unsigned __int16 **)v11;
            *(_OWORD *)v71 = v37;
            if ( !v46 )
              goto LABEL_91;
            do
            {
              std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, *v48++);
              --v46;
            }
            while ( v46 );
          }
          break;
        case 'x':
          v36 = a6;
          goto LABEL_71;
        default:
          goto LABEL_77;
      }
      v37 = *(_OWORD *)v71;
      v11 = v65;
      v9 = v66;
      goto LABEL_91;
    }
    *(_OWORD *)v71 = *v9;
    v36 = a6;
    std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, a6);
    *v9 = *(_OWORD *)v71;
LABEL_71:
    if ( v32 == 256 )
    {
      v37 = *v9;
      *(_OWORD *)v71 = *v9;
      if ( v31 )
      {
        do
        {
          std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, v36);
          --v31;
        }
        while ( v31 );
        v37 = *(_OWORD *)v71;
        v32 = v62;
      }
      v31 = 0LL;
      goto LABEL_76;
    }
LABEL_77:
    if ( (unsigned __int64)++v34 < 4 )
      continue;
    break;
  }
  if ( v74 > 1 )
  {
    v38 = v73;
    if ( v75 >= 8 )
      v38 = (void **)v73[0];
    v39 = (unsigned __int16 *)v38 + 1;
    *(_OWORD *)v71 = *v9;
    v40 = v74 - 1;
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, *v39++);
      --v40;
    }
    while ( v40 );
    *v9 = *(_OWORD *)v71;
  }
  *(_QWORD *)(v67 + 40) = 0LL;
  v59 = *v9;
  *(_OWORD *)v71 = *v9;
  if ( v31 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)v71, a6);
      --v31;
    }
    while ( v31 );
    v59 = *(_OWORD *)v71;
  }
  v60 = v68;
  *v68 = v59;
  if ( v78 >= 8 )
    operator delete(v76[0]);
  v78 = 7LL;
  v77 = 0LL;
  LOWORD(v76[0]) = 0;
  if ( v75 >= 8 )
    operator delete(v73[0]);
  v75 = 7LL;
  v74 = 0LL;
  LOWORD(v73[0]) = 0;
  if ( v80 >= 0x10 )
    operator delete(v79[0]);
  v80 = 15LL;
  v79[2] = 0LL;
  LOBYTE(v79[0]) = 0;
  if ( *(_QWORD *)(v11 + 24) >= 8uLL )
    operator delete(*(void **)v11);
  *(_QWORD *)(v11 + 24) = 7LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_WORD *)v11 = 0;
  return v60;
}
