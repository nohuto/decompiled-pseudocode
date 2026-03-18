/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C02F7BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024A0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C015BB2C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C018BA04 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F7B38 (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C02F8418 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  struct DXGADAPTER *v17; // rdi
  __int64 v18; // r12
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct _FAST_MUTEX *v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  PERESOURCE v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v46; // rdx
  PVOID Reserved2; // rcx
  __int64 v48; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  PERESOURCE Resource; // [rsp+40h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *InputBuffer[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v60[4]; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+70h] [rbp-90h]
  _QWORD v62[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v63[144]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v62, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v62[1]);
  v62[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v62[3]) = 3;
  LOBYTE(v62[6]) = -1;
  v8 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  v9 = 0;
  *(_QWORD *)(v8 + 24) = Context;
  *(_QWORD *)(v8 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    v61 = 0LL;
    *(_OWORD *)InputBuffer = 0LL;
    *(_OWORD *)v60 = 0LL;
    v10 = DxgkCallDriverIoControl(Context, 2302983LL, InputBuffer, 0x28u, InputBuffer, 0x28u, 1u, 0LL);
    v14 = v10;
    if ( v10 < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = Context;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdWarning(v15);
      return 0LL;
    }
    v17 = InputBuffer[0];
    v18 = v60[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, InputBuffer[0], 0LL);
    v20 = COREADAPTERACCESS::AcquireExclusive((__int64)v63, (unsigned int)(v19 + 1));
    if ( v20 >= 0 )
    {
      v25 = *((_QWORD *)v17 + 337);
      if ( !v25 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v22, v21);
        WdLogEvent5_WdAssertion(v26);
        v25 = *((_QWORD *)v17 + 337);
      }
      v27 = *(struct _FAST_MUTEX **)(v25 + 96);
      if ( !v27 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v22, v21);
        WdLogEvent5_WdAssertion(v28);
      }
      Resource = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v27, (unsigned int)v18, 1, (struct DXGMONITOR **)&Resource) >= 0 )
      {
        v32 = Resource;
        if ( !Resource )
        {
          v33 = WdLogNewEntry5_WdAssertion(v30, v29);
          WdLogEvent5_WdAssertion(v33);
        }
        if ( LODWORD(v32[4].OwnerTable) != 1 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v30, v29);
          WdLogEvent5_WdAssertion(v34);
        }
        LODWORD(v35) = 0;
        Resource = (PERESOURCE)((char *)v32 + 296);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v32 + 296), 1u);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
        {
          v39 = WdLogNewEntry5_WdAssertion(v37, v36);
          WdLogEvent5_WdAssertion(v39);
        }
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == *(PDEVICE_OBJECT *)&v32->OwnerEntry.0 )
        {
          v45 = *(_QWORD *)(NotificationStructure + 4);
          v46 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v45);
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v45 )
            v46 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4
                                                          - *(_QWORD *)(NotificationStructure + 12));
          if ( v46 )
          {
            v48 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v45;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v45 )
              v48 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v48 )
            {
              v55 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v45;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v45 )
                v55 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v55 )
              {
                LODWORD(v35) = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DXGMONITOR *)v32, v46, v42, v43);
                v56 = DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)v32);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v27, 6LL, v18, v56, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v27, 5LL, v18, 0, 0LL);
              DeviceObject = 0LL;
              DeviceObjectPointer = IoGetDeviceObjectPointer(
                                      (PUNICODE_STRING)&v32[1],
                                      0x80000000,
                                      (PFILE_OBJECT *)&v32->Reserved2,
                                      &DeviceObject);
              v35 = DeviceObjectPointer;
              if ( DeviceObjectPointer < 0 )
              {
                v52 = WdLogNewEntry5_WdError(v51, v50);
                *(_QWORD *)(v52 + 24) = v32[1].SystemResourcesList.Blink;
                *(_QWORD *)(v52 + 32) = v35;
                WdLogEvent5_WdError(v52);
              }
              if ( !v32->Reserved2 )
              {
                v53 = WdLogNewEntry5_WdAssertion(v51, v50);
                WdLogEvent5_WdAssertion(v53);
              }
              if ( !DeviceObject )
              {
                v54 = WdLogNewEntry5_WdAssertion(v51, v50);
                WdLogEvent5_WdAssertion(v54);
              }
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v27, 4LL, v18, 0, 0LL);
            Reserved2 = v32->Reserved2;
            if ( Reserved2 )
            {
              ObfDereferenceObject(Reserved2);
              v32->Reserved2 = 0LL;
            }
          }
          v9 = v35;
        }
        else
        {
          v44 = WdLogNewEntry5_WdError(v41, v40);
          *(_QWORD *)(v44 + 24) = v18;
          WdLogEvent5_WdError(v44);
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        goto LABEL_45;
      }
      v24 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v24 + 24) = v18;
    }
    else
    {
      if ( v20 != -1073741130 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v22, v21);
        WdLogEvent5_WdAssertion(v23);
      }
      v24 = WdLogNewEntry5_WdError(v22, v21);
    }
    WdLogEvent5_WdError(v24);
LABEL_45:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63, v31);
    return v9;
  }
  return 3221225485LL;
}
