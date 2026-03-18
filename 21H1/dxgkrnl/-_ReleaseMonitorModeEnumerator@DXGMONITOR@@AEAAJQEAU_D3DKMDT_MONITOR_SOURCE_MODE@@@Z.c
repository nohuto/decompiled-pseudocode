/*
 * XREFs of ?_ReleaseMonitorModeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01821F4
 * Callers:
 *     ?ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01820E0 (-ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODES.c)
 *     ?ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02F3B70 (-ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorModeEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  DXGMONITOR *v3; // rdi
  DXGMONITOR **v4; // rdx
  DXGMONITOR *v5; // rax
  DXGMONITOR *v6; // rdx
  DXGMONITOR **v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = this;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v9);
  }
  v4 = (DXGMONITOR **)((char *)v3 + 240);
  if ( !a2 || (v5 = *v4, *v4 == (DXGMONITOR *)v4) )
  {
LABEL_13:
    v10 = WdLogNewEntry5_WdError(this, v4);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = v3;
    WdLogEvent5_WdError(v10);
    return 3223192368LL;
  }
  else
  {
    this = (DXGMONITOR *)&a2[1];
    while ( v5 != this )
    {
      if ( v4 == (DXGMONITOR **)v5 )
        goto LABEL_13;
      v5 = *(DXGMONITOR **)v5;
    }
    v6 = *(DXGMONITOR **)this;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this
      || (v7 = *(DXGMONITOR ***)&a2[1].VideoSignalInfo.VideoStandard, *v7 != this) )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    *((_QWORD *)v6 + 1) = v7;
    operator delete(a2);
    return 0LL;
  }
}
