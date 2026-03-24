/*
 * XREFs of DxgkNotifySessionStateChange @ 0x1C01553E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A9FC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage @ 0x1C0024A48 (Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DpiSessionCreateCallback @ 0x1C01554F0 (DpiSessionCreateCallback.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0155550 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0164078 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1C029EBB4 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
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
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  bool HostDriverStoreAvailability; // al

  Callback = 0;
  HostSilo = PsGetHostSilo();
  v4 = PsAttachSiloToCurrentThread(HostSilo);
  Global = DXGGLOBAL::GetGlobal(v6, v5);
  v8 = (DXGSESSIONMGR *)*((_QWORD *)Global + 102);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      DXGSESSIONMGR::DestroySession(*((DXGSESSIONMGR **)Global + 102));
      v9 = 2;
    }
    else
    {
      v10 = 0;
      if ( a1 == 2 )
        v10 = 3;
      v9 = v10;
    }
  }
  else
  {
    DXGSESSIONMGR::CreateSession(*((DXGSESSIONMGR **)Global + 102));
    Callback = DpiSessionCreateCallback();
    v9 = 1;
  }
  DxgkLogCodePointPacket(0x6Du, v9, 0, 0, 0LL);
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
        Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage();
    }
  }
  return (unsigned int)Callback;
}
