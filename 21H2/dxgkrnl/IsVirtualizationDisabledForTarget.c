/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1C01AFF60
 * Callers:
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D7DA0 (DxgkIsVirtualizationDisabledForTarget.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(__int64 a1, unsigned int a2, bool *a3, bool *a4, char *a5)
{
  char v5; // si
  __int64 v8; // rbp
  DXGMONITOR *v9; // rbx
  char IsVirtualModeSupportDisabled; // di
  bool v11; // al
  char *v12; // rcx
  DXGMONITOR *v14; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0;
  if ( !a1 || a2 == -1 || !a3 || !a4 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a1 + 2792);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, 9372LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The selected adapter is render-only",
      9372LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  MONITOR_MGR::AcquireMonitorShared(&v14, a1, a2);
  v9 = v14;
  if ( v14 )
  {
    if ( *((_DWORD *)v14 + 78) != 1 )
      WdLogSingleEntry0(1LL);
    IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v9);
    ExReleaseResourceLite((PERESOURCE)((char *)v9 + 24));
    KeLeaveCriticalRegion();
    if ( IsVirtualModeSupportDisabled )
    {
      *a3 = 1;
      v11 = 1;
      goto LABEL_11;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741632LL);
    RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v14);
  }
  *a3 = *(_BYTE *)(v8 + 289) == 0;
  v11 = *(_BYTE *)(v8 + 290) == 0;
LABEL_11:
  v12 = a5;
  *a4 = v11;
  if ( v12 )
  {
    if ( *a3 || (*(_DWORD *)(v8 + 24) & 0x20) == 0 )
      v5 = 1;
    *v12 = v5;
  }
  return 0LL;
}
