/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180085A1C
 * Callers:
 *     ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A970 (-AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VDummyWindow@CExperienceManagerAnimationHelper@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180083E90 (-s_WndProcBase@-$CWRLImpWndProc@VDummyWindow@CExperienceManagerAnimationHelper@@@@KA_JPEAUHWND__.c)
 *     ??1?$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x18018A5F8 (--1-$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x180395EF4 (--$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x180396050 (-DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VDragInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1803963A0 (-s_WndProcBase@-$CWRLImpWndProc@VDragInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18040E610 (-CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180410E30 (--$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAU.c)
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180410F28 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopDefaultForegroundHandler@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopDefaultForegroundHandler@@@Z @ 0x1804140FC (--$MakeAndInitialize@VCVirtualDesktopDefaultForegroundHandler@@V1@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804141A0 (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@@Z @ 0x18041CE08 (--$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 *     ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x18041D064 (-VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x180452550 (--$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardLi.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180452660 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x18045287C (-RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180085A50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonito.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(v1);
  }
  return result;
}
