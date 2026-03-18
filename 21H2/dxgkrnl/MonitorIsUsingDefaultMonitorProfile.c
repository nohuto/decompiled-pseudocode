/*
 * XREFs of MonitorIsUsingDefaultMonitorProfile @ 0x1C03B0884
 * Callers:
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C03A2850 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorIsUsingDefaultMonitorProfile(__int64 a1, _BYTE *a2)
{
  unsigned int v3; // ebx
  struct _ERESOURCE *v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v6, a1);
  if ( v6 )
  {
    v4 = (struct _ERESOURCE *)(v6 + 24);
    *a2 = *(_BYTE *)(*(_QWORD *)(v6 + 232) + 116LL);
    v3 = 0;
    ExReleaseResourceLite(v4);
    KeLeaveCriticalRegion();
  }
  else
  {
    v3 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return v3;
}
