/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x180035C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180037E14 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x18003A688 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     _Stoullx @ 0x1800B11B0 (_Stoullx.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        int a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 *a7)
{
  unsigned int v11; // ebx
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rbx
  int v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-30h] BYREF

  v17[1] = -2LL;
  v15 = 0;
  v16 = **(_QWORD **)(a5 + 64);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v11 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
          a1,
          (unsigned int)v18,
          a3,
          a4,
          2048,
          (__int64)&v16);
  if ( v16 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  v13 = Stoullx(v18, v17, v11, &v15);
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( *(_QWORD *)a4 )
LABEL_12:
    *a6 |= 1u;
LABEL_13:
  if ( (_BYTE *)v17[0] == v18 || v15 )
    *a6 |= 2u;
  else
    *a7 = v13;
  *a2 = *(_OWORD *)a3;
  return a2;
}
