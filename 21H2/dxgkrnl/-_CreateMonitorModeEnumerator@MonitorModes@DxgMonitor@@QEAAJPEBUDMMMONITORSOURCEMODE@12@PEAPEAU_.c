/*
 * XREFs of ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C020E1DC
 * Callers:
 *     ?_AcquireFirstModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C020DDF4 (-_AcquireFirstModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C020DE80 (-CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 *     ?_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C020E0E0 (-_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@P.c)
 *     ?_AcquirePreferredModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C03B7F0C (-_AcquirePreferredModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(
        DxgMonitor::MonitorModes *this,
        const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  DxgMonitor::MonitorModes **v9; // r8
  DxgMonitor::MonitorModes *v10; // rax
  __int64 result; // rax
  int v12; // ecx

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v7 = operator new[](0x78uLL, 0x4D677844u, 256LL, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      *(_OWORD *)v7 = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v7 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v7 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v7 + 64) = *((_OWORD *)a2 + 4);
      *(_OWORD *)(v7 + 80) = *((_OWORD *)a2 + 5);
    }
    else
    {
      v12 = *((_DWORD *)this + 31);
      *((_DWORD *)this + 31) = v12 + 1;
      *(_DWORD *)(v7 + 88) = 0;
      *(_DWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 12) = -1LL;
      *(_QWORD *)(v7 + 20) = -1LL;
      *(_QWORD *)(v7 + 28) = -1LL;
      *(_QWORD *)(v7 + 48) = 0xFFFFFFFFLL;
      *(_DWORD *)v7 = v12;
      *(_DWORD *)(v7 + 56) = 8;
    }
    *(_QWORD *)(v7 + 112) = a2;
    v9 = (DxgMonitor::MonitorModes **)*((_QWORD *)this + 20);
    v10 = (DxgMonitor::MonitorModes *)(v7 + 96);
    if ( *v9 != (DxgMonitor::MonitorModes *)((char *)this + 152) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)this + 152;
    *(_QWORD *)(v8 + 104) = v9;
    *v9 = v10;
    *((_QWORD *)this + 20) = v10;
    result = 0LL;
    *a3 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v8;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    return 3221225495LL;
  }
  return result;
}
