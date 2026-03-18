/*
 * XREFs of WmipUnreferenceEntry @ 0x1406817E8
 * Callers:
 *     WmipQueryAllData @ 0x1406812A0 (WmipQueryAllData.c)
 *     WmipDeleteMethod @ 0x1406816F0 (WmipDeleteMethod.c)
 *     WmipAddProviderIdToPIList @ 0x140681C34 (WmipAddProviderIdToPIList.c)
 *     WmipSendEnableRequest @ 0x1406EAE74 (WmipSendEnableRequest.c)
 *     WmipRemoveDS @ 0x14073DCDC (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x14073F378 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14073FB48 (WmipDetermineInstanceBaseIndex.c)
 *     WmipQuerySetExecuteSI @ 0x14073FD40 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x1407400D4 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x1407403F0 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x14074059C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140740850 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140740BE4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipMangleInstanceName @ 0x140740D38 (WmipMangleInstanceName.c)
 *     WmipDSCleanup @ 0x1407586B0 (WmipDSCleanup.c)
 *     WmipSendEnableDisableRequest @ 0x140769080 (WmipSendEnableDisableRequest.c)
 *     WmipAddMofResource @ 0x1407A90EC (WmipAddMofResource.c)
 *     WmipUpdateDataSource @ 0x1407AEB28 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407AEC80 (WmipUpdateModifyGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407AFBD0 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x14092DB3C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14092DF2C (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x14092EE80 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x14092EF68 (WmipUpdateAddGuid.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
