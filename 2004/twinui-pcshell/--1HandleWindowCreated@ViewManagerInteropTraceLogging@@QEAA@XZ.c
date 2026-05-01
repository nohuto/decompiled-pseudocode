/*
 * XREFs of ??1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802A0BA4
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1802AC190 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 *     _ViewEventDispatcher::_HandleWindowCreated_::_1_::dtor$0 @ 0x1802AC2F2 (_ViewEventDispatcher--_HandleWindowCreated_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005F324 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::HandleWindowCreated::~HandleWindowCreated(
        ViewManagerInteropTraceLogging::HandleWindowCreated *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::HandleWindowCreated::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
