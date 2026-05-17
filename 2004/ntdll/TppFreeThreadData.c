/*
 * XREFs of TppFreeThreadData @ 0x180054728
 * Callers:
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

struct _TEB *__fastcall TppFreeThreadData(__int64 a1)
{
  struct _TEB *result; // rax

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) |= 4u;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 2883584, a1);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
