/*
 * XREFs of ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C02F5C40
 * Callers:
 *     ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C02F28F0 (-AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_H.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3,
        __int64 a4)
{
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v5; // rdi
  DXGMONITOR *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  DXGMONITOR **v9; // rbx
  DXGMONITOR *v10; // rax
  DXGMONITOR *v11; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v12; // r8
  DXGMONITOR *v13; // rax
  _OWORD *v14; // rdi
  char *v15; // rax
  __int64 v16; // rdx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  __int128 v20; // xmm0
  DXGMONITOR ***v21; // rdx
  DXGMONITOR ***v22; // rax
  __int64 v23; // rax

  v5 = a2;
  v6 = this;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (DXGMONITOR **)((char *)v6 + 280);
  if ( !v5 )
    goto LABEL_27;
  v10 = *v9;
  if ( *v9 == (DXGMONITOR *)v9 )
    goto LABEL_27;
  this = (DXGMONITOR *)&v5[1];
  while ( v10 != this )
  {
    if ( v9 == (DXGMONITOR **)v10 )
      goto LABEL_27;
    v10 = *(DXGMONITOR **)v10;
  }
  a2 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const *)&v5[1].RangeLimits.MaxVSyncFreq.Denominator;
  this = (DXGMONITOR *)((char *)v6 + 264);
  if ( !a2 || (v11 = *(DXGMONITOR **)this, *(DXGMONITOR **)this == this) )
  {
LABEL_27:
    v23 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v23 + 24) = v5;
    *(_QWORD *)(v23 + 32) = v6;
    WdLogEvent5_WdError(v23);
    return 3223192368LL;
  }
  else
  {
    v12 = a2 + 1;
    while ( v11 != (DXGMONITOR *)v12 )
    {
      if ( this == v11 )
        goto LABEL_27;
      v11 = *(DXGMONITOR **)v11;
    }
    v13 = *(DXGMONITOR **)&a2[1].Origin;
    if ( v13 == this )
      goto LABEL_26;
    v14 = (_OWORD *)((char *)v13 - 48);
    if ( !v13 )
      v14 = 0LL;
    if ( !v14 )
    {
LABEL_26:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, v12, a4) + 24) = v6;
      return 1075708748LL;
    }
    else
    {
      v15 = (char *)operator new[](0x48uLL, 0x4D677844u, PagedPool);
      v17 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v15;
      if ( v15 )
      {
        *(_OWORD *)v15 = *v14;
        *((_OWORD *)v15 + 1) = v14[1];
        v20 = v14[2];
        *((_QWORD *)v15 + 8) = v14;
        *((_OWORD *)v15 + 2) = v20;
        v21 = (DXGMONITOR ***)*((_QWORD *)v6 + 36);
        v22 = (DXGMONITOR ***)(v15 + 48);
        if ( *v21 != v9 )
          __fastfail(3u);
        *v22 = v9;
        v22[1] = (DXGMONITOR **)v21;
        *v21 = (DXGMONITOR **)v22;
        *((_QWORD *)v6 + 36) = v22;
        result = 0LL;
        *a3 = v17;
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(0LL, v16);
        WdLogEvent5_WdError(v18);
        return 3221225495LL;
      }
    }
  }
  return result;
}
