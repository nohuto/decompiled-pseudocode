/*
 * XREFs of _lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_::_lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_ @ 0x1800B096C
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18034EEE0 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180087F58 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180346714 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180346714.c)
 */

__int64 __fastcall lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_::_lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  *(_QWORD *)a1 = *a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)(a1 + 8),
    a3);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  return a1;
}
