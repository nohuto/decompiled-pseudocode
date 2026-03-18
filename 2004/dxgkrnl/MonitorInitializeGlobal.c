/*
 * XREFs of MonitorInitializeGlobal @ 0x1C018CCE4
 * Callers:
 *     DriverEntry @ 0x1C0306D00 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int64 v28; // rax
  ULONG Disposition[2]; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v33[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v34[2]; // [rsp+A0h] [rbp-68h] BYREF
  GUID EventCategoryData; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v36[10]; // [rsp+C8h] [rbp-40h] BYREF
  int v37; // [rsp+168h] [rbp+60h]
  _OWORD v38[10]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v39; // [rsp+218h] [rbp+110h]

  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v33[0] = 10748066LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  byte_1C00B2200 = 0;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  ObjectAttributes.RootDirectory = 0LL;
  v36[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v5 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v36[1] = v4;
  v6 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v36[2] = v5;
  v7 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v36[3] = v6;
  v8 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v36[4] = v7;
  v9 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v36[5] = v8;
  v10 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v36[6] = v9;
  v36[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v11 = *(_OWORD *)L"OnBadEDID";
  v12 = *(_DWORD *)L"D";
  v36[8] = v10;
  v36[9] = v11;
  v37 = v12;
  v33[1] = v36;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v33;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    byte_1C00B2200 = 1;
    ZwClose(KeyHandle);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_1C00B2E50 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  EventCategoryData = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v13 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &EventCategoryData,
          g_pDriverObject,
          (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  v16 = v13;
  if ( v13 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v28 + 24) = v16;
    WdLogEvent5_WdError(v28);
  }
  qword_1C00B2EA8 = 0LL;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  Handle = 0LL;
  v34[0] = 11010214LL;
  qword_1C00B2E68 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v17 = *(_OWORD *)(0x1C0000000LL + 496944);
  ObjectAttributes.RootDirectory = 0LL;
  v38[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  Disposition[0] = 0;
  v18 = *(_OWORD *)(0x1C0000000LL + 496960);
  v38[1] = v17;
  v19 = *(_OWORD *)(0x1C0000000LL + 496976);
  v38[2] = v18;
  v20 = *(_OWORD *)(0x1C0000000LL + 496992);
  v38[3] = v19;
  v21 = *(_OWORD *)(0x1C0000000LL + 497008);
  v38[4] = v20;
  v22 = *(_OWORD *)(0x1C0000000LL + 497024);
  v38[5] = v21;
  v23 = *(_OWORD *)(0x1C0000000LL + 497040);
  v38[6] = v22;
  v24 = *(_OWORD *)(0x1C0000000LL + 497056);
  v38[7] = v23;
  v25 = *(_OWORD *)(0x1C0000000LL + 497072);
  v26 = *(_QWORD *)(0x1C0000000LL + 497088);
  v38[8] = v24;
  v38[9] = v25;
  v39 = v26;
  v34[1] = v38;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v34;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, Disposition) >= 0 )
    ZwClose(Handle);
  return (unsigned int)v16;
}
