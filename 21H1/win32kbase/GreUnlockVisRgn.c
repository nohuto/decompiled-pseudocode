/*
 * XREFs of GreUnlockVisRgn @ 0x1C007A540
 * Callers:
 *     DestroyMonitorDCs @ 0x1C0049D20 (DestroyMonitorDCs.c)
 *     xxxUserProcessCallout @ 0x1C0066B70 (xxxUserProcessCallout.c)
 *     UserGetMonitorDC @ 0x1C006A2F0 (UserGetMonitorDC.c)
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C0073548 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C0076CDC (DelayedDestroyCacheDC.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C0089A70 (NtUserGetDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 *     InitUserScreen @ 0x1C00A7A88 (InitUserScreen.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00B16E8 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C00B2010 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00B4E88 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreUnlockVisRgn(int a1, __int64 a2, int a3)
{
  int v3; // ecx
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockRelease, a3, (__int64)ghsemDCVisRgn);
  v3 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    result = PsLeavePriorityRegion(v4);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(v3, (unsigned int)&LockRelease, a3, (__int64)ghsemGreLock);
  v6 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    result = PsLeavePriorityRegion(v7);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(v6, (unsigned int)&LockRelease, a3, (__int64)ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v8);
  }
  return result;
}
