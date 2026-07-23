/*
 * XREFs of RtlpFlushHeap @ 0x180007180
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x180006920 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x180073CB0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlpLowFragHeapFlushCaches @ 0x180003888 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpCollectFreeBlocks @ 0x18001F2D8 (RtlpCollectFreeBlocks.c)
 *     RtlTryEnterCriticalSection @ 0x1800207E0 (RtlTryEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  __int64 v2; // rcx

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v2 = *(_QWORD *)(a1 + 408);
    else
      v2 = 0LL;
    if ( v2 )
      RtlpLowFragHeapFlushCaches(v2);
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
