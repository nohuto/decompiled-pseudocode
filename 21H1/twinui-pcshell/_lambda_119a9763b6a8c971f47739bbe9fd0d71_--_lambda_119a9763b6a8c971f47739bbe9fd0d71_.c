/*
 * XREFs of _lambda_119a9763b6a8c971f47739bbe9fd0d71_::_lambda_119a9763b6a8c971f47739bbe9fd0d71_ @ 0x1801651AC
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_db6d4cb92203a874116970825d9bc39e___ @ 0x180164FA0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_db6d4cb92203a874116970825d9bc39e___.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180022534 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180022534.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_119a9763b6a8c971f47739bbe9fd0d71_::_lambda_119a9763b6a8c971f47739bbe9fd0d71_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = a3;
  a1[2] = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 2);
  a1[3] = a4[1];
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 4),
    a4 + 2);
  a1[4] = (__int64)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
  return a1;
}
