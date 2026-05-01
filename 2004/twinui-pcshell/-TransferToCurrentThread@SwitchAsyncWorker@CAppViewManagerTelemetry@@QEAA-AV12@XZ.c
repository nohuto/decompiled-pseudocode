/*
 * XREFs of ?TransferToCurrentThread@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x18016FB4C
 * Callers:
 *     _lambda_9532c6789f8817c10f052c0604d56f68_::operator() @ 0x180168254 (_lambda_9532c6789f8817c10f052c0604d56f68_--operator().c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18016FF98 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180166E60 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180166E60.c)
 */

struct wil::details::IFailureCallback *__fastcall CAppViewManagerTelemetry::SwitchAsyncWorker::TransferToCurrentThread(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    **(_DWORD **)(a1 + 48) == 1);
  *(_QWORD *)a2 = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  return a2;
}
