/*
 * XREFs of _RtlpCreateWnfUserSubscription@28 @ 0x4B2B09B0
 * Callers:
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpCreateWnfUserSubscription(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _WORD *Heap; // esi
  int result; // eax
  void *ProcessHeap; // [esp-Ch] [ebp-18h]
  SIZE_T v12; // [esp-4h] [ebp-10h]
  size_t v13; // [esp-4h] [ebp-10h]

  LODWORD(v12) = 104;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  *a1 = 0;
  Heap = RtlAllocateHeap(ProcessHeap, 0, v12);
  if ( !Heap )
    return -1073741801;
  LODWORD(v13) = 100;
  memset(Heap + 2, 0, v13);
  *a1 = Heap;
  *Heap = 2324;
  Heap[1] = 104;
  *((_DWORD *)Heap + 6) = NtCurrentTeb()->SubProcessTag;
  *((_DWORD *)Heap + 4) = a3;
  *((_DWORD *)Heap + 5) = a4;
  *((_DWORD *)Heap + 10) = a5;
  *((_DWORD *)Heap + 8) = a6;
  *((_DWORD *)Heap + 9) = a7;
  result = 0;
  *((_DWORD *)Heap + 7) = a2;
  *((_DWORD *)Heap + 3) = 0;
  *((_DWORD *)Heap + 11) = 1;
  *((_DWORD *)Heap + 12) = 0;
  *((_DWORD *)Heap + 13) = 0;
  *((_DWORD *)Heap + 14) = 0;
  *((_DWORD *)Heap + 15) = 0;
  *((_DWORD *)Heap + 24) = 0;
  *((_DWORD *)Heap + 25) = 0;
  return result;
}
