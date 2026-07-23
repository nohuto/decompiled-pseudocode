/*
 * XREFs of RtlUpdateTimer @ 0x180081AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     TpSetTimerEx @ 0x1800126D0 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

NTSTATUS __cdecl RtlUpdateTimer(HANDLE TimerQueueHandle, HANDLE TimerHandle, ULONG DueTime, ULONG Period)
{
  __int64 v5; // r14
  int v7; // edi
  HANDLE v9; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER DueTimea; // [rsp+28h] [rbp-10h] BYREF

  v5 = DueTime;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( !TimerQueueHandle )
    return -1073741585;
  if ( !TimerHandle )
    return -1073741584;
  if ( (*((_DWORD *)TimerHandle + 12) & 1) != 0 )
    return -1073741816;
  v7 = RtlpTpRevertCapture(&v9, 0);
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerHandle + 10);
    if ( *((_BYTE *)TimerHandle + 88) || !*((_DWORD *)TimerHandle + 23) )
    {
      *((_BYTE *)TimerHandle + 88) = Period != 0;
      DueTimea.QuadPart = -10000 * v5;
      TpSetTimerEx(*((PTP_TIMER *)TimerHandle + 8), &DueTimea, Period, 0);
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerHandle + 10);
    v7 = 0;
  }
  RtlpTpResumeImpersonation(v9);
  return v7;
}
