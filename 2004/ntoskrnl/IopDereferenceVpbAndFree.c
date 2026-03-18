/*
 * XREFs of IopDereferenceVpbAndFree @ 0x14032BD40
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x140890E20 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferenceVpbAndFree(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  void *v5; // r14
  unsigned __int8 CurrentIrql; // bp
  char *v7; // rbx
  volatile __int64 *v8; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v10; // rdx
  _QWORD *v11; // rdx
  bool v12; // zf
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax

  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v8 = (volatile __int64 *)*((_QWORD *)v7 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v13 = v10[6];
      v10[6] = v13 + 1;
      if ( v13 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  else
  {
    v11 = (_QWORD *)_InterlockedExchange64(v8, (__int64)v7);
    if ( v11 )
      KxWaitForLockOwnerShip((__int64)v7, v11, a3, (__int64)SchedulerAssist);
  }
  v12 = (*(_DWORD *)(a1 + 28))-- == 1;
  if ( v12 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v5 = (void *)a1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)KeGetPcr()->NtTib.ArbitraryUserPointer + 6);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
