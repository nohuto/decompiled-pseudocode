/*
 * XREFs of _TppFreeThreadData@4 @ 0x4B2ECE0F
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

struct _TEB *__thiscall TppFreeThreadData(_DWORD *this)
{
  int v1; // eax
  struct _TEB *result; // eax

  if ( this )
  {
    v1 = TppHeapTag;
    this[1] |= 4u;
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, v1 + 2883584, (int)this);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0;
  }
  return result;
}
