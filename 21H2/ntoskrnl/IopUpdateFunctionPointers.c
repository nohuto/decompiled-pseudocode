/*
 * XREFs of IopUpdateFunctionPointers @ 0x1405018D8
 * Callers:
 *     IopIrpExtensionControl @ 0x140500E18 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x140507D60 (IoPerfInit.c)
 *     IoPerfReset @ 0x140507E5C (IoPerfReset.c)
 *     IoVerifierInit @ 0x1409C576C (IoVerifierInit.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopUpdateFunctionPointers(int a1, char a2, char a3)
{
  int v6; // eax
  volatile __int32 *v7; // rcx
  __int32 v8; // eax
  __int32 v9; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( a2 )
    v6 = a1 | IopFunctionPointerMask;
  else
    v6 = IopFunctionPointerMask & ~a1;
  IopFunctionPointerMask = v6;
  if ( (v6 & 1) != 0 )
  {
    _InterlockedExchange(&IopDispatchAllocateIrp, 1);
    _InterlockedExchange(&IopDispatchCallDriver, 1);
    v7 = &IopDispatchFreeIrp;
    _InterlockedExchange(&IopDispatchCompleteRequest, 1);
    v8 = 1;
  }
  else
  {
    _InterlockedExchange(&IopDispatchFreeIrp, 0);
    v7 = &IopDispatchAllocateIrp;
    v9 = (IopFunctionPointerMask & 2) != 0 ? 3 : 0;
    _InterlockedExchange(&IopDispatchCallDriver, v9);
    _InterlockedExchange(&IopDispatchCompleteRequest, v9);
    if ( (IopFunctionPointerMask & 4) != 0 )
      v8 = 2;
    else
      v8 = 0;
  }
  result = (unsigned int)_InterlockedExchange(v7, v8);
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v14 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}
