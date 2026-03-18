/*
 * XREFs of PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1408EB120
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140763BE8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EAC3C (PopPowerAggregatorDisengageModernStandby.c)
 */

__int64 __fastcall PopPowerAggregatorModernStandbyEnterStateHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 96) )
  {
    PopPowerAggregatorDisengageModernStandby(a1);
  }
  else if ( *(_QWORD *)(a1 + 80) != *(_QWORD *)(a1 + 40) && !*(_BYTE *)(a1 + 104) )
  {
    *(_BYTE *)(a1 + 104) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 112), DelayedWorkQueue);
  }
  return 0LL;
}
