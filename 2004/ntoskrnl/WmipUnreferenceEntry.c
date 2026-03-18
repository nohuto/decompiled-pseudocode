/*
 * XREFs of WmipUnreferenceEntry @ 0x140646688
 * Callers:
 *     WmipQueryAllData @ 0x140646140 (WmipQueryAllData.c)
 *     WmipDeleteMethod @ 0x140646590 (WmipDeleteMethod.c)
 *     WmipAddProviderIdToPIList @ 0x140646AB0 (WmipAddProviderIdToPIList.c)
 *     WmipSendEnableRequest @ 0x1406F204C (WmipSendEnableRequest.c)
 *     WmipRemoveDS @ 0x14073F85C (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x140740EF8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1407416C8 (WmipDetermineInstanceBaseIndex.c)
 *     WmipQuerySetExecuteSI @ 0x1407418C0 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140741C54 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140741F70 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x14074211C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x1407423D0 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140742764 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipMangleInstanceName @ 0x1407428B8 (WmipMangleInstanceName.c)
 *     WmipDSCleanup @ 0x14075A100 (WmipDSCleanup.c)
 *     WmipSendEnableDisableRequest @ 0x14076B460 (WmipSendEnableDisableRequest.c)
 *     WmipAddMofResource @ 0x1407AC24C (WmipAddMofResource.c)
 *     WmipUpdateDataSource @ 0x1407B1C88 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407B1DE0 (WmipUpdateModifyGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407B2D40 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x14092EDEC (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14092F1DC (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x140930130 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x140930218 (WmipUpdateAddGuid.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  int v7; // ecx
  void (__fastcall *v8)(volatile signed __int64 *); // rax
  void **v9; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64(a2 + 3);
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, (ULONG_PTR)a2, 0LL, 0LL);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  else
  {
    v6 = *a2;
    v7 = *((_DWORD *)a2 + 4) | 0x20000000;
    *((_DWORD *)a2 + 4) = v7;
    if ( v6 && (v7 & 0x10000000) != 0 )
    {
      if ( *(volatile signed __int64 **)(v6 + 8) != a2 || (v9 = (void **)*((_QWORD *)a2 + 1), *v9 != a2) )
        __fastfail(3u);
      *v9 = (void *)v6;
      *(_QWORD *)(v6 + 8) = v9;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    v8 = *(void (__fastcall **)(volatile signed __int64 *))(a1 + 16);
    if ( v8 )
      v8(a2);
    ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
