/*
 * XREFs of MonitorGetSDRWhiteLevel @ 0x1C03B066C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorGetSDRWhiteLevel(__int64 a1, __int64 a2)
{
  struct _ERESOURCE *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v5, a1);
    if ( v5 )
    {
      v3 = (struct _ERESOURCE *)(v5 + 24);
      *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v5 + 224) + 392LL);
      LODWORD(a2) = 0;
      ExReleaseResourceLite(v3);
      KeLeaveCriticalRegion();
      return (unsigned int)a2;
    }
    a2 = -1073741275LL;
  }
  else
  {
    a2 = -1073741811LL;
  }
  WdLogSingleEntry1(2LL, a2);
  return (unsigned int)a2;
}
