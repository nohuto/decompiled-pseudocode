/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModePolicy@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18043E7DC
 * Callers:
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18043F228 (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139D9C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18017A148 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180404CD0 (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualDesktopTabletModePolicy@@QEAA@XZ @ 0x18043E8C0 (--0VirtualDesktopTabletModePolicy@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopTabletModePolicy,VirtualDesktopTabletModePolicy,enum _TABLETMODESTATE &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
        VirtualDesktopTabletModePolicy **a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  unsigned int v6; // r14d
  VirtualDesktopTabletModePolicy *v11; // rax
  VirtualDesktopTabletModePolicy *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  volatile int *v17; // rdx
  VirtualDesktopTabletModePolicy *v19; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v11 = (VirtualDesktopTabletModePolicy *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = VirtualDesktopTabletModePolicy::VirtualDesktopTabletModePolicy(v11);
    v13 = *a4;
    v14 = *a3;
    v19 = v12;
    v15 = *a6;
    v16 = *a5;
    *((_DWORD *)v12 + 24) = *a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)v12 + 6, v14);
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)v12 + 7, v13);
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)v12 + 8, v16);
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)v12 + 9, v15);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      (__int64)v12,
      v17);
    *a1 = v12;
    Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
