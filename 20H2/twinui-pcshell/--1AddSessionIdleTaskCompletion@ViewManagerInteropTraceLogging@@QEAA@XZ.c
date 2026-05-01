/*
 * XREFs of ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802CCE30
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18004F550 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$0 @ 0x1801046F2 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$0.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02___::_scalar_deleting_destructor_ @ 0x1802CD640 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02___--_scala.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802D27D4 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     _lambda_5e49cfaad752a3bee6aa14298cd2c931_::__lambda_5e49cfaad752a3bee6aa14298cd2c931_ @ 0x1802DCF84 (_lambda_5e49cfaad752a3bee6aa14298cd2c931_--__lambda_5e49cfaad752a3bee6aa14298cd2c931_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e49cfaad752a3bee6aa14298cd2c931___::_scalar_deleting_destructor_ @ 0x1802DE200 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5e49cfaad752a3bee6aa14298cd2c931___--_scala.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007963C (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion(
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
