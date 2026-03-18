/*
 * XREFs of MonitorGetMonitorOrientationsFromTarget @ 0x1C01A25F8
 * Callers:
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C01A25AC (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01D2768 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 */

__int64 MonitorGetMonitorOrientationsFromTarget(__int64 a1, unsigned int a2, _DWORD *a3, ...)
{
  struct DXGMONITOR *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  struct DXGMONITOR *v8; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, struct DXGMONITOR *);
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared((struct DXGMONITOR **)va, a1, a2);
  v4 = v8;
  if ( v8 )
  {
    if ( a3 )
    {
      v5 = 0;
      if ( *((_DWORD *)v8 + 84) != *((_DWORD *)v8 + 82) )
        v5 = *((_DWORD *)v8 + 84);
      *a3 = v5;
    }
    v6 = 0;
    ExReleaseResourceLite((PERESOURCE)((char *)v4 + 24));
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return v6;
}
