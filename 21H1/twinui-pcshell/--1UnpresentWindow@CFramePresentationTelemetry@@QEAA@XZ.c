/*
 * XREFs of ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801653D8
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_db6d4cb92203a874116970825d9bc39e___ @ 0x180164FA0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_db6d4cb92203a874116970825d9bc39e___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___::_scalar_deleting_destructor_ @ 0x180165970 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___--_scala.c)
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180167160 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A5A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow(
        CFramePresentationTelemetry::UnpresentWindow *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
