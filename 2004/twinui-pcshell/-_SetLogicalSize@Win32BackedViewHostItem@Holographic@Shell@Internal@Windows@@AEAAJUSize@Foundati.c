/*
 * XREFs of ?_SetLogicalSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJUSize@Foundation@5@@Z @ 0x1802555B4
 * Callers:
 *     ?ChangeBounds@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUViewBounds@ViewManagerInterop@345@@Z @ 0x18024E150 (-ChangeBounds@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUViewBounds@ViewM.c)
 * Callees:
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18004E2F0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802548F8 (-_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAPEAUIVirtualMonitorSlateHost@2345@@Z @ 0x18025492C (-_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_SetLogicalSize(
        __int64 a1,
        __int64 a2)
{
  char v4; // di
  int VirtualMonitorSlateHost; // eax
  unsigned int v6; // ebx
  struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *v7; // rbx
  __int64 (__fastcall *v8)(struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *, _QWORD, _QWORD, __int64 *); // rdi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *v13; // [rsp+90h] [rbp+40h] BYREF
  __int64 v14; // [rsp+98h] [rbp+48h] BYREF

  if ( IsHolographicWin32SlatesFeatureEnabled(a1, a2)
    && Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetIsSlate((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)a1) )
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 224));
    v4 = *(_BYTE *)(a1 + 554);
    if ( a1 != -224 )
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 224));
    if ( v4 )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      VirtualMonitorSlateHost = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetVirtualMonitorSlateHost(
                                  (RTL_SRWLOCK *)a1,
                                  &v13);
      v6 = VirtualMonitorSlateHost;
      if ( VirtualMonitorSlateHost < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B6,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)VirtualMonitorSlateHost);
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        return v6;
      }
      v14 = 0LL;
      v7 = v13;
      v8 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Holographic::IVirtualMonitorSlateHost *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v13 + 64LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      v9 = v8(
             v7,
             (unsigned int)(int)(float)((float)(*(float *)&a2 * 150.0) / 100.0),
             (unsigned int)(int)(float)((float)(*((float *)&a2 + 1) * 150.0) / 100.0),
             &v14);
      v6 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C2,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 224));
  *(_QWORD *)(a1 + 536) = a2;
  if ( a1 != -224 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 224));
  return 0LL;
}
