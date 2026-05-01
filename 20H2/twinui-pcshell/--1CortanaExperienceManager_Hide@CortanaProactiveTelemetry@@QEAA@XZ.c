/*
 * XREFs of ??1CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18005B438
 * Callers:
 *     ?Hide@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x18005B380 (-Hide@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     _SearchAppDesktopExperienceView::Hide_::_1_::dtor$0 @ 0x180104CE5 (_SearchAppDesktopExperienceView--Hide_--_1_--dtor$0.c)
 *     ?Hide@CortanaDesktopExperienceView@@UEAAJXZ @ 0x18020C6F0 (-Hide@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     _CortanaDesktopExperienceView::Hide_::_1_::dtor$0 @ 0x18020C7B4 (_CortanaDesktopExperienceView--Hide_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005BC38 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_Hide::~CortanaExperienceManager_Hide(
        CortanaProactiveTelemetry::CortanaExperienceManager_Hide *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_Hide::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
