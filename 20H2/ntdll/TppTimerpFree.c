/*
 * XREFs of TppTimerpFree @ 0x18000C5A0
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18000F1E8 (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(void *a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
