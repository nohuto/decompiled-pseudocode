/*
 * XREFs of _lambda_b2d628275170c96747651ea7a6282f40_::_lambda_b2d628275170c96747651ea7a6282f40_ @ 0x1800AEC38
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18034F940 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180347174 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180347174.c)
 */

__int64 __fastcall lambda_b2d628275170c96747651ea7a6282f40_::_lambda_b2d628275170c96747651ea7a6282f40_(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = *a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  return a1;
}
