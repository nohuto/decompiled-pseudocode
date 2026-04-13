/*
 * XREFs of ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18004EF2C
 * Callers:
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004BA34 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180036C78 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180036D6C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003A24C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??0range_error@std@@QEAA@PEBD@Z @ 0x18004A044 (--0range_error@std@@QEAA@PEBD@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18004F2A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1800CD89C (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes(
        __int64 a1,
        void **a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  unsigned __int8 *i; // r8
  void **v9; // r15
  int v10; // eax
  const char *v11; // rdx
  unsigned __int8 *v13; // [rsp+50h] [rbp-69h] BYREF
  void **v14; // [rsp+58h] [rbp-61h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v16; // [rsp+78h] [rbp-41h]
  void *v17[2]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v18; // [rsp+90h] [rbp-29h]
  unsigned __int64 v19; // [rsp+98h] [rbp-21h]
  void *v20[2]; // [rsp+A0h] [rbp-19h] BYREF
  unsigned __int64 v21; // [rsp+B0h] [rbp-9h]
  unsigned __int64 v22; // [rsp+B8h] [rbp-1h]

  v16 = -2LL;
  v14 = a2;
  v13 = a3;
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  if ( !*(_BYTE *)(a1 + 92) )
    *(_DWORD *)(a1 + 88) = `std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes'::`2'::_State0;
  std::wstring::append(v20, 8uLL, 0);
  *(_QWORD *)(a1 + 96) = 0LL;
  i = v13;
  if ( v13 == a4 )
  {
LABEL_19:
    a2[3] = (void *)7;
    a2[2] = 0LL;
    *(_WORD *)a2 = 0;
    std::wstring::_Assign_rv(a2, v17);
    if ( v19 >= 8 )
      operator delete(v17[0]);
    v19 = 7LL;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v9 = v20;
    if ( v22 >= 8 )
      v9 = (void **)v20[0];
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int8 *, unsigned __int8 *, unsigned __int8 **, void **, unsigned __int64, void ***))(**(_QWORD **)(a1 + 8) + 48LL))(
            *(_QWORD *)(a1 + 8),
            a1 + 88,
            i,
            a4,
            &v13,
            v9,
            (unsigned __int64)v9 + 2 * v21,
            &v14);
    if ( v10 < 0 )
    {
LABEL_29:
      if ( !*(_BYTE *)(a1 + 94) )
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
    for ( i = v13; i != a4; i = ++v13 )
      std::wstring::append(v17, 1uLL, *i);
LABEL_18:
    *(_QWORD *)(a1 + 96) = i - a3;
    if ( i == a4 )
      goto LABEL_19;
  }
  if ( v9 < v14 )
  {
    std::wstring::append(v17, v9, ((char *)v14 - (char *)v9) >> 1);
LABEL_17:
    i = v13;
    goto LABEL_18;
  }
  if ( v21 < 0x10 )
  {
    std::wstring::append(v20, 8uLL, 0);
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 94) )
  {
    std::range_error::range_error((std::range_error *)pExceptionObject, v11);
    throw (std::range_error *)pExceptionObject;
  }
LABEL_26:
  a2[3] = (void *)7;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  std::wstring::assign(a2, (void **)(a1 + 56), 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v19 >= 8 )
    operator delete(v17[0]);
  v19 = 7LL;
LABEL_22:
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v22 >= 8 )
    operator delete(v20[0]);
  return a2;
}
