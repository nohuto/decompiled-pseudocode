/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DEF58
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00E2A98 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00E73D0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00098FC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C006D6AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00E01F4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, struct _LUID *a2, char a3, unsigned int a4, int a5)
{
  struct DXGADAPTER *v9; // rdi
  __int64 v10; // rdx
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v14; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-E8h] BYREF
  struct DXGADAPTER *v22[3]; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v23[144]; // [rsp+50h] [rbp-C8h] BYREF

  v22[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v22, a2) )
  {
    v9 = v22[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v22[0], 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23, 0LL);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( (unsigned int)PsGetCurrentProcessSessionId() == ServerSiloServiceSessionId )
        goto LABEL_8;
      v21 = 0LL;
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        v16 = *((_QWORD *)Current + 11);
        if ( v16 )
          (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v16 + 224))(0LL, &v21, 0LL);
      }
      if ( v21 == *((_QWORD *)v9 + 545) )
      {
LABEL_8:
        LOBYTE(v14) = a3;
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     a1,
                                                     v9,
                                                     v14,
                                                     a4,
                                                     a5,
                                                     0LL);
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v20 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v20 + 24) = a2->HighPart;
        *(_QWORD *)(v20 + 32) = a2->LowPart;
        WdLogEvent5_WdError(v20);
        PathModalityForAdapterWithCoreAccessHeld = -1071775742;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23, v10);
  }
  else
  {
    PathModalityForAdapterWithCoreAccessHeld = -1073741810;
  }
  DXGADAPTER_REFERENCE::Assign(v22, 0LL);
  return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
}
