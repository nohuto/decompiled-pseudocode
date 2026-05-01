/*
 * XREFs of ??1ShowAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18030F7B4
 * Callers:
 *     ??4ShowAltTab@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18030F984 (--4ShowAltTab@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180311BD0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     _XamlAltTabViewHost::Show_::_1_::dtor$3 @ 0x180312182 (_XamlAltTabViewHost--Show_--_1_--dtor$3.c)
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$3 @ 0x18031EDAD (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$3.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x18031F23C (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803007E8 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowAltTab::~ShowAltTab(XamlSwitcherTelemetry::ShowAltTab *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::ShowAltTab::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
