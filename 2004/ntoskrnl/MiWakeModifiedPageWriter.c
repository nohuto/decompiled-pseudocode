/*
 * XREFs of MiWakeModifiedPageWriter @ 0x140310698
 * Callers:
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiAdjustModifiedPageLoad @ 0x1402F342C (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllHintedStorePages @ 0x14031056C (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x140380308 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x1405360B4 (MiObtainFreePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
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
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 944), 18LL, v4, v5);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 952));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 728) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
}
