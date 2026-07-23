/*
 * XREFs of KiWaitSatisfyAny @ 0x14030EEAC
 * Callers:
 *     KiWaitForAllObjects @ 0x14030EAC0 (KiWaitForAllObjects.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyOther @ 0x14030F3FC (KiWaitSatisfyOther.c)
 *     KiWaitSatisfyMutant @ 0x14030F468 (KiWaitSatisfyMutant.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiWaitSatisfyAny(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  int v18; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(v6) = KiWaitSatisfyOther(BugCheckParameter2);
  if ( !(_BYTE)v6 )
  {
    LOBYTE(v6) = *(_BYTE *)v8 & 0x7F;
    if ( (_BYTE)v6 == 2 && (*(_DWORD *)(v8 + 4))-- == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = SchedulerAssist[6];
            SchedulerAssist[6] = v14 + 1;
            if ( v14 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
          break;
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v15[6] - 1;
            v15[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v18, v7, v9, v10);
        while ( *(_QWORD *)(a2 + 64) );
      }
      KiWaitSatisfyMutant(BugCheckParameter2, a2, a3, v10);
      LOBYTE(v6) = KiReleaseThreadLockSafe(a2);
      if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 2) != 0 )
      {
        v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1);
        if ( v6 )
          *(_BYTE *)(v6 + 26) |= 1u;
      }
    }
  }
  return v6;
}
