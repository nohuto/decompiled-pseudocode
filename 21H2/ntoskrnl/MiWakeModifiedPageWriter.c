/*
 * XREFs of MiWakeModifiedPageWriter @ 0x14035BB54
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140272ACC (MiAdjustModifiedPageLoad.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiFlushAllHintedStorePages @ 0x14035BBB0 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x14038479C (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x14053B584 (MiObtainFreePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 692) )
      KeSetEvent((PRKEVENT)(a1 + 696), 0, 0);
    if ( *(_DWORD *)(a1 + 720) != 18 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 944), 18);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 728) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
}
