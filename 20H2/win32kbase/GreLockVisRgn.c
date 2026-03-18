/*
 * XREFs of GreLockVisRgn @ 0x1C005E980
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0011120 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0011340 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0011738 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     InitUserScreen @ 0x1C001F2FC (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 *     NtUserGetDC @ 0x1C004AA70 (NtUserGetDC.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C004D0E0 (GreLockVisRgnSharedOrExclusive.c)
 *     xxxUserProcessCallout @ 0x1C004E310 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C005E338 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C005E8A8 (DelayedDestroyCacheDC.c)
 *     UserGetMonitorDC @ 0x1C005EB90 (UserGetMonitorDC.c)
 *     DestroyMonitorDCs @ 0x1C006F840 (DestroyMonitorDCs.c)
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014DDC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

PVOID __fastcall GreLockVisRgn(__int64 a1, int a2, int a3)
{
  PERESOURCE v3; // rcx
  PVOID result; // rax
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx

  v3 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    result = (PVOID)ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = (PVOID)McTemplateK0pz_EtwWriteTransfer(
                      (_DWORD)v3,
                      (unsigned int)&LockAcquireShared,
                      a3,
                      (_DWORD)ghsemDynamicModeChange,
                      (__int64)L"ghsemDynamicModeChange");
  v5 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v3);
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = (PVOID)McTemplateK0pqz_EtwWriteTransfer(
                      (_DWORD)v3,
                      a2,
                      a3,
                      (_DWORD)ghsemGreLock,
                      2,
                      (__int64)L"ghsemGreLock");
  v6 = (struct _ERESOURCE *)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v3);
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return (PVOID)McTemplateK0pqz_EtwWriteTransfer(
                      (_DWORD)v3,
                      a2,
                      a3,
                      (_DWORD)ghsemDCVisRgn,
                      3,
                      (__int64)L"ghsemDCVisRgn");
  }
  return result;
}
