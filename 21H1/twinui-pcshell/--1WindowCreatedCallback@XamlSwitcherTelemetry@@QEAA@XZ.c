/*
 * XREFs of ??1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802DB4AC
 * Callers:
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::__lambda_e7233f2d7fbbc8c446f08901eacadde9_ @ 0x1802DAE58 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--__lambda_e7233f2d7fbbc8c446f08901eacadde9_.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802DE740 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$12 @ 0x1802DEF61 (_XamlAllUpViewHost--CreateFrameForMonitor_--_1_--dtor$12.c)
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::__lambda_fac65b3379140ccb2da51a4d302d8ccb_ @ 0x1802EE3C0 (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--__lambda_fac65b3379140ccb2da51a4d302d8ccb_.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802F0920 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     _XamlAltTabViewHost::Show_::_1_::dtor$12 @ 0x1802F0F3E (_XamlAltTabViewHost--Show_--_1_--dtor$12.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802C7F64 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::WindowCreatedCallback::~WindowCreatedCallback(
        XamlSwitcherTelemetry::WindowCreatedCallback *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::WindowCreatedCallback::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
