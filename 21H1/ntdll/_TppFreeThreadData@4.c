/*
 * XREFs of _TppFreeThreadData@4 @ 0x4B2ECE0F
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

struct _TEB *__thiscall TppFreeThreadData(_DWORD *BaseAddress)
{
  ULONG v1; // eax
  struct _TEB *result; // eax

  if ( BaseAddress )
  {
    v1 = TppHeapTag;
    BaseAddress[1] |= 4u;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, v1 + 2883584, BaseAddress);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0;
  }
  return result;
}
