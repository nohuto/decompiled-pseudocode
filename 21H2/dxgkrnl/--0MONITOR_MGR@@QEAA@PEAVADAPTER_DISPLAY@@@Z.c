/*
 * XREFs of ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0028228
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C020FDD0 (MonitorCreateMonitorManager.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::MONITOR_MGR(MONITOR_MGR *this, struct ADAPTER_DISPLAY *a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  KIRQL v7; // al
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx

  *((_DWORD *)this + 18) = -1;
  *(_QWORD *)this = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorAdapterInterface'};
  *((_DWORD *)this + 4) = 16777217;
  *((_QWORD *)this + 1) = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorEventSource'};
  *((_WORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 8) = 0;
  *((_BYTE *)this + 76) = 1;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 29) = -1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 30) = 1;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = -1;
  *((_DWORD *)this + 42) = 1;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 83) = 0LL;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v4 + 24) = this;
  *(_QWORD *)(v4 + 32) = *((_QWORD *)a2 + 2);
  v6 = operator new[](0x30uLL, 0x4D677844u, 64LL, v5);
  *((_QWORD *)this + 83) = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 1;
    *(_DWORD *)(*((_QWORD *)this + 83) + 20LL) = 0;
    KeInitializeEvent((PRKEVENT)(*((_QWORD *)this + 83) + 24LL), NotificationEvent, 1u);
    v7 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
    v8 = (_QWORD *)qword_1C0131A98;
    v9 = (_QWORD *)*((_QWORD *)this + 83);
    if ( *(struct _LIST_ENTRY **)qword_1C0131A98 != &MONITOR_MGR::_MonitorPendingEventTraceHead )
      __fastfail(3u);
    v9[1] = qword_1C0131A98;
    *v9 = &MONITOR_MGR::_MonitorPendingEventTraceHead;
    *v8 = v9;
    qword_1C0131A98 = (__int64)v9;
    KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v7);
  }
  return this;
}
