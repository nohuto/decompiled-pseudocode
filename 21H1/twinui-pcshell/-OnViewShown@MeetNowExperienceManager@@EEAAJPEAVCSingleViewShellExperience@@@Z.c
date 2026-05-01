/*
 * XREFs of ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x180096F70 (--1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ.c)
 *     ?CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x180097844 (-CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009A6D4 (-Stop@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA?AV12@XZ @ 0x18009A9E0 (-TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA-AV12@XZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnViewShown(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v3; // rax
  _BYTE v5[320]; // [rsp+20h] [rbp-158h] BYREF

  MeetNowExperienceManager::CancelShowFlyoutActivityTimeout((MeetNowExperienceManager *)((char *)this - 48));
  if ( **((_DWORD **)this + 10) == 1 )
  {
    v3 = MeetNowTelemetry::ShowFlyoutActivity::TransferToCurrentThread((char *)this + 32, v5);
    wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v3);
    MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v5);
  }
  return 0LL;
}
