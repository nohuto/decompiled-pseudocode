/*
 * XREFs of DxgkNotifySessionStateChange @ 0x1C0160C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_EJOB@@$$A6AXPEAU1@@Z$1?PsDetachSiloFromCurrentThread@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0002CA0 (--1-$unique_storage@U-$resource_policy@PEAU_EJOB@@$$A6AXPEAU1@@Z$1-PsDetachSiloFromCurrentThread.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C015FD14 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DpiSessionCreateCallback @ 0x1C0160D20 (DpiSessionCreateCallback.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0160D94 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1C0347C34 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(int a1)
{
  int Callback; // edi
  DXGSESSIONMGR *v3; // rsi
  __int64 HostSilo; // rax
  unsigned int v5; // edx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  bool HostDriverStoreAvailability; // al
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  Callback = 0;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  HostSilo = PsGetHostSilo();
  v12 = PsAttachSiloToCurrentThread(HostSilo);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      DXGSESSIONMGR::DestroySession(v3);
      v5 = 2;
    }
    else
    {
      v5 = 3;
      if ( a1 != 2 )
      {
        if ( a1 == 3 )
        {
          v5 = 7;
        }
        else
        {
          v5 = 0;
          if ( a1 == 4 )
            v5 = 8;
        }
      }
    }
  }
  else
  {
    DXGSESSIONMGR::CreateSession(v3);
    Callback = DpiSessionCreateCallback();
    v5 = 1;
  }
  DxgkLogCodePointPacket(0x6Du, v5, 0, 0, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_EJOB *,void (_EJOB *),&void PsDetachSiloFromCurrentThread(_EJOB *),wistd::integral_constant<unsigned __int64,0>,_EJOB *,_EJOB *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_EJOB *,void (_EJOB *),&void PsDetachSiloFromCurrentThread(_EJOB *),wistd::integral_constant<unsigned __int64,0>,_EJOB *,_EJOB *,0,std::nullptr_t>>(&v12);
  if ( Callback >= 0 && !a1 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId);
    if ( *((_BYTE *)SessionDataForSpecifiedSession + 18502) )
    {
      HostDriverStoreAvailability = DxgkpQueryHostDriverStoreAvailability();
      *((_BYTE *)SessionDataForSpecifiedSession + 18504) = HostDriverStoreAvailability;
      if ( HostDriverStoreAvailability )
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_NonDXArgonGpuSupport__private_reporting,
          0x1429797u,
          v10,
          v11,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
          0);
    }
  }
  return (unsigned int)Callback;
}
