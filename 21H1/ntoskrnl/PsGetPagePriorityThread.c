/*
 * XREFs of PsGetPagePriorityThread @ 0x1402261C0
 * Callers:
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MiInitializeInPageSupport @ 0x140224D70 (MiInitializeInPageSupport.c)
 *     MiInitializePfn @ 0x1402253F0 (MiInitializePfn.c)
 *     ExpWorkerThread @ 0x140225870 (ExpWorkerThread.c)
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     CcCompleteAsyncRead @ 0x140234DF0 (CcCompleteAsyncRead.c)
 *     CcAsyncCopyRead @ 0x140235100 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1402357D0 (CcScheduleReadAheadEx.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     CcPerformReadAhead @ 0x1402BDB04 (CcPerformReadAhead.c)
 *     SmSetThreadPagePriority @ 0x14030A170 (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x1403AA290 (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x14055F358 (PfLogFileDataAccess.c)
 *     PfSnCheckActionsNeeded @ 0x140650B2C (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x1406DF33C (PfSnAsyncContextInitialize.c)
 *     EtwTraceThread @ 0x140700C44 (EtwTraceThread.c)
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
