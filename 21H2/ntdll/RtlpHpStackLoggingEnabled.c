/*
 * XREFs of RtlpHpStackLoggingEnabled @ 0x180024820
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3CC0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x180008110 (RtlpHpMetadataHeapCtxGet.c)
 */

_BOOL8 RtlpHpStackLoggingEnabled()
{
  char *v1; // rax
  __int64 v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_18016D578 & 1) == 0 || (dword_18016D578 & 2) == 0 || !NtCurrentPeb()->ProcessHeap )
    return 0LL;
  v3 = RtlpHpEnvHandle;
  v1 = RtlpHpMetadataHeapCtxGet(&v3);
  return v2 != *(_QWORD *)v1;
}
