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

LOGICAL __stdcall RtlpInitializeWnf(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  char *Heap; // eax
  char *v4; // esi
  SIZE_T v6; // [esp-4h] [ebp-10h]
  size_t v7; // [esp-4h] [ebp-10h]

  LODWORD(v6) = 64;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  v4 = Heap;
  if ( Heap )
  {
    LODWORD(v7) = 64;
    memset(Heap, 0, v7);
    *((_WORD *)v4 + 1) = 64;
    *(_WORD *)v4 = 2321;
    if ( TpAllocTimer((PTP_TIMER *)v4 + 12, RtlpWnfRetryTimerCallback, 0, 0) >= 0 )
    {
      *((_DWORD *)v4 + 14) = 0;
      *((_DWORD *)v4 + 3) = v4 + 8;
      *((_DWORD *)v4 + 2) = v4 + 8;
      *((_DWORD *)v4 + 15) = 0;
      *((_DWORD *)v4 + 5) = v4 + 16;
      *((_DWORD *)v4 + 4) = v4 + 16;
      *((_DWORD *)v4 + 1) = 0;
      *((_DWORD *)v4 + 6) = 0;
      *((_DWORD *)v4 + 8) = 500;
      *((_DWORD *)v4 + 9) = 1000;
      *((_DWORD *)v4 + 10) = 3600000;
      *((_DWORD *)v4 + 11) = 10;
      *((_DWORD *)v4 + 7) = 1;
      if ( RtlpWnfRegisterTpNotification() >= 0 )
      {
        dword_4B3A664C = (int)v4;
        return 1;
      }
      TpReleaseTimer(*((PTP_TIMER *)v4 + 12));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return 0;
}
