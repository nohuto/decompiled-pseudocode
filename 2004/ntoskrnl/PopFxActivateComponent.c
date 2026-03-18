/*
 * XREFs of PopFxActivateComponent @ 0x1403BBB70
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1402CA494 (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x1407A0BBC (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     PopFxActivateComponentWorker @ 0x1402CA494 (PopFxActivateComponentWorker.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 */

LONG __fastcall PopFxActivateComponent(ULONG_PTR a1, __int64 a2, char a3, char a4)
{
  LONG result; // eax
  char v9; // r14
  int *v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v12; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v15; // zf
  _BYTE v16[64]; // [rsp+30h] [rbp-58h] BYREF

  memset(v16, 0, sizeof(v16));
  result = *(_DWORD *)(a1 + 824);
  if ( (result & 1) == 0 )
  {
    if ( (a3 & 6) == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v9 = 1;
      --CurrentThread->SpecialApcDisable;
    }
    else
    {
      v9 = 0;
    }
    v10 = (int *)v16;
    if ( (a3 & 2) != 0 )
      v10 = 0LL;
    result = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( result == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      result = PopFxActivateComponentWorker(a1, a2, a4, v10);
    }
    else
    {
      if ( result < 0 )
      {
LABEL_10:
        if ( v9 )
          return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        return result;
      }
      if ( (result & 0x40000000) != 0 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
        KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 128));
        result = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = (result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v15 )
                result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v12);
      }
    }
    if ( (a3 & 1) != 0 )
      result = KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    goto LABEL_10;
  }
  return result;
}
