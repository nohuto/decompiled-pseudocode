/*
 * XREFs of ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B0530
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0177C80 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F28E4 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall AdapterTelemetryEnabledCallback(struct DXGADAPTER *a1, void *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  MONITOR_MGR *v9; // rcx
  __int64 v11; // rax
  _QWORD v12[10]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v13[144]; // [rsp+70h] [rbp-A8h] BYREF

  memset(v12, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v12[1]);
  v12[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v12[3]) = 33;
  LOBYTE(v12[6]) = -1;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, a1, 0LL);
  v3 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
  v7 = v3;
  if ( v3 < 0 )
  {
    if ( v3 != -1073741130 )
    {
      v11 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v11 + 24) = a1;
      *(_QWORD *)(v11 + 32) = v7;
      WdLogEvent5_WdWarning(v11);
      goto LABEL_7;
    }
  }
  else if ( (*((_DWORD *)a1 + 87) & 4) == 0 )
  {
    DXGADAPTER::AdapterTelemetry((__int64)a1, 1, (__int64)v12);
    v8 = *((_QWORD *)a1 + 337);
    if ( v8 )
    {
      v9 = *(MONITOR_MGR **)(v8 + 96);
      if ( v9 )
        MONITOR_MGR::_MonitorTelemetry(v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v12);
    }
  }
  LODWORD(v7) = 0;
LABEL_7:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13, v4);
  return (unsigned int)v7;
}
