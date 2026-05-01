/*
 * XREFs of _lambda_6cb9c82818ac450c49952f27b766afb5_::_lambda_6cb9c82818ac450c49952f27b766afb5_ @ 0x1800A0BB4
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18032CC74 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180087E9C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180325620 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180325620.c)
 */

__int64 __fastcall lambda_6cb9c82818ac450c49952f27b766afb5_::_lambda_6cb9c82818ac450c49952f27b766afb5_(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3,
        _OWORD *a4,
        __int64 *a5,
        _QWORD *a6)
{
  *(_DWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 4) = *a3;
  *(_OWORD *)(a1 + 20) = *a4;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)(a1 + 40),
    a5);
  *(_QWORD *)(a1 + 48) = *a6;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 56));
  *(_QWORD *)(a1 + 56) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  return a1;
}
