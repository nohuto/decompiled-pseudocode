/*
 * XREFs of _RtlpReportHeapFailure@4 @ 0x4B36FAE5
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlpPopulateListIndex@8 @ 0x4B2B19E4 (_RtlpPopulateListIndex@8.c)
 *     _RtlpFindAndCommitPages@8 @ 0x4B2C0640 (_RtlpFindAndCommitPages@8.c)
 *     _RtlpCreateUCREntry@24 @ 0x4B2C092B (_RtlpCreateUCREntry@24.c)
 *     @RtlpFindUCREntry@8 @ 0x4B2C0A8E (@RtlpFindUCREntry@8.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlpHpHeapHandleError@12 @ 0x4B36D980 (_RtlpHpHeapHandleError@12.c)
 * Callees:
 *     _RtlReportCriticalFailure@12 @ 0x4B3669C7 (_RtlReportCriticalFailure@12.c)
 *     _RtlpGetModifiedProcessCookie@0 @ 0x4B36D769 (_RtlpGetModifiedProcessCookie@0.c)
 *     _RtlpPrintErrorInformation@0 @ 0x4B36F67B (_RtlpPrintErrorInformation@0.c)
 */

char __fastcall RtlpReportHeapFailure(int a1)
{
  ULONG ModifiedProcessCookie; // eax

  ModifiedProcessCookie = RtlpGetModifiedProcessCookie();
  if ( RtlpDisableBreakOnFailureCookie != ModifiedProcessCookie )
  {
    LOBYTE(ModifiedProcessCookie) = ~RtlpHpHeapFeatures;
    RtlReportCriticalFailure(-1073740940, (int)&RtlpHeapFailureInfo, (ModifiedProcessCookie >> 2) & 1);
  }
  if ( a1 <= RtlpHeapErrorHandlerThreshold )
  {
    RtlpPrintErrorInformation();
    LOBYTE(ModifiedProcessCookie) = NtCurrentPeb()->BeingDebugged;
    if ( (_BYTE)ModifiedProcessCookie
      || (LOBYTE(ModifiedProcessCookie) = MEMORY[0x7FFE02D4] & 3, (MEMORY[0x7FFE02D4] & 3) == 3) )
    {
      if ( (RtlpHpHeapFeatures & 4) == 0 )
        __debugbreak();
    }
  }
  return ModifiedProcessCookie;
}
