/*
 * XREFs of ?InternalRelease@?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ @ 0x18041DD28
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18041D88C (--$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDeskt.c)
 *     ??1?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@QEAA@XZ @ 0x18041DB24 (--1-$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18041E188 (-VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificati.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification2@@@@UIVirtualDesktopNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800827B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1800827B0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<VirtualDesktopNotificationBase<IVirtualDesktopNotification2>,IVirtualDesktopNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
