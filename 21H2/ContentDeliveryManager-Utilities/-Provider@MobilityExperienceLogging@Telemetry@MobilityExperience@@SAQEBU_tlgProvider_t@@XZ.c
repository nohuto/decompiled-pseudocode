/*
 * XREFs of ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ @ 0x18000DA50
 * Callers:
 *     ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x1800194F8 (--$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTeleme.c)
 *     ?StopActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@MEAAXXZ @ 0x18004B000 (-StopActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mobi.c)
 *     ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x18004B3DC (-StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mob.c)
 *     ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x18004B5E8 (-Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExpe.c)
 *     ??1?$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004B878 (--1-$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Par.c)
 *     ?NotifyFailure@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18004F250 (-NotifyFailure@-$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0EAAA.c)
 *     ??$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QEA_N0$$QEAPEBG@Z @ 0x1800507D8 (--$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QE.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800094C0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1800CFC04 (atexit.c)
 */

const struct _tlgProvider_t *MobilityExperience::Telemetry::MobilityExperienceLogging::Provider(void)
{
  void (*v0)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`MobilityExperience::Telemetry::MobilityExperienceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    Context = qword_18019CD98;
    qword_18019CD98[0] = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_18019CDB0 = (struct _tlgProvider_t *)&`MobilityExperience::Telemetry::MobilityExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_e5247b73c30e393fca6255a7d4a63886_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18019CD98, qword_18019CDB0, v0);
    InitOnceComplete(
      &`MobilityExperience::Telemetry::MobilityExperienceLogging::Instance'::`2'::wrapper,
      0,
      qword_18019CD98);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
