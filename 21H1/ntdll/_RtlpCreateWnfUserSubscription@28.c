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
  int Heap; // esi
  int result; // eax
  void *ProcessHeap; // [esp-Ch] [ebp-18h]

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  *a1 = 0;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 104);
  if ( !Heap )
    return -1073741801;
  memset((void *)(Heap + 4), 0, 0x64u);
  *a1 = Heap;
  *(_WORD *)Heap = 2324;
  *(_WORD *)(Heap + 2) = 104;
  *(_DWORD *)(Heap + 24) = NtCurrentTeb()->SubProcessTag;
  *(_DWORD *)(Heap + 16) = a3;
  *(_DWORD *)(Heap + 20) = a4;
  *(_DWORD *)(Heap + 40) = a5;
  *(_DWORD *)(Heap + 32) = a6;
  *(_DWORD *)(Heap + 36) = a7;
  result = 0;
  *(_DWORD *)(Heap + 28) = a2;
  *(_DWORD *)(Heap + 12) = 0;
  *(_DWORD *)(Heap + 44) = 1;
  *(_DWORD *)(Heap + 48) = 0;
  *(_DWORD *)(Heap + 52) = 0;
  *(_DWORD *)(Heap + 56) = 0;
  *(_DWORD *)(Heap + 60) = 0;
  *(_DWORD *)(Heap + 96) = 0;
  *(_DWORD *)(Heap + 100) = 0;
  return result;
}
