/*
 * XREFs of ?_ClearColorSpaceTransform@DXGMONITOR@@AEAAXXZ @ 0x1C01663F0
 * Callers:
 *     MonitorSetLastWireformatAndColorspace @ 0x1C013EAF0 (MonitorSetLastWireformatAndColorspace.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DXGMONITOR::_ClearColorSpaceTransform(DXGMONITOR *this, __int64 a2)
{
  struct _FAST_MUTEX *v2; // rbx
  __int64 v4; // rdx
  ReferenceCounted *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = (struct _FAST_MUTEX *)((char *)this + 1184);
  if ( this == (DXGMONITOR *)-1184LL )
  {
    v6 = WdLogNewEntry5_WdAssertion(-1184LL, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  KeAcquireGuardedMutex(v2);
  v5 = (ReferenceCounted *)*((_QWORD *)this + 155);
  if ( v5 )
    ReferenceCounted::Release(v5, v4);
  *((_QWORD *)this + 155) = 0LL;
  if ( !v2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v7);
  }
  KeReleaseGuardedMutex(v2);
}
