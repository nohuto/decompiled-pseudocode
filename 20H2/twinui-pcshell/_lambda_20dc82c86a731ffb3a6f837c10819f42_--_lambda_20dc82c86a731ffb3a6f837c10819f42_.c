/*
 * XREFs of _lambda_20dc82c86a731ffb3a6f837c10819f42_::_lambda_20dc82c86a731ffb3a6f837c10819f42_ @ 0x1800B0888
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18034E4B0 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180087F58 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180346714 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180346714.c)
 */

__int64 __fastcall lambda_20dc82c86a731ffb3a6f837c10819f42_::_lambda_20dc82c86a731ffb3a6f837c10819f42_(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v7; // rax

  *(_QWORD *)a1 = *a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)(a1 + 8),
    a3);
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = a5[1];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  *(_QWORD *)(a1 + 24) = *a5;
  *(_QWORD *)(a1 + 32) = a5[1];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 40));
  *(_QWORD *)(a1 + 40) = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  return a1;
}
