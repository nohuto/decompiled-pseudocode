/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x140326D1C
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384340 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 7104);
}
