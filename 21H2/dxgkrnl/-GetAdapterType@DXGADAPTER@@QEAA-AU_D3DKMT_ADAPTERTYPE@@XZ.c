/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0179770
 * Callers:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0167C20 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC7F0 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02BD52C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BE1F8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, int *a2)
{
  int v2; // edi
  int v5; // r10d
  int v6; // eax
  int v7; // ecx
  int v8; // r10d
  int v9; // edx
  int v10; // eax
  int v12; // ecx
  int v13; // eax

  v2 = 0;
  v5 = *((_DWORD *)this + 109) & 4 | (8 * (*((_DWORD *)this + 109) & 1)) | (*((_QWORD *)this + 349) != 0LL ? 2 : 0) | (*((_QWORD *)this + 350) != 0LL);
  v6 = 0;
  if ( (*((_DWORD *)this + 109) & 0x100) != 0 )
    v6 = 64;
  v7 = 0;
  v8 = v6 | v5;
  if ( *((_BYTE *)this + 209) )
    v7 = 128;
  if ( *((int *)this + 606) >= 8704
    && *((_DWORD *)this + 492) >= 0x7007u
    && *((_QWORD *)this + 144)
    && *((_QWORD *)this + 128) )
  {
    v2 = 512;
  }
  v9 = *((_DWORD *)this + 666) >> 3;
  v10 = v2 | v7 | v8 | (*((_BYTE *)this + 212) != 0 ? 0x100 : 0) | (16
                                                                  * (*((_BYTE *)this + 2631) & 1 | (2
                                                                                                  * ((16 * (*((_DWORD *)this + 666) & 2)) | *((_BYTE *)this + 2636) & 1))));
  *a2 = v10;
  if ( (v9 & 1) != 0 )
  {
    v12 = *((_DWORD *)this + 539);
    v13 = v10 | 0x800;
    *a2 = v13;
    if ( (v12 & 0x80u) == 0 && (v12 & 0x40) == 0 )
      *a2 = v13 | 0x1000;
  }
  return a2;
}
