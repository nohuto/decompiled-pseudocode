/*
 * XREFs of ?_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C02F8EC0
 * Callers:
 *     ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C02F5890 (-AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  DXGMONITOR *v7; // rcx
  _OWORD *v8; // rbx
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v12; // rcx
  __int64 v13; // rax
  char *v14; // rdi
  __int128 v15; // xmm0
  char **v16; // rdx
  char *v17; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_DWORD *)this + 64) )
  {
    v5 = WdLogNewEntry5_WdDmmEvent(this, a2);
    *(_QWORD *)(v5 + 24) = this;
    WdLogEvent5_WdDmmEvent(v5);
    return 1075708747LL;
  }
  v7 = (DXGMONITOR *)*((_QWORD *)this + 33);
  if ( v7 == (DXGMONITOR *)((char *)this + 264) )
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
  v9 = WdLogNewEntry5_WdAssertion(v7, a2);
  WdLogEvent5_WdAssertion(v9);
LABEL_11:
  v10 = (char *)operator new[](0x48uLL, 0x4D677844u, PagedPool);
  v12 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v10;
  if ( v10 )
  {
    v14 = (char *)this + 280;
    *(_OWORD *)v10 = *v8;
    *((_OWORD *)v10 + 1) = v8[1];
    v15 = v8[2];
    *((_QWORD *)v10 + 8) = v8;
    *((_OWORD *)v10 + 2) = v15;
    v16 = (char **)*((_QWORD *)v14 + 1);
    v17 = v10 + 48;
    if ( *v16 != v14 )
      __fastfail(3u);
    *(_QWORD *)v17 = v14;
    *((_QWORD *)v17 + 1) = v16;
    *v16 = v17;
    *((_QWORD *)v14 + 1) = v17;
    result = 0LL;
    *a2 = v12;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(0LL, v11);
    WdLogEvent5_WdError(v13);
    return 3221225495LL;
  }
  return result;
}
