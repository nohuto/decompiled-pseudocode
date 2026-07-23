/*
 * XREFs of HalpTscAdvSynchLeader @ 0x14039CDE4
 * Callers:
 *     HalpTscSynchronizationWorker @ 0x14039CD00 (HalpTscSynchronizationWorker.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x14039D024 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscAdjustToLeader @ 0x14039D168 (HalpTscAdjustToLeader.c)
 *     HalpTscAdvSynchReadTimeStamp @ 0x14039D578 (HalpTscAdvSynchReadTimeStamp.c)
 *     HalpFindTimer @ 0x14039D5A8 (HalpFindTimer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalpTscAdjustToTarget @ 0x1404C11C8 (HalpTscAdjustToTarget.c)
 *     HalpTscAdvSynchToLeader @ 0x1404C138C (HalpTscAdvSynchToLeader.c)
 *     HalpTscAdvSynchToTarget @ 0x1404C15A8 (HalpTscAdvSynchToTarget.c)
 *     HalpTscTraceStatus @ 0x1404C19D0 (HalpTscTraceStatus.c)
 */

char __fastcall HalpTscAdvSynchLeader(__int64 a1)
{
  __int64 Number; // r12
  unsigned int v3; // edi
  int v4; // r9d
  __int64 TimeStamp; // r15
  unsigned int v6; // r14d
  unsigned int i; // ebx
  int v8; // r14d
  __int64 Timer; // rax
  __int64 v10; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  REGHANDLE v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned int v16; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+48h] [rbp-61h] BYREF
  __int64 v18; // [rsp+50h] [rbp-59h] BYREF
  int v19; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v20; // [rsp+60h] [rbp-49h] BYREF
  int v21; // [rsp+68h] [rbp-41h] BYREF
  int v22; // [rsp+70h] [rbp-39h] BYREF
  int v23; // [rsp+78h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-29h] BYREF
  unsigned int *v25; // [rsp+90h] [rbp-19h]
  __int64 v26; // [rsp+98h] [rbp-11h]
  int *v27; // [rsp+A0h] [rbp-9h]
  __int64 v28; // [rsp+A8h] [rbp-1h]
  int *v29; // [rsp+B0h] [rbp+7h]
  __int64 v30; // [rsp+B8h] [rbp+Fh]
  int *v31; // [rsp+C0h] [rbp+17h]
  __int64 v32; // [rsp+C8h] [rbp+1Fh]

  Number = KeGetCurrentPrcb()->Number;
  v3 = 0;
  TimeStamp = HalpTscAdvSynchReadTimeStamp(Number);
  if ( HalpTscRequestedSynchronization )
  {
    if ( *(_BYTE *)(a1 + 34) )
    {
      HalpTscAdvSynchToLeader(*(unsigned int *)(a1 + 36));
    }
    else
    {
      v17 = 0LL;
      v18 = 0LL;
      v16 = KeGetCurrentPrcb()->Number;
      HalpTscAdvSynchCalculateRemoteDeltas((unsigned int)&v17, (unsigned int)&v18, (unsigned int)&v16, v4);
      v6 = v16;
      if ( v16 != KeGetCurrentPrcb()->Number )
      {
        v14 = HalpTscAdvSynchReadTimeStamp((unsigned int)Number) - TimeStamp;
        LODWORD(Number) = v6;
        TimeStamp = HalpTscAdvSynchReadTimeStamp(v6) - v14;
        if ( HalpTscAdjustAvailable )
          HalpTscAdjustToTarget(v6);
        else
          HalpTscAdvSynchToTarget(v6);
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      {
        if ( i != KeGetCurrentPrcb()->Number && i != v16 )
        {
          if ( HalpTscAdjustAvailable )
            HalpTscAdjustToLeader(i);
          else
            HalpTscAdvSynchToLeader(i);
        }
      }
    }
  }
  v17 = 0LL;
  v18 = 0LL;
  v16 = KeGetCurrentPrcb()->Number;
  HalpTscAdvSynchCalculateRemoteDeltas((unsigned int)&v17, (unsigned int)&v18, (unsigned int)&v16, v4);
  v8 = (unsigned __int64)(1000000 * (HalpTscAdvSynchReadTimeStamp((unsigned int)Number) - TimeStamp))
     / *(_QWORD *)KeGetPcr()->HalReserved;
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  v10 = Timer;
  HalpTscMaximumComputedSpread = v18 - v17;
  if ( v18 - v17 > (unsigned __int64)(unsigned int)HalpTscMaximumCounterSyncSpread )
  {
    *(_DWORD *)(Timer + 184) &= ~0x20u;
    HalpTscSynchronizationFailureFallback = 1;
    LOBYTE(CurrentPrcb) = HalpTscTraceStatus(&HAL_ETW_EVENT_TIMER_SYNCH_FAILED);
  }
  else
  {
    v22 = v17;
    v21 = v18;
    v20 = v16;
    LODWORD(CurrentPrcb) = KeGetCurrentPrcb()->Number;
    v19 = (int)CurrentPrcb;
    v23 = v8;
    if ( HalpDiagnosticEventsRegistered )
    {
      v12 = HalpDiagnosticEventHandle;
      LOBYTE(CurrentPrcb) = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TIMER_SYNCH_SUMMARY);
      if ( (_BYTE)CurrentPrcb )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v19;
        v26 = 4LL;
        v25 = &v20;
        v28 = 4LL;
        v27 = &v21;
        v30 = 4LL;
        v29 = &v22;
        v32 = 4LL;
        v31 = &v23;
        LOBYTE(CurrentPrcb) = EtwWriteEx(v12, &HAL_ETW_EVENT_TIMER_SYNCH_SUMMARY, 0LL, 0, 0LL, 0LL, 5u, &UserData);
      }
    }
    *(_DWORD *)(v10 + 184) |= 0x20u;
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v3 != CurrentPrcb->Number )
      {
        v13 = (unsigned __int64)v3 << 7;
        _InterlockedExchange((volatile __int32 *)(v13 + TscRequest), 8);
        LODWORD(CurrentPrcb) = *(_DWORD *)(v13 + TscRequest);
        if ( (_DWORD)CurrentPrcb == 8 )
        {
          do
          {
            _mm_pause();
            LOBYTE(CurrentPrcb) = TscRequest;
          }
          while ( *(_DWORD *)(v13 + TscRequest) == 8 );
        }
      }
      ++v3;
    }
    while ( v3 < *(_DWORD *)(a1 + 40) );
  }
  return (char)CurrentPrcb;
}
