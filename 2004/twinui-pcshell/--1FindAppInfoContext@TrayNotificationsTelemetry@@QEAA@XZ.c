/*
 * XREFs of ??1FindAppInfoContext@TrayNotificationsTelemetry@@QEAA@XZ @ 0x18037A0BC
 * Callers:
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x18037A240 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18037A064 (--1-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?Destroy@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18037A190 (-Destroy@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18037B07C (-reset@-$shared_object@V-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall TrayNotificationsTelemetry::FindAppInfoContext::~FindAppInfoContext(
        TrayNotificationsTelemetry::FindAppInfoContext *this)
{
  *(_QWORD *)this = &TrayNotificationsTelemetry::FindAppInfoContext::`vftable';
  wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TrayNotificationsTelemetry::FindAppInfoContext *)((char *)this + 8));
}
