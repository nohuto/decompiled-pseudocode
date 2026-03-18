/*
 * XREFs of IopDecrementVpbRefCount @ 0x1402A6FB0
 * Callers:
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rbx
  volatile __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // rdx
  unsigned int v8; // ebx
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // edx
  bool v16; // zf

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
    v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v7[6];
        v7[6] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v4, v5);
    }
    else if ( _InterlockedExchange64(v5, (__int64)v4) )
    {
      KxWaitForLockOwnerShip(v4);
    }
    v8 = --*(_DWORD *)(a1 + 28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)KeGetPcr()->NtTib.ArbitraryUserPointer + 6);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
    }
    __writecr8(CurrentIrql);
    return v8;
  }
  else
  {
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  }
}
