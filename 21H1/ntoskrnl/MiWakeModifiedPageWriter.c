/*
 * XREFs of MiWakeModifiedPageWriter @ 0x1402D0644
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14024012C (MiAdjustModifiedPageLoad.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiFlushAllHintedStorePages @ 0x1402D0518 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x14037F430 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x140535A64 (MiObtainFreePages.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
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
