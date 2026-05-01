/*
 * XREFs of ??$MakeAndInitialize@VCPerMonitorDesktopVisibilityService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803AC24C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCPerMonitorDesktopVisibilityService@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803AC9E0 (-CreateInstance@-$SimpleClassFactory@VCPerMonitorDesktopVisibilityService@@$0A@@WRL@Microsoft@@U.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180078E10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180078E10.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x1803AC4C4 (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803AC8A8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1803AC8A8.c)
 *     ?RuntimeClassInitialize@CPerMonitorDesktopVisibilityService@@QEAAJXZ @ 0x1803ACCF0 (-RuntimeClassInitialize@CPerMonitorDesktopVisibilityService@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPerMonitorDesktopVisibilityService,IUnknown,>(
        CPerMonitorDesktopVisibilityService **a1)
{
  CPerMonitorDesktopVisibilityService *v2; // rax
  int CanCastTo; // edi
  CPerMonitorDesktopVisibilityService *v4; // rbx
  volatile int *v5; // rdx
  __int64 v6; // rdx

  *a1 = 0LL;
  v2 = (CPerMonitorDesktopVisibilityService *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = CPerMonitorDesktopVisibilityService::CPerMonitorDesktopVisibilityService(v2);
    CanCastTo = CPerMonitorDesktopVisibilityService::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(CPerMonitorDesktopVisibilityService *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                      v4,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(CPerMonitorDesktopVisibilityService *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>::Release(
        (__int64)v4,
        v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
