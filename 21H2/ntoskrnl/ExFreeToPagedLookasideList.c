/*
 * XREFs of ExFreeToPagedLookasideList @ 0x140203D50
 * Callers:
 *     FsRtlUninitializeBaseMcb @ 0x140203D00 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlEmptyFreePoolList @ 0x14021D85C (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x14021D8B4 (FsRtlFreeTunnelNode.c)
 *     FsRtlAddEntry @ 0x14022C788 (FsRtlAddEntry.c)
 *     FsRtlFreeFileLock @ 0x140259F70 (FsRtlFreeFileLock.c)
 *     AlpcConnectionDestroyProcedure @ 0x14066E830 (AlpcConnectionDestroyProcedure.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14066EEA0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     WmipUnreferenceEntry @ 0x1407838E0 (WmipUnreferenceEntry.c)
 *     AlpcAddHandleTableEntry @ 0x1407A5530 (AlpcAddHandleTableEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x1407FC310 (FsRtlDeleteTunnelCache.c)
 *     RtlpFreeRangeListEntry @ 0x1408398AC (RtlpFreeRangeListEntry.c)
 *     HashpHashMemory @ 0x140A3731C (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x140A375DC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __stdcall ExFreeToPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
