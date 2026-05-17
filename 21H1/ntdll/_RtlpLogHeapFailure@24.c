/*
 * XREFs of _RtlpLogHeapFailure@24 @ 0x4B375E3D
 * Callers:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 *     @RtlpRemoveUCRBlock@8 @ 0x4B2A9E29 (@RtlpRemoveUCRBlock@8.c)
 *     @RtlpProbeUserBufferSafe@8 @ 0x4B2AA492 (@RtlpProbeUserBufferSafe@8.c)
 *     @RtlpInsertUCRBlock@8 @ 0x4B2AB9B6 (@RtlpInsertUCRBlock@8.c)
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpDestroyHeapSegment@4 @ 0x4B2AFA04 (_RtlpDestroyHeapSegment@4.c)
 *     _RtlpGrowBlockInPlace@20 @ 0x4B2B1340 (_RtlpGrowBlockInPlace@20.c)
 *     @RtlpCreateSplitBlock@28 @ 0x4B2B16CC (@RtlpCreateSplitBlock@28.c)
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlpFindAndCommitPages@8 @ 0x4B2C0640 (_RtlpFindAndCommitPages@8.c)
 *     _RtlpCreateUCREntry@24 @ 0x4B2C092B (_RtlpCreateUCREntry@24.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     _RtlpHeapFindListLookupEntry@20 @ 0x4B2C0D29 (_RtlpHeapFindListLookupEntry@20.c)
 *     _RtlpCoalesceFreeBlocks@16 @ 0x4B2C1E63 (_RtlpCoalesceFreeBlocks@16.c)
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     _RtlpInitializeHeapSegment@32 @ 0x4B2E1EBD (_RtlpInitializeHeapSegment@32.c)
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 *     _RtlSetUserValueHeap@16 @ 0x4B2E3990 (_RtlSetUserValueHeap@16.c)
 *     _RtlpHpHeapCheckCommitLimit@16 @ 0x4B2E68BA (_RtlpHpHeapCheckCommitLimit@16.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 *     _RtlpCoalesceHeap@4 @ 0x4B35776F (_RtlpCoalesceHeap@4.c)
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 *     _RtlpValidateHeapSegment@32 @ 0x4B360CCF (_RtlpValidateHeapSegment@32.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 *     _RtlpHpLfhSubsegmentFreeBlock@16 @ 0x4B377416 (_RtlpHpLfhSubsegmentFreeBlock@16.c)
 *     _RtlpHpCheckAllocationSizeLimit@12 @ 0x4B378285 (_RtlpHpCheckAllocationSizeLimit@12.c)
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 *     _RtlpHpLargeAlloc@16 @ 0x4B379D22 (_RtlpHpLargeAlloc@16.c)
 *     _RtlpHpLargeFree@12 @ 0x4B37A3A3 (_RtlpHpLargeFree@12.c)
 *     _RtlpHpVaMgrCtxQuery@12 @ 0x4B37AD9C (_RtlpHpVaMgrCtxQuery@12.c)
 *     _RtlpHpSegFree@12 @ 0x4B37B8B6 (_RtlpHpSegFree@12.c)
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 *     _RtlpHpSegMgrReserve@20 @ 0x4B37C4D9 (_RtlpHpSegMgrReserve@20.c)
 *     _RtlpHpVsContextAllocateInternal@24 @ 0x4B37F180 (_RtlpHpVsContextAllocateInternal@24.c)
 *     _RtlpHpVsContextFree@20 @ 0x4B37F419 (_RtlpHpVsContextFree@20.c)
 *     _RtlpHpVsContextFreeInternal@20 @ 0x4B37F546 (_RtlpHpVsContextFreeInternal@20.c)
 *     _RtlpHpVsContextGrowInPlace@20 @ 0x4B37F6C2 (_RtlpHpVsContextGrowInPlace@20.c)
 * Callees:
 *     _RtlpHpHeapHandleError@12 @ 0x4B36D980 (_RtlpHpHeapHandleError@12.c)
 */

USHORT __fastcall RtlpLogHeapFailure(int a1, int a2, int a3, int a4, int a5, int a6)
{
  USHORT result; // ax

  if ( dword_4B3A396C != a2 )
  {
    dword_4B3A3974 = a4;
    dword_4B3A3978 = a5;
    dword_4B3A3968 = a1;
    dword_4B3A396C = a2;
    dword_4B3A3970 = a3;
    dword_4B3A397C = a6;
    return RtlpHpHeapHandleError(a1, a2, a3);
  }
  return result;
}
