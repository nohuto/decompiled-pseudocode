/*
 * XREFs of ??$MakeAndInitialize@VDesktopBlueLightReductionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019827C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180198D90 (-CreateInstance@-$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0DesktopBlueLightReductionManager@@QEAA@XZ @ 0x1801987D0 (--0DesktopBlueLightReductionManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180198C98 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180198C98.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180199740 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180199740.c)
 *     ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x18019992C (-RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DesktopBlueLightReductionManager,IUnknown,>(
        DesktopBlueLightReductionManager **a1)
{
  DesktopBlueLightReductionManager *v2; // rax
  int CanCastTo; // edi
  DesktopBlueLightReductionManager *v4; // rbx
  __int64 v5; // rdx

  *a1 = 0LL;
  v2 = (DesktopBlueLightReductionManager *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = DesktopBlueLightReductionManager::DesktopBlueLightReductionManager(v2);
    CanCastTo = DesktopBlueLightReductionManager::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(DesktopBlueLightReductionManager *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                      v4,
                      v5,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(DesktopBlueLightReductionManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
