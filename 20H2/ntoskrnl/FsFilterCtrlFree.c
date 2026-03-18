/*
 * XREFs of FsFilterCtrlFree @ 0x14029FEF8
 * Callers:
 *     FsRtlQueryOpen @ 0x1405D6010 (FsRtlQueryOpen.c)
 *     FsRtlReleaseFile @ 0x1406802A0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140680470 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407080AC (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14070828C (FsRtlAcquireFileForCcFlushEx.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x1404EF5F8 (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack();
  return result;
}
