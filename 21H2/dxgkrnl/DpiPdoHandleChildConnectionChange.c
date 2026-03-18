/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x1C02164B8
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0024C50 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C038A234 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoGetChildDescriptor @ 0x1C001E234 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     MonitorCancelSkippedDepartures @ 0x1C0157684 (MonitorCancelSkippedDepartures.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkIsConsoleSessionDispBrokerEnabled @ 0x1C01E0760 (DxgkIsConsoleSessionDispBrokerEnabled.c)
 *     DpiPdoAddPdo @ 0x1C0205A28 (DpiPdoAddPdo.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0205ED8 (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C020643C (MonitorNotifyDeviceNodeReady.c)
 *     DpiPdoRemovePdo @ 0x1C0397BD4 (DpiPdoRemovePdo.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C0397F40 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C03B0AD0 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        BOOLEAN a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rdi
  char v14; // bl
  int v15; // eax
  __int64 v16; // rdx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *ChildDescriptor; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rbx
  char v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r13
  bool v25; // r15
  NTSTATUS v26; // eax
  char *v27; // rcx
  int PhysicalMonitor; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  bool v33; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int8 v34; // [rsp+42h] [rbp-BEh]
  __int64 v35; // [rsp+48h] [rbp-B8h]
  int v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  _DWORD v39[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+9Ch] [rbp-64h]
  int v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A4h] [rbp-5Ch]
  unsigned int v45; // [rsp+A8h] [rbp-58h]
  int v46; // [rsp+ACh] [rbp-54h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  _DWORD OutputBuffer[60]; // [rsp+C0h] [rbp-40h] BYREF

  v11 = a10;
  v12 = a1;
  v13 = *(_QWORD *)(a1 + 64);
  v34 = a4;
  v14 = a4;
  v38 = a9;
  v36 = a3;
  v37 = a1;
  v35 = a10;
  if ( !a8 )
  {
    v42 = 0;
    v41 = 0;
    v40 = 0LL;
    v15 = *(_DWORD *)(v13 + 24) & 0xFFFF00;
    v45 = a2;
    v16 = *(_QWORD *)(v13 + 5728);
    v44 = v15 | 1;
    v47 = *(_QWORD *)(v13 + 2672);
    v39[0] = 30;
    v39[1] = 72;
    memset(&v39[2], 0, 24);
    v43 = 39;
    v46 = a4;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v39, v16);
  }
  ChildDescriptor = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)DpiFdoGetChildDescriptor(v13, a2);
  v20 = (__int64)ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v21 = -1073741810LL;
LABEL_5:
    WdLogSingleEntry1(2LL, v21);
    return (unsigned int)v21;
  }
  if ( !*((_QWORD *)ChildDescriptor + 6) )
  {
    v22 = 0;
    goto LABEL_29;
  }
  v22 = 1;
  if ( IsInternalVideoOutput(ChildDescriptor[1]) )
  {
    v24 = *(_QWORD *)(v23 + 64);
    if ( *(_BYTE *)(v20 + 66) == v14 )
    {
LABEL_27:
      v12 = v37;
      v14 = 1;
      goto LABEL_29;
    }
    v25 = 0;
    v33 = 0;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_OnlyHandlingLidSwitchInBroker__private_reporting,
      0x187CF21u,
      v18,
      v19,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1);
    if ( (int)DxgkIsConsoleSessionDispBrokerEnabled(&v33) >= 0 )
    {
      if ( !v33 )
      {
LABEL_13:
        memset(OutputBuffer, 0, 0xE8uLL);
        v26 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
        if ( v26 < 0 )
        {
          v25 = 0;
          WdLogSingleEntry1(2LL, v26);
        }
        else
        {
          v25 = OutputBuffer[7] != 0;
        }
LABEL_16:
        v27 = *(char **)(v13 + 3896);
        if ( v14 )
        {
          PhysicalMonitor = MonitorCreatePhysicalMonitor(
                              v27,
                              a2,
                              *(struct _DEVICE_OBJECT **)(v20 + 48),
                              1u,
                              v14,
                              0LL,
                              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v35);
          v21 = PhysicalMonitor;
          if ( PhysicalMonitor < 0 )
            goto LABEL_5;
          if ( !*(_BYTE *)(v24 + 944) )
            goto LABEL_26;
          MonitorNotifyDeviceNodeReady(*(PERESOURCE **)(v13 + 3896), a2, *(_QWORD *)(v20 + 48));
        }
        else
        {
          v29 = MonitorRemovePhysicalMonitor(v27, a2);
          v21 = v29;
          if ( v29 < 0 )
            goto LABEL_5;
          if ( v25 || !*(_BYTE *)(v24 + 944) )
            goto LABEL_26;
        }
        v30 = DpiPdoSetMonitorDriverInterfaceState(*(PVOID *)(v20 + 48));
        if ( v30 < 0 )
          WdLogSingleEntry1(3LL, v30);
LABEL_26:
        v11 = v35;
        v22 = 1;
        goto LABEL_27;
      }
      v25 = 1;
    }
    if ( v33 )
      goto LABEL_16;
    goto LABEL_13;
  }
LABEL_29:
  *(_BYTE *)(v20 + 66) = v34;
  if ( v14 )
    MonitorCancelSkippedDepartures(*(PERESOURCE **)(v13 + 3896), a2);
  if ( v22 != v14 || v14 && a6 )
  {
    *(_BYTE *)(v20 + 65) = v14;
    if ( v14 )
    {
      LOBYTE(v19) = a5;
      v31 = DpiPdoAddPdo(v12, v20, (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v36, v19, a6, a7, v38, v11);
    }
    else
    {
      LOBYTE(v18) = 1;
      v31 = DpiPdoRemovePdo(v12, v20, v18, v11);
    }
    LODWORD(v21) = v31;
    if ( v31 >= 0 && v31 != 0x40000000 && v31 != 128 )
    {
      _m_prefetchw((const void *)(v13 + 3644));
      if ( (_InterlockedOr((volatile signed __int32 *)(v13 + 3644), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v13 + 152), BusRelations);
    }
  }
  else
  {
    LODWORD(v21) = 0;
  }
  return (unsigned int)v21;
}
