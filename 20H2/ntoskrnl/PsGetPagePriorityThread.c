/*
 * XREFs of PsGetPagePriorityThread @ 0x14028EE10
 * Callers:
 *     MiInitializeInPageSupport @ 0x140232150 (MiInitializeInPageSupport.c)
 *     CcScheduleReadAheadEx @ 0x140248720 (CcScheduleReadAheadEx.c)
 *     CcAsyncCopyRead @ 0x140248D20 (CcAsyncCopyRead.c)
 *     CcCompleteAsyncRead @ 0x140249324 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14024B924 (CcPerformReadAhead.c)
 *     MiInitializePfn @ 0x14028E040 (MiInitializePfn.c)
 *     ExpWorkerThread @ 0x14028E4C0 (ExpWorkerThread.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402D1080 (MiGetEffectivePagePriorityThread.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     SmSetThreadPagePriority @ 0x1403592A0 (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x1403A907C (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x140563378 (PfLogFileDataAccess.c)
 *     EtwTraceThread @ 0x14063BD44 (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x14064C34C (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x1406D572C (PfSnAsyncContextInitialize.c)
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
