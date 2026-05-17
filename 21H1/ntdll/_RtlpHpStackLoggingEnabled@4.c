/*
 * XREFs of _RtlpHpStackLoggingEnabled@4 @ 0x4B2C3BD0
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlpExtendedHeapInformationWorkerThread@4 @ 0x4B357D30 (_RtlpExtendedHeapInformationWorkerThread@4.c)
 * Callees:
 *     _RtlpHpMetadataHeapCtxGet@8 @ 0x4B3794D2 (_RtlpHpMetadataHeapCtxGet@8.c)
 */

BOOL RtlpHpStackLoggingEnabled()
{
  __int64 v1; // rax

  if ( (dword_4B3A6834 & 1) == 0 || (dword_4B3A6834 & 2) == 0 || !NtCurrentPeb()->ProcessHeap )
    return 0;
  v1 = RtlpHpMetadataHeapCtxGet(RtlpHpEnvHandle, dword_4B3A446C);
  return HIDWORD(v1) != *(_DWORD *)v1;
}
