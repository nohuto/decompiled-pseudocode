/*
 * XREFs of TppTimerpFree @ 0x18000C5A0
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18000F1E8 (TppDestroyTimer.c)
 */

__int64 __fastcall TppTimerpFree(__int64 a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x100000), a1);
}
