/*
 * XREFs of ??1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ @ 0x1803F3EB0
 * Callers:
 *     _TabletModePositioner::OnApplicationViewChanged_::_1_::dtor$0 @ 0x180104406 (_TabletModePositioner--OnApplicationViewChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800252C4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall TabletModeTraceLogging::ApplicationViewChangedFocus::~ApplicationViewChangedFocus(
        TabletModeTraceLogging::ApplicationViewChangedFocus *this)
{
  *(_QWORD *)this = &TabletModeTraceLogging::ApplicationViewChangedFocus::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
