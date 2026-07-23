/*
 * XREFs of _RtlpFlushHeap@4 @ 0x4B35D672
 * Callers:
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 *     _RtlpFlushHeapsCallback@8 @ 0x4B357ED0 (_RtlpFlushHeapsCallback@8.c)
 * Callees:
 *     @RtlpCollectFreeBlocks@4 @ 0x4B2AF680 (@RtlpCollectFreeBlocks@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlTryEnterCriticalSection@4 @ 0x4B2E0960 (_RtlTryEnterCriticalSection@4.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 */

int __thiscall RtlpFlushHeap(int this)
{
  int v2; // ecx

  if ( (*(_BYTE *)(this + 64) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(this + 200)) )
  {
    if ( *(_BYTE *)(this + 234) == 2 )
      v2 = *(_DWORD *)(this + 228);
    else
      v2 = 0;
    if ( v2 )
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(this);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(this + 200));
  }
  return 0;
}
