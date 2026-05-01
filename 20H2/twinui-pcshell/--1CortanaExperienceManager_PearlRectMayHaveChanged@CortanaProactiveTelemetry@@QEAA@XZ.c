/*
 * XREFs of ??1CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18020606C
 * Callers:
 *     ?OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1802073A0 (-OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     _SearchAppDesktopExperienceView::OnPearlRectChanged_::_1_::dtor$0 @ 0x180207453 (_SearchAppDesktopExperienceView--OnPearlRectChanged_--_1_--dtor$0.c)
 *     ?OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x18020D760 (-OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     _CortanaDesktopExperienceView::OnPearlRectChanged_::_1_::dtor$0 @ 0x18020D813 (_CortanaDesktopExperienceView--OnPearlRectChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180018F48 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::~CortanaExperienceManager_PearlRectMayHaveChanged(
        CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
