/*
 * XREFs of WmipUnreferenceEntry @ 0x140647C78
 * Callers:
 *     WmipQueryAllData @ 0x140647730 (WmipQueryAllData.c)
 *     WmipDeleteMethod @ 0x140647B80 (WmipDeleteMethod.c)
 *     WmipAddProviderIdToPIList @ 0x1406480A0 (WmipAddProviderIdToPIList.c)
 *     WmipSendEnableRequest @ 0x1406C52E0 (WmipSendEnableRequest.c)
 *     WmipRemoveDS @ 0x14074E43C (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x14074FAD8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1407502A8 (WmipDetermineInstanceBaseIndex.c)
 *     WmipQuerySetExecuteSI @ 0x1407504A0 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140750834 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140750B50 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x140750CFC (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140750FB0 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140751344 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipMangleInstanceName @ 0x140751498 (WmipMangleInstanceName.c)
 *     WmipDSCleanup @ 0x1407688C0 (WmipDSCleanup.c)
 *     WmipSendEnableDisableRequest @ 0x14077A220 (WmipSendEnableDisableRequest.c)
 *     WmipAddMofResource @ 0x1407BA18C (WmipAddMofResource.c)
 *     WmipUpdateDataSource @ 0x1407BFBC8 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407BFD20 (WmipUpdateModifyGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407C0C90 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x140934C1C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14093500C (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x140935F60 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x140936048 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x14020A4F0 (ExFreeToPagedLookasideList.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
