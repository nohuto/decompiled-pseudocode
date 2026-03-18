/*
 * XREFs of KdPollBreakIn @ 0x1402223B0
 * Callers:
 *     KdCheckForDebugBreak @ 0x140222368 (KdCheckForDebugBreak.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x14056E8F8 (KiTryToAcquireSpinLockInstrumented.c)
 */

char KdPollBreakIn()
{
  char v0; // bl
  __int16 v1; // di
  __int64 Number; // rcx
  unsigned int *v3; // rdx
  _DWORD **v4; // rsi
  bool v5; // di
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rax
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int16 v20; // [rsp+40h] [rbp-8h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    v0 = 0;
    if ( !(_BYTE)KdDebuggerEnabled && !KdEventLoggingEnabled )
      return v0;
    v1 = v20;
    _disable();
    Number = KeGetPcr()->Prcb.Number;
    v3 = (unsigned int *)KdLogBuffer[Number];
    v4 = (_DWORD **)&KdLogBuffer[Number];
    v5 = (v1 & 0x200) != 0;
    if ( v3 )
    {
      v6 = (unsigned __int64 *)&v3[4 * *v3 + 4];
      v7 = __rdtsc();
      *v6 = ((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7;
      v6[1] = 4 * ((unsigned __int8)KdDebuggerNotPresent & 1u);
    }
    if ( BYTE4(KdpContext) )
    {
      v0 = 1;
      BYTE4(KdpContext) = 0;
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v17 = SchedulerAssist[6];
            SchedulerAssist[6] = v17 + 1;
            if ( v17 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)&KdDebuggerLock, 0LL) )
        {
          v16 = CurrentPrcb->SchedulerAssist;
          if ( v16 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v18 = v16[6] - 1;
              v16[6] = v18;
              if ( !v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          _mm_pause();
          goto LABEL_14;
        }
        goto LABEL_9;
      }
      if ( (unsigned __int8)KiTryToAcquireSpinLockInstrumented(&KdDebuggerLock) )
      {
LABEL_9:
        if ( !(unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) )
          v0 = 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&KdDebuggerLock, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)&KdDebuggerLock, 0LL);
        v10 = KeGetCurrentPrcb();
        v11 = v10->SchedulerAssist;
        if ( v11 )
        {
          if ( v10->NestingLevel <= 1u )
          {
            v19 = v11[6] - 1;
            v11[6] = v19;
            if ( !v19 )
              KiRemoveSystemWorkPriorityKick(v10);
          }
        }
      }
    }
LABEL_14:
    v0 &= (unsigned __int8)KdDebuggerEnabled;
    v12 = *v4;
    KdpControlCPressed |= v0;
    if ( v12 )
    {
      v13 = (unsigned int)*v12;
      v14 = __rdtsc();
      *(_QWORD *)&v12[4 * v13 + 6] = v12[4 * v13 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1u)) | ((((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) - *(_QWORD *)&v12[4 * v13 + 4]) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (_DWORD)v13 == 254 )
        *v12 = 0;
      else
        *v12 = v13 + 1;
    }
    if ( v5 )
      _enable();
    return v0;
  }
  return 0;
}
