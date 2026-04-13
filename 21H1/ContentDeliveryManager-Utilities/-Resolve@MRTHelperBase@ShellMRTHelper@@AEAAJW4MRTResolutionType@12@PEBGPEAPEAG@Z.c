/*
 * XREFs of ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x18009F1E0
 * Callers:
 *     ?PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXPEBG@Z @ 0x18009F8E8 (-PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800276AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180056A00 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x18009EC30 (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRIN.c)
 *     ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x18009ED7C (-InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall ShellMRTHelper::MRTHelperBase::Resolve(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  LPVOID v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, const WCHAR *, LPVOID *); // rsi
  int v19; // esi
  unsigned __int16 **v20; // r8
  int v21; // eax
  void *v22; // rbx
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64, _QWORD, void *, LPVOID *); // r12
  HRESULT v25; // eax
  LPVOID v26; // rax
  LPVOID pv; // [rsp+38h] [rbp-59h] BYREF
  __int64 v29; // [rsp+40h] [rbp-51h]
  __int64 v30; // [rsp+48h] [rbp-49h]
  UINT32 length[2]; // [rsp+58h] [rbp-39h] BYREF
  PWSTR ppszPathOut; // [rsp+68h] [rbp-29h] BYREF
  __int64 v33; // [rsp+70h] [rbp-21h]
  __int64 v34; // [rsp+78h] [rbp-19h]
  __int64 v35; // [rsp+80h] [rbp-11h]
  HSTRING_HEADER v36; // [rsp+88h] [rbp-9h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v35 = -2LL;
  *(_QWORD *)length = L"ms-resource:ActionCenterGroupName";
  *a4 = 0LL;
  pv = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)length);
  v9 = ShellMRTHelper::MRTHelperBase::InitializeMRTObjects((ShellMRTHelper::MRTHelperBase *)a1, v6, v7, v8);
  v10 = v9;
  if ( *(_BYTE *)(a1 + 46) && (unsigned int)(v9 + 2147024894) <= 1 )
  {
    ppszPathOut = 0LL;
    v33 = -1LL;
    v34 = -1LL;
    v11 = PathAllocCombine(*(PCWSTR *)(a1 + 72), L"ms-resource:ActionCenterGroupName", 0, &ppszPathOut);
    v10 = v11;
    if ( v11 < 0 )
    {
      v12 = 300LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
        (const char *)(unsigned int)v11);
      if ( ppszPathOut )
      {
        LocalFree(ppszPathOut);
        ppszPathOut = 0LL;
      }
      v33 = 0LL;
      v34 = 0LL;
      goto LABEL_10;
    }
    v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            &pv,
            (__int64)ppszPathOut,
            0xFFFFFFFFFFFFFFFFuLL);
    v10 = v11;
    if ( v11 < 0 )
    {
      v12 = 301LL;
      goto LABEL_7;
    }
    v13 = pv;
    pv = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    *a4 = v13;
    if ( ppszPathOut )
    {
      LocalFree(ppszPathOut);
      ppszPathOut = 0LL;
    }
    v33 = 0LL;
    v34 = 0LL;
    string = 0LL;
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    return 0;
  }
  if ( v9 >= 0 )
  {
    length[0] = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, length);
    if ( length[0] >= 0xC && CompareStringOrdinal(StringRawBuffer, 12, L"ms-resource:", 12, 1) == 2 )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, const WCHAR *, LPVOID *))(*(_QWORD *)v17 + 48LL);
      v29 = -1LL;
      v30 = -1LL;
      v19 = v18(v17, *(_QWORD *)(a1 + 16), L"ms-resource:ActionCenterGroupName", &pv);
      if ( v19 >= 0 )
        goto LABEL_42;
      *(_QWORD *)length = 0LL;
      v21 = ShellMRTHelper::Common::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(
              (ShellMRTHelper::Common *)string,
              length,
              v20);
      v22 = *(void **)length;
      if ( v21 >= 0 )
      {
        if ( *(_QWORD *)length && **(_WORD **)length )
        {
          v23 = *(_QWORD *)(a1 + 8);
          v24 = *(__int64 (__fastcall **)(__int64, _QWORD, void *, LPVOID *))(*(_QWORD *)v23 + 48LL);
          if ( pv )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          v29 = -1LL;
          v30 = -1LL;
          v19 = v24(v23, *(_QWORD *)(a1 + 16), v22, &pv);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x177,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
          (const char *)(unsigned int)v21);
      }
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x17E,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
          (const char *)(unsigned int)v19);
      if ( v22 )
        CoTaskMemFree(v22);
    }
    else
    {
      v19 = -2147024809;
    }
    if ( v19 < 0 )
    {
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v29 = -1LL;
      v30 = -1LL;
      v25 = SHStrDupW(L"ms-resource:ActionCenterGroupName", (LPWSTR *)&pv);
      v10 = v25;
      if ( v25 < 0 )
      {
        v14 = (unsigned int)v25;
        v15 = 428LL;
        goto LABEL_20;
      }
    }
LABEL_42:
    v26 = pv;
    pv = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    *a4 = v26;
    string = 0LL;
    return 0;
  }
  if ( ((v9 + 2147024894) & 0xFFFFFFFC) != 0 || v9 == -2147024892 )
  {
    v14 = (unsigned int)v9;
    v15 = 307LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
      (const char *)v14);
  }
LABEL_10:
  string = 0LL;
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  return v10;
}
