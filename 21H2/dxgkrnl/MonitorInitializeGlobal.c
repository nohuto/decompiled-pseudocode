/*
 * XREFs of MonitorInitializeGlobal @ 0x1C020D64C
 * Callers:
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C001CBB4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C002806C (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ @ 0x1C020C5CC (-Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ.c)
 *     ??0USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x1C020C934 (--0USB4_HOSTROUTER_MGR@@QEAA@XZ.c)
 *     ?InitializeGlobalCache@EDIDCACHE@DxgMonitor@@SAJXZ @ 0x1C020D904 (-InitializeGlobalCache@EDIDCACHE@DxgMonitor@@SAJXZ.c)
 */

__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // r9
  USB4_HOSTROUTER_MGR *v13; // rax
  USB4_HOSTROUTER_MGR *v14; // rcx
  int v15; // ebx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  HANDLE v27; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v29; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v30; // [rsp+68h] [rbp-A0h] BYREF
  GUID v31; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v32[10]; // [rsp+88h] [rbp-80h] BYREF
  int v33; // [rsp+128h] [rbp+20h]
  _OWORD v34[10]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v35; // [rsp+1D8h] [rbp+D0h]

  WdLogNewEntry5_WdTrace(a1, a2);
  v27 = 0LL;
  *(_QWORD *)&v29.Length = 10748066LL;
  byte_1C0130CD8 = 0;
  v2 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v32[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v3 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v32[1] = v2;
  v4 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v32[2] = v3;
  v5 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v32[3] = v4;
  v6 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v32[4] = v5;
  v7 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v32[5] = v6;
  v8 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v32[6] = v7;
  v32[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v9 = *(_OWORD *)L"OnBadEDID";
  v10 = *(_DWORD *)L"D";
  v32[8] = v8;
  v32[9] = v9;
  v33 = v10;
  v29.Buffer = (wchar_t *)v32;
  if ( DxgkOpenRegistrySubkey(&v27, 0x20019u, 0LL, &v29) >= 0 )
  {
    byte_1C0130CD8 = 1;
    ZwClose(v27);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_1C0131A98 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  v31 = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v11 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &v31,
          g_pDriverObject,
          (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  if ( v11 < 0 )
    WdLogSingleEntry1(2LL, v11);
  v13 = (USB4_HOSTROUTER_MGR *)operator new[](0x98uLL, 0x4D677844u, 64LL, v12);
  if ( v13 )
  {
    MONITOR_MGR::_pUsb4Manager = USB4_HOSTROUTER_MGR::USB4_HOSTROUTER_MGR(v13);
    if ( MONITOR_MGR::_pUsb4Manager )
    {
      v15 = USB4_HOSTROUTER_MGR::Initalize(v14);
      goto LABEL_8;
    }
  }
  else
  {
    MONITOR_MGR::_pUsb4Manager = 0LL;
  }
  WdLogSingleEntry0(2LL);
  v15 = -1073741801;
LABEL_8:
  qword_1C0130EE8 = 0LL;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  Handle = 0LL;
  *(_QWORD *)&v30.Length = 11010214LL;
  qword_1C0131AA8 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  v16 = *(_OWORD *)(0x1C0000000LL + 574224);
  v34[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  v17 = *(_OWORD *)(0x1C0000000LL + 574240);
  v34[1] = v16;
  v18 = *(_OWORD *)(0x1C0000000LL + 574256);
  v34[2] = v17;
  v19 = *(_OWORD *)(0x1C0000000LL + 574272);
  v34[3] = v18;
  v20 = *(_OWORD *)(0x1C0000000LL + 574288);
  v34[4] = v19;
  v21 = *(_OWORD *)(0x1C0000000LL + 574304);
  v34[5] = v20;
  v22 = *(_OWORD *)(0x1C0000000LL + 574320);
  v34[6] = v21;
  v23 = *(_OWORD *)(0x1C0000000LL + 574336);
  v34[7] = v22;
  v24 = *(_OWORD *)(0x1C0000000LL + 574352);
  v25 = *(_QWORD *)(0x1C0000000LL + 574368);
  v34[8] = v23;
  v34[9] = v24;
  v35 = v25;
  v30.Buffer = (wchar_t *)v34;
  if ( DxgkCreateRegistrySubkey(&Handle, 0xF003Fu, 0LL, &v30) >= 0 )
    ZwClose(Handle);
  if ( v15 >= 0 )
    return (unsigned int)DxgMonitor::EDIDCACHE::InitializeGlobalCache();
  return (unsigned int)v15;
}
