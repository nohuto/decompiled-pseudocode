/*
 * XREFs of ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x18009A3C4
 * Callers:
 *     _lambda_4a924f41398b24a36e92e39351e8429b_::operator() @ 0x18009B038 (_lambda_4a924f41398b24a36e92e39351e8429b_--operator().c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180004190 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180099BEC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMe.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x180099DCC (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x18009C3BC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EdgeTileUtils::GetTileIdforNavigationUrl(const WCHAR *this, wchar_t *a2, wchar_t **a3)
{
  HRESULT v4; // eax
  int v5; // edi
  HRESULT v6; // eax
  wchar_t **v7; // r8
  const char *v8; // r9
  void *v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  HRESULT (__stdcall *CreateUriSimple)(IUriBuilder *, DWORD, DWORD_PTR, IUri **); // rsi
  struct IUriVtbl *lpVtbl; // rax
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  unsigned int v20; // r10d
  __int64 v21; // rcx
  IUri *v23; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-31h] BYREF
  IUriBuilder *ppIUriBuilder; // [rsp+48h] [rbp-29h] BYREF
  LPVOID v26; // [rsp+50h] [rbp-21h] BYREF
  BSTR bstrString; // [rsp+58h] [rbp-19h] BYREF
  IUri *ppURI; // [rsp+60h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v30[2]; // [rsp+70h] [rbp-1h] BYREF
  wchar_t Buffer[4]; // [rsp+80h] [rbp+Fh] BYREF
  wchar_t v32[4]; // [rsp+88h] [rbp+17h] BYREF
  char v33; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v30[1] = -2LL;
  *(_QWORD *)a2 = 0LL;
  ppURI = 0LL;
  v4 = CreateUri(this, 0, 0LL, &ppURI);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
      (const char *)(unsigned int)v4);
    goto LABEL_49;
  }
  ppIUriBuilder = 0LL;
  v6 = CreateIUriBuilder(ppURI, 0, 0LL, &ppIUriBuilder);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v24 = 0;
    v30[0] = 0LL;
    v23 = 0LL;
    v5 = ((__int64 (__fastcall *)(IUriBuilder *, unsigned int *, _QWORD *))ppIUriBuilder->lpVtbl->GetQuery)(
           ppIUriBuilder,
           &v24,
           v30);
    if ( v5 == 1 || !v24 )
    {
      v23 = ppURI;
      if ( ppURI )
        ((void (__fastcall *)(IUri *))ppURI->lpVtbl->AddRef)(ppURI);
    }
    else
    {
      if ( v5 < 0 )
      {
LABEL_45:
        if ( v23 )
          ((void (__fastcall *)(IUri *))v23->lpVtbl->Release)(v23);
        goto LABEL_47;
      }
      v26 = 0LL;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
        &pv,
        v30[0],
        v24);
      v9 = pv;
      if ( !pv )
      {
        v5 = -2147024882;
        v10 = 2147942414LL;
        v11 = 179LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
          (const char *)v10);
        if ( v9 )
          CoTaskMemFree(v9);
        if ( v26 )
          CoTaskMemFree(v26);
        goto LABEL_45;
      }
      *(_QWORD *)Buffer = &v26;
      *(_QWORD *)v32 = 0LL;
      v33 = 1;
      v5 = EdgeTileUtils::RemoveTelemetryQueryParams((EdgeTileUtils *)pv, v32, v7, v8);
      wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>((void ***)Buffer);
      if ( v5 < 0 )
      {
        v10 = (unsigned int)v5;
        v11 = 182LL;
        goto LABEL_17;
      }
      v12 = ((__int64 (__fastcall *)(IUriBuilder *, LPVOID))ppIUriBuilder->lpVtbl->SetQuery)(ppIUriBuilder, v26);
      v5 = v12;
      if ( v12 < 0 )
      {
        v11 = 184LL;
LABEL_16:
        v10 = (unsigned int)v12;
        goto LABEL_17;
      }
      CreateUriSimple = ppIUriBuilder->lpVtbl->CreateUriSimple;
      v23 = 0LL;
      v12 = ((__int64 (__fastcall *)(IUriBuilder *, _QWORD, _QWORD, IUri **))CreateUriSimple)(
              ppIUriBuilder,
              0LL,
              0LL,
              &v23);
      v5 = v12;
      if ( v12 < 0 )
      {
        v11 = 185LL;
        goto LABEL_16;
      }
      CoTaskMemFree(v9);
      if ( v26 )
        CoTaskMemFree(v26);
    }
    bstrString = 0LL;
    lpVtbl = v23->lpVtbl;
    bstrString = 0LL;
    v15 = ((__int64 (__fastcall *)(IUri *, BSTR *))lpVtbl->GetAbsoluteUri)(v23, &bstrString);
    v5 = v15;
    if ( v15 < 0 )
    {
      v16 = (unsigned int)v15;
      v17 = 194LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
        (const char *)v16);
      goto LABEL_43;
    }
    v18 = 997LL;
    v19 = -1LL;
    do
      ++v19;
    while ( bstrString[v19] );
    if ( v19 && bstrString[v19 - 1] == 47 )
      --v19;
    v20 = 0;
    if ( v19 )
    {
      v21 = 0LL;
      do
      {
        v18 = (unsigned int)bstrString[v21] + 31 * (_DWORD)v18;
        v21 = ++v20;
      }
      while ( v20 < v19 );
    }
    *(_QWORD *)a2 = 0LL;
    v5 = StringCchPrintfW(Buffer, 13LL, L"%u%u", v18, 0);
    if ( v5 >= 0 )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
        &pv,
        Buffer,
        -1LL);
      if ( !pv )
      {
        v5 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x81,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
          (const char *)0x8007000ELL);
LABEL_40:
        v16 = (unsigned int)v5;
        v17 = 196LL;
        goto LABEL_41;
      }
      *(_QWORD *)a2 = pv;
    }
    if ( v5 >= 0 )
    {
      v5 = 0;
LABEL_43:
      if ( bstrString )
        SysFreeString(bstrString);
      goto LABEL_45;
    }
    goto LABEL_40;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA3,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
    (const char *)(unsigned int)v6);
LABEL_47:
  if ( ppIUriBuilder )
    ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
LABEL_49:
  if ( ppURI )
    ((void (__fastcall *)(IUri *, struct IUriVtbl *))ppURI->lpVtbl->Release)(ppURI, ppURI->lpVtbl);
  return (unsigned int)v5;
}
