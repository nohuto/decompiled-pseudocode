/*
 * XREFs of ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180326558
 * Callers:
 *     _lambda_66995413046d601e20b987dec1435df1_::__lambda_66995413046d601e20b987dec1435df1_ @ 0x1800A0D94 (_lambda_66995413046d601e20b987dec1435df1_--__lambda_66995413046d601e20b987dec1435df1_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_66995413046d601e20b987dec1435df1___::_scalar_deleting_destructor_ @ 0x1800A2320 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_66995413046d601e20b987dec1435df1___--_scala.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18032DEF0 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     _TouchKeyboardExperienceManager::PreloadInputApp_::_1_::dtor$0 @ 0x18032DFF3 (_TouchKeyboardExperienceManager--PreloadInputApp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180327684 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity(
        TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
