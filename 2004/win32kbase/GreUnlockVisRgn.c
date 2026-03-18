/*
 * XREFs of GreUnlockVisRgn @ 0x1C00811B0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 *     InitUserScreen @ 0x1C00139D8 (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     GreSuspendDirectDraw @ 0x1C004F950 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C004FB70 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     DestroyMonitorDCs @ 0x1C0062B20 (DestroyMonitorDCs.c)
 *     xxxUserProcessCallout @ 0x1C0072150 (xxxUserProcessCallout.c)
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C0090AC0 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C00A52E8 (UserGetMonitorDC.c)
 *     DestroyCacheDCEntries @ 0x1C00A5538 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C00A5AA8 (DelayedDestroyCacheDC.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00A67B0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D0C80 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
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
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
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
