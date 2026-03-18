/*
 * XREFs of PopFxActivateComponent @ 0x1403BDFF0
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140246130 (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x1407AFEEC (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     PopFxActivateComponentWorker @ 0x140246130 (PopFxActivateComponentWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 */

int __fastcall PopFxActivateComponent(ULONG_PTR a1, __int64 a2, char a3, char a4)
{
  int result; // eax
  char v9; // r14
  _BYTE *v10; // r9
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
    v10 = v16;
    if ( (a3 & 2) != 0 )
      v10 = 0LL;
    result = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( result == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      result = PopFxActivateComponentWorker(a1, a2, a4, (__int64)v10);
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
