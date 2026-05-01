/*
 * XREFs of ??1CrashRecovery@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802A0B4C
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1802ACFC8 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$0 @ 0x1802AD2D2 (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005F324 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CrashRecovery::~CrashRecovery(
        ViewManagerInteropTraceLogging::CrashRecovery *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::CrashRecovery::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
