/*
 * XREFs of ?_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C020E0E0
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C020DFB0 (-AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEM.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C020E1DC (-_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetNextMonitorModeEnumerator(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v6; // rcx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v7; // rax
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v8; // rdx
  _QWORD **v9; // rcx
  _QWORD *v10; // rax
  _QWORD **v11; // rax
  __int64 result; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v6 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)((char *)this + 152);
  if ( !a2 )
    goto LABEL_23;
  v7 = *v6;
  if ( *v6 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v6 )
    goto LABEL_23;
  while ( v7 != &a2[1] )
  {
    if ( v6 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v7 )
      goto LABEL_23;
    v7 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v7->Id;
  }
  v8 = *(const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE **)&a2[1].VideoSignalInfo.TotalSize.cy;
  v9 = (_QWORD **)((char *)this + 128);
  if ( !v8 || (v10 = *v9, *v9 == v9) )
  {
LABEL_23:
    WdLogSingleEntry2(2LL, a2, this);
    return 3223192368LL;
  }
  else
  {
    while ( v10 != (_QWORD *)((char *)v8 + 96) )
    {
      if ( v9 == v10 )
        goto LABEL_23;
      v10 = (_QWORD *)*v10;
    }
    v11 = (_QWORD **)*((_QWORD *)v8 + 12);
    if ( v11 == v9 )
      goto LABEL_20;
    v8 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)(v11 - 12);
    if ( !v11 )
      v8 = 0LL;
    if ( !v8 )
    {
LABEL_20:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = this;
      return 1075708748LL;
    }
    else
    {
      v13 = 0LL;
      result = DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(this, v8, &v13);
      if ( (int)result >= 0 )
        *a3 = v13;
    }
  }
  return result;
}
