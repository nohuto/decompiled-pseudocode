/*
 * XREFs of MonitorFillMonitorDeviceInfo @ 0x1C015E6F8
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C015E558 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0009BD4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C012B260 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(struct HDXGMONITOR__ *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PZZWSTR v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  SymbolicLinkList = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, (struct DXGMONITOR **)&SymbolicLinkList);
  if ( (int)result >= 0 )
  {
    v6 = SymbolicLinkList;
    if ( !SymbolicLinkList )
    {
      v17 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v17);
      v20 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 148), 1u);
    if ( *((_DWORD *)v6 + 108) == 1 && (*((_DWORD *)v6 + 10) & 0x10) == 0 )
    {
      v21 = WdLogNewEntry5_WdDmmEvent(v8, v7);
      *(_QWORD *)(v21 + 24) = v6;
      WdLogEvent5_WdDmmEvent(v21);
      v15 = -1073741275;
    }
    else
    {
      memset((void *)(a2 + 164), 0, 0x100uLL);
      v9 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 7);
      if ( !v9 || !*((_QWORD *)v6 + 12) )
        goto LABEL_13;
      SymbolicLinkList = 0LL;
      DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v9, 0, &SymbolicLinkList);
      v15 = DeviceInterfaces;
      if ( DeviceInterfaces < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = DeviceInterfaces;
      }
      else
      {
        v15 = RtlStringCchCopyW((unsigned __int16 *)(a2 + 164), 0x80uLL, SymbolicLinkList);
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( v15 >= 0 )
        {
          *(_WORD *)(a2 + 166) = 92;
LABEL_13:
          v15 = DXGMONITOR::_FillMonitorDeviceInfo((DXGMONITOR *)v6, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
          if ( v15 == -1071841279 )
            v15 = 0;
          if ( v15 >= 0 )
          {
            v16 = *(_DWORD *)(a2 + 20);
            if ( (v16 & 1) == 0 && !*(_WORD *)(a2 + 36) )
              *(_DWORD *)(a2 + 20) = v16 | 2;
          }
        }
      }
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 148));
    KeLeaveCriticalRegion();
    return (unsigned int)v15;
  }
  return result;
}
