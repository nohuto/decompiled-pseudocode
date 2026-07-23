/*
 * XREFs of KeQueryOwnerMutant @ 0x14051B0A0
 * Callers:
 *     NtQueryMutant @ 0x140957120 (NtQueryMutant.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeQueryOwnerMutant(PKMUTANT Mutant, PCLIENT_ID ClientId)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  PCLIENT_ID v4; // r14
  unsigned __int8 CurrentIrql; // bl
  _KTHREAD *OwnerThread; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  ClientId->UniqueProcess = 0LL;
  v4 = ClientId;
  ClientId->UniqueThread = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    ClientId = (PCLIENT_ID)((-1LL << (CurrentIrql + 1)) & 4);
    v2 = (unsigned int)ClientId | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  KiAcquireKobjectLockSafe(&Mutant->Header.Lock, (__int64)ClientId, v2, (__int64)SchedulerAssist);
  OwnerThread = Mutant->OwnerThread;
  if ( OwnerThread )
    *v4 = *(PCLIENT_ID)&OwnerThread[1].CycleTime;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
}
