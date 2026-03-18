/*
 * XREFs of ??0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z @ 0x1C0207BF4
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02087D4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3618 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

DXGMONITOR *__fastcall DXGMONITOR::DXGMONITOR(char *Tag, struct MONITOR_MGR *a2)
{
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-18h]

  v4 = Tag + 24;
  *((_DWORD *)v4 + 26) = 14;
  ExInitializeResourceLite((PERESOURCE)v4);
  *(_QWORD *)Tag = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorComponentParent'};
  Tag[136] = 0;
  *((_QWORD *)Tag + 1) = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorRegistryRoot'};
  *((_QWORD *)Tag + 2) = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorDxgiGammaSource'};
  *((_QWORD *)Tag + 18) = 0LL;
  *(_OWORD *)(Tag + 152) = 0LL;
  *((_QWORD *)Tag + 24) = 0LL;
  *((_QWORD *)Tag + 25) = 0LL;
  *((_QWORD *)Tag + 26) = 0LL;
  *((_QWORD *)Tag + 27) = 0LL;
  *((_QWORD *)Tag + 28) = 0LL;
  *((_QWORD *)Tag + 29) = 0LL;
  *((_QWORD *)Tag + 30) = 0LL;
  *((_QWORD *)Tag + 31) = 0LL;
  *((_QWORD *)Tag + 32) = 0LL;
  *((_QWORD *)Tag + 33) = 0LL;
  *((_QWORD *)Tag + 34) = 0LL;
  *((_DWORD *)Tag + 45) = -1;
  *((_DWORD *)Tag + 82) = -1;
  *((_DWORD *)Tag + 83) = -1;
  *((_DWORD *)Tag + 84) = -1;
  *((_QWORD *)Tag + 21) = a2;
  *((_DWORD *)Tag + 46) = -2;
  *((_QWORD *)Tag + 39) = 0LL;
  *((_QWORD *)Tag + 40) = 0LL;
  *(_QWORD *)(Tag + 340) = 0LL;
  *(_QWORD *)(Tag + 348) = 1LL;
  *(_QWORD *)(Tag + 356) = 0LL;
  *((_DWORD *)Tag + 91) = 0;
  Tag[368] = 0;
  *((_QWORD *)Tag + 47) = 0LL;
  Tag[384] = 0;
  *(_OWORD *)(Tag + 392) = 0LL;
  *(_OWORD *)(Tag + 408) = 0LL;
  *(_OWORD *)(Tag + 424) = 0LL;
  *((_QWORD *)Tag + 55) = 0LL;
  *((_QWORD *)Tag + 56) = 0LL;
  *((_QWORD *)Tag + 57) = 0LL;
  *((_QWORD *)Tag + 58) = 0LL;
  *((_QWORD *)Tag + 59) = 0LL;
  memset(Tag + 480, 0, 0x13CuLL);
  DWORD2(v10) = 0;
  *((_QWORD *)Tag + 100) = L"MonitorOrientation";
  *(_QWORD *)&v10 = DXGMONITOR::_ValidateMonitorOrientation;
  v7 = v10;
  *((_QWORD *)Tag + 104) = L"DockedOrientation";
  *(_QWORD *)&v10 = DXGMONITOR::_ValidateDockingOrientation;
  DWORD2(v10) = 0;
  *((_OWORD *)Tag + 51) = v7;
  *((_QWORD *)Tag + 108) = L"EnableBoostRefreshRateByDefault";
  *((_DWORD *)Tag + 218) = 352;
  *((_DWORD *)Tag + 219) = 352;
  *((_OWORD *)Tag + 53) = v10;
  *((_DWORD *)Tag + 202) = 332;
  *((_DWORD *)Tag + 203) = 336;
  *((_DWORD *)Tag + 210) = 340;
  *((_DWORD *)Tag + 211) = 344;
  DWORD2(v10) = 0;
  *(_QWORD *)&v10 = DXGMONITOR::_ValidateBoolean;
  *((_OWORD *)Tag + 55) = v10;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v8 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v8 + 32) = a2;
  *(_QWORD *)(v8 + 24) = Tag;
  *((_DWORD *)Tag + 44) = 0;
  LOBYTE(v8) = *((_BYTE *)a2 + 21);
  *((_QWORD *)Tag + 20) = Tag + 152;
  *((_QWORD *)Tag + 19) = Tag + 152;
  Tag[176] = (_BYTE)v8 != 0 ? 0x40 : 0;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 280), 0x4D677844u, 0, 0, 0x20u);
  *((_QWORD *)Tag + 18) = MEMORY[0xFFFFF78000000014];
  Tag[136] = 0;
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 280), Tag, File, 1u, 0x20u);
  return (DXGMONITOR *)Tag;
}
