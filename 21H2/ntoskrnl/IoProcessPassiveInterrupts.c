/*
 * XREFs of IoProcessPassiveInterrupts @ 0x140560798
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x14045B710 (KiDispatchPassiveInterrupts.c)
 *     KiInterruptDispatchCommon @ 0x140575CD8 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x140459EC8 (IopAcquirePassiveInterruptBlockLock.c)
 *     IopFindPassiveInterruptBlock @ 0x1405609F8 (IopFindPassiveInterruptBlock.c)
 */

__int64 IoProcessPassiveInterrupts()
{
  __int64 result; // rax
  __int64 v1; // rbx
  bool v2; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v4; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  unsigned __int8 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  result = IopFindPassiveInterruptBlock();
  v1 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 32) )
      ((void (__fastcall *)(_QWORD, __int64))off_140C01DC0[0])(*(unsigned int *)(result + 24), 1LL);
    IopAcquirePassiveInterruptBlockLock(v1, &v8);
    v2 = *(_BYTE *)(v1 + 64) == 0;
    *(_BYTE *)(v1 + 65) = 1;
    if ( v2 )
    {
      *(_BYTE *)(v1 + 64) = 1;
      KiInsertQueueDpc(v1 + 104, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v1 + 56));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v4 = v8;
      if ( v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v4 = v8;
        v7 = ~(unsigned __int16)(-1LL << (v8 + 1));
        v2 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v2 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    else
    {
      v4 = v8;
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
