/*
 * XREFs of ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x18009BF7C
 * Callers:
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x18009B8C8 (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180015BF8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180068CAC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x18009C164 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800CB258 (__report_rangecheckfailure.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage(
        CreativeFramework::NotificationManager::ToastHelpers *this,
        const wchar_t *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  char *v11; // r14
  void **v12; // rax
  LPVOID pv; // [rsp+38h] [rbp-19h] BYREF
  LPVOID v14[4]; // [rsp+40h] [rbp-11h] BYREF
  void *v15[3]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+27h]
  _WORD v17[4]; // [rsp+80h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v14[3] = (LPVOID)-2LL;
  v17[0] = *a2;
  v3 = 1LL;
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( v5 > 2 && a2[1] == 46 )
  {
    v17[1] = a2[2];
    v3 = 2LL;
  }
  v6 = v3;
  if ( v6 >= 3 )
LABEL_20:
    _report_rangecheckfailure();
  v17[v6] = 0;
  memset(v14, 0, 24);
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)v14,
         L"ms-resource://Microsoft.Windows.ContentDeliveryManager/Files/Ratings/RatingStars%s.png",
         v17);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x18009C15BLL);
  }
  pv = 0LL;
  v8 = (__int64 *)*((_QWORD *)this + 7);
  v9 = *v8;
  pv = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, LPVOID, LPVOID *))(v9 + 64))(
          v8,
          *((_QWORD *)this + 8),
          v14[0],
          &pv);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1AB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_20;
  }
  v11 = (char *)pv;
  v16 = 7LL;
  v15[2] = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign(v15, (char *)L"rating_image", aRatingImage[0] != 0 ? 0xC : 0);
  v12 = (void **)std::map<std::wstring,std::wstring>::operator[]((char *)this + 32, v15);
  if ( *(_WORD *)v11 )
  {
    do
      ++v4;
    while ( *(_WORD *)&v11[2 * v4] );
  }
  else
  {
    v4 = 0LL;
  }
  std::wstring::assign(v12, v11, v4);
  if ( v16 >= 8 )
    operator delete(v15[0]);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v14[0] )
    CoTaskMemFree(v14[0]);
}
