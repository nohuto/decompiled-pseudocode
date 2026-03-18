/*
 * XREFs of ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018B434
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018AB0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0188870 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C018B600 (-_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_RegisterPnPTargetDeviceNotification(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID *v8; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct _DEVICE_OBJECT *v13; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DRIVER_OBJECT *v15; // r9
  PVOID v16; // r8
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int updated; // eax
  NTSTATUS v25; // eax
  DXGMONITOR *v26; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !*((_QWORD *)this + 8) )
  {
    DeviceObject = 0LL;
    v8 = (PVOID *)((char *)this + 80);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            (PUNICODE_STRING)((char *)this + 104),
                            0x80000000,
                            (PFILE_OBJECT *)this + 10,
                            &DeviceObject);
    v12 = DeviceObjectPointer;
    if ( DeviceObjectPointer == -1073741772 )
    {
      v29 = WdLogNewEntry5_WdDmmEvent(v11, v10);
      *(_QWORD *)(v29 + 24) = *((_QWORD *)this + 14);
      WdLogEvent5_WdDmmEvent(v29);
    }
    else
    {
      if ( DeviceObjectPointer < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v30 + 24) = *((_QWORD *)this + 14);
        *(_QWORD *)(v30 + 32) = v12;
        WdLogEvent5_WdError(v30);
      }
      else
      {
        if ( !*v8 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v11, v10);
          WdLogEvent5_WdAssertion(v31);
        }
        v13 = DeviceObject;
        if ( !DeviceObject )
        {
          v32 = WdLogNewEntry5_WdAssertion(0LL, v10);
          WdLogEvent5_WdAssertion(v32);
          v13 = DeviceObject;
        }
        AttachedDeviceReference = IoGetAttachedDeviceReference(v13);
        v15 = g_pDriverObject;
        v16 = *v8;
        *((_QWORD *)this + 9) = AttachedDeviceReference;
        v17 = IoRegisterPlugPlayNotification(
                EventCategoryTargetDeviceChange,
                0,
                v16,
                v15,
                DXGMONITOR::_PnPTargetDeviceChangeNotification,
                DeviceObject,
                (PVOID *)this + 8);
        v12 = v17;
        if ( v17 < 0 )
        {
          v33 = WdLogNewEntry5_WdError(v19, v18);
          *(_QWORD *)(v33 + 24) = *((unsigned int *)this + 11);
          *(_QWORD *)(v33 + 32) = v12;
          WdLogEvent5_WdError(v33);
          ObfDereferenceObject(*v8);
          *v8 = 0LL;
        }
        else
        {
          v20 = IoRegisterDeviceInterface(
                  *((PDEVICE_OBJECT *)this + 7),
                  &GUID_DEVINTERFACE_MONITOR,
                  0LL,
                  (PUNICODE_STRING)((char *)this + 88));
          v23 = v20;
          if ( v20 < 0
            || (updated = DXGMONITOR::_UpdatePnPDeviceInterfaceProperties(this), v23 = updated, updated < 0)
            || (v25 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 88), 1u), v23 = v25, v25 < 0) )
          {
            v34 = WdLogNewEntry5_WdError(v22, v21);
            *(_QWORD *)(v34 + 24) = *((unsigned int *)this + 11);
            *(_QWORD *)(v34 + 32) = v23;
            WdLogEvent5_WdError(v34);
          }
          v26 = this;
          if ( *((_DWORD *)this + 108) != 1 && *((_QWORD *)this + 55) )
            v26 = (DXGMONITOR *)*((_QWORD *)this + 55);
          if ( !v26 )
          {
            v35 = WdLogNewEntry5_WdAssertion(v22, v21);
            WdLogEvent5_WdAssertion(v35);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v26 + 296), 1u);
          DXGMONITOR::_MonitorTelemetry((__int64)v26, (*((_DWORD *)this + 10) & 0x40) == 0, (__int64)a2);
          ExReleaseResourceLite((PERESOURCE)((char *)v26 + 296));
          KeLeaveCriticalRegion();
          LODWORD(v12) = 0;
        }
      }
      if ( (int)v12 >= 0 )
        return (unsigned int)v12;
    }
    if ( *((_QWORD *)this + 12) )
    {
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 88));
      *((_QWORD *)this + 12) = 0LL;
    }
    return (unsigned int)v12;
  }
  v28 = WdLogNewEntry5_WdDmmEvent(v7, v6);
  *(_QWORD *)(v28 + 24) = this;
  WdLogEvent5_WdDmmEvent(v28);
  return 0LL;
}
