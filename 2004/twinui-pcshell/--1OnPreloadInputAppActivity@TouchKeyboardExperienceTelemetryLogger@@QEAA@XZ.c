/*
 * XREFs of ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803480A8
 * Callers:
 *     _lambda_b2d628275170c96747651ea7a6282f40_::__lambda_b2d628275170c96747651ea7a6282f40_ @ 0x1800AEE7C (_lambda_b2d628275170c96747651ea7a6282f40_--__lambda_b2d628275170c96747651ea7a6282f40_.c)
 *     _lambda_da08d54169002be5ece525bde89b0b7d_::__lambda_da08d54169002be5ece525bde89b0b7d_ @ 0x1800AEE8C (_lambda_da08d54169002be5ece525bde89b0b7d_--__lambda_da08d54169002be5ece525bde89b0b7d_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b2d628275170c96747651ea7a6282f40___::_scalar_deleting_destructor_ @ 0x1800B0510 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b2d628275170c96747651ea7a6282f40___--_scala.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18034F940 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     _TouchKeyboardExperienceManager::PreloadInputApp_::_1_::dtor$0 @ 0x18034FB10 (_TouchKeyboardExperienceManager--PreloadInputApp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803491D4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity(
        TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
