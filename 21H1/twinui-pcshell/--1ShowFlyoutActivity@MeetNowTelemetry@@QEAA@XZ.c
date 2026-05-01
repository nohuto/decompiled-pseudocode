/*
 * XREFs of ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x180096F70
 * Callers:
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x180096EE8 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 *     ??4ShowFlyoutActivity@MeetNowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180097074 (--4ShowFlyoutActivity@MeetNowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180098C90 (-OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     ?OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180098F70 (-OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099700 (-OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x18009A438 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180096D3C (--1-$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ?Destroy@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800979E8 (-Destroy@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorT.c)
 *     ?reset@?$shared_object@V?$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18009AE60 (-reset@-$shared_object@V-$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity(MeetNowTelemetry::ShowFlyoutActivity *this)
{
  *(_QWORD *)this = &MeetNowTelemetry::ShowFlyoutActivity::`vftable';
  wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetNowTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetNowTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MeetNowTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((MeetNowTelemetry::ShowFlyoutActivity *)((char *)this + 8));
}
