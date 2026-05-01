/*
 * XREFs of ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x18011DCC0
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011BA1C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x18011BF1C (--_GAcrylicPolicyManager@@UEAAPEAXI@Z.c)
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18011CA2C (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18011DF28 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x180169C3C (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x18016BB3C (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ??_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z @ 0x18017505C (--_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z.c)
 *     ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x180176018 (-SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18018A750 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x18018E3F4 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18018FA3C (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x180191A78 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1801BEF04 (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801C1670 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x1801C42AC (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C6A48 (-RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1801CEBA4 (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801D1794 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x18021C300 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802208B0 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x1802896A0 (-_Destroy@-$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1802A72B4 (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180331F10 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x18034DF68 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x18034F824 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Concurrency::details::_RefCounter::_Destroy(Concurrency::details::_RefCounter *this)
{
  if ( this )
    (**(void (__fastcall ***)(Concurrency::details::_RefCounter *, __int64))this)(this, 1LL);
}
