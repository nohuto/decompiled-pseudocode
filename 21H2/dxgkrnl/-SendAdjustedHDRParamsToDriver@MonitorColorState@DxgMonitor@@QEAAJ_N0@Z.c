/*
 * XREFs of ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C01E5394
 * Callers:
 *     MonitorSetLastWireformatAndColorspace @ 0x1C01BC270 (MonitorSetLastWireformatAndColorspace.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01E47F0 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C01E52F4 (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C02099B0 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x1C03B89A8 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03B8B10 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209FFC (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C020A0A8 (-_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(
        DxgMonitor::MonitorColorState *this,
        char a2,
        char a3)
{
  __int64 v5; // rax
  bool v6; // zf
  int v7; // esi
  int v8; // edi
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64 *, _DWORD *, _QWORD); // r9
  int v16; // edi
  DxgMonitor::MonitorColorState *v18; // rcx
  int v19; // [rsp+20h] [rbp-50h]
  int v20; // [rsp+24h] [rbp-4Ch]
  int v21; // [rsp+28h] [rbp-48h]
  int v22; // [rsp+2Ch] [rbp-44h]
  _DWORD v23[11]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v24[20]; // [rsp+5Ch] [rbp-14h]
  int v25; // [rsp+B8h] [rbp+48h]
  int v26; // [rsp+C8h] [rbp+58h]

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5) < 2500 )
      return 0LL;
  }
  v6 = a3 == 0;
  v7 = *((_DWORD *)this + 59);
  v8 = 1000;
  v9 = *((_DWORD *)this + 60);
  v10 = *((_DWORD *)this + 61);
  v11 = *((_DWORD *)this + 62);
  v12 = *((_DWORD *)this + 63);
  v25 = *((_DWORD *)this + 64);
  v26 = *((_DWORD *)this + 65);
  v19 = *((_DWORD *)this + 66);
  v21 = *((_DWORD *)this + 82);
  v20 = *((_DWORD *)this + 81);
  v22 = *((_DWORD *)this + 83);
  if ( v6 )
    v8 = *((_DWORD *)this + 98);
  v13 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  v23[0] = v7;
  v23[1] = v9;
  v23[2] = v10;
  v14 = *v13;
  v23[5] = v25;
  v15 = *(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD))(v14 + 80);
  v23[6] = v26;
  v23[7] = v19;
  v23[8] = v20;
  v23[9] = v21;
  v23[10] = v22;
  v23[3] = v11;
  v23[4] = v12;
  *(_QWORD *)v24 = 0LL;
  v16 = v15(v13, v23, 80 * v8 / 0x3E8u);
  if ( v16 < 0 )
  {
    v24[16] = 0;
    *((_OWORD *)this + 13) = 0LL;
    *((_OWORD *)this + 14) = 0LL;
    *(_QWORD *)&v24[4] = 0LL;
    *((_OWORD *)this + 15) = 0LL;
    *(_DWORD *)&v24[12] = 0;
    *((_OWORD *)this + 16) = *(_OWORD *)&v24[4];
    *((_QWORD *)this + 39) = 0LL;
    *((_DWORD *)this + 80) = 0;
    DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(this);
    DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(v18);
  }
  return (unsigned int)v16;
}
