/*
 * XREFs of MonitorFillMonitorDeviceInfo @ 0x1C0161AB8
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C01B53E0 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000EFE8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C0161C1C (-_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(__int64 a1, __int64 a2)
{
  PZZWSTR v3; // rbx
  NTSTATUS v4; // esi
  __int64 v5; // rax
  struct _DEVICE_OBJECT *v6; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&SymbolicLinkList, a1);
  v3 = SymbolicLinkList;
  v4 = -1073741275;
  if ( !SymbolicLinkList )
  {
    v13 = -1073741275LL;
    v14 = 2LL;
LABEL_23:
    WdLogSingleEntry1(v14, v13);
    goto LABEL_17;
  }
  if ( *((_DWORD *)SymbolicLinkList + 78) == 1 && !*(_BYTE *)(*((_QWORD *)SymbolicLinkList + 25) + 16LL) )
  {
    v13 = 1LL;
    v14 = 7LL;
    goto LABEL_23;
  }
  memset((void *)(a2 + 164), 0, 0x100uLL);
  v5 = *((_QWORD *)v3 + 25);
  v6 = *(struct _DEVICE_OBJECT **)(v5 + 8);
  if ( !v6 || !*(_QWORD *)(v5 + 56) )
  {
LABEL_11:
    v10 = DXGMONITOR::_FillMonitorDeviceInfo((DXGMONITOR *)v3, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
    if ( v10 == -1071841279 )
    {
      v10 = 0;
    }
    else if ( v10 < 0 )
    {
LABEL_16:
      v4 = v10;
      goto LABEL_17;
    }
    v11 = *(_DWORD *)(a2 + 20);
    if ( (v11 & 1) == 0 && !*(_WORD *)(a2 + 36) )
      *(_DWORD *)(a2 + 20) = v11 | 2;
    goto LABEL_16;
  }
  SymbolicLinkList = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v6, 0, &SymbolicLinkList);
  v4 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = DeviceInterfaces;
    goto LABEL_17;
  }
  v4 = RtlStringCchCopyW((unsigned __int16 *)(a2 + 164), 0x80uLL, SymbolicLinkList);
  ExFreePoolWithTag(SymbolicLinkList, 0);
  if ( v4 >= 0 )
  {
    *(_WORD *)(a2 + 166) = 92;
    goto LABEL_11;
  }
LABEL_17:
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)(v3 + 12));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}
