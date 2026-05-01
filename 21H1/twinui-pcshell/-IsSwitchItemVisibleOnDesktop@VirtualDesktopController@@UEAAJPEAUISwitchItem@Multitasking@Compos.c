/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x180356290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180355C14 (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::IsSwitchItemVisibleOnDesktop(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *a3,
        bool *a4)
{
  int v7; // eax
  int v8; // ebx
  VirtualDesktopController *v9; // rcx
  _QWORD *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v15; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationView *v16; // [rsp+68h] [rbp+38h] BYREF

  *a4 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v7 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))a3)(
         a3,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    VirtualDesktopController::GetApplicationViewFromSwitchItem(v9, a2, &v16);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, int *))(*(_QWORD *)*v10 + 24LL))(*v10, v16, &v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    if ( v8 >= 0 )
    {
      *a4 = v15 != 0;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)v8;
}
