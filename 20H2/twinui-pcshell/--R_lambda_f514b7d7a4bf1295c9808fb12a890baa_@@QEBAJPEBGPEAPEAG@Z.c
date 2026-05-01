/*
 * XREFs of ??R_lambda_f514b7d7a4bf1295c9808fb12a890baa_@@QEBAJPEBGPEAPEAG@Z @ 0x18046CD64
 * Callers:
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x180470918 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180041DB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close_reset@?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x1803DD48C (-close_reset@-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_constant@_K$0.c)
 *     ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180470C6C (-TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA-AV-$unique_any_t@V-$unique_sto.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_f514b7d7a4bf1295c9808fb12a890baa_::operator()(HSTRING *a1, const WCHAR *a2, PWSTR *a3)
{
  HSTRING v6; // rcx
  const WCHAR *v7; // rax
  HRESULT v8; // eax
  unsigned int v9; // ebx
  HSTRING v11; // rcx
  PCWSTR StringRawBuffer; // rax
  const WCHAR *v13; // rsi
  HRESULT v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  HRESULT v17; // eax
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v20; // [rsp+60h] [rbp+30h] BYREF
  PWSTR pszPath; // [rsp+70h] [rbp+40h] BYREF
  PWSTR ppszPathOut; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0LL;
  v6 = *a1;
  if ( !v6 )
  {
    v11 = a1[1];
    if ( !v11 )
      return 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(v11, 0LL);
    ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(&pszPath, StringRawBuffer);
    if ( pszPath )
    {
      v20 = 0;
      v13 = WindowsGetStringRawBuffer(a1[1], 0LL);
      v14 = IsMrtResourceRedirectionEnabled(v13, &v20);
      v9 = v14;
      if ( v14 < 0 )
      {
        v15 = 275LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
          (const char *)(unsigned int)v14);
LABEL_26:
        if ( pszPath )
          CoTaskMemFree(pszPath);
        return v9;
      }
      if ( v20 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( pszPath[v16] );
        v14 = PathCchRemoveFileSpec(pszPath, v16 + 1);
        v9 = v14;
        if ( v14 < 0 )
        {
          v15 = 281LL;
          goto LABEL_25;
        }
        ppszPathOut = 0LL;
        v17 = PathAllocCombine(pszPath, L"Resources", 1u, &ppszPathOut);
        v9 = v17;
        if ( v17 < 0 )
        {
          v18 = 283LL;
          goto LABEL_18;
        }
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&pszPath,
          0LL);
        v17 = PathAllocCombine(ppszPathOut, v13, 1u, &pszPath);
        v9 = v17;
        if ( v17 < 0 )
        {
          v18 = 284LL;
LABEL_18:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
            (const char *)(unsigned int)v17);
          if ( ppszPathOut )
            LocalFree(ppszPathOut);
          goto LABEL_26;
        }
        if ( ppszPathOut )
          LocalFree(ppszPathOut);
      }
      v14 = PathAllocCombine(pszPath, a2, 1u, a3);
      v9 = v14;
      if ( v14 < 0 )
      {
        v15 = 287LL;
        goto LABEL_25;
      }
    }
    if ( pszPath )
      CoTaskMemFree(pszPath);
    return 0LL;
  }
  v7 = WindowsGetStringRawBuffer(v6, 0LL);
  v8 = PathAllocCombine(v7, a2, 1u, a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
      (const char *)(unsigned int)v8);
    return v9;
  }
  return 0LL;
}
