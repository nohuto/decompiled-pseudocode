/*
 * XREFs of ??1critical_section@wil@@QEAA@XZ @ 0x1801385EC
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$11 @ 0x1803470EA (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$11.c)
 *     _KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor$12 @ 0x18035A03F (_KeyboardHosting--TabTipAdapter--TabTipAdapter_--_1_--dtor$12.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x1803E9B2F (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$0 @ 0x18044DCAB (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall wil::critical_section::~critical_section(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
