/*
 * XREFs of ?_GetFirstMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C03B82D4
 * Callers:
 *     ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C03B1E10 (-AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetFirstMonitorFreqRangeEnumerator(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  DxgMonitor::MonitorModes *v7; // rcx
  _OWORD *v8; // rbx
  __int64 v9; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v10; // rcx
  char *v11; // rdi
  __int128 v12; // xmm0
  char **v13; // rdx
  char *v14; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !*((_DWORD *)this + 42) )
  {
    WdLogSingleEntry1(7LL, this);
    return 1075708747LL;
  }
  v7 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 22);
  if ( v7 == (DxgMonitor::MonitorModes *)((char *)this + 176) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (_OWORD *)((char *)v7 - 48);
    if ( !v7 )
      v8 = 0LL;
    if ( v8 )
      goto LABEL_11;
  }
  WdLogSingleEntry0(1LL);
LABEL_11:
  v9 = operator new[](0x48uLL, 0x4D677844u, 256LL, a4);
  v10 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v9;
  if ( v9 )
  {
    v11 = (char *)this + 192;
    *(_OWORD *)v9 = *v8;
    *(_OWORD *)(v9 + 16) = v8[1];
    v12 = v8[2];
    *(_QWORD *)(v9 + 64) = v8;
    *(_OWORD *)(v9 + 32) = v12;
    v13 = (char **)*((_QWORD *)v11 + 1);
    v14 = (char *)(v9 + 48);
    if ( *v13 != v11 )
      __fastfail(3u);
    *(_QWORD *)v14 = v11;
    *((_QWORD *)v14 + 1) = v13;
    *v13 = v14;
    *((_QWORD *)v11 + 1) = v14;
    result = 0LL;
    *a2 = v10;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    return 3221225495LL;
  }
  return result;
}
