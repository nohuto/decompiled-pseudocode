/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1408FABF4
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x1408FACF0 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x1408FAF0C (TtmpUpdateTerminalState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
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
