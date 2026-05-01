/*
 * XREFs of ?MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@@Z @ 0x1803778E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180377134 (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::MoveSwitchItemToDesktop(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *a3)
{
  RTL_SRWLOCK *v6; // rdi
  int v7; // ebx
  int v8; // eax
  VirtualDesktopController *v9; // rcx
  PVOID Ptr; // rbx
  _QWORD *v11; // rax
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IApplicationView *v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v6 = this + 15;
  AcquireSRWLockShared(this + 15);
  v13[1] = (__int64)v6;
  if ( this[10].Ptr )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v8 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))a3)(
           a3,
           &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
           &v16);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      VirtualDesktopController::GetApplicationViewFromSwitchItem(v9, a2, &v15);
      Ptr = this[10].Ptr;
      v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, v13);
      v7 = (*(__int64 (__fastcall **)(PVOID, struct IApplicationView *, _QWORD))(*(_QWORD *)Ptr + 32LL))(Ptr, v15, *v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAD,
          (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
          (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  else
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)v7;
}
