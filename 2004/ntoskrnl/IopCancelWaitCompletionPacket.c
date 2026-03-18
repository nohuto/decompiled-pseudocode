/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x1402D591C
 * Callers:
 *     NtCancelWaitCompletionPacket @ 0x1402D5790 (NtCancelWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x1402D5D40 (IopCloseWaitCompletionPacket.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObpGetWaitObject @ 0x14020E3C0 (ObpGetWaitObject.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeDeregisterObjectNotification @ 0x1402D5A48 (KeDeregisterObjectNotification.c)
 *     KeRemoveQueueEntry @ 0x14035230C (KeRemoveQueueEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall IopCancelWaitCompletionPacket(_QWORD *Object, char a2, unsigned __int8 a3)
{
  void *v3; // r14
  unsigned __int64 v5; // rdi
  __int16 *WaitObject; // rax
  __int16 *v8; // rcx
  char v9; // al
  void *v10; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v3 = (void *)Object[10];
  v5 = a3;
  WaitObject = (__int16 *)ObpGetWaitObject((__int64)v3 - 48);
  v8 = 0LL;
  if ( WaitObject != &ObpDefaultObject )
    v8 = WaitObject;
  v9 = KeDeregisterObjectNotification(v8);
  v10 = (void *)Object[11];
  if ( !v9 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(Object[11], Object)) )
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
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
