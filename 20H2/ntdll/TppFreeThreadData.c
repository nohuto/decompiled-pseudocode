/*
 * XREFs of TppFreeThreadData @ 0x180054778
 * Callers:
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

struct _TEB *__fastcall TppFreeThreadData(_DWORD *BaseAddress)
{
  struct _TEB *result; // rax

  if ( BaseAddress )
  {
    BaseAddress[2] |= 4u;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 2883584, BaseAddress);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
