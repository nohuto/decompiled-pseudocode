/*
 * XREFs of MonitorCancelSkippedDepartures @ 0x1C0157684
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z @ 0x1C01577D4 (-_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z.c)
 */

__int64 __fastcall MonitorCancelSkippedDepartures(PERESOURCE *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  PERESOURCE v5; // rax
  MONITOR_MGR *Blink; // rcx

  v2 = (unsigned int)a2;
  v4 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = this;
  if ( !this || (_DWORD)v2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  v5 = this[349];
  if ( !v5 || (Blink = (MONITOR_MGR *)v5[1].SystemResourcesList.Blink) == 0LL )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  return MONITOR_MGR::_CancelSkippedDepartures(Blink, v2);
}
