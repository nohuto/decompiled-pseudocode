/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180036D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180038264 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003A69C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x18003AAD8 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003ABB8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x18003BCD0 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18003C014 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     _Stoulx @ 0x1800B0AC0 (_Stoulx.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        int a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  int v10; // esi
  __int64 *v11; // rcx
  __int64 v12; // rbx
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  __int64 v14; // rbx
  void **v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // ebx
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  _OWORD *result; // rax
  __int64 v20; // [rsp+30h] [rbp-A1h] BYREF
  int v21; // [rsp+38h] [rbp-99h] BYREF
  _BYTE *v22; // [rsp+40h] [rbp-91h] BYREF
  bool *v23; // [rsp+48h] [rbp-89h]
  _OWORD *v24; // [rsp+50h] [rbp-81h]
  __int64 v25; // [rsp+58h] [rbp-79h]
  void *v26[3]; // [rsp+60h] [rbp-71h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-59h]
  void *v28[3]; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp-39h]
  _BYTE v30[32]; // [rsp+A0h] [rbp-31h] BYREF

  v25 = -2LL;
  v24 = a2;
  v23 = a7;
  v10 = -1;
  v11 = *(__int64 **)(a5 + 64);
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v12 = *v11;
    v20 = v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v20 = std::use_facet<std::numpunct<unsigned short>>(&v20);
    if ( v12 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v13 )
        (**v13)(v13, 1LL);
    }
    v27 = 7LL;
    LODWORD(v26[0]) = 0;
    v26[2] = (void *)1;
    v14 = v20;
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v20 + 48LL))(v20, v28);
    std::wstring::append(v26, v28, 0LL, -1LL);
    if ( v29 >= 8 )
      operator delete(v28[0]);
    std::wstring::append(v26, 1LL, 0LL);
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v14 + 56LL))(v14, v28);
    std::wstring::append(v26, v28, 0LL, -1LL);
    if ( v29 >= 8 )
      operator delete(v28[0]);
    v15 = v26;
    if ( v27 >= 8 )
      v15 = (void **)v26[0];
    v10 = std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(a3, a4, 2LL, v15);
    if ( v27 >= 8 )
      operator delete(v26[0]);
  }
  else
  {
    v21 = 0;
    v20 = *v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v16 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
            a1,
            (unsigned int)v30,
            a3,
            a4,
            *(_DWORD *)(a5 + 24),
            (__int64)&v20);
    v17 = Stoulx(v30, &v22, v16, &v21);
    if ( v20 )
    {
      v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v18 )
        (**v18)(v18, 1LL);
    }
    if ( v22 != v30 && !v21 && v17 <= 1 )
      v10 = v17;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( !*(_QWORD *)a4 )
LABEL_28:
    *a6 |= 1u;
LABEL_29:
  if ( v10 >= 0 )
    *v23 = v10 != 0;
  else
    *a6 |= 2u;
  result = v24;
  *v24 = *(_OWORD *)a3;
  return result;
}
