/*
 * XREFs of ?_GetNextMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C03B83F8
 * Callers:
 *     ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C03B2380 (-AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_H.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetNextMonitorFreqRangeEnumerator(
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ****this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3,
        __int64 a4)
{
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **v7; // rbx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v8; // rax
  __int64 v9; // rdx
  _QWORD **v10; // rcx
  _QWORD *v11; // rax
  _QWORD **v12; // rax
  _OWORD *v13; // rdi
  __int64 v14; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v15; // rcx
  __int64 result; // rax
  __int128 v17; // xmm0
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***v18; // rdx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***v19; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v7 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)(this + 24);
  if ( !a2 )
    goto LABEL_27;
  v8 = *v7;
  if ( *v7 == (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v7 )
    goto LABEL_27;
  while ( v8 != &a2[1] )
  {
    if ( v7 == (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v8 )
      goto LABEL_27;
    v8 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)&v8->Origin;
  }
  v9 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  v10 = this + 22;
  if ( !v9 || (v11 = *v10, *v10 == v10) )
  {
LABEL_27:
    WdLogSingleEntry2(2LL, a2, this);
    return 3223192368LL;
  }
  else
  {
    while ( v11 != (_QWORD *)(v9 + 48) )
    {
      if ( v10 == v11 )
        goto LABEL_27;
      v11 = (_QWORD *)*v11;
    }
    v12 = *(_QWORD ***)(v9 + 48);
    if ( v12 == v10 )
      goto LABEL_26;
    v13 = v12 - 6;
    if ( !v12 )
      v13 = 0LL;
    if ( !v13 )
    {
LABEL_26:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = this;
      return 1075708748LL;
    }
    else
    {
      v14 = operator new[](0x48uLL, 0x4D677844u, 256LL, a4);
      v15 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v14;
      if ( v14 )
      {
        *(_OWORD *)v14 = *v13;
        *(_OWORD *)(v14 + 16) = v13[1];
        v17 = v13[2];
        *(_QWORD *)(v14 + 64) = v13;
        *(_OWORD *)(v14 + 32) = v17;
        v18 = this[25];
        v19 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***)(v14 + 48);
        if ( *v18 != v7 )
          __fastfail(3u);
        *v19 = v7;
        v19[1] = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v18;
        *v18 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v19;
        this[25] = v19;
        result = 0LL;
        *a3 = v15;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        return 3221225495LL;
      }
    }
  }
  return result;
}
