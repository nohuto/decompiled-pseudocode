/*
 * XREFs of GreLockVisRgn @ 0x1C0076BF0
 * Callers:
 *     DestroyMonitorDCs @ 0x1C0049D20 (DestroyMonitorDCs.c)
 *     xxxUserProcessCallout @ 0x1C0066B70 (xxxUserProcessCallout.c)
 *     UserGetMonitorDC @ 0x1C006A2F0 (UserGetMonitorDC.c)
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C0073548 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C0076CDC (DelayedDestroyCacheDC.c)
 *     NtUserGetDC @ 0x1C0089A70 (NtUserGetDC.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0090510 (GreLockVisRgnSharedOrExclusive.c)
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 *     InitUserScreen @ 0x1C00A7A88 (InitUserScreen.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00B16E8 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C00B2010 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00B4E88 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C01566C8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1, int a2, int a3)
{
  PERESOURCE v3; // rcx
  __int64 result; // rax
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx

  v3 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    result = ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               (_DWORD)v3,
               (unsigned int)&LockAcquireShared,
               a3,
               (__int64)ghsemDynamicModeChange);
  v5 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v3);
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pqz_EtwWriteTransfer((_DWORD)v3, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v6 = (struct _ERESOURCE *)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v3);
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer((_DWORD)v3, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  }
  return result;
}
