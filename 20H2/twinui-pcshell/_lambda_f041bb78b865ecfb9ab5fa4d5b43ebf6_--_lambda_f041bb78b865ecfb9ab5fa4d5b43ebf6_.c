/*
 * XREFs of _lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_ @ 0x1800EF130
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180044BC4 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800459F0 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x18007DAEC (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180087F58 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        const struct CMarshaledInterface *a4,
        _QWORD *a5)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)a1,
    a2);
  *(_QWORD *)(a1 + 8) = a3;
  CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)(a1 + 16), a4);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 24),
    a5);
  *(_QWORD *)(a1 + 24) = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  return a1;
}
