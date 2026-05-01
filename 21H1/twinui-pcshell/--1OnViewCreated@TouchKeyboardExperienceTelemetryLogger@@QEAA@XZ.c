/*
 * XREFs of ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180326584
 * Callers:
 *     _lambda_77ff76289f7bbfebb9a2250fa767bd8c_::__lambda_77ff76289f7bbfebb9a2250fa767bd8c_ @ 0x1800A0DCC (_lambda_77ff76289f7bbfebb9a2250fa767bd8c_--__lambda_77ff76289f7bbfebb9a2250fa767bd8c_.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18032D490 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     _TouchKeyboardExperienceManager::OnViewCreated_::_1_::dtor$0 @ 0x18032D7D0 (_TouchKeyboardExperienceManager--OnViewCreated_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180327684 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated(
        TouchKeyboardExperienceTelemetryLogger::OnViewCreated *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
