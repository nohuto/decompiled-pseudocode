/*
 * XREFs of MonitorGetDisplayHdrSupportLevel @ 0x1C01638C4
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01659C0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorGetDisplayHdrSupportLevel(__int64 a1, _DWORD *a2)
{
  struct _ERESOURCE *v3; // rcx
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v6, a1);
  if ( v6 )
  {
    v3 = (struct _ERESOURCE *)(v6 + 24);
    *a2 = *(_DWORD *)(*(_QWORD *)(v6 + 224) + 396LL);
    v4 = 0;
    ExReleaseResourceLite(v3);
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return v4;
}
