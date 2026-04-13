/*
 * XREFs of ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x180097BBC
 * Callers:
 *     ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x1800981B4 (-GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180034B5C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180044E88 (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180068AD4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180068CAC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x1800777B0 (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x180077CDC (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x180088D74 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ?DoesStringPrefixMatch@EdgeTileUtils@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_WI@Z @ 0x180097B6C (-DoesStringPrefixMatch@EdgeTileUtils@@YA_NAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocat.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x1800993DC (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x180099880 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@_W@.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x18009A1AC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800AEE3C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EdgeTileUtils::RemoveTelemetryQueryParams(
        EdgeTileUtils *this,
        wchar_t *a2,
        wchar_t **a3,
        const char *a4)
{
  int v6; // ebx
  unsigned int v7; // esi
  unsigned __int64 v8; // rax
  char *v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  char v12; // r15
  __int64 v13; // r13
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  int v16; // r9d
  unsigned __int64 v17; // rdi
  bool DoesStringPrefixMatch; // di
  bool v19; // r14
  bool v20; // al
  bool v21; // di
  void **v22; // rdx
  void **v23; // rdx
  __int64 result; // rax
  int v25[2]; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-1C0h]
  __int64 v27; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v29[128]; // [rsp+48h] [rbp-1A0h] BYREF
  _QWORD v30[13]; // [rsp+C8h] [rbp-120h] BYREF
  void *v31[2]; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+140h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+148h] [rbp-A0h]
  void *v34[2]; // [rsp+150h] [rbp-98h] BYREF
  unsigned __int64 v35; // [rsp+160h] [rbp-88h]
  unsigned __int64 v36; // [rsp+168h] [rbp-80h]
  void *v37[2]; // [rsp+170h] [rbp-78h] BYREF
  __int64 v38; // [rsp+180h] [rbp-68h]
  unsigned __int64 v39; // [rsp+188h] [rbp-60h]
  void *v40[3]; // [rsp+190h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+1A8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v26 = -2LL;
  v6 = 0;
  v25[0] = 0;
  *(_QWORD *)a2 = 0LL;
  v7 = -2147024809;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)this + v8) );
  try
  {
    if ( v8 > 1 && *(_WORD *)this == 63 )
    {
      std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(&v27);
      v9 = (char *)this + 2;
      v36 = 7LL;
      v35 = 0LL;
      LOWORD(v34[0]) = 0;
      if ( *((_WORD *)this + 1) )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)&v9[2 * v10] );
      }
      else
      {
        v10 = 0LL;
      }
      std::wstring::assign(v34, v9, v10);
      v11 = 0LL;
      while ( v11 < v35 && !*(_DWORD *)&v29[*(int *)(v27 + 4) - 8] )
      {
        v12 = 1;
        LOWORD(v25[0]) = 38;
        v13 = std::wstring::find((char *)v34, (unsigned __int16 *)v25, v11, 1uLL);
        v14 = v13 - v11;
        if ( v13 == -1 )
          v14 = -1LL;
        v41 = 7LL;
        v40[2] = 0LL;
        LOWORD(v40[0]) = 0;
        std::wstring::assign(v40, v34, v11, v14);
        v6 |= 1u;
        LOWORD(v25[0]) = 61;
        v15 = std::wstring::find((char *)v40, (unsigned __int16 *)v25, 0LL, 1uLL);
        v17 = (unsigned int)(v16 + 6);
        v33 = v17;
        v32 = 0LL;
        LOWORD(v31[0]) = 0;
        if ( v15 == -1LL )
        {
          std::wstring::assign(v31, v40, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
        }
        else
        {
          v39 = (unsigned int)(v16 + 6);
          v38 = 0LL;
          LOWORD(v37[0]) = 0;
          std::wstring::assign(v37, v40, 0LL, v15);
          v6 |= 2u;
          if ( v33 >= 8 )
            operator delete(v31[0]);
          v33 = v17;
          v32 = 0LL;
          LOWORD(v31[0]) = 0;
          std::wstring::_Assign_rv(v31, v37);
          if ( v39 >= 8 )
            operator delete(v37[0]);
        }
        DoesStringPrefixMatch = EdgeTileUtils::DoesStringPrefixMatch((const WCHAR *)v31, L"msPartner", 9u);
        v19 = EdgeTileUtils::DoesStringPrefixMatch((const WCHAR *)v31, L"msOnly", 6u);
        v20 = v32 == 5 && EdgeTileUtils::DoesStringPrefixMatch((const WCHAR *)v31, L"msSrc", 5u);
        if ( DoesStringPrefixMatch || v19 || v20 )
          v12 = 0;
        if ( v12 )
        {
          std::wstringbuf::str((__int64)v29, v37);
          v6 |= 4u;
          v21 = v38 != 0;
          if ( v39 >= 8 )
            operator delete(v37[0]);
          if ( v21 )
            std::operator<<<wchar_t,std::char_traits<wchar_t>>(&v28);
          v22 = v40;
          if ( v41 >= 8 )
            v22 = (void **)v40[0];
          std::operator<<<wchar_t,std::char_traits<wchar_t>>(&v28, v22);
        }
        if ( v13 == -1 )
        {
          if ( v33 >= 8 )
            operator delete(v31[0]);
          v33 = 7LL;
          v32 = 0LL;
          LOWORD(v31[0]) = 0;
          if ( v41 >= 8 )
            operator delete(v40[0]);
          break;
        }
        v11 = v13 + 1;
        if ( v33 >= 8 )
          operator delete(v31[0]);
        v33 = 7LL;
        v32 = 0LL;
        LOWORD(v31[0]) = 0;
        if ( v41 >= 8 )
          operator delete(v40[0]);
      }
      if ( *(_DWORD *)&v29[*(int *)(v27 + 4) - 8] )
      {
        v7 = -2147024882;
      }
      else
      {
        std::wstringbuf::str((__int64)v29, v37);
        v23 = v37;
        if ( v39 >= 8 )
          v23 = (void **)v37[0];
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
          v25,
          v23,
          -1LL);
        if ( v39 >= 8 )
          operator delete(v37[0]);
        if ( !*(_QWORD *)v25 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x66,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
            (const char *)0x8007000ELL);
          if ( v36 >= 8 )
            operator delete(v34[0]);
          v36 = 7LL;
          v35 = 0LL;
          LOWORD(v34[0]) = 0;
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)v30);
          v30[0] = &std::ios_base::`vftable';
          std::ios_base::_Ios_base_dtor((struct std::ios_base *)v30);
          return 2147942414LL;
        }
        *(_QWORD *)a2 = *(_QWORD *)v25;
      }
      if ( v36 >= 8 )
        operator delete(v34[0]);
      v36 = 7LL;
      v35 = 0LL;
      LOWORD(v34[0]) = 0;
      std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)v30);
      v30[0] = &std::ios_base::`vftable';
      std::ios_base::_Ios_base_dtor((struct std::ios_base *)v30);
    }
    result = v7;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x70,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
                           a4);
  }
  return result;
}
