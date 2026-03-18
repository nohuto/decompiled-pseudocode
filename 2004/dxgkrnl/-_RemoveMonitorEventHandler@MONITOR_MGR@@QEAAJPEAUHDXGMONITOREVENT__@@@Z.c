/*
 * XREFs of ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x1C02F2B78
 * Callers:
 *     MonitorUnregisterMonitorEventCallback @ 0x1C02F5008 (MonitorUnregisterMonitorEventCallback.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorEventHandler(struct _FAST_MUTEX *this, struct HDXGMONITOREVENT__ ***a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  struct HDXGMONITOREVENT__ **p_WaitListHead; // rcx
  struct HDXGMONITOREVENT__ *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  struct HDXGMONITOREVENT__ **v15; // rax
  struct HDXGMONITOREVENT__ **v16; // rcx

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( this == (struct _FAST_MUTEX *)-224LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  KeAcquireGuardedMutex(this + 4);
  p_WaitListHead = (struct HDXGMONITOREVENT__ **)&this[2].Event.Header.WaitListHead;
  if ( a2 && (v8 = *p_WaitListHead, *p_WaitListHead != (struct HDXGMONITOREVENT__ *)p_WaitListHead) )
  {
    while ( v8 != (struct HDXGMONITOREVENT__ *)a2 )
    {
      if ( p_WaitListHead == (struct HDXGMONITOREVENT__ **)v8 )
        goto LABEL_7;
      v8 = *(struct HDXGMONITOREVENT__ **)v8;
    }
    v15 = *a2;
    if ( (*a2)[1] != (struct HDXGMONITOREVENT__ *)a2 || (v16 = a2[1], *v16 != (struct HDXGMONITOREVENT__ *)a2) )
      __fastfail(3u);
    *v16 = (struct HDXGMONITOREVENT__ *)v15;
    v15[1] = (struct HDXGMONITOREVENT__ *)v16;
    operator delete(a2);
    v12 = 0;
  }
  else
  {
LABEL_7:
    v9 = WdLogNewEntry5_WdError(p_WaitListHead, v6);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdError(v9);
    v12 = -1073741811;
  }
  if ( this == (struct _FAST_MUTEX *)-224LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v13);
  }
  KeReleaseGuardedMutex(this + 4);
  return v12;
}
