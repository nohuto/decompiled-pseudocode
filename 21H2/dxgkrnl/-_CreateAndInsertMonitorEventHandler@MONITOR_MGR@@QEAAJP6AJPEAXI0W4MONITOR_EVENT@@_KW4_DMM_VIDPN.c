/*
 * XREFs of ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C01944B4
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0193CC0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
        struct _FAST_MUTEX *this,
        int (__high *a2)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *),
        void *a3,
        struct HDXGMONITOREVENT__ **a4)
{
  MONITOR_MGR *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  MONITOR_MGR *v9; // rdi
  __int64 v10; // rdx
  MONITOR_MGR **Blink; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( !a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  *a4 = 0LL;
  v6 = (MONITOR_MGR *)operator new[](0x20uLL, 0x4D677844u, PagedPool);
  v9 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 2) = VIDPN_MGR::_MonitorEventHandler;
    if ( this == (struct _FAST_MUTEX *)-224LL )
    {
      v15 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v15);
    }
    KeAcquireGuardedMutex(this + 4);
    Blink = (MONITOR_MGR **)this[2].Event.Header.WaitListHead.Blink;
    if ( *Blink != (MONITOR_MGR *)&this[2].Event.Header.WaitListHead )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)this + 144;
    *((_QWORD *)v9 + 1) = Blink;
    *Blink = v9;
    this[2].Event.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v9;
    *a4 = v9;
    if ( this == (struct _FAST_MUTEX *)-224LL )
    {
      v16 = WdLogNewEntry5_WdAssertion(Blink, v10);
      WdLogEvent5_WdAssertion(v16);
    }
    KeReleaseGuardedMutex(this + 4);
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v8, v7);
    WdLogEvent5_WdError(v14);
    return 3221225495LL;
  }
}
