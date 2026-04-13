/*
 * XREFs of ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800C9930
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800170A8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800177C4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800381D0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800AFDEC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x1800C7CC0 (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CB511 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::money_put<char,std::ostreambuf_iterator<char>>::do_put(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6,
        char *a7)
{
  char *v10; // rdi
  __int64 v11; // rbx
  struct std::_Facet_base *v12; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char v14; // bl
  __int64 v15; // rdx
  unsigned __int64 v16; // r11
  char *v17; // rcx
  unsigned __int64 i; // r8
  char *v19; // rcx
  char *v20; // rax
  char v21; // r9
  char v22; // cl
  __int128 v25; // [rsp+68h] [rbp-61h] BYREF
  void *v26[5]; // [rsp+78h] [rbp-51h] BYREF
  void *v27[2]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-19h]
  unsigned __int64 v29; // [rsp+B8h] [rbp-11h]
  char v30[16]; // [rsp+C0h] [rbp-9h] BYREF

  v26[4] = (void *)-2LL;
  v10 = a7;
  v11 = **(_QWORD **)(a5 + 64);
  *(_QWORD *)&v25 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<char>>((__int64 *)&v25);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, char *))(*(_QWORD *)v12 + 56LL))(
    v12,
    "0123456789-",
    "",
    v30);
  v14 = 0;
  v15 = 0LL;
  v16 = *((_QWORD *)a7 + 2);
  if ( v16 )
  {
    v17 = *((_QWORD *)a7 + 3) < 0x10uLL ? a7 : *(char **)a7;
    if ( *v17 == v30[10] )
    {
      v14 = 1;
      v15 = 1LL;
    }
  }
  for ( i = v15; i < v16; ++i )
  {
    if ( *((_QWORD *)a7 + 3) < 0x10uLL )
      v19 = a7;
    else
      v19 = *(char **)a7;
    v20 = v30;
    if ( v30[0] )
    {
      v21 = v19[i];
      v22 = v30[0];
      do
      {
        if ( v22 == v21 )
          break;
        v22 = *++v20;
      }
      while ( *v20 );
    }
    if ( (unsigned __int64)(v20 - v30) >= 0xA )
      break;
  }
  if ( *((_QWORD *)a7 + 3) >= 0x10uLL )
    v10 = *(char **)a7;
  v29 = 15LL;
  v28 = 0LL;
  LOBYTE(v27[0]) = 0;
  std::string::assign(v27, &v10[v15], i - v15);
  if ( !v28 )
    std::string::append((char *)v27, 1uLL, v30[0]);
  v26[3] = (void *)15;
  v26[2] = 0LL;
  LOBYTE(v26[0]) = 0;
  std::string::assign(v26, v27, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v25 = *a3;
  std::money_put<char,std::ostreambuf_iterator<char>>::_Putmfld(a1, a2, &v25, a4, a5, a6, v14, (__int64)v26, v30[0]);
  if ( v29 >= 0x10 )
    operator delete(v27[0]);
  return a2;
}
