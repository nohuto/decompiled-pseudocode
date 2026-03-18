/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x1403338B4
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140331DD0 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1403336A0 (KiDeferGroupSchedulingPreemption.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403338E0 (KiEvaluateGroupSchedulingPreemption.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldPreemptionBeDeferred(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1 )
    return 1;
  return result;
}
