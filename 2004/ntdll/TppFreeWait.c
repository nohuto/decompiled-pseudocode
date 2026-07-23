/*
 * XREFs of TppFreeWait @ 0x18000C220
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18000F1E8 (TppDestroyTimer.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 */

LOGICAL __fastcall TppFreeWait(__int64 a1)
{
  TppDestroyTimer();
  NtClose(*(HANDLE *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, (PVOID)a1);
}
