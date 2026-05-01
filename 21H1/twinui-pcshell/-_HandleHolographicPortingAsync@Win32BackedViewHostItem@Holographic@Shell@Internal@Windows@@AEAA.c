/*
 * XREFs of ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18023294C
 * Callers:
 *     ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x18022E6C0 (-PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x18022E860 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18004D8C0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802327AC (-_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAPEAUIVirtualMonitorSlateHost@2345@@Z @ 0x1802327E0 (-_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_HandleHolographicPortingAsync(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  unsigned __int64 v4; // rsi
  unsigned int v6; // ebx
  HWND Ptr; // rbp
  int VirtualMonitorSlateHost; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *v14; // [rsp+58h] [rbp+20h] BYREF

  v4 = (unsigned __int8)a2;
  if ( IsHolographicWin32SlatesFeatureEnabled((__int64)this, a2) )
  {
    if ( !Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetIsSlate((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this) )
      return 0LL;
    AcquireSRWLockShared(this + 27);
    Ptr = (HWND)this[65].Ptr;
    if ( this != (RTL_SRWLOCK *)-216LL )
      ReleaseSRWLockShared(this + 27);
    v14 = 0LL;
    VirtualMonitorSlateHost = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetVirtualMonitorSlateHost(
                                this,
                                &v14);
    v10 = VirtualMonitorSlateHost;
    if ( VirtualMonitorSlateHost < 0 )
    {
      v6 = -2147023496;
      if ( VirtualMonitorSlateHost != -2147023496 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A0,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)VirtualMonitorSlateHost);
        v6 = v10;
      }
      goto LABEL_17;
    }
    if ( (_BYTE)v4 )
    {
      SetPropW(Ptr, L"Windows.Internal.Shell.Holographic.Win32PortedView", (HANDLE)v4);
      v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *, struct Windows::Foundation::IAsyncAction **))(*(_QWORD *)v14 + 48LL))(
              v14,
              a3);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 935LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v11);
LABEL_17:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
        return v6;
      }
    }
    else
    {
      RemovePropW(Ptr, L"Windows.Internal.Shell.Holographic.Win32PortedView");
      v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *, struct Windows::Foundation::IAsyncAction **))(*(_QWORD *)v14 + 56LL))(
              v14,
              a3);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 942LL;
        goto LABEL_15;
      }
    }
    v6 = 0;
    goto LABEL_17;
  }
  v6 = -2147483634;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x391,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)0x8000000ELL);
  return v6;
}
