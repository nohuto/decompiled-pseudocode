/*
 * XREFs of ??1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ @ 0x1803F36AC
 * Callers:
 *     _TabletModePositioner::ControlLost_::_1_::dtor$0 @ 0x1803F5C65 (_TabletModePositioner--ControlLost_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001D424 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall TabletModeTraceLogging::TMPControlLost::~TMPControlLost(TabletModeTraceLogging::TMPControlLost *this)
{
  *(_QWORD *)this = &TabletModeTraceLogging::TMPControlLost::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
