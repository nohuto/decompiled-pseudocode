/*
 * XREFs of ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_J@Z @ 0x1800B42B0
 * Callers:
 *     <none>
 * Callees:
 *     _Stollx @ 0x1800AE090 (_Stollx.c)
 *     ?_Getifld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1HAEBVlocale@2@@Z @ 0x1800B2550 (-_Getifld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B5364 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::num_get<char,std::istreambuf_iterator<char>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        unsigned __int64 *a7)
{
  unsigned int v11; // eax
  unsigned __int64 v12; // rbx
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  int v15; // [rsp+30h] [rbp-51h] BYREF
  __int64 v16; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int8 *v17[2]; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int8 v18[32]; // [rsp+50h] [rbp-31h] BYREF

  v17[1] = (unsigned __int8 *)-2LL;
  v15 = 0;
  v16 = **(_QWORD **)(a5 + 64);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v11 = std::num_get<char,std::istreambuf_iterator<char>>::_Getifld(a1, (char *)v18, a3, a4, *(_DWORD *)(a5 + 24), &v16);
  v12 = Stollx(v18, v17, v11, &v15);
  if ( v16 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, a4) )
    *a6 |= 1u;
  if ( v17[0] == v18 || v15 )
    *a6 |= 2u;
  else
    *a7 = v12;
  *a2 = *(_OWORD *)a3;
  return a2;
}
