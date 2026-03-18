/*
 * XREFs of MonitorAcquireMonitorPendingEvent @ 0x1C01D2D84
 * Callers:
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C01D2BF4 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CF750 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C030B034 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorAcquireMonitorPendingEvent(DXGADAPTER *this, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rax

  v4 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v5 = *((_QWORD *)this + 349);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225659LL;
  }
  v6 = *(_QWORD *)(v5 + 112);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v6 + 24) + 16LL)) )
    WdLogSingleEntry0(1LL);
  v7 = *(_QWORD *)(v6 + 664);
  if ( v7 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      v7 = *(_QWORD *)(v6 + 664);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 16));
    v7 = *(_QWORD *)(v6 + 664);
  }
  *a2 = v7;
  if ( !v7 )
    return (unsigned int)-1073741823;
  return v4;
}
