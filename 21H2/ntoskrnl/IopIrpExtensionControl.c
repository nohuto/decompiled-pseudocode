/*
 * XREFs of IopIrpExtensionControl @ 0x140556DE0
 * Callers:
 *     IopEtwEnableCallback @ 0x140934260 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x140937E50 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x140937F70 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     IopUpdateFunctionPointers @ 0x14055712C (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IopIrpExtensionControl(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // cl
  __int64 result; // rax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( a2 == 1 )
  {
    v6 = IopIrpExtensionStatus == 0;
    IopIrpExtensionStatus |= a1;
    if ( (a1 & 1) != 0 )
      ++dword_140D01114;
    if ( (a1 & 2) != 0 )
      ++dword_140D01118;
    if ( v6 )
    {
      LOBYTE(v4) = 1;
LABEL_16:
      LOBYTE(v5) = 1;
      IopUpdateFunctionPointers(4LL, v4, v5);
    }
  }
  else
  {
    if ( (a1 & 1) != 0 && !--dword_140D01114 )
      IopIrpExtensionStatus &= ~1u;
    if ( (a1 & 2) != 0 && !--dword_140D01118 )
      IopIrpExtensionStatus &= ~2u;
    if ( !IopIrpExtensionStatus )
    {
      v4 = 0LL;
      goto LABEL_16;
    }
  }
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
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
