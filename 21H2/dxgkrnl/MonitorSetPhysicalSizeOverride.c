/*
 * XREFs of MonitorSetPhysicalSizeOverride @ 0x1C03B1260
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C001356C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 */

__int64 __fastcall MonitorSetPhysicalSizeOverride(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v12, a1, v5, 0);
  v9 = v12;
  if ( v12 )
  {
    *(_DWORD *)(v12 + 472) = a3;
    v10 = 0;
    *(_DWORD *)(v9 + 476) = a4;
    ExReleaseResourceLite((PERESOURCE)(v9 + 24));
    KeLeaveCriticalRegion();
  }
  else
  {
    v10 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  return v10;
}
