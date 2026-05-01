/*
 * XREFs of ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1801420E0
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18013FEFC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x1801403FC (--_GAcrylicPolicyManager@@UEAAPEAXI@Z.c)
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180140EDC (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18014231C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x18018D79C (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x18018F69C (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ??_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z @ 0x180198B7C (--_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z.c)
 *     ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x180199B38 (-SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1801AE218 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801B1CE4 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x1801B332C (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x1801B5368 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1801E22E4 (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801E4A50 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x1801E7314 (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801E9978 (-RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1801F1A80 (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F4814 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x18023EAE0 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180243060 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x1802AA9F0 (-_Destroy@-$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1802C8564 (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x18036EBC8 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x180370484 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Concurrency::details::_RefCounter::_Destroy(Concurrency::details::_RefCounter *this)
{
  if ( this )
    (**(void (__fastcall ***)(Concurrency::details::_RefCounter *, __int64))this)(this, 1LL);
}
