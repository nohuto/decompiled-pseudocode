/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x1402EE774
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1402ECC90 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402EE560 (KiDeferGroupSchedulingPreemption.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402EE7A0 (KiEvaluateGroupSchedulingPreemption.c)
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
