/*
 * XREFs of ??1CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802A0230
 * Callers:
 *     _ViewEventDispatcher::PerformDelayedInitialization_::_1_::dtor$0 @ 0x1802A43A4 (_ViewEventDispatcher--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007963C (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CloseUnRecoveredViews::~CloseUnRecoveredViews(
        ViewManagerInteropTraceLogging::CloseUnRecoveredViews *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::CloseUnRecoveredViews::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
