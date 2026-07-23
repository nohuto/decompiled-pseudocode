/*
 * XREFs of _RtlDeleteTimer@12 @ 0x4B2A8C40
 * Callers:
 *     _RtlCancelTimer@8 @ 0x4B3851B0 (_RtlCancelTimer@8.c)
 * Callees:
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 *     _RtlpTpTimerRundown@4 @ 0x4B2A8D8D (_RtlpTpTimerRundown@4.c)
 *     _TpTimerOutstandingCallbackCount@4 @ 0x4B2A8DD0 (_TpTimerOutstandingCallbackCount@4.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpReleaseTimer@4 @ 0x4B2B3B90 (_TpReleaseTimer@4.c)
 *     _TpWaitForTimer@8 @ 0x4B2B3C20 (_TpWaitForTimer@8.c)
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlDeleteTimer(HANDLE TimerQueueHandle, HANDLE TimerToCancel, HANDLE Event)
{
  NTSTATUS v3; // edi
  _DWORD *v4; // ecx
  HANDLE *v5; // eax
  int v6; // edi
  HANDLE TokenHandle; // [esp+14h] [ebp-20h] BYREF
  int v9; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v9 = -1073741823;
  TokenHandle = 0;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( !TimerQueueHandle )
    return -1073741585;
  if ( !TimerToCancel )
    return -1073741584;
  ms_exc.registration.TryLevel = 0;
  v3 = RtlpTpRevertCapture(&TokenHandle);
  v9 = v3;
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*((_DWORD *)TimerToCancel + 7) + 4));
    ms_exc.registration.TryLevel = 1;
    v4 = *(_DWORD **)TimerToCancel;
    v5 = (HANDLE *)*((_DWORD *)TimerToCancel + 1);
    if ( *(HANDLE *)(*(_DWORD *)TimerToCancel + 4) != TimerToCancel || *v5 != TimerToCancel )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    ms_exc.registration.TryLevel = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*((_DWORD *)TimerToCancel + 7) + 4));
    _InterlockedOr((volatile signed __int32 *)TimerToCancel + 6, 1u);
    TpSetTimerEx(*((PTP_TIMER *)TimerToCancel + 8), 0, 0, 0);
    if ( Event == (HANDLE)-1 )
    {
      TpWaitForTimer(*((PTP_TIMER *)TimerToCancel + 8), 1u);
    }
    else if ( Event )
    {
      *((_DWORD *)TimerToCancel + 9) = Event;
    }
    v6 = TpTimerOutstandingCallbackCount(*((_DWORD *)TimerToCancel + 8));
    TpReleaseTimer(*((PTP_TIMER *)TimerToCancel + 8));
    if ( (_InterlockedAnd((volatile signed __int32 *)TimerToCancel + 6, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpTimerRundown(TimerToCancel);
      v6 = 0;
    }
    v3 = v6 != 0 ? 0x103 : 0;
    v9 = v3;
  }
  ms_exc.registration.TryLevel = -2;
  RtlpTpResumeImpersonation(TokenHandle, 1261079877);
  return v3;
}
