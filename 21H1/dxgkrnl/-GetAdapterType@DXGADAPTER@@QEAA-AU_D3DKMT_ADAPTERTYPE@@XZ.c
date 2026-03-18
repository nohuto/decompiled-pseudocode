/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00FA130
 * Callers:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00EA600 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EE230 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FBAC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017027C (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C020ABEC (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020B838 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
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
  v4 = *((_DWORD *)this + 87) & 4 | (8 * (*((_DWORD *)this + 87) & 1)) | (*((_QWORD *)this + 334) != 0LL ? 2 : 0) | (*((_QWORD *)this + 335) != 0LL);
  v5 = 0;
  if ( (*((_DWORD *)this + 87) & 0x100) != 0 )
    v5 = 64;
  v6 = 0;
  v7 = v5 | v4;
  if ( *((_BYTE *)this + 209) )
    v6 = 128;
  if ( *((int *)this + 576) >= 8704
    && *((_DWORD *)this + 462) >= 0x7007u
    && *((_QWORD *)this + 136)
    && *((_QWORD *)this + 117) )
  {
    v2 = 512;
  }
  v8 = *((_DWORD *)this + 636);
  v9 = v2 | v6 | v7 | (*((_BYTE *)this + 212) != 0 ? 0x100 : 0) | (16
                                                                 * (*((_BYTE *)this + 2511) & 1 | (2
                                                                                                 * ((16 * (v8 & 2)) | *((_BYTE *)this + 2516) & 1))));
  v10 = *((_DWORD *)this + 643) < 2600;
  *a2 = v9;
  if ( !v10 && (v8 & 8) != 0 )
  {
    v12 = *((_DWORD *)this + 509);
    v13 = v9 | 0x800;
    *a2 = v13;
    if ( (v12 & 0x80u) == 0 && (v12 & 0x40) == 0 )
      *a2 = v13 | 0x1000;
  }
  return a2;
}
