/*
 * XREFs of FsFilterCtrlFree @ 0x1403619A8
 * Callers:
 *     FsRtlQueryOpen @ 0x1405D8FB0 (FsRtlQueryOpen.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14063BE14 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14063BFF4 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x14071EE50 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14071F020 (FsRtlAcquireFileExclusiveCommon.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x1404F1118 (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack(a1);
  return result;
}
