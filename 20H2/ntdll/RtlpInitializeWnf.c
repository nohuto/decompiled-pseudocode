/*
 * XREFs of RtlpInitializeWnf @ 0x18007CA10
 * Callers:
 *     <none>
 * Callees:
 *     TpReleaseTimer @ 0x18000C500 (TpReleaseTimer.c)
 *     TpAllocTimer @ 0x18000EFD0 (TpAllocTimer.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007CAE4 (RtlpWnfRegisterTpNotification.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall RtlpInitializeWnf(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  char *Heap; // rax
  char *v4; // rbx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v4 = Heap;
  if ( Heap )
  {
    memset(Heap + 4, 0, 0x5CuLL);
    *(_DWORD *)v4 = 6293777;
    if ( TpAllocTimer((PTP_TIMER *)v4 + 10, RtlpWnfRetryTimerCallback, 0LL, 0LL) >= 0 )
    {
      *((_QWORD *)v4 + 11) = 0LL;
      *((_QWORD *)v4 + 3) = v4 + 16;
      *((_QWORD *)v4 + 2) = v4 + 16;
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 5) = v4 + 32;
      *((_QWORD *)v4 + 4) = v4 + 32;
      *((_QWORD *)v4 + 6) = 0LL;
      *((_DWORD *)v4 + 15) = 500;
      *((_DWORD *)v4 + 16) = 1000;
      *((_DWORD *)v4 + 17) = 3600000;
      *((_DWORD *)v4 + 18) = 10;
      *((_DWORD *)v4 + 14) = 1;
      if ( (int)RtlpWnfRegisterTpNotification() >= 0 )
      {
        qword_18016D250 = (__int64)v4;
        return 1LL;
      }
      TpReleaseTimer(*((PTP_TIMER *)v4 + 10));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return 0LL;
}
