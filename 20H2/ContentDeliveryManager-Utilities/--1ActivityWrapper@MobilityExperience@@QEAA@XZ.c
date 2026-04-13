/*
 * XREFs of ??1ActivityWrapper@MobilityExperience@@QEAA@XZ @ 0x18004DC70
 * Callers:
 *     __lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator()_::_1_::dtor$5 @ 0x1800D170A (__lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator()_--_1_--dtor$5.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity_::_1_::dtor$0 @ 0x1800D18AE (_ToastNotification--ActivityToastNotificationCallback--GetUrisFromActivity_--_1_--dtor$0.c)
 *     _ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity_::_1_::dtor$0 @ 0x1800D19C5 (_ToastNotification--ActivityToastNotificationCallback--PublishCompletedActivity_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MobilityExperience::ActivityWrapper::~ActivityWrapper(MobilityExperience::ActivityWrapper *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
