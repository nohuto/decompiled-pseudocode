/*
 * XREFs of GreUnlockVisRgn @ 0x1C003CF80
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0011120 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0011340 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0011738 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     InitUserScreen @ 0x1C001F2FC (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C004AA70 (NtUserGetDC.c)
 *     xxxUserProcessCallout @ 0x1C004E310 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C005E338 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C005E8A8 (DelayedDestroyCacheDC.c)
 *     UserGetMonitorDC @ 0x1C005EB90 (UserGetMonitorDC.c)
 *     DestroyMonitorDCs @ 0x1C006F840 (DestroyMonitorDCs.c)
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
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
    result = McTemplateK0pz_EtwWriteTransfer(
               a1,
               (unsigned int)&LockRelease,
               a3,
               (_DWORD)ghsemDCVisRgn,
               (__int64)L"ghsemDCVisRgn");
  v3 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    result = PsLeavePriorityRegion(v4);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v3,
               (unsigned int)&LockRelease,
               a3,
               (_DWORD)ghsemGreLock,
               (__int64)L"ghsemGreLock");
  v6 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    result = PsLeavePriorityRegion(v7);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v6,
               (unsigned int)&LockRelease,
               a3,
               (_DWORD)ghsemDynamicModeChange,
               (__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v8);
  }
  return result;
}
