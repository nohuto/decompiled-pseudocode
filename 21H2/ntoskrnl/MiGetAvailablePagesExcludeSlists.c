/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x1402463F0
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 7104);
}
