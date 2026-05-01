/*
 * XREFs of ??1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800199C4
 * Callers:
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180019664 (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     _SearchAppDesktopExperienceView::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x1800DB9F6 (_SearchAppDesktopExperienceView--OnViewPropertiesChanging_--_1_--dtor$0.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801EC1F0 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     _CortanaDesktopExperienceView::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x1801EC6A8 (_CortanaDesktopExperienceView--OnViewPropertiesChanging_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180019A74 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::~CortanaExperienceManager_OnViewPropertiesChanging(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
