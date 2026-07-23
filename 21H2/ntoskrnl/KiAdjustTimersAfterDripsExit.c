/*
 * XREFs of KiAdjustTimersAfterDripsExit @ 0x14051419C
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1402C94E0 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiAdjustTimerDueTimes @ 0x14039E2BC (KiAdjustTimerDueTimes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAdjustTimersAfterDripsExit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  _OWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  result = 0LL;
  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  if ( KiSerializeTimerExpiration )
  {
    v5 = a2 - KiClockTimerOneShotStartTime;
    result = (unsigned int)KiTimerRebaseThresholdOnDripsExit;
    *((_QWORD *)&v15[1] + 1) = v5;
    if ( v5 > 10000000LL * (unsigned int)KiTimerRebaseThresholdOnDripsExit )
    {
      MEMORY[0xFFFFF780000003B0] += v5;
      if ( MEMORY[0xFFFFF780000003B0] < 0 )
        __fastfail(5u);
      *((_QWORD *)&v15[1] + 1) = -*((_QWORD *)&v15[1] + 1);
      DWORD1(v15[0]) = 0;
      v6 = KiProcessorBlock[0];
      if ( !KiSerializeTimerExpiration )
        v6 = a1;
      LOBYTE(v15[0]) = 1;
      v7 = v6 + 14656;
      LOBYTE(v16) = 1;
      *(_OWORD *)((char *)v15 + 8) = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a4 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = a4;
      }
      KiAdjustTimerDueTimes((__int64)KeGetCurrentPrcb(), v7, (__int64)v15, a4);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v10 = KeGetCurrentIrql();
          if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v12 = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v13 & v12[5]) == 0;
            v12[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
