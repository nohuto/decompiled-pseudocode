/*
 * XREFs of StageQueue_Release @ 0x1C000C574
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_MapStage @ 0x1C0003780 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C00038C0 (Isoch_PrepareStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_CompleteTransfers @ 0x1C000C2F0 (Bulk_CompleteTransfers.c)
 *     Bulk_MapStage @ 0x1C000D4EC (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C000D984 (Bulk_PrepareStage.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0040E04 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C004109C (Isoch_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C004445C (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_Release(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // eax
  int v3; // r10d
  unsigned int v4; // r9d
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[4];
  --a1[2];
  v4 = a1[1];
  if ( a2 == &a1[v3 * v2 + 16] )
  {
    result = (v3 + 1) / v4;
    a1[4] = (v3 + 1) % v4;
  }
  else
  {
    result = (unsigned int)((int)(v4 + a1[3] - 1) / (int)v4);
    a1[3] = (int)(v4 + a1[3] - 1) % (int)v4;
  }
  return result;
}
