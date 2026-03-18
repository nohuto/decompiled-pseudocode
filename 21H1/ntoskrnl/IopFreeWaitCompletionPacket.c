/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x1402FBEA0
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1402FB7D8 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall IopFreeWaitCompletionPacket(_QWORD *Object, PVOID a2)
{
  void *v2; // r14
  KIRQL v5; // al
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v2 = (void *)Object[10];
  v5 = KeAcquireSpinLockRaiseToDpc(Object + 12);
  Object[11] = 0LL;
  v6 = v5;
  *((_BYTE *)Object + 104) = 0;
  KxReleaseSpinLock(Object + 12);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  ObfDereferenceObjectWithTag(a2, 0x746C6644u);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
