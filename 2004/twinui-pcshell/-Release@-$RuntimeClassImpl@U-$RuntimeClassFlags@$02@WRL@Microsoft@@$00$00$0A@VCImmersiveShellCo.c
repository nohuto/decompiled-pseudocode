/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlAdapterOwner@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073C80
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlAdapterOwner@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800F4BB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1800F4BB0.c)
 *     ?Release@HolographicPositioner@@WDA@EAAKXZ @ 0x1800F4BC0 (-Release@HolographicPositioner@@WDA@EAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlAdapterOwner@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800F4BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1800F4BD0.c)
 *     ?Release@HolographicPositioner@@WHA@EAAKXZ @ 0x1800F4BE0 (-Release@HolographicPositioner@@WHA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WHI@EAAKXZ @ 0x1800F4BF0 (-Release@HolographicPositioner@@WHI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WIA@EAAKXZ @ 0x1800F4C00 (-Release@HolographicPositioner@@WIA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WII@EAAKXZ @ 0x1800F4C10 (-Release@HolographicPositioner@@WII@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WJA@EAAKXZ @ 0x1800F4C20 (-Release@HolographicPositioner@@WJA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WJI@EAAKXZ @ 0x1800F4C30 (-Release@HolographicPositioner@@WJI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WKI@EAAKXZ @ 0x1800F4C40 (-Release@HolographicPositioner@@WKI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WLA@EAAKXZ @ 0x1800F4C50 (-Release@HolographicPositioner@@WLA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WLI@EAAKXZ @ 0x1800F4C60 (-Release@HolographicPositioner@@WLI@EAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlAdapterOwner@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@WKA@EAAKXZ @ 0x1800FC350 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1800FC350.c)
 *     ??$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHolographicPositioner@@@Z @ 0x18023D2A4 (--$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@.c)
 *     ??1?$ComPtr@VHolographicPositioner@@@WRL@Microsoft@@QEAA@XZ @ 0x18023F134 (--1-$ComPtr@VHolographicPositioner@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1803704CC (-InternalRelease@-$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800922B0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,IEyeControlAdapterOwner,IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 216);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 216), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 48) + 64LL))(v2 + 48, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
