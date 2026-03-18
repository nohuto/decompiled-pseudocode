/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x14050B878
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x14050B524 (IoProcessPassiveInterrupts.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1408A3F70 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1408A40D0 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14050B60C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x14050B92C (IopFindPassiveInterruptBlockLocked.c)
 */

__int64 __fastcall IopFindPassiveInterruptBlock(unsigned int a1)
{
  __int64 PassiveInterruptBlockLocked; // rdi
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v4; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  unsigned __int8 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v10);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(a1);
  KxReleaseSpinLock(&PassiveInterruptListLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v4 = v10;
    if ( v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v4 = v10;
      v7 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  else
  {
    v4 = v10;
  }
  __writecr8(v4);
  return PassiveInterruptBlockLocked;
}
