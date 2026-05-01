/*
 * XREFs of ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1803781AC
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180378AF0 (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PE.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x180378BD0 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180011D78 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180014220 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801671E0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180373A80 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180374338 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktop::CalculateDesktopIndex(VirtualDesktop *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  char v5; // r14
  __int64 v6; // rdi
  struct IUnknown *v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v12[2]; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v16; // [rsp+90h] [rbp+30h] BYREF
  struct IUnknown *v17; // [rsp+98h] [rbp+38h] BYREF
  RTL_SRWLOCK *v18; // [rsp+A0h] [rbp+40h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v18, (RTL_SRWLOCK *)this + 34);
  v16 = 0LL;
  v2 = *((_QWORD *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = 0;
    v6 = 0LL;
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
      (__int64)&v9,
      v16);
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
      (__int64)&v11,
      (__int64)&v9,
      0);
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
      (__int64)&v13,
      (__int64)&v9,
      v10);
    while ( (_DWORD)v11 != v13 || v12[1] != (struct IUnknown *)v14[1] )
    {
      v7 = v12[0];
      v17 = v12[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      if ( (unsigned int)SHIsSameObject(v7, *((struct IUnknown **)this + 13)) )
      {
        v5 = 1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        break;
      }
      ++v6;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      LODWORD(v11) = v11 + 1;
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( v5 )
    {
      *((_QWORD *)this + 17) = v6;
      v4 = 0;
    }
    else
    {
      v4 = -2147319765;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  return v4;
}
