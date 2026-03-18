/*
 * XREFs of PopFxActivateComponent @ 0x1403BA820
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140237664 (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x14079CBDC (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     PopFxActivateComponentWorker @ 0x140237664 (PopFxActivateComponentWorker.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 */

LONG __fastcall PopFxActivateComponent(ULONG_PTR a1, __int64 a2, char a3, char a4)
{
  __int64 v8; // rdx
  __int64 SchedulerAssist; // r8
  LONG result; // eax
  char v11; // r14
  struct _KPRCB *CurrentPrcb; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v14; // rsi
  bool v15; // zf
  _BYTE v16[64]; // [rsp+30h] [rbp-58h] BYREF

  memset(v16, 0, sizeof(v16));
  result = *(_DWORD *)(a1 + 824);
  if ( (result & 1) == 0 )
  {
    if ( (a3 & 6) == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v11 = 1;
      --CurrentThread->SpecialApcDisable;
    }
    else
    {
      v11 = 0;
    }
    CurrentPrcb = (struct _KPRCB *)v16;
    if ( (a3 & 2) != 0 )
      CurrentPrcb = 0LL;
    result = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( result == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      result = PopFxActivateComponentWorker(a1, a2, a4, (int *)CurrentPrcb);
    }
    else
    {
      if ( result < 0 )
      {
LABEL_10:
        if ( v11 )
          return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v8, SchedulerAssist, (__int64)CurrentPrcb);
        return result;
      }
      if ( (result & 0x40000000) != 0 )
      {
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
        KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 128));
        result = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
              SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
              v15 = (result & *(_DWORD *)(SchedulerAssist + 20)) == 0;
              v8 = (unsigned int)result & *(_DWORD *)(SchedulerAssist + 20);
              *(_DWORD *)(SchedulerAssist + 20) = v8;
              if ( v15 )
                result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v14);
      }
    }
    if ( (a3 & 1) != 0 )
      result = KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    goto LABEL_10;
  }
  return result;
}
