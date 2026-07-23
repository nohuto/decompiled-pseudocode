/*
 * XREFs of PopFxActivateComponent @ 0x1403BEC70
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140281BAC (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x1407B507C (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PopFxActivateComponentWorker @ 0x140281BAC (PopFxActivateComponentWorker.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall PopFxActivateComponent(ULONG_PTR a1, __int64 a2, char a3, char a4)
{
  int v8; // eax
  char v9; // r14
  _BYTE *v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v12; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v15; // zf
  _BYTE v17[64]; // [rsp+30h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  v8 = *(_DWORD *)(a1 + 824);
  if ( (v8 & 1) != 0 )
    return v8;
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
  v10 = v17;
  if ( (a3 & 2) != 0 )
    v10 = 0LL;
  v8 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
  if ( v8 == 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    LOBYTE(v8) = PopFxActivateComponentWorker(a1, a2, a4, (__int64)v10);
LABEL_8:
    if ( (a3 & 1) != 0 )
      LOBYTE(v8) = KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    goto LABEL_10;
  }
  if ( v8 >= 0 )
  {
    if ( (v8 & 0x40000000) != 0 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
      KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 128));
      LOBYTE(v8) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v8) = KeGetCurrentIrql();
          if ( (unsigned __int8)v8 <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)v8 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = (v8 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v8;
            if ( v15 )
              LOBYTE(v8) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
    }
    goto LABEL_8;
  }
LABEL_10:
  if ( v9 )
    LOBYTE(v8) = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v8;
}
