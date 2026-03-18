/*
 * XREFs of MiWakeModifiedPageWriter @ 0x14033B240
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140265DCC (MiAdjustModifiedPageLoad.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiFlushAllHintedStorePages @ 0x14033B114 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x140381B50 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x140539A84 (MiObtainFreePages.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  _DWORD *v5; // r9

  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 692) )
      KeSetEvent((PRKEVENT)(a1 + 696), 0, 0);
    if ( *(_DWORD *)(a1 + 720) != 18 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 944), 18, v4, v5);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 728) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
}
