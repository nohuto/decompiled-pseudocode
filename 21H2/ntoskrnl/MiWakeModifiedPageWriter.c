/*
 * XREFs of MiWakeModifiedPageWriter @ 0x1402A0A84
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140260A6C (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllHintedStorePages @ 0x1402A0AE0 (MiFlushAllHintedStorePages.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiFlushAllPagesWorker @ 0x1403848EC (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x14053B7C4 (MiObtainFreePages.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 692) )
      KeSetEvent((PRKEVENT)(a1 + 696), 0, 0);
    if ( *(_DWORD *)(a1 + 720) != 18 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 952)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 944), 18LL);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 952));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 728) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
}
