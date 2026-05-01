/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18014003C
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800B1F68 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _ConnectedStandbyHelper::Initialize_::_1_::dtor$3 @ 0x1802C8F8B (_ConnectedStandbyHelper--Initialize_--_1_--dtor$3.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$4 @ 0x180347AC5 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$4.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$5 @ 0x180347AD8 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$5.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$22 @ 0x180347C1B (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$22.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$23 @ 0x180347C2E (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$23.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$24 @ 0x180347C41 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$24.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$25 @ 0x180347C54 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$25.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$26 @ 0x180347C67 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$26.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$27 @ 0x180347C7A (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$27.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$28 @ 0x180347C8D (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$28.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$29 @ 0x180347CA0 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$29.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$30 @ 0x180347CB3 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$30.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$31 @ 0x180347CC6 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$31.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$32 @ 0x180347CD9 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$32.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$33 @ 0x180347CEC (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$33.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$34 @ 0x180347CFF (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$34.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$35 @ 0x180347D12 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$35.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x180348100 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180353E88 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180142220 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>(
        Concurrency::details::_RefCounter **a1)
{
  Concurrency::details::_RefCounter *v1; // rcx

  v1 = *a1;
  if ( v1 )
    Concurrency::details::_RefCounter::_Destroy(v1);
}
