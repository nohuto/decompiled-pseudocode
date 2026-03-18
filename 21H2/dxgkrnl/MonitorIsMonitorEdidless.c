/*
 * XREFs of MonitorIsMonitorEdidless @ 0x1C0163930
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01659C0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorIsMonitorEdidless(__int64 a1, __int64 a2)
{
  struct _ERESOURCE *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    a2 = -1073741811LL;
LABEL_7:
    WdLogSingleEntry1(2LL, a2);
    return (unsigned int)a2;
  }
  MONITOR_MGR::AcquireMonitorShared(&v5, a1);
  if ( !v5 )
  {
    a2 = -1073741275LL;
    goto LABEL_7;
  }
  v3 = (struct _ERESOURCE *)(v5 + 24);
  *(_BYTE *)a2 = *(_QWORD *)(*(_QWORD *)(v5 + 216) + 128LL) == 0LL;
  LODWORD(a2) = 0;
  ExReleaseResourceLite(v3);
  KeLeaveCriticalRegion();
  return (unsigned int)a2;
}
