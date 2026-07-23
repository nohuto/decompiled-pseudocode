/*
 * XREFs of _RtlUpdateTimer@16 @ 0x4B385200
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlUpdateTimer@16 @ 0x4B385200 (_RtlUpdateTimer@16.c)
 */

NTSTATUS __cdecl RtlUpdateTimer(HANDLE TimerQueueHandle, HANDLE TimerHandle, ULONG DueTime, ULONG Period)
{
  NTSTATUS result; // eax
  int v5; // edi
  LARGE_INTEGER v6; // [esp+10h] [ebp-2Ch] BYREF
  HANDLE v7; // [esp+18h] [ebp-24h]
  HANDLE TokenHandle; // [esp+1Ch] [ebp-20h] BYREF
  int v9; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  result = -1073741823;
  v9 = -1073741823;
  TokenHandle = 0;
  v7 = TimerHandle;
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( TimerQueueHandle )
    {
      if ( TimerHandle )
      {
        if ( (*((_DWORD *)TimerHandle + 6) & 1) != 0 )
        {
          return -1073741816;
        }
        else
        {
          ms_exc.registration.TryLevel = 0;
          v5 = RtlpTpRevertCapture(&TokenHandle, 0);
          v9 = v5;
          if ( v5 >= 0 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerHandle + 10);
            ms_exc.registration.TryLevel = 1;
            if ( *((_BYTE *)TimerHandle + 44) || !*((_DWORD *)TimerHandle + 12) )
            {
              *((_BYTE *)TimerHandle + 44) = Period != 0;
              v6.QuadPart = -10000LL * DueTime;
              TpSetTimerEx(*((PTP_TIMER *)TimerHandle + 8), &v6, Period, 0);
            }
            v5 = 0;
            v9 = 0;
            ms_exc.registration.TryLevel = 0;
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerHandle + 10);
          }
          ms_exc.registration.TryLevel = -2;
          RtlpTpResumeImpersonation(TokenHandle);
          return v5;
        }
      }
      else
      {
        return -1073741584;
      }
    }
    else
    {
      return -1073741585;
    }
  }
  return result;
}
