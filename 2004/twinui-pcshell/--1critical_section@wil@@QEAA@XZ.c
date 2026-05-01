/*
 * XREFs of ??1critical_section@wil@@QEAA@XZ @ 0x18013878C
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$11 @ 0x180347B4A (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$11.c)
 *     _KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor$12 @ 0x18035A993 (_KeyboardHosting--TabTipAdapter--TabTipAdapter_--_1_--dtor$12.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x1803EA46F (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$0 @ 0x18044E3EB (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall wil::critical_section::~critical_section(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
