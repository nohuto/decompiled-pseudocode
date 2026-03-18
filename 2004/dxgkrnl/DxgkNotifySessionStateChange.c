/*
 * XREFs of DxgkNotifySessionStateChange @ 0x1C0169F30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C015F0C8 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DpiSessionCreateCallback @ 0x1C016A038 (DpiSessionCreateCallback.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C016A098 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1C029E6D4 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  bool HostDriverStoreAvailability; // al
  int v17; // [rsp+30h] [rbp-18h]

  Callback = 0;
  HostSilo = PsGetHostSilo();
  v4 = PsAttachSiloToCurrentThread(HostSilo);
  Global = DXGGLOBAL::GetGlobal(v6, v5);
  v8 = (DXGSESSIONMGR *)*((_QWORD *)Global + 102);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      DXGSESSIONMGR::DestroySession(*((DXGSESSIONDATA ***)Global + 102), 1LL);
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
    DXGSESSIONMGR::CreateSession(*((DXGSESSIONMGR **)Global + 102));
    Callback = DpiSessionCreateCallback();
    v10 = 1;
  }
  DxgkLogCodePointPacket(0x6Du, v10, 0, 0, 0LL);
  PsDetachSiloFromCurrentThread(v4);
  if ( Callback >= 0 && !a1 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11);
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
          v17);
    }
  }
  return (unsigned int)Callback;
}
