/*
 * XREFs of FsFilterCtrlFree @ 0x140281FA8
 * Callers:
 *     FsRtlQueryOpen @ 0x1405CE790 (FsRtlQueryOpen.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405EE29C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405EE47C (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x140630D80 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140630F50 (FsRtlAcquireFileExclusiveCommon.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x1404EB738 (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack();
  return result;
}
