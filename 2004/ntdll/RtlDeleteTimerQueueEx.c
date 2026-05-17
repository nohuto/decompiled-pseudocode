/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x180084920
 * Callers:
 *     RtlDeleteTimerQueue @ 0x180112BF0 (RtlDeleteTimerQueue.c)
 * Callees:
 *     RtlpTpTimerRundown @ 0x180009B48 (RtlpTpTimerRundown.c)
 *     TpTimerOutstandingCallbackCount @ 0x180009BB0 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     TpReleaseTimer @ 0x18000C500 (TpReleaseTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpTimerQueueRundown @ 0x180084A94 (RtlpTpTimerQueueRundown.c)
 *     NtWaitForAlertByThreadId @ 0x1800A0800 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlDeleteTimerQueueEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  int v6; // ebx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 i; // rsi
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  HANDLE v13; // [rsp+98h] [rbp+20h] BYREF

  v11 = 0;
  v13 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v6 = RtlpTpRevertCapture(&v13, 0, a3);
    if ( v6 >= 0 )
    {
      if ( a2 )
      {
        if ( a2 == -1 )
          *(_QWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *(_QWORD *)(a1 + 16) = a2;
      }
      RtlAcquireSRWLockExclusive(a1 + 8, v5, v7, v8);
      for ( i = *(_QWORD *)(a1 + 24); i != a1 + 24; i = v12 )
      {
        v12 = *(_QWORD *)i;
        _InterlockedOr((volatile signed __int32 *)(i + 48), 1u);
        v11 += TpTimerOutstandingCallbackCount(*(_QWORD *)(i + 64));
        TpReleaseTimer(*(_QWORD *)(i + 64));
        _m_prefetchw((const void *)(i + 48));
        if ( (_InterlockedAnd((volatile signed __int32 *)(i + 48), 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown(i);
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      if ( _InterlockedDecrement((volatile signed __int32 *)a1) )
      {
        if ( a2 != -1 )
        {
          v6 = v11 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(a1, 0LL);
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        RtlpTpTimerQueueRundown(a1);
      }
      v6 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v13);
    return (unsigned int)v6;
  }
  return 3221225711LL;
}
