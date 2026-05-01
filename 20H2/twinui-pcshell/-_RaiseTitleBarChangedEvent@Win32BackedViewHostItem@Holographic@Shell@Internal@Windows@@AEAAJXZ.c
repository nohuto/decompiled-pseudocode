/*
 * XREFs of ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ @ 0x180254698
 * Callers:
 *     ?OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x18024FEE0 (-OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z.c)
 *     ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180256390 (-put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139AC4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAUITitleBarChangedEventArgs@3456@@Z @ 0x180248E7C (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarC.c)
 *     ??$MakeAndInitialize@VTitleBarChangedEventArgs@@UITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x180249D44 (--$MakeAndInitialize@VTitleBarChangedEventArgs@@UITitleBarChangedEventArgs@Holographic@Shell@Int.c)
 */

signed int __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaiseTitleBarChangedEvent(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this)
{
  RTL_SRWLOCK *v1; // rbx
  HWND v3; // rsi
  __int64 v4; // rdx
  wil::details *v5; // rcx
  __int64 v6; // r8
  const char *v7; // r9
  UINT32 v9; // eax
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  HSTRING v13; // [rsp+28h] [rbp-E0h] BYREF
  HSTRING v14; // [rsp+30h] [rbp-D8h] BYREF
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *v15; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING v17; // [rsp+58h] [rbp-B0h]
  WCHAR pString[264]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]

  v1 = (RTL_SRWLOCK *)((char *)this + 224);
  AcquireSRWLockShared((PSRWLOCK)this + 28);
  v3 = (HWND)*((_QWORD *)this + 66);
  if ( v1 )
    ReleaseSRWLockShared(v1);
  if ( !InternalGetWindowText(v3, pString, 260) )
    return wil::details::GetLastErrorFailHr(v5, v4, v6, v7);
  v9 = wcsnlen(pString, 0x104uLL);
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, pString, 0x104u, v9);
  v13 = 0LL;
  v14 = v17;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<TitleBarChangedEventArgs,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs,HSTRING__ *>(
          (__int64 *)&v13,
          &v14);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v14 = v13;
    v15 = this;
    v10 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>(
            (char *)this + 928,
            (__int64 *)&v15,
            (__int64 *)&v14);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v11 = 0;
      goto LABEL_11;
    }
    v12 = 851LL;
  }
  else
  {
    v12 = 850LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v10);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v11;
}
