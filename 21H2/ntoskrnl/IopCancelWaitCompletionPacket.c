/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x1402F09D8
 * Callers:
 *     NtCancelWaitCompletionPacket @ 0x14023EF40 (NtCancelWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x1402EE2D0 (IopCloseWaitCompletionPacket.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiDeregisterObjectWaitBlock @ 0x140232968 (KiDeregisterObjectWaitBlock.c)
 *     KeRemoveQueueEntry @ 0x14024C7D4 (KeRemoveQueueEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObGetAssociatedWaitObject @ 0x1402F1004 (ObGetAssociatedWaitObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall IopCancelWaitCompletionPacket(_QWORD *Object, char a2, unsigned __int8 a3)
{
  void *v3; // r14
  unsigned __int64 v5; // rdi
  volatile signed __int32 *AssociatedWaitObject; // rax
  char v8; // al
  void *v9; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  v3 = (void *)Object[10];
  v5 = a3;
  AssociatedWaitObject = (volatile signed __int32 *)ObGetAssociatedWaitObject(v3);
  v8 = KiDeregisterObjectWaitBlock(AssociatedWaitObject, Object);
  v9 = (void *)Object[11];
  if ( !v8 && (!a2 || !KeRemoveQueueEntry(Object[11], Object)) )
    return 0;
  Object[11] = 0LL;
  *((_BYTE *)Object + 104) = 0;
  KxReleaseSpinLock(Object + 12);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
