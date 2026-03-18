/*
 * XREFs of ExpQueueWorkItem @ 0x1402EF0CC
 * Callers:
 *     ExQueueWorkItemEx @ 0x1402EEBC0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140398000 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x14063F338 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     ExpQueueWorkItemNode @ 0x1402EF254 (ExpQueueWorkItemNode.c)
 *     MmGetNextNode @ 0x14030B3F0 (MmGetNextNode.c)
 *     ExpIsPoolReadyForWork @ 0x140346770 (ExpIsPoolReadyForWork.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExpQueueWorkItem(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  char v8; // r14
  unsigned __int8 CurrentIrql; // bl
  unsigned int NextNode; // ecx
  unsigned int v12; // ebp
  char *v13; // r10
  int v14; // r10d
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v19; // r9
  int v20; // edx
  bool v21; // zf
  int v22; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v22 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( a4 >= (unsigned __int16)KeNumberNodes )
    a4 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LOWORD(NextNode) = a4;
  if ( a4 < (unsigned __int16)KeNumberNodes )
  {
    v12 = a5;
    while ( 1 )
    {
      v13 = (char *)KeNodeBlock[(unsigned __int16)NextNode];
      if ( v13 == (char *)&KiNodeInit + 280 * (unsigned __int16)NextNode )
        v13 = 0LL;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(a1, v13, v12) )
        break;
      NextNode = MmGetNextNode(a4, &v22);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_10;
    }
    ExpQueueWorkItemNode(a1, a2, a3, v14, v12);
    v8 = 1;
  }
LABEL_10:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
