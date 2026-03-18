/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x1C01657D8
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0020060 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C02C63B4 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000F30C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoGetChildDescriptor @ 0x1C00196A0 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiPdoAddPdo @ 0x1C016594C (DpiPdoAddPdo.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C016C5A4 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C016C7D4 (MonitorCreatePhysicalMonitor.c)
 *     DpiPdoRemovePdo @ 0x1C02D4D70 (DpiPdoRemovePdo.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C02D5120 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02EF9B4 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a9)
{
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // r13
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *ChildDescriptor; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v19; // rsi
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rbx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r15
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r13
  __int64 v32; // rax
  void *v33; // rcx
  int PhysicalMonitor; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  ULONG OutputBufferLength; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+28h] [rbp-D8h]
  _DWORD v46[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+78h] [rbp-88h]
  int v49; // [rsp+7Ch] [rbp-84h]
  int v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+84h] [rbp-7Ch]
  unsigned int v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+8Ch] [rbp-74h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  _DWORD OutputBuffer[60]; // [rsp+A0h] [rbp-60h] BYREF

  v10 = a1;
  v11 = *(_QWORD *)(a1 + 64);
  v12 = a4;
  v13 = a4;
  if ( !a8 )
  {
    v49 = 0;
    v48 = 0;
    v47 = 0LL;
    v24 = *(_QWORD *)(v11 + 5936);
    v25 = *(_DWORD *)(v11 + 24) & 0xFFFF00;
    v46[0] = 30;
    v46[1] = 72;
    v51 = v25 | 1;
    v54 = *(_QWORD *)(v11 + 2672);
    memset(&v46[2], 0, 24);
    v50 = 39;
    v52 = a2;
    v53 = a4;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46, v24);
  }
  ChildDescriptor = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)DpiFdoGetChildDescriptor(v11, a2);
  v19 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v22 = -1073741810LL;
    goto LABEL_18;
  }
  if ( !*((_QWORD *)ChildDescriptor + 6) )
  {
    LOBYTE(v17) = 0;
    goto LABEL_6;
  }
  if ( IsInternalVideoOutput(ChildDescriptor[1]) )
  {
    v27 = *(_QWORD *)(v20 + 64);
    if ( *((_BYTE *)v19 + 66) == v12 )
    {
LABEL_32:
      v10 = a1;
      v12 = 1;
      goto LABEL_6;
    }
    memset(OutputBuffer, 0, 0xE8uLL);
    v28 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
    v31 = v28;
    if ( v28 < 0 )
    {
      OutputBuffer[7] = 0;
      v32 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v32 + 24) = v31;
      WdLogEvent5_WdError(v32);
    }
    v33 = *(void **)(v11 + 3896);
    if ( v12 )
    {
      PhysicalMonitor = MonitorCreatePhysicalMonitor(v33, a2, *((struct _DEVICE_OBJECT **)v19 + 6), 1u, v12, a9);
      v22 = PhysicalMonitor;
      if ( PhysicalMonitor >= 0 )
      {
        if ( *(_BYTE *)(v27 + 944) )
        {
          MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v11 + 3896), a2);
          goto LABEL_29;
        }
        goto LABEL_31;
      }
    }
    else
    {
      v35 = MonitorRemovePhysicalMonitor(v33, a2, OutputBuffer[7] != 0, a9);
      v22 = v35;
      if ( v35 >= 0 )
      {
        if ( !OutputBuffer[7] && *(_BYTE *)(v27 + 944) )
        {
LABEL_29:
          v36 = DpiPdoSetMonitorDriverInterfaceState(*((PVOID *)v19 + 6));
          v39 = v36;
          if ( v36 < 0 )
          {
            v40 = WdLogNewEntry5_WdWarning(v38, v37, v17);
            *(_QWORD *)(v40 + 24) = v39;
            WdLogEvent5_WdWarning(v40);
          }
        }
LABEL_31:
        LOBYTE(v17) = 1;
        v13 = a4;
        goto LABEL_32;
      }
    }
LABEL_18:
    v26 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v26 + 24) = v22;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v22;
  }
LABEL_6:
  *((_BYTE *)v19 + 66) = v13;
  if ( (_BYTE)v17 != v12 || v12 && a6 )
  {
    *((_BYTE *)v19 + 65) = v12;
    if ( v12 )
    {
      LOBYTE(v18) = a5;
      LOBYTE(v42) = a7;
      LOBYTE(OutputBufferLength) = a6;
      v21 = DpiPdoAddPdo(v10, v19, a3, v18, OutputBufferLength, v42, a9);
    }
    else
    {
      LOBYTE(v17) = 1;
      v21 = DpiPdoRemovePdo(v10, v19, v17, a9);
    }
    LODWORD(v22) = v21;
    if ( v21 >= 0 && v21 != 0x40000000 )
    {
      _m_prefetchw((const void *)(v11 + 3644));
      if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 3644), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v11 + 152), BusRelations);
    }
  }
  else
  {
    LODWORD(v22) = 0;
  }
  return (unsigned int)v22;
}
