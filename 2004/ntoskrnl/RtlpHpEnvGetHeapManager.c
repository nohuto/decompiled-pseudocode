/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x14025A6D4
 * Callers:
 *     RtlpHpFreeVA @ 0x14025255C (RtlpHpFreeVA.c)
 *     RtlpHpGetOwnerHeap @ 0x1402532E4 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpFreeHeap @ 0x1402536BC (RtlpHpFreeHeap.c)
 *     RtlpHpSegMgrCommit @ 0x140257B20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x1402581C0 (RtlpHpAllocVA.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     RtlpHpSegSegmentAllocate @ 0x1402D8CF4 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402D9EA4 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpQueryVA @ 0x1402DAEE8 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1402DB094 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpHeapCreate @ 0x140378FA4 (RtlpHpHeapCreate.c)
 *     RtlpHpRegisterEnvironment @ 0x140379BA8 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegSegmentFree @ 0x1403871B4 (RtlpHpSegSegmentFree.c)
 *     RtlpHpMetadataCommit @ 0x1403C7AE4 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x14058F4F0 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x14058F640 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpEnvGetHeapManager(_DWORD *a1)
{
  if ( (*a1 & 6) == 4 )
    return *(void **)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672);
  else
    return &ExPoolState;
}
