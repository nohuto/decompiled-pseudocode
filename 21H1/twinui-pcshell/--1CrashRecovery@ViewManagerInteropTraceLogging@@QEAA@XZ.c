/*
 * XREFs of ??1CrashRecovery@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18027EEBC
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x18028B388 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$0 @ 0x18028B692 (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005E8F4 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CrashRecovery::~CrashRecovery(
        ViewManagerInteropTraceLogging::CrashRecovery *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::CrashRecovery::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
