/*
 * XREFs of _lambda_5096affdfa8dd9dd59ff190700218634_::_lambda_5096affdfa8dd9dd59ff190700218634_ @ 0x1800B090C
 * Callers:
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x18034D9EC (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180087F58 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180346714 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180346714.c)
 */

__int64 __fastcall lambda_5096affdfa8dd9dd59ff190700218634_::_lambda_5096affdfa8dd9dd59ff190700218634_(
        __int64 a1,
        _DWORD *a2,
        _BYTE *a3,
        __int64 *a4,
        _QWORD *a5)
{
  *(_DWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 4) = *a3;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)(a1 + 8),
    a4);
  *(_QWORD *)(a1 + 16) = *a5;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  return a1;
}
