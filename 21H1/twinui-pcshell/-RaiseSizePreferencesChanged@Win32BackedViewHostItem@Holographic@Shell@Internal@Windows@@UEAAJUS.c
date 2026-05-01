/*
 * XREFs of ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUSize@Foundation@5@@Z @ 0x18022F430
 * Callers:
 *     ?_ApplySizeConstraints@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAUIApplicationView@@@Z @ 0x180231B0C (-_ApplySizeConstraints@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAUIApp.c)
 *     ?_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180232BCC (-_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePreferencesChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewSizePreferencesChangedEventArgs@@@Z @ 0x180226AD0 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePr.c)
 *     ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewSizePreferencesChangedEventArgs@@AEAUSize@Foundation@Windows@@@Z @ 0x180227BBC (--$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Deta.c)
 *     ??$RaiseSizePreferencesChanged@PEBGIAEAMAEAM@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAM2@Z @ 0x180227F48 (--$RaiseSizePreferencesChanged@PEBGIAEAMAEAM@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEA.c)
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18022D640 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::RaiseSizePreferencesChanged(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  HSTRING v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  ViewSizePreferencesChangedEventArgs *v11; // [rsp+50h] [rbp+20h] BYREF
  ViewSizePreferencesChangedEventArgs *v12; // [rsp+60h] [rbp+30h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp+38h] BYREF

  v2 = *(_DWORD *)(a1 + 504);
  v4 = *(HSTRING *)(a1 + 496);
  v9[0] = a2;
  LODWORD(v11) = v2;
  StringRawBuffer = WindowsGetStringRawBuffer(v4, 0LL);
  Win32BackedViewHostItemTelemetry::RaiseSizePreferencesChanged<unsigned short const *,unsigned int,float &,float &>(
    (__int64 *)&StringRawBuffer,
    &v11,
    (float *)v9 + 1,
    (float *)v9);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgs>::InternalRelease((__int64 *)&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<ViewSizePreferencesChangedEventArgs,ViewSizePreferencesChangedEventArgs,Windows::Foundation::Size &>(
         &v12,
         v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v11 = v12;
    StringRawBuffer = (PCWSTR)(a1 - 16);
    v5 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *,ViewSizePreferencesChangedEventArgs *>(
           (char *)(a1 + 688),
           (__int64 *)&StringRawBuffer,
           &v11);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 655LL;
  }
  else
  {
    v7 = 654LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgs>::InternalRelease((__int64 *)&v12);
  return v6;
}
