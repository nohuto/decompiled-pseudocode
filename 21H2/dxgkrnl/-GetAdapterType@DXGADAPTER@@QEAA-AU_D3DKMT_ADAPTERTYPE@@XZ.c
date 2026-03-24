/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F7BC0
 * Callers:
 *     DxgkEscape @ 0x1C00F9100 (DxgkEscape.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0126EB0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C012F02C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C013D324 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01827BC (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0183448 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C020EB6C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020F7B4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, int *a2)
{
  int v2; // ebx
  int v4; // r10d
  int v5; // eax
  int v6; // ecx
  int v7; // r10d
  int v8; // r9d
  int v9; // eax
  bool v10; // cc
  int v12; // ecx
  int v13; // eax

  v2 = 0;
  v4 = *((_DWORD *)this + 87) & 4 | (8 * (*((_DWORD *)this + 87) & 1)) | (*((_QWORD *)this + 337) != 0LL ? 2 : 0) | (*((_QWORD *)this + 338) != 0LL);
  v5 = 0;
  if ( (*((_DWORD *)this + 87) & 0x100) != 0 )
    v5 = 64;
  v6 = 0;
  v7 = v5 | v4;
  if ( *((_BYTE *)this + 209) )
    v6 = 128;
  if ( *((int *)this + 582) >= 8704
    && *((_DWORD *)this + 468) >= 0x7007u
    && *((_QWORD *)this + 136)
    && *((_QWORD *)this + 117) )
  {
    v2 = 512;
  }
  v8 = *((_DWORD *)this + 642);
  v9 = v2 | v6 | v7 | (*((_BYTE *)this + 212) != 0 ? 0x100 : 0) | (16
                                                                 * (*((_BYTE *)this + 2535) & 1 | (2
                                                                                                 * ((16 * (v8 & 2)) | *((_BYTE *)this + 2540) & 1))));
  v10 = *((_DWORD *)this + 649) < 2600;
  *a2 = v9;
  if ( !v10 && (v8 & 8) != 0 )
  {
    v12 = *((_DWORD *)this + 515);
    v13 = v9 | 0x800;
    *a2 = v13;
    if ( (v12 & 0x80u) == 0 && (v12 & 0x40) == 0 )
      *a2 = v13 | 0x1000;
  }
  return a2;
}
