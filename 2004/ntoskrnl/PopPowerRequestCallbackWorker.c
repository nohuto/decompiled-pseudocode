/*
 * XREFs of PopPowerRequestCallbackWorker @ 0x1402765C0
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140275FBC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140276180 (PoSetPowerRequestInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PopPowerRequestExecuteCallbacks @ 0x1402766F8 (PopPowerRequestExecuteCallbacks.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopPowerRequestCallbackWorker()
{
  _QWORD *v0; // rax
  __int64 v1; // rbx
  int v2; // edi
  char *v3; // rcx
  __int64 v4; // r8
  char v5; // al
  __int64 result; // rax
  unsigned __int64 OldIrql; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    if ( (__int64 *)PopPowerRequestCallbacks == &PopPowerRequestCallbacks )
    {
      v1 = 0LL;
      v2 = 0;
      PopCallbackWorkItemScheduled = 0;
    }
    else
    {
      v0 = *(_QWORD **)(qword_140C24D98 + 8);
      if ( *(__int64 **)qword_140C24D98 != &PopPowerRequestCallbacks || *v0 != qword_140C24D98 )
        __fastfail(3u);
      v1 = qword_140C24D98 - 56;
      qword_140C24D98 = *(_QWORD *)(qword_140C24D98 + 8);
      v2 = 0;
      *v0 = &PopPowerRequestCallbacks;
      v3 = (char *)(v1 + 72);
      v4 = 6LL;
      do
      {
        v5 = *v3;
        v12[(_QWORD)v3 - v1 - 72] = *v3;
        if ( v5 )
        {
          *v3 = 0;
          ++v2;
        }
        ++v3;
        --v4;
      }
      while ( v4 );
      *(_BYTE *)(v1 + 78) = 0;
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
          v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v10 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !v1 )
      break;
    if ( v2 )
      PopPowerRequestExecuteCallbacks(v12, *(unsigned int *)(v1 + 28), *(unsigned int *)(v1 + 16));
    ObfDereferenceObjectWithTag((PVOID)v1, 0x72506F50u);
  }
  return result;
}
