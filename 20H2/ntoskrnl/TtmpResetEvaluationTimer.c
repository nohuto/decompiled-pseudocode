/*
 * XREFs of TtmpResetEvaluationTimer @ 0x140900814
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x140900910 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x140900B2C (TtmpUpdateTerminalState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 */

void __fastcall TtmpResetEvaluationTimer(PADAPTER_OBJECT DmaAdapter, __int64 a2)
{
  char v4; // al

  if ( a2 )
  {
    ObfReferenceObject(DmaAdapter);
    v4 = KiSetTimerEx((__int64)&DmaAdapter[5].DmaOperations, -a2, 0, 0, (__int64)&DmaAdapter[9].DmaOperations);
  }
  else
  {
    v4 = KeCancelTimer((PKTIMER)&DmaAdapter[5].DmaOperations);
  }
  if ( v4 )
    HalPutDmaAdapter(DmaAdapter);
}
