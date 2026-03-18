/*
 * XREFs of ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016C960
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016CC0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016B084 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C016CB2C (-_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_RegisterPnPTargetDeviceNotification(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  PVOID *v7; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct _DEVICE_OBJECT *v12; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DRIVER_OBJECT *v14; // r9
  PVOID v15; // r8
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  int updated; // eax
  NTSTATUS v24; // eax
  DXGMONITOR *v25; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !*((_QWORD *)this + 8) )
  {
    DeviceObject = 0LL;
    v7 = (PVOID *)((char *)this + 80);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            (PUNICODE_STRING)((char *)this + 104),
                            0x80000000,
                            (PFILE_OBJECT *)this + 10,
                            &DeviceObject);
    v11 = DeviceObjectPointer;
    if ( DeviceObjectPointer == -1073741772 )
    {
      v28 = WdLogNewEntry5_WdDmmEvent(v10);
      *(_QWORD *)(v28 + 24) = *((_QWORD *)this + 14);
      WdLogEvent5_WdDmmEvent(v28);
    }
    else
    {
      if ( DeviceObjectPointer < 0 )
      {
        v29 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v29 + 24) = *((_QWORD *)this + 14);
        *(_QWORD *)(v29 + 32) = v11;
        WdLogEvent5_WdError(v29);
      }
      else
      {
        if ( !*v7 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v10, v9);
          WdLogEvent5_WdAssertion(v30);
        }
        v12 = DeviceObject;
        if ( !DeviceObject )
        {
          v31 = WdLogNewEntry5_WdAssertion(0LL, v9);
          WdLogEvent5_WdAssertion(v31);
          v12 = DeviceObject;
        }
        AttachedDeviceReference = IoGetAttachedDeviceReference(v12);
        v14 = g_pDriverObject;
        v15 = *v7;
        *((_QWORD *)this + 9) = AttachedDeviceReference;
        v16 = IoRegisterPlugPlayNotification(
                EventCategoryTargetDeviceChange,
                0,
                v15,
                v14,
                DXGMONITOR::_PnPTargetDeviceChangeNotification,
                DeviceObject,
                (PVOID *)this + 8);
        v11 = v16;
        if ( v16 < 0 )
        {
          v32 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v32 + 24) = *((unsigned int *)this + 11);
          *(_QWORD *)(v32 + 32) = v11;
          WdLogEvent5_WdError(v32);
          ObfDereferenceObject(*v7);
          *v7 = 0LL;
        }
        else
        {
          v19 = IoRegisterDeviceInterface(
                  *((PDEVICE_OBJECT *)this + 7),
                  &GUID_DEVINTERFACE_MONITOR,
                  0LL,
                  (PUNICODE_STRING)((char *)this + 88));
          v22 = v19;
          if ( v19 < 0
            || (updated = DXGMONITOR::_UpdatePnPDeviceInterfaceProperties(this), v22 = updated, updated < 0)
            || (v24 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 88), 1u), v22 = v24, v24 < 0) )
          {
            v33 = WdLogNewEntry5_WdError(v21, v20);
            *(_QWORD *)(v33 + 24) = *((unsigned int *)this + 11);
            *(_QWORD *)(v33 + 32) = v22;
            WdLogEvent5_WdError(v33);
          }
          v25 = this;
          if ( *((_DWORD *)this + 108) != 1 && *((_QWORD *)this + 55) )
            v25 = (DXGMONITOR *)*((_QWORD *)this + 55);
          if ( !v25 )
          {
            v34 = WdLogNewEntry5_WdAssertion(v21, v20);
            WdLogEvent5_WdAssertion(v34);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v25 + 296), 1u);
          DXGMONITOR::_MonitorTelemetry((__int64)v25, (*((_DWORD *)this + 10) & 0x40) == 0, (__int64)a2);
          ExReleaseResourceLite((PERESOURCE)((char *)v25 + 296));
          KeLeaveCriticalRegion();
          LODWORD(v11) = 0;
        }
      }
      if ( (int)v11 >= 0 )
        return (unsigned int)v11;
    }
    if ( *((_QWORD *)this + 12) )
    {
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 88));
      *((_QWORD *)this + 12) = 0LL;
    }
    return (unsigned int)v11;
  }
  v27 = WdLogNewEntry5_WdDmmEvent(v6);
  *(_QWORD *)(v27 + 24) = this;
  WdLogEvent5_WdDmmEvent(v27);
  return 0LL;
}
