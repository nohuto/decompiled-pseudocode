/*
 * XREFs of ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18004ECC0
 * Callers:
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x18004AE28 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180017EC4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18003A3E0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??0range_error@std@@QEAA@PEBD@Z @ 0x18004A044 (--0range_error@std@@QEAA@PEBD@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004EC08 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18004F3B0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1800CD89C (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::to_bytes(
        __int64 a1,
        void **a2,
        char *a3,
        char *a4)
{
  char *v8; // r8
  void **v9; // r15
  int v10; // eax
  const char *v11; // rdx
  char *v13; // [rsp+50h] [rbp-69h] BYREF
  void **v14; // [rsp+58h] [rbp-61h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v16; // [rsp+78h] [rbp-41h]
  void *Src[2]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v18; // [rsp+90h] [rbp-29h]
  unsigned __int64 v19; // [rsp+98h] [rbp-21h]
  void *v20[2]; // [rsp+A0h] [rbp-19h] BYREF
  unsigned __int64 v21; // [rsp+B0h] [rbp-9h]
  unsigned __int64 v22; // [rsp+B8h] [rbp-1h]

  v16 = -2LL;
  v14 = a2;
  v13 = a3;
  v22 = 15LL;
  v21 = 0LL;
  LOBYTE(v20[0]) = 0;
  v19 = 15LL;
  v18 = 0LL;
  LOBYTE(Src[0]) = 0;
  if ( !*(_BYTE *)(a1 + 92) )
    *(_DWORD *)(a1 + 88) = `std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::to_bytes'::`2'::_State0;
  std::string::append((char *)v20, 8uLL, 0);
  *(_QWORD *)(a1 + 96) = 0LL;
  v8 = v13;
  if ( v13 == a4 )
  {
LABEL_19:
    std::string::string(a2, Src);
    if ( v19 >= 0x10 )
      operator delete(Src[0]);
    v19 = 15LL;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v9 = v20;
    if ( v22 >= 0x10 )
      v9 = (void **)v20[0];
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *, char **, void **, char *, void ***))(**(_QWORD **)(a1 + 8) + 56LL))(
            *(_QWORD *)(a1 + 8),
            a1 + 88,
            v8,
            a4,
            &v13,
            v9,
            (char *)v9 + v21,
            &v14);
    if ( v10 < 0 )
    {
LABEL_29:
      if ( !*(_BYTE *)(a1 + 93) )
      {
        std::range_error::range_error((std::range_error *)pExceptionObject, v11);
        throw (std::range_error *)pExceptionObject;
      }
      goto LABEL_26;
    }
    if ( v10 <= 1 )
      break;
    if ( v10 != 3 )
      goto LABEL_29;
    v8 = v13;
    while ( v8 != a4 )
    {
      std::string::append((char *)Src, 1uLL, *v8);
      v8 = v13 + 2;
      v13 += 2;
    }
LABEL_18:
    *(_QWORD *)(a1 + 96) = (v8 - a3) >> 1;
    if ( v8 == a4 )
      goto LABEL_19;
  }
  if ( v9 < v14 )
  {
    std::string::append(Src, v9, (char *)v14 - (char *)v9);
LABEL_17:
    v8 = v13;
    goto LABEL_18;
  }
  if ( v21 < 0x10 )
  {
    std::string::append((char *)v20, 8uLL, 0);
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 93) )
  {
    std::range_error::range_error((std::range_error *)pExceptionObject, v11);
    throw (std::range_error *)pExceptionObject;
  }
LABEL_26:
  a2[3] = (void *)15;
  a2[2] = 0LL;
  *(_BYTE *)a2 = 0;
  std::string::assign(a2, (void **)(a1 + 24), 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v19 >= 0x10 )
    operator delete(Src[0]);
  v19 = 15LL;
LABEL_22:
  v18 = 0LL;
  LOBYTE(Src[0]) = 0;
  if ( v22 >= 0x10 )
    operator delete(v20[0]);
  return a2;
}
