/*
 * XREFs of IopIrpExtensionControl @ 0x1404FBA40
 * Callers:
 *     IopEtwEnableCallback @ 0x14088E4F0 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x140892400 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x140892510 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     IopUpdateFunctionPointers @ 0x1404FC508 (IopUpdateFunctionPointers.c)
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
      ++dword_140CF48AC;
    if ( (a1 & 2) != 0 )
      ++dword_140CF48B0;
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
    if ( (a1 & 1) != 0 && !--dword_140CF48AC )
      IopIrpExtensionStatus &= ~1u;
    if ( (a1 & 2) != 0 && !--dword_140CF48B0 )
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
