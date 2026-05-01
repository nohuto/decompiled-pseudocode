/*
 * XREFs of ??4ShowFlyoutActivity@MeetNowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A06AC
 * Callers:
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x1800A36B8 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18009FF90 (--0-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x1800A05A8 (--1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A05F4 (--4-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 */

__int64 __fastcall MeetNowTelemetry::ShowFlyoutActivity::operator=(__int64 a1, __int64 a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    a1,
    *(_DWORD *)(a1 + 32) != 0);
  v5[0] = &MeetNowTelemetry::ShowFlyoutActivity::`vftable';
  wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (_QWORD *)a1,
    a2);
  MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v5);
  return a1;
}
