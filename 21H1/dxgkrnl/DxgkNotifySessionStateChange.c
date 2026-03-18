/*
 * XREFs of DxgkNotifySessionStateChange @ 0x1C015A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C014F0D8 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DpiSessionCreateCallback @ 0x1C015A9A8 (DpiSessionCreateCallback.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C015AA08 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1C029A1E4 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(int a1)
{
  int Callback; // edi
  __int64 HostSilo; // rax
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *v8; // rsi
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  bool HostDriverStoreAvailability; // al
  int v16; // [rsp+30h] [rbp-18h]

  Callback = 0;
  HostSilo = PsGetHostSilo();
  v4 = PsAttachSiloToCurrentThread(HostSilo);
  Global = DXGGLOBAL::GetGlobal(v6, v5);
  v8 = (DXGSESSIONMGR *)*((_QWORD *)Global + 88);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      DXGSESSIONMGR::DestroySession(*((DXGSESSIONDATA ***)Global + 88));
      v10 = 2;
    }
    else
    {
      v9 = 0;
      if ( a1 == 2 )
        v9 = 3;
      v10 = v9;
    }
  }
  else
  {
    DXGSESSIONMGR::CreateSession(*((DXGSESSIONMGR **)Global + 88));
    Callback = DpiSessionCreateCallback();
    v10 = 1;
  }
  DxgkLogCodePointPacket(0x6Du, v10, 0, 0, 0LL);
  PsDetachSiloFromCurrentThread(v4);
  if ( Callback >= 0 && !a1 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
    if ( *((_BYTE *)SessionDataForSpecifiedSession + 18493) )
    {
      HostDriverStoreAvailability = DxgkpQueryHostDriverStoreAvailability();
      *((_BYTE *)SessionDataForSpecifiedSession + 18495) = HostDriverStoreAvailability;
      if ( HostDriverStoreAvailability )
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_NonDXArgonGpuSupport__private_reporting,
          0x1429797u,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
          0,
          v16);
    }
  }
  return (unsigned int)Callback;
}
