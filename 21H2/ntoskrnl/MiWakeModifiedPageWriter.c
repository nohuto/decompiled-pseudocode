/*
 * XREFs of MiWakeModifiedPageWriter @ 0x14025C460
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140268CA8 (MiAdjustModifiedPageLoad.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     MiFlushAllHintedStorePages @ 0x1403773D8 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x14038A914 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x140596A58 (MiObtainFreePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 716) )
      KeSetEvent((PRKEVENT)(a1 + 720), 0, 0);
    if ( *(_DWORD *)(a1 + 744) != 18 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 976)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 968));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 976));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 752) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 760), 0, 0);
}
