/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C0191DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024D8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memcmp @ 0x1C0028AF0 (memcmp.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0161C8C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01915B8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C01920F4 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  UNICODE_STRING *v11; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // edi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // r12
  int v23; // r8d
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  struct _FAST_MUTEX *v28; // rdi
  int MonitorInstance; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct DXGMONITOR *v34; // rbx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGMONITOR *v54; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v55[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD InputBuffer[3]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v57[4]; // [rsp+88h] [rbp-80h]
  __int64 v58; // [rsp+98h] [rbp-70h]
  _QWORD v59[10]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v60[144]; // [rsp+F8h] [rbp-10h] BYREF

  memset(v59, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v59[1]);
  LODWORD(v55[0]) = -1;
  v59[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v59[3]) = 2;
  LOBYTE(v59[6]) = -1;
  v55[1] = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    LOBYTE(InputBuffer[0]) = 1;
    LODWORD(v55[0]) = 7061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 7061);
  }
  else
  {
    LOBYTE(InputBuffer[0]) = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v55, 7061LL);
  WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  if ( !NotificationStructure )
    goto LABEL_26;
  v10 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v10 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v10 )
  {
    v38 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v38 + 24) = (char *)NotificationStructure + 20;
    WdLogEvent5_WdError(v38);
LABEL_26:
    v16 = -1073741811;
LABEL_27:
    LODWORD(v15) = v16;
    goto LABEL_28;
  }
  v11 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v11, 0x80000000, &FileObject, &DeviceObject);
  v15 = DeviceObjectPointer;
  v16 = -1073741772;
  if ( DeviceObjectPointer == -1073741772 )
  {
    v42 = WdLogNewEntry5_WdDmmEvent(v14, v13);
    *(_QWORD *)(v42 + 24) = v11->Buffer;
    WdLogEvent5_WdDmmEvent(v42);
    goto LABEL_27;
  }
  if ( DeviceObjectPointer < 0 )
  {
    v43 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v43 + 24) = v11->Buffer;
    *(_QWORD *)(v43 + 32) = v15;
    WdLogEvent5_WdError(v43);
    goto LABEL_28;
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  v58 = 0LL;
  *(_OWORD *)&InputBuffer[1] = 0LL;
  *(_OWORD *)v57 = 0LL;
  v15 = (int)DxgkCallDriverIoControl(DeviceObject, 0x232407u, &InputBuffer[1], 0x28u, &InputBuffer[1], 0x28u, 1u, 0LL);
  ObfDereferenceObject(FileObject);
  if ( (int)v15 < 0 )
  {
    v44 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v44 + 24) = v11->Buffer;
    *(_QWORD *)(v44 + 32) = v15;
    WdLogEvent5_WdWarning(v44);
    goto LABEL_28;
  }
  v21 = InputBuffer[1];
  v22 = v57[0];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v60, (struct DXGADAPTER *const)InputBuffer[1], 0LL);
  v24 = COREADAPTERACCESS::AcquireExclusive((__int64)v60, (unsigned int)(v23 + 1));
  LODWORD(v15) = v24;
  if ( v24 < 0 )
  {
    if ( v24 != -1073741130 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v26, v25);
      WdLogEvent5_WdAssertion(v45);
    }
    v46 = WdLogNewEntry5_WdError(v26, v25);
    WdLogEvent5_WdError(v46);
    goto LABEL_24;
  }
  v27 = *(_QWORD *)(v21 + 2696);
  if ( !v27 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v26, v25);
    WdLogEvent5_WdAssertion(v47);
    v27 = *(_QWORD *)(v21 + 2696);
  }
  v28 = *(struct _FAST_MUTEX **)(v27 + 96);
  if ( !v28 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v26, v25);
    WdLogEvent5_WdAssertion(v48);
  }
  v54 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v28, (unsigned int)v22, 1, &v54);
  v15 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( MonitorInstance != -1073741275 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v51[3] = v22;
      v51[4] = v28;
      v51[5] = v15;
      WdLogEvent5_WdError(v51);
      goto LABEL_24;
    }
    v50 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v50 + 24) = v22;
    *(_QWORD *)(v50 + 32) = v28;
    goto LABEL_42;
  }
  v34 = v54;
  if ( !v54 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v31, v30);
    WdLogEvent5_WdAssertion(v49);
  }
  if ( *((PDEVICE_OBJECT *)v34 + 7) != DeviceAttachmentBaseRef )
  {
    v50 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v50 + 24) = v28;
LABEL_42:
    WdLogEvent5_WdWarning(v50);
    goto LABEL_23;
  }
  v35 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
  if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
    v35 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
  if ( v35 )
  {
    LODWORD(v15) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                 ? 0xC000000D
                 : 0;
    goto LABEL_24;
  }
  v36 = DXGMONITOR::_OnMonitorFunctionDriverArrival(v34, v11, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v59, v33);
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v28, 3LL, v22, v36, 0LL);
LABEL_23:
  LODWORD(v15) = 0;
LABEL_24:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60, v37);
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v55, v9);
  if ( LOBYTE(InputBuffer[0]) && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v55[0]);
  return (unsigned int)v15;
}
