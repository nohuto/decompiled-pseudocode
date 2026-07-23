/*
 * XREFs of KiAdjustThreadTimer @ 0x14051F214
 * Callers:
 *     KeAdjustTimerDelayProcess @ 0x140513A0C (KeAdjustTimerDelayProcess.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KiSuspendThread @ 0x1402682C4 (KiSuspendThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiAdjustThreadTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rbp
  int v6; // r12d
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char result; // al
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)(a1 + 736);
  v6 = a4;
  v9 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736), a2, a3, a4);
  if ( *(char *)(a1 + 644) < 1 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    result = KiSuspendThread(a1, a2, v11);
    if ( !result )
      goto LABEL_29;
    v9 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = SchedulerAssist[6];
        SchedulerAssist[6] = v16 + 1;
        if ( v16 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v17[6] - 1;
        v17[6] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v21, v10, v11, v12);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x60000) == 0x60000 && (*(_BYTE *)(a1 + 257) & 1) == 0 )
  {
    v19 = *(_QWORD *)(a1 + 280);
    if ( a3 >= 0 )
    {
      if ( a3 > 0 && v19 - a3 < v19 )
        v19 -= a3;
    }
    else
    {
      v20 = v19 - a3;
      v19 = 0LL;
      if ( v20 <= 0 )
        v19 = v20;
    }
    *(_QWORD *)(a1 + 280) = v19;
  }
  *(_DWORD *)(a1 + 952) = v6;
  result = KiReleaseThreadLockSafe(a1);
  if ( v9 )
    result = KiResumeThread(a1, a2, 0LL);
LABEL_29:
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return result;
}
