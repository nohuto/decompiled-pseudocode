/*
 * XREFs of _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0
 * Callers:
 *     _RtlDeleteTimerQueue@4 @ 0x4B3851D0 (_RtlDeleteTimerQueue@4.c)
 * Callees:
 *     _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0 (_RtlDeleteTimerQueueEx@8.c)
 *     _RtlpTpTimerQueueRundown@4 @ 0x4B2A8BFD (_RtlpTpTimerQueueRundown@4.c)
 *     _RtlpTpTimerRundown@4 @ 0x4B2A8D8D (_RtlpTpTimerRundown@4.c)
 *     _TpTimerOutstandingCallbackCount@4 @ 0x4B2A8DD0 (_TpTimerOutstandingCallbackCount@4.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpReleaseTimer@4 @ 0x4B2B3B90 (_TpReleaseTimer@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680 (_ZwWaitForAlertByThreadId@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlDeleteTimerQueueEx(HANDLE TimerQueueHandle, HANDLE Event)
{
  NTSTATUS v2; // edi
  volatile signed __int32 *v3; // eax
  volatile signed __int32 *v4; // ecx
  int v5; // edi
  volatile signed __int32 *v7; // esi
  volatile signed __int32 *v8; // [esp+14h] [ebp-30h]
  HANDLE TokenHandle; // [esp+1Ch] [ebp-28h] BYREF
  PVOID v10; // [esp+20h] [ebp-24h]
  int v11; // [esp+24h] [ebp-20h]
  int v12; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v11 = 0;
  v12 = -1073741823;
  TokenHandle = 0;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( TimerQueueHandle )
  {
    ms_exc.registration.TryLevel = 0;
    v2 = RtlpTpRevertCapture(&TokenHandle);
    v12 = v2;
    if ( v2 < 0 )
    {
LABEL_13:
      ms_exc.registration.TryLevel = -2;
      RtlpTpResumeImpersonation(TokenHandle, 1261079414);
      return v2;
    }
    if ( Event )
    {
      if ( Event == (HANDLE)-1 )
        *((_DWORD *)TimerQueueHandle + 5) = NtCurrentTeb()->ClientId.UniqueThread;
      else
        *((_DWORD *)TimerQueueHandle + 2) = Event;
    }
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
    ms_exc.registration.TryLevel = 1;
    v3 = (volatile signed __int32 *)((char *)TimerQueueHandle + 12);
    v4 = (volatile signed __int32 *)*((_DWORD *)TimerQueueHandle + 3);
    v5 = v11;
    while ( v4 != v3 )
    {
      v10 = (PVOID)v4;
      v8 = (volatile signed __int32 *)*v4;
      v7 = v4 + 6;
      _InterlockedOr(v4 + 6, 1u);
      v5 += TpTimerOutstandingCallbackCount(*((_DWORD *)v4 + 8));
      v11 = v5;
      TpReleaseTimer(*((PTP_TIMER *)v10 + 8));
      if ( (_InterlockedAnd(v7, 0xFFFFFFFE) & 2) != 0 )
        RtlpTpTimerRundown(v10);
      v3 = (volatile signed __int32 *)((char *)TimerQueueHandle + 12);
      v4 = v8;
    }
    ms_exc.registration.TryLevel = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)TimerQueueHandle, 0xFFFFFFFF) )
    {
      if ( Event != (HANDLE)-1 )
      {
        v2 = v5 != 0 ? 0x103 : 0;
        goto LABEL_12;
      }
      ZwWaitForAlertByThreadId(TimerQueueHandle, 0);
    }
    else
    {
      *((_DWORD *)TimerQueueHandle + 5) = 0;
      RtlpTpTimerQueueRundown(TimerQueueHandle);
    }
    v2 = 0;
LABEL_12:
    v12 = v2;
    goto LABEL_13;
  }
  return -1073741585;
}
