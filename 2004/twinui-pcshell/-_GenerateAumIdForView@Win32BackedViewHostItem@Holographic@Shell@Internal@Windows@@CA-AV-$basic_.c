/*
 * XREFs of ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x180254528
 * Callers:
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x180251DDC (-RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIAp.c)
 * Callees:
 *     ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180015D34 (-GetAppViewFileName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139748 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1801DA874 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1802494C4 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x18024C574 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x18024C5B4 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18024D000 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x180256940 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1802576DC (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
_OWORD *__fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GenerateAumIdForView(
        _OWORD *a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  const char *v7; // r9
  int v8; // eax
  const void *v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  void **v14; // rax
  _QWORD *v15; // rdx
  __int128 v16; // xmm0
  const char *v17; // r9
  __int128 v18; // xmm0
  LPVOID pv; // [rsp+20h] [rbp-1D8h] BYREF
  _QWORD v21[2]; // [rsp+28h] [rbp-1D0h] BYREF
  __int128 v22; // [rsp+38h] [rbp-1C0h] BYREF
  __int128 v23; // [rsp+48h] [rbp-1B0h]
  _DWORD v24[6]; // [rsp+58h] [rbp-1A0h] BYREF
  _BYTE v25[16]; // [rsp+70h] [rbp-188h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp-178h] BYREF
  _BYTE v27[128]; // [rsp+88h] [rbp-170h] BYREF
  _BYTE v28[104]; // [rsp+108h] [rbp-F0h] BYREF
  _QWORD v29[2]; // [rsp+170h] [rbp-88h] BYREF
  unsigned __int64 v30; // [rsp+180h] [rbp-78h]
  unsigned __int64 v31; // [rsp+188h] [rbp-70h]
  __int128 v32; // [rsp+190h] [rbp-68h] BYREF
  __int128 v33; // [rsp+1A0h] [rbp-58h]
  _QWORD v34[4]; // [rsp+1B0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v21[1] = a1;
  v21[0] = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v21);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1326LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v3);
  Win32ApplicationViewHelpers::GetAppViewFileName(&pv);
  if ( !pv )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1329LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)0x80070057LL);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v25);
  v4 = std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v26, (__int64)L"!HWND.");
  v5 = std::basic_ostream<unsigned short>::operator<<(v4, std::hex);
  std::basic_ios<unsigned short>::fill(v5 + *(int *)(*(_QWORD *)v5 + 4LL), 48LL);
  v6 = std::setw(&v22, 8LL);
  (*(void (__fastcall **)(__int64, _QWORD))v6)(v5 + *(int *)(*(_QWORD *)v5 + 4LL), *(_QWORD *)(v6 + 8));
  std::basic_ostream<unsigned short>::operator<<(v5, LODWORD(v21[0]));
  std::basic_ostream<unsigned short>::seekp(v26, 0LL, 2LL);
  std::basic_ostream<unsigned short>::tellp(v26, v24);
  v8 = 130 - v24[2] - v24[0];
  if ( v8 <= 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1339LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      v7);
  v9 = pv;
  v10 = -1LL;
  do
    ++v10;
  while ( *((_WORD *)pv + v10) );
  v11 = v8;
  if ( v8 >= v10 )
    v11 = v10;
  std::basic_stringbuf<unsigned short>::str(v27, v29);
  v12 = std::wstring::wstring((__int64)v34, v9, v11);
  v13 = *(_QWORD *)(v12 + 16);
  if ( v30 <= *(_QWORD *)(v12 + 24) - v13 || v31 - v30 < v13 )
  {
    v15 = v29;
    if ( v31 >= 8 )
      v15 = (_QWORD *)v29[0];
    v14 = std::wstring::append((void **)v12, v15, v30);
  }
  else
  {
    v14 = (void **)std::wstring::insert(v29);
  }
  v22 = *(_OWORD *)v14;
  v32 = v22;
  v16 = *((_OWORD *)v14 + 1);
  *(_WORD *)v14 = 0;
  v14[3] = (void *)7;
  v14[2] = 0LL;
  v33 = v16;
  v23 = v16;
  std::wstring::_Tidy_deallocate(v34);
  std::wstring::_Tidy_deallocate(v29);
  v18 = v23;
  if ( (unsigned __int64)v23 > 0x82 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1346LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      v17);
  *a1 = v22;
  a1[1] = v18;
  *(_QWORD *)&v33 = 0LL;
  *((_QWORD *)&v33 + 1) = 7LL;
  LOWORD(v32) = 0;
  std::wstring::_Tidy_deallocate(&v32);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v28);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v28);
  if ( pv )
    CoTaskMemFree(pv);
  return a1;
}
