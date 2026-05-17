/*
 * XREFs of _RtlpInitializeWnf@12 @ 0x4B2AE9E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpWnfRegisterTpNotification@0 @ 0x4B2AE96C (_RtlpWnfRegisterTpNotification@0.c)
 *     _TpReleaseTimer@4 @ 0x4B2B3B90 (_TpReleaseTimer@4.c)
 *     _TpAllocTimer@16 @ 0x4B2B4570 (_TpAllocTimer@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlpInitializeWnf(int a1, int a2, int a3)
{
  void *Heap; // eax
  int v4; // esi

  Heap = (void *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 64);
  v4 = (int)Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x40u);
    *(_WORD *)(v4 + 2) = 64;
    *(_WORD *)v4 = 2321;
    if ( (int)TpAllocTimer(v4 + 48, RtlpWnfRetryTimerCallback, 0, 0) >= 0 )
    {
      *(_DWORD *)(v4 + 56) = 0;
      *(_DWORD *)(v4 + 12) = v4 + 8;
      *(_DWORD *)(v4 + 8) = v4 + 8;
      *(_DWORD *)(v4 + 60) = 0;
      *(_DWORD *)(v4 + 20) = v4 + 16;
      *(_DWORD *)(v4 + 16) = v4 + 16;
      *(_DWORD *)(v4 + 4) = 0;
      *(_DWORD *)(v4 + 24) = 0;
      *(_DWORD *)(v4 + 32) = 500;
      *(_DWORD *)(v4 + 36) = 1000;
      *(_DWORD *)(v4 + 40) = 3600000;
      *(_DWORD *)(v4 + 44) = 10;
      *(_DWORD *)(v4 + 28) = 1;
      if ( RtlpWnfRegisterTpNotification() >= 0 )
      {
        dword_4B3A664C = v4;
        return 1;
      }
      TpReleaseTimer(*(_DWORD *)(v4 + 48));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return 0;
}
