/*
 * XREFs of ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01918D4
 * Callers:
 *     ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0191410 (-AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCE.c)
 *     ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0191570 (-CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C01917D8 (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 *     ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02F7080 (-AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 *     ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02F7290 (-AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSO.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CreateMonitorModeEnumerator(
        DXGMONITOR ***this,
        const struct DXGMONITOR::_DMMMONITORSOURCEMODE *a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  char *v6; // rax
  __int64 v7; // rdx
  char *v8; // rcx
  DXGMONITOR **v9; // r8
  DXGMONITOR *v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
  v8 = v6;
  if ( v6 )
  {
    if ( a2 )
    {
      *(_OWORD *)v6 = *(_OWORD *)a2;
      *((_OWORD *)v6 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)v6 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)v6 + 3) = *((_OWORD *)a2 + 3);
      *((_OWORD *)v6 + 4) = *((_OWORD *)a2 + 4);
      *((_OWORD *)v6 + 5) = *((_OWORD *)a2 + 5);
    }
    else
    {
      *(_DWORD *)v6 = (*((_DWORD *)this + 53))++;
      *((_DWORD *)v6 + 22) = 0;
      *((_DWORD *)v6 + 2) = 0;
      *(_QWORD *)(v6 + 12) = -1LL;
      *(_QWORD *)(v6 + 20) = -1LL;
      *(_QWORD *)(v6 + 28) = -1LL;
      *((_QWORD *)v6 + 6) = 0xFFFFFFFFLL;
      *((_DWORD *)v6 + 14) = 8;
    }
    *((_QWORD *)v6 + 14) = a2;
    v9 = this[31];
    v10 = (DXGMONITOR *)(v6 + 96);
    if ( *v9 != (DXGMONITOR *)(this + 30) )
      __fastfail(3u);
    *(_QWORD *)v10 = this + 30;
    *((_QWORD *)v8 + 13) = v9;
    *v9 = v10;
    this[31] = (DXGMONITOR **)v10;
    result = 0LL;
    *a3 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v8;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(0LL, v7);
    WdLogEvent5_WdError(v13);
    return 3221225495LL;
  }
  return result;
}
