/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x1402CEE38
 * Callers:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     RtlpHpFreeVA @ 0x1402379DC (RtlpHpFreeVA.c)
 *     RtlpHpFreeHeap @ 0x140237EEC (RtlpHpFreeHeap.c)
 *     RtlpHpGetOwnerHeap @ 0x14023811C (RtlpHpGetOwnerHeap.c)
 *     RtlpHpAllocVA @ 0x1402CB9B8 (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrCommit @ 0x1402CD6D0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegSegmentAllocate @ 0x140306F8C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14030813C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpQueryVA @ 0x1403090DC (RtlpHpQueryVA.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140309288 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpHeapCreate @ 0x14037ACD4 (RtlpHpHeapCreate.c)
 *     RtlpHpRegisterEnvironment @ 0x14037B8D8 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegSegmentFree @ 0x140389374 (RtlpHpSegSegmentFree.c)
 *     RtlpHpMetadataCommit @ 0x1403CA724 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x140592F94 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x1405930E4 (RtlpHpSizeHeapInternal.c)
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
