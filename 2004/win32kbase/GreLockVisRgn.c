/*
 * XREFs of GreLockVisRgn @ 0x1C00A5B80
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 *     InitUserScreen @ 0x1C00139D8 (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     GreSuspendDirectDraw @ 0x1C004F950 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C004FB70 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     DestroyMonitorDCs @ 0x1C0062B20 (DestroyMonitorDCs.c)
 *     xxxUserProcessCallout @ 0x1C0072150 (xxxUserProcessCallout.c)
 *     NtUserGetDC @ 0x1C0090AC0 (NtUserGetDC.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0093B20 (GreLockVisRgnSharedOrExclusive.c)
 *     UserGetMonitorDC @ 0x1C00A52E8 (UserGetMonitorDC.c)
 *     DestroyCacheDCEntries @ 0x1C00A5538 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C00A5AA8 (DelayedDestroyCacheDC.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00A67B0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D0C80 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0150378 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1, int a2, int a3)
{
  PERESOURCE v3; // rcx
  __int64 result; // rax
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx

  v3 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    result = ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
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
  v6 = ghsemDCVisRgn;
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
