/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011BA1C
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A3EB4 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _ConnectedStandbyHelper::Initialize_::_1_::dtor$3 @ 0x1802A73EB (_ConnectedStandbyHelper--Initialize_--_1_--dtor$3.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$4 @ 0x180325F71 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$4.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$5 @ 0x180325F84 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$5.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$22 @ 0x1803260C7 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$22.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$23 @ 0x1803260DA (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$23.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$24 @ 0x1803260ED (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$24.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$25 @ 0x180326100 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$25.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$26 @ 0x180326113 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$26.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$27 @ 0x180326126 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$27.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$28 @ 0x180326139 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$28.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$29 @ 0x18032614C (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$29.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$30 @ 0x18032615F (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$30.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$31 @ 0x180326172 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$31.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$32 @ 0x180326185 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$32.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$33 @ 0x180326198 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$33.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$34 @ 0x1803261AB (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$34.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$35 @ 0x1803261BE (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$35.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x1803265B0 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180332708 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x18011DCC0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>(
        Concurrency::details::_RefCounter **a1)
{
  Concurrency::details::_RefCounter *v1; // rcx

  v1 = *a1;
  if ( v1 )
    Concurrency::details::_RefCounter::_Destroy(v1);
}
