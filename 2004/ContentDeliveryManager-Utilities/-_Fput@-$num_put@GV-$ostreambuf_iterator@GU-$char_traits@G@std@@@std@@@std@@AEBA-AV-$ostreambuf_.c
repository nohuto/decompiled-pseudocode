/*
 * XREFs of ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x1800BC7B0
 * Callers:
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GN@Z @ 0x1800C56C0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800C56C0.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GO@Z @ 0x1800C5880 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800C5880.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003A5F4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18003ACE8 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x18003BCD0 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800BC500 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x1800C6BE8 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CDB71 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Fput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        char *Str,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  __int64 v10; // r13
  __int64 v12; // rdi
  const char *v13; // rdx
  size_t v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rdx
  void (__fastcall ***v17)(_QWORD, __int64); // r8
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  __int64 v19; // rbx
  void **v20; // r9
  __int64 v21; // rbx
  struct std::_Facet_base *v22; // rsi
  void (__fastcall ***v23)(_QWORD, __int64); // r8
  void (__fastcall ***v24)(_QWORD, __int64); // rax
  size_t v25; // rbx
  unsigned __int16 v26; // r15
  __int16 v27; // ax
  void **v28; // rcx
  size_t v29; // rsi
  void **v30; // rbx
  char v31; // al
  unsigned __int16 v32; // r15
  unsigned __int64 v33; // rsi
  __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  int v36; // eax
  __int128 v37; // xmm0
  unsigned __int16 *v38; // r15
  __int64 v39; // r12
  unsigned __int16 *v40; // r15
  __int64 v41; // r12
  unsigned __int16 *v42; // r15
  __int64 v43; // r12
  void **v44; // rax
  unsigned __int64 v45; // rsi
  unsigned __int16 *v46; // rdi
  _OWORD *v47; // rbx
  __int16 Control; // [rsp+3Ch] [rbp-85h] BYREF
  unsigned __int16 v50; // [rsp+40h] [rbp-81h]
  __int128 v51; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int16 v52; // [rsp+58h] [rbp-69h]
  struct std::_Facet_base *v53; // [rsp+60h] [rbp-61h] BYREF
  __int64 v54; // [rsp+68h] [rbp-59h]
  _OWORD *v55; // [rsp+70h] [rbp-51h]
  __int64 v56; // [rsp+78h] [rbp-49h]
  void *v57[2]; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int64 v58; // [rsp+90h] [rbp-31h]
  unsigned __int64 v59; // [rsp+98h] [rbp-29h]
  void *v60[3]; // [rsp+A0h] [rbp-21h] BYREF
  unsigned __int64 v61; // [rsp+B8h] [rbp-9h]

  v56 = -2LL;
  v10 = a4;
  v54 = a4;
  v55 = a2;
  if ( !a10 || (v12 = 1LL, ((*Str - 43) & 0xFD) != 0) )
    v12 = 0LL;
  if ( (*(_DWORD *)(a4 + 24) & 0x3000) == 0x3000 )
  {
    v13 = "pP";
    if ( v12 + 2 <= a10 && Str[v12] == 48 && ((Str[v12 + 1] - 88) & 0xDF) == 0 )
      v12 += 2LL;
  }
  else
  {
    v13 = "eE";
  }
  v14 = strcspn(Str, v13);
  Control = 46;
  LOBYTE(Control) = *localeconv()->decimal_point;
  *(_QWORD *)&v51 = strcspn(Str, (const char *)&Control);
  v15 = **(_QWORD **)(v10 + 64);
  v53 = (struct std::_Facet_base *)v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v53 = std::use_facet<std::ctype<unsigned short>>((__int64 *)&v53);
  if ( v15 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = v18;
    if ( v18 )
      (**v18)(v18, 1LL);
  }
  v19 = (__int64)v53;
  LOBYTE(v16) = 48;
  v50 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v53 + 96LL))(
          v53,
          v16,
          v17);
  v59 = 7LL;
  v58 = 0LL;
  LOWORD(v57[0]) = 0;
  std::wstring::assign((__int64 *)v57, a10, 0);
  v20 = v57;
  if ( v59 >= 8 )
    v20 = (void **)v57[0];
  (*(void (__fastcall **)(__int64, char *, char *, void **))(*(_QWORD *)v19 + 88LL))(v19, Str, &Str[a10], v20);
  v21 = **(_QWORD **)(v10 + 64);
  v53 = (struct std::_Facet_base *)v21;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v22 = std::use_facet<std::numpunct<unsigned short>>((__int64 *)&v53);
  if ( v21 )
  {
    v24 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v23 = v24;
    if ( v24 )
      (**v24)(v24, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v22 + 40LL))(
    v22,
    v60,
    v23);
  v52 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v22 + 32LL))(v22);
  v25 = v51;
  v26 = v50;
  if ( (_QWORD)v51 != a10 )
  {
    std::wstring::insert(v57, v14, a9, v50);
    std::wstring::insert(v57, v25 + 1, a8, v26);
    v27 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v22 + 24LL))(v22);
    v28 = v57;
    if ( v59 >= 8 )
      v28 = (void **)v57[0];
    *((_WORD *)v28 + v25) = v27;
    v14 = v25;
  }
  v29 = v14 + a7;
  std::wstring::insert(v57, v14, a7, v26);
  v30 = v60;
  if ( v61 >= 0x10 )
    v30 = (void **)v60[0];
  v31 = *(_BYTE *)v30;
  if ( *(_BYTE *)v30 != 127 )
  {
    v32 = v52;
    do
    {
      if ( v31 <= 0 || v31 >= v29 - v12 )
        break;
      v29 -= v31;
      std::wstring::insert(v57, v29, 1LL, v32);
      if ( *((char *)v30 + 1) > 0 )
        v30 = (void **)((char *)v30 + 1);
      v31 = *(_BYTE *)v30;
    }
    while ( *(_BYTE *)v30 != 127 );
  }
  v33 = v58;
  v34 = *(_QWORD *)(v10 + 40);
  if ( v34 <= 0 || v34 <= v58 )
    v35 = 0LL;
  else
    v35 = v34 - v58;
  v36 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v37 = *a3;
  v51 = *a3;
  if ( v36 == 64 )
  {
    v42 = (unsigned __int16 *)v57;
    if ( v59 >= 8 )
      v42 = (unsigned __int16 *)v57[0];
    v43 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *v42++);
        --v43;
      }
      while ( v43 );
      goto LABEL_58;
    }
  }
  else if ( v36 == 256 )
  {
    v40 = (unsigned __int16 *)v57;
    if ( v59 >= 8 )
      v40 = (unsigned __int16 *)v57[0];
    v41 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *v40++);
        --v41;
      }
      while ( v41 );
      v37 = v51;
      v10 = v54;
    }
    v51 = v37;
    if ( v35 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, a5);
        --v35;
      }
      while ( v35 );
      v37 = v51;
    }
    v35 = 0LL;
  }
  else
  {
    if ( v35 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, a5);
        --v35;
      }
      while ( v35 );
      v37 = v51;
    }
    v35 = 0LL;
    v51 = v37;
    v38 = (unsigned __int16 *)v57;
    if ( v59 >= 8 )
      v38 = (unsigned __int16 *)v57[0];
    v39 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *v38++);
        --v39;
      }
      while ( v39 );
LABEL_58:
      v37 = v51;
      v10 = v54;
    }
  }
  *a3 = v37;
  v51 = v37;
  v44 = v57;
  if ( v59 >= 8 )
    v44 = (void **)v57[0];
  v45 = v33 - v12;
  v46 = (unsigned __int16 *)v44 + v12;
  if ( v45 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *v46++);
      --v45;
    }
    while ( v45 );
    v37 = v51;
    v10 = v54;
  }
  *(_QWORD *)(v10 + 40) = 0LL;
  v51 = v37;
  if ( v35 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, a5);
      --v35;
    }
    while ( v35 );
    v37 = v51;
  }
  v47 = v55;
  *v55 = v37;
  if ( v61 >= 0x10 )
    operator delete(v60[0]);
  v61 = 15LL;
  v60[2] = 0LL;
  LOBYTE(v60[0]) = 0;
  if ( v59 >= 8 )
    operator delete(v57[0]);
  return v47;
}
