/*
 * XREFs of ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018B5E0
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01915B8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C018B500 (-_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018E22C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall DXGMONITOR::_RegisterPnPTargetDeviceNotification(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID *v9; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct _DEVICE_OBJECT *v14; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DRIVER_OBJECT *v16; // r9
  PVOID v17; // r8
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  int updated; // eax
  NTSTATUS v26; // eax
  DXGMONITOR *v27; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  v6 = (_QWORD *)((char *)this + 64);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !*v6 )
  {
    DeviceObject = 0LL;
    v9 = (PVOID *)((char *)this + 80);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            (PUNICODE_STRING)((char *)this + 104),
                            0x80000000,
                            (PFILE_OBJECT *)this + 10,
                            &DeviceObject);
    v13 = DeviceObjectPointer;
    if ( DeviceObjectPointer == -1073741772 )
    {
      v30 = WdLogNewEntry5_WdDmmEvent(v12, v11);
      *(_QWORD *)(v30 + 24) = *((_QWORD *)this + 14);
      WdLogEvent5_WdDmmEvent(v30);
    }
    else
    {
      if ( DeviceObjectPointer < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v31 + 24) = *((_QWORD *)this + 14);
        *(_QWORD *)(v31 + 32) = v13;
        WdLogEvent5_WdError(v31);
      }
      else
      {
        if ( !*v9 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v12, v11);
          WdLogEvent5_WdAssertion(v32);
        }
        v14 = DeviceObject;
        if ( !DeviceObject )
        {
          v33 = WdLogNewEntry5_WdAssertion(0LL, v11);
          WdLogEvent5_WdAssertion(v33);
          v14 = DeviceObject;
        }
        AttachedDeviceReference = IoGetAttachedDeviceReference(v14);
        v16 = g_pDriverObject;
        v17 = *v9;
        *((_QWORD *)this + 9) = AttachedDeviceReference;
        v18 = IoRegisterPlugPlayNotification(
                EventCategoryTargetDeviceChange,
                0,
                v17,
                v16,
                DXGMONITOR::_PnPTargetDeviceChangeNotification,
                DeviceObject,
                (PVOID *)this + 8);
        v13 = v18;
        if ( v18 < 0 )
        {
          v34 = WdLogNewEntry5_WdError(v20, v19);
          *(_QWORD *)(v34 + 24) = *((unsigned int *)this + 11);
          *(_QWORD *)(v34 + 32) = v13;
          WdLogEvent5_WdError(v34);
          ObfDereferenceObject(*v9);
          *v9 = 0LL;
        }
        else
        {
          v21 = IoRegisterDeviceInterface(
                  *((PDEVICE_OBJECT *)this + 7),
                  &GUID_DEVINTERFACE_MONITOR,
                  0LL,
                  (PUNICODE_STRING)((char *)this + 88));
          v24 = v21;
          if ( v21 < 0
            || (updated = DXGMONITOR::_UpdatePnPDeviceInterfaceProperties(this), v24 = updated, updated < 0)
            || (v26 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 88), 1u), v24 = v26, v26 < 0) )
          {
            v35 = WdLogNewEntry5_WdError(v23, v22);
            *(_QWORD *)(v35 + 24) = *((unsigned int *)this + 11);
            *(_QWORD *)(v35 + 32) = v24;
            WdLogEvent5_WdError(v35);
          }
          v27 = this;
          if ( *((_DWORD *)this + 108) != 1 && *((_QWORD *)this + 55) )
            v27 = (DXGMONITOR *)*((_QWORD *)this + 55);
          if ( !v27 )
          {
            v36 = WdLogNewEntry5_WdAssertion(v23, v22);
            WdLogEvent5_WdAssertion(v36);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v27 + 296), 1u);
          DXGMONITOR::_MonitorTelemetry(v27, (*((_DWORD *)this + 10) & 0x40) == 0, a2);
          ExReleaseResourceLite((PERESOURCE)((char *)v27 + 296));
          KeLeaveCriticalRegion();
          LODWORD(v13) = 0;
        }
      }
      if ( (int)v13 >= 0 )
        return (unsigned int)v13;
    }
    if ( *((_QWORD *)this + 12) )
    {
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 88));
      *((_QWORD *)this + 12) = 0LL;
    }
    return (unsigned int)v13;
  }
  v29 = WdLogNewEntry5_WdDmmEvent(v8, v7);
  *(_QWORD *)(v29 + 24) = this;
  WdLogEvent5_WdDmmEvent(v29);
  return 0LL;
}
