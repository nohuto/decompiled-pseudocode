/*
 * XREFs of ?EnterFullScreen@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x18024E500
 * Callers:
 *     ?_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180254D18 (-_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostViewModeChangeRequestedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostViewModeChangeRequestedEventArgs@@@Z @ 0x18024996C (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostVi.c)
 *     ??$FullScreenEntered@PEBGIAEAMAEAM@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAM2@Z @ 0x18024A280 (--$FullScreenEntered@PEBGIAEAMAEAM@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAM2@Z.c)
 *     ??$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEBW4ViewMode@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewHostViewModeChangeRequestedEventArgs@@AEBW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x18024A788 (--$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEBW4ViewMode@Holographic@She.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18024F9C8 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::EnterFullScreen(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this)
{
  RTL_SRWLOCK *v1; // rbx
  HSTRING v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  PCWSTR StringRawBuffer; // [rsp+58h] [rbp+38h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 208);
  LODWORD(v10) = 1;
  AcquireSRWLockExclusive((PSRWLOCK)this + 26);
  v3 = (HSTRING)*((_QWORD *)this + 63);
  LODWORD(v9) = *((_DWORD *)this + 128);
  *((_DWORD *)this + 135) = 1;
  StringRawBuffer = WindowsGetStringRawBuffer(v3, 0LL);
  Win32BackedViewHostItemTelemetry::FullScreenEntered<unsigned short const *,unsigned int,float &,float &>(
    (__int64 *)&StringRawBuffer,
    &v9,
    (float *)this + 131,
    (float *)this + 130);
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v11);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<ViewHostViewModeChangeRequestedEventArgs,ViewHostViewModeChangeRequestedEventArgs,enum Windows::Internal::Shell::Holographic::ViewMode const &>(
         &v11,
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = v11;
    v10 = (__int64)this - 16;
    v4 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *,ViewHostViewModeChangeRequestedEventArgs *>(
           (char *)this + 840,
           &v10,
           &v9);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_9;
    }
    v6 = 784LL;
  }
  else
  {
    v6 = 783LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v11);
  return v5;
}
