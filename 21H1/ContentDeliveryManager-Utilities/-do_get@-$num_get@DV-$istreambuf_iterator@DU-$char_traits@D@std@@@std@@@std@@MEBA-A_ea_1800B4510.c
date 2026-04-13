/*
 * XREFs of ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x1800B4510
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800381D0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18004D2C4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     _Stoulx @ 0x1800AE460 (_Stoulx.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x1800AFAA4 (--$_Getloctxt@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800B01AC (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Getifld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1HAEBVlocale@2@@Z @ 0x1800B2550 (-_Getifld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B5364 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CB511 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall std::num_get<char,std::istreambuf_iterator<char>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  int v11; // edi
  __int64 *v12; // rcx
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // r15
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  void **v16; // r9
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // ebx
  void (__fastcall ***v20)(_QWORD, __int64); // rax
  int v22; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v23; // [rsp+38h] [rbp-99h]
  __int64 v24; // [rsp+40h] [rbp-91h] BYREF
  char *v25; // [rsp+48h] [rbp-89h] BYREF
  bool *v26; // [rsp+50h] [rbp-81h]
  __int64 v27; // [rsp+58h] [rbp-79h]
  void *v28[3]; // [rsp+60h] [rbp-71h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-59h]
  void *v30[3]; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v31; // [rsp+98h] [rbp-39h]
  char v32[32]; // [rsp+A0h] [rbp-31h] BYREF

  v27 = -2LL;
  v23 = a4;
  v26 = a7;
  v11 = -1;
  v12 = *(__int64 **)(a5 + 64);
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v13 = *v12;
    v24 = v13;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = std::use_facet<std::numpunct<char>>(&v24);
    if ( v13 )
    {
      v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      if ( v15 )
        (**v15)(v15, 1LL);
    }
    v29 = 15LL;
    LOWORD(v28[0]) = 0;
    v28[2] = (void *)1;
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 48LL))(v14, v30);
    std::string::append((char *)v28, v30, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v31 >= 0x10 )
      operator delete(v30[0]);
    std::string::append((char *)v28, 1uLL, 0);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 56LL))(v14, v30);
    std::string::append((char *)v28, v30, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v31 >= 0x10 )
      operator delete(v30[0]);
    v16 = v28;
    if ( v29 >= 0x10 )
      v16 = (void **)v28[0];
    v17 = v23;
    v11 = std::_Getloctxt<char,std::istreambuf_iterator<char>>(a3, v23, 2uLL, v16);
    if ( v29 >= 0x10 )
      operator delete(v28[0]);
  }
  else
  {
    v22 = 0;
    v24 = *v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v18 = std::num_get<char,std::istreambuf_iterator<char>>::_Getifld(a1, v32, a3, a4, *(_DWORD *)(a5 + 24), &v24);
    v19 = Stoulx(v32, &v25, v18, &v22);
    if ( v24 )
    {
      v20 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      if ( v20 )
        (**v20)(v20, 1LL);
    }
    if ( v25 != v32 && !v22 && v19 <= 1 )
      v11 = v19;
    v17 = v23;
  }
  if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v17) )
    *a6 |= 1u;
  if ( v11 >= 0 )
    *v26 = v11 != 0;
  else
    *a6 |= 2u;
  *a2 = *(_OWORD *)a3;
  return a2;
}
