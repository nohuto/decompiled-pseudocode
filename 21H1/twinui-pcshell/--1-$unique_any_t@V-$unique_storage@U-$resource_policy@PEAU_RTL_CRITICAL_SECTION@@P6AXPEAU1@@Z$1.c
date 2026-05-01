/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18006EBC0
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x18006EA10 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     _KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged_::_1_::dtor$0 @ 0x1800DEE47 (_KeyboardHosting--TabTipAdapter--OnEditControlFocusChanged_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Close_::_1_::dtor$0 @ 0x1801C8F6C (_RetailDemoExperienceManager--Close_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Dock_::_1_::dtor$0 @ 0x1801C91DA (_RetailDemoExperienceManager--Dock_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Float_::_1_::dtor$0 @ 0x1801C92C5 (_RetailDemoExperienceManager--Float_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Hide_::_1_::dtor$0 @ 0x1801C94D6 (_RetailDemoExperienceManager--Hide_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::LaunchApplication_::_1_::dtor$0 @ 0x1801C99EC (_RetailDemoExperienceManager--LaunchApplication_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::OnClientWindowReadyForPresentationChanged_::_1_::dtor$0 @ 0x1801C9B6F (_RetailDemoExperienceManager--OnClientWindowReadyForPresentationChanged_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::OnViewEvent_::_1_::dtor$0 @ 0x1801CA186 (_RetailDemoExperienceManager--OnViewEvent_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::SetTopmost_::_1_::dtor$0 @ 0x1801CA3F3 (_RetailDemoExperienceManager--SetTopmost_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::SetWindowBand_::_1_::dtor$0 @ 0x1801CA4AE (_RetailDemoExperienceManager--SetWindowBand_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Show_::_1_::dtor$0 @ 0x1801CA55C (_RetailDemoExperienceManager--Show_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::SubscribeToServices_::_1_::dtor$0 @ 0x1801CA92D (_RetailDemoExperienceManager--SubscribeToServices_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::UnsubscribeFromServices_::_1_::dtor$4 @ 0x180333531 (_TouchKeyboardExperienceManager--UnsubscribeFromServices_--_1_--dtor$4.c)
 *     _KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady_::_1_::dtor$0 @ 0x18033B901 (_KeyboardHosting--TabTipAdapter--EnsureInputAppIsReady_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved_::_1_::dtor$0 @ 0x18033DD41 (_KeyboardHosting--TabTipAdapter--OnInputAppChangeApproved_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppTerminated_::_1_::dtor$1 @ 0x18033ED4F (_KeyboardHosting--TabTipAdapter--OnInputAppTerminated_--_1_--dtor$1.c)
 *     _TwinUI::Lighting::AssistantLightManager::AddDevice_::_1_::dtor$6 @ 0x18042B110 (_TwinUI--Lighting--AssistantLightManager--AddDevice_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
