/*
 * XREFs of ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x18009A438
 * Callers:
 *     ?OnEventQueued@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180098B30 (-OnEventQueued@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEA.c)
 *     ?ShowFlyout@MeetNowExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x18009A5A0 (-ShowFlyout@MeetNowExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180096930 (--0-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??0?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180096A30 (--0-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRef_ea_180096A30.c)
 *     ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x180096F70 (--1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ.c)
 *     ??4ShowFlyoutActivity@MeetNowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180097074 (--4ShowFlyoutActivity@MeetNowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?BeginShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x180097534 (-BeginShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 *     ?CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ @ 0x180097818 (-CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ.c)
 *     ?CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x180097844 (-CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 *     ?CancelledByAnotherInvoke@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x180097868 (-CancelledByAnotherInvoke@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z @ 0x18009A398 (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z.c)
 *     ?StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z @ 0x18009A5B8 (-StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009A6D4 (-Stop@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA?AV12@XZ @ 0x18009A9E0 (-TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA-AV12@XZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::ShowFlyout(
        CBaseTrayFlyoutExperienceManager **pv,
        const struct Windows::Foundation::Rect *a2,
        int a3,
        bool a4)
{
  char *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v12[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[40]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  MeetNowExperienceManager::CancelShowFlyoutActivityTimeout((MeetNowExperienceManager *)pv);
  v8 = (char *)(pv + 10);
  if ( *(_DWORD *)pv[16] == 1 )
  {
    MeetNowTelemetry::ShowFlyoutActivity::TransferToCurrentThread(pv + 10, v12);
    MeetNowTelemetry::ShowFlyoutActivity::CancelledByAnotherInvoke((MeetNowTelemetry::ShowFlyoutActivity *)v12);
    wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
    MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v12);
  }
  if ( CBaseTrayFlyoutExperienceManager::DebounceDetection::CanShow((CBaseTrayFlyoutExperienceManager *)((char *)pv[7] + 448)) )
  {
    wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v12);
    *(_QWORD *)v12 = &MeetNowTelemetry::ShowFlyoutActivity::`vftable';
    MeetNowTelemetry::ShowFlyoutActivity::StartActivity((MeetNowTelemetry::ShowFlyoutActivity *)v12, a4);
    MeetNowExperienceManager::BeginShowFlyoutActivityTimeout(pv);
    v9 = CBaseTrayFlyoutExperienceManager::ShowFlyout(pv[7], a2, (HWND)a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v12);
      return v10;
    }
    wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v13,
      (__int64)v12,
      0);
    v13[0] = &MeetNowTelemetry::ShowFlyoutActivity::`vftable';
    MeetNowTelemetry::ShowFlyoutActivity::operator=((__int64)v8, (__int64)v13);
    MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v13);
    MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v12);
  }
  return 0LL;
}
