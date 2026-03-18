/*
 * XREFs of PsGetPagePriorityThread @ 0x1402B8E40
 * Callers:
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025AF90 (MiGetEffectivePagePriorityThread.c)
 *     CcPerformReadAhead @ 0x140264AD4 (CcPerformReadAhead.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiInitializeInPageSupport @ 0x1402B79F0 (MiInitializeInPageSupport.c)
 *     MiInitializePfn @ 0x1402B8070 (MiInitializePfn.c)
 *     ExpWorkerThread @ 0x1402B84F0 (ExpWorkerThread.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     CcCompleteAsyncRead @ 0x1402C7C20 (CcCompleteAsyncRead.c)
 *     CcAsyncCopyRead @ 0x1402C7F30 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1402C8600 (CcScheduleReadAheadEx.c)
 *     SmSetThreadPagePriority @ 0x140304620 (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x1403A65C0 (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x14055F9A8 (PfLogFileDataAccess.c)
 *     EtwTraceThread @ 0x14064E3B4 (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x1406B8CBC (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x1407020CC (PfSnAsyncContextInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1296) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 && (unsigned int)result >= 2 )
    return 2LL;
  return result;
}
