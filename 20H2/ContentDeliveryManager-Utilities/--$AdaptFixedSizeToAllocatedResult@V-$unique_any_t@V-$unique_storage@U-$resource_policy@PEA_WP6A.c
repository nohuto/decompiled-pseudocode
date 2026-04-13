/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAE@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x18009BF34
 * Callers:
 *     ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18009A7B0 (-GetEdgeFaviconCache@@YA-AV-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005EF0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?make@?$string_maker@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAAJPEB_W_K@Z @ 0x18009C1E0 (-make@-$string_maker@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTa.c)
 *     ??R?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@QEBAJPEA_W_KPEA_K@Z @ 0x18009C284 (--R-$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@QEBAJPEA_W_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>,260>(
        void **a1,
        __int64 a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  void *v9; // rdi
  void *v10; // r15
  DWORD LastError; // ebx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  const char *v16; // r9
  __int64 v17; // rcx
  LPVOID pv; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v20[4]; // [rsp+38h] [rbp-D0h] BYREF
  _WORD v21[264]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v20[1] = -2LL;
  v20[2] = a2;
  pv = 0LL;
  v21[0] = 0;
  v19 = 0LL;
  v4 = wistd::function<long (wchar_t *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v21, 260LL, &v19);
  if ( (v4 & 0x80000000) != 0 )
  {
    v5 = *(_QWORD **)(a2 + 112);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 24LL))(v5, *v5);
    return v4;
  }
  if ( v19 > 0x104 )
  {
    v13 = wil::details::string_maker<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>::make(
            &pv,
            0LL,
            v19 - 1);
    v4 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)(unsigned int)v13);
      if ( pv )
        CoTaskMemFree(pv);
      v14 = *(_QWORD *)(a2 + 112);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
      return v4;
    }
    v20[0] = 0LL;
    v9 = pv;
    v15 = wistd::function<long (wchar_t *,unsigned __int64,unsigned __int64 *)>::operator()(a2, pv, v19, v20);
    v4 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)(unsigned int)v15);
      if ( v9 )
        CoTaskMemFree(v9);
      v17 = *(_QWORD *)(a2 + 112);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
      return v4;
    }
    if ( v19 != v20[0] )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x7B,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        v16);
      JUMPOUT(0x18009C1D6LL);
    }
  }
  else
  {
    v7 = wil::details::string_maker<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>::make(
           &pv,
           v21,
           v19 - 1);
    v4 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)(unsigned int)v7);
      if ( pv )
        CoTaskMemFree(pv);
      v8 = *(_QWORD *)(a2 + 112);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
      return v4;
    }
    v9 = pv;
  }
  pv = 0LL;
  if ( a1 != v20 )
  {
    v10 = *a1;
    if ( *a1 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v10);
      SetLastError(LastError);
    }
    *a1 = v9;
    v9 = 0LL;
  }
  if ( v9 )
    CoTaskMemFree(v9);
  v12 = *(_QWORD *)(a2 + 112);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  return 0LL;
}
