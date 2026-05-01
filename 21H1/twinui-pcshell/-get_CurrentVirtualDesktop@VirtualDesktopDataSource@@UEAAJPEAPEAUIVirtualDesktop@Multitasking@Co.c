/*
 * XREFs of ?get_CurrentVirtualDesktop@VirtualDesktopDataSource@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180354FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180353C74 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopDataSource::get_CurrentVirtualDesktop(
        VirtualDesktopDataSource *this,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a2)
{
  __int64 v4; // rbx
  int WinRTDesktopForInternalDesktopInternal; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktop *v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v4 = *((_QWORD *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  WinRTDesktopForInternalDesktopInternal = (*(__int64 (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v4 + 48LL))(
                                             v4,
                                             &v10);
  v6 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v7 = 209LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
    goto LABEL_6;
  }
  WinRTDesktopForInternalDesktopInternal = VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
                                             (struct IThumbnailDeviceSource **)this,
                                             v10,
                                             a2);
  v6 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v7 = 210LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v6;
}
