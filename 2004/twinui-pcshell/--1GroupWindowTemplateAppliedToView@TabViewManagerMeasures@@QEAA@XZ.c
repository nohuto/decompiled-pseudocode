/*
 * XREFs of ??1GroupWindowTemplateAppliedToView@TabViewManagerMeasures@@QEAA@XZ @ 0x18029643C
 * Callers:
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x1802976C0 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$4 @ 0x180297F60 (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180169490 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TabViewManagerMeasures::GroupWindowTemplateAppliedToView::~GroupWindowTemplateAppliedToView(
        TabViewManagerMeasures::GroupWindowTemplateAppliedToView *this)
{
  *(_QWORD *)this = &TabViewManagerMeasures::GroupWindowTemplateAppliedToView::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
