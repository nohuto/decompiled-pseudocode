/*
 * XREFs of ExFreeToPagedLookasideList @ 0x14020A4F0
 * Callers:
 *     FsRtlUninitializeBaseMcb @ 0x14020A040 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlEmptyFreePoolList @ 0x1402F866C (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1402F86C4 (FsRtlFreeTunnelNode.c)
 *     FsRtlAddEntry @ 0x140302914 (FsRtlAddEntry.c)
 *     FsRtlFreeFileLock @ 0x14032FBE0 (FsRtlFreeFileLock.c)
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDestroyBlob @ 0x1405FABFC (AlpcpDestroyBlob.c)
 *     WmipUnreferenceEntry @ 0x140647C78 (WmipUnreferenceEntry.c)
 *     AlpcConnectionDestroyProcedure @ 0x1406C48F0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcAddHandleTableEntry @ 0x140709BB0 (AlpcAddHandleTableEntry.c)
 *     RtlpFreeRangeListEntry @ 0x14075CFD8 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x14076A9E0 (FsRtlDeleteTunnelCache.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
