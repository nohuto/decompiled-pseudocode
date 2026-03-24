/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01690F4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C012C020 (DxgkDisplayConfigDeviceInfo.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C013AEF4 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009FFC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C006F61C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C013DAC0 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, struct _LUID *a2, char a3, int a4, int a5)
{
  struct DXGADAPTER *v9; // rdi
  __int64 v10; // rdx
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-E8h] BYREF
  struct DXGADAPTER *v25[3]; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v26[144]; // [rsp+50h] [rbp-C8h] BYREF

  v25[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v25, a2) )
  {
    v9 = v25[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v25[0], 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( (unsigned int)PsGetCurrentProcessSessionId(v15, v14) == ServerSiloServiceSessionId )
        goto LABEL_8;
      v24 = 0LL;
      Current = DXGPROCESS::GetCurrent(v17, v16);
      if ( Current )
      {
        v19 = *((_QWORD *)Current + 11);
        if ( v19 )
          (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v19 + 224))(0LL, &v24, 0LL);
      }
      if ( v24 == *((_QWORD *)v9 + 550) )
      {
LABEL_8:
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     a1,
                                                     (__int64)v9,
                                                     a3,
                                                     a4,
                                                     a5,
                                                     0LL);
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v23 = WdLogNewEntry5_WdError(v22, v21);
        *(_QWORD *)(v23 + 24) = a2->HighPart;
        *(_QWORD *)(v23 + 32) = a2->LowPart;
        WdLogEvent5_WdError(v23);
        PathModalityForAdapterWithCoreAccessHeld = -1071775742;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26, v10);
  }
  else
  {
    PathModalityForAdapterWithCoreAccessHeld = -1073741810;
  }
  DXGADAPTER_REFERENCE::Assign(v25, 0LL);
  return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
}
