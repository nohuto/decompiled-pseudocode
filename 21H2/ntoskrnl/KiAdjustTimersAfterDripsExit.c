/*
 * XREFs of KiAdjustTimersAfterDripsExit @ 0x14056CDBC
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiSelectActiveTimerTable @ 0x1402A8670 (KiSelectActiveTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x1403AD6AC (KiAdjustTimerDueTimes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall KiAdjustTimersAfterDripsExit(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 active; // r10
  unsigned __int8 CurrentIrql; // bl
  int v7; // edx
  unsigned __int64 v8; // r15
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  char v14; // [rsp+20h] [rbp-30h] BYREF
  __int16 v15; // [rsp+21h] [rbp-2Fh]
  char v16; // [rsp+23h] [rbp-2Dh]
  int v17; // [rsp+24h] [rbp-2Ch]
  __int128 v18; // [rsp+28h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-18h]
  char v20; // [rsp+40h] [rbp-10h]
  int v21; // [rsp+41h] [rbp-Fh]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+8h] BYREF

  result = (unsigned __int64)&retaddr;
  v15 = 0;
  v16 = 0;
  v19 = 0LL;
  v21 = 0;
  if ( KiSerializeTimerExpiration )
  {
    v3 = a2 - KiClockTimerOneShotStartTime;
    result = (unsigned int)KiTimerRebaseThresholdOnDripsExit;
    v19 = v3;
    if ( v3 > 10000000LL * (unsigned int)KiTimerRebaseThresholdOnDripsExit )
    {
      MEMORY[0xFFFFF780000003B0] += v3;
      if ( MEMORY[0xFFFFF780000003B0] < 0 )
        __fastfail(5u);
      v19 = -v19;
      v14 = 1;
      v17 = 0;
      v18 = 0LL;
      v20 = 1;
      active = KiSelectActiveTimerTable(a1, 0);
      CurrentIrql = KeGetCurrentIrql();
      v8 = (unsigned int)(v7 + 2);
      __writecr8(v8);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      KiAdjustTimerDueTimes((__int64)KeGetCurrentPrcb(), active, (__int64)&v14, (__int64)SchedulerAssist);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v9 = KeGetCurrentIrql();
          if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= (unsigned __int8)v8 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v13 = (v12 & v11[5]) == 0;
            v11[5] &= v12;
            if ( v13 )
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
