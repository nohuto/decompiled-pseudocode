/*
 * XREFs of TppFreeWait @ 0x18000C220
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18000F1E8 (TppDestroyTimer.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 */

__int64 __fastcall TppFreeWait(__int64 a1)
{
  TppDestroyTimer();
  NtClose(*(HANDLE *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 1835008), a1);
}
