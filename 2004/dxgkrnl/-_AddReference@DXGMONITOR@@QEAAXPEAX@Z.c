/*
 * XREFs of ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C012658C
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01192D0 (DxgkGetMonitorInternalInfo.c)
 *     MonitorGetMonitorHandle @ 0x1C0126370 (MonitorGetMonitorHandle.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_AddReference(DXGMONITOR *this, void *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)((char *)this + 400), a2, File, 1u, 0x20u) < 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    WdLogEvent5_WdAssertion(v4);
  }
}
