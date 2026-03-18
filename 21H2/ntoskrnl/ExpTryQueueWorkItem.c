/*
 * XREFs of ExpTryQueueWorkItem @ 0x1402EEE7C
 * Callers:
 *     IoTryQueueWorkItem @ 0x140255440 (IoTryQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x1402EEE50 (ExTryQueueWorkItem.c)
 * Callees:
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402EF2BC (ExpPartitionCreateThreadIfNecessary.c)
 *     ExpTypeToPriority @ 0x1402EF304 (ExpTypeToPriority.c)
 *     MmGetNextNode @ 0x14030B3F0 (MmGetNextNode.c)
 *     ExpValidateWorkItem @ 0x140346210 (ExpValidateWorkItem.c)
 *     KeInsertPriQueue @ 0x1403462B0 (KeInsertPriQueue.c)
 *     ExpIsPoolReadyForWork @ 0x140346770 (ExpIsPoolReadyForWork.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExpTryQueueWorkItem(__int64 a1, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  int v4; // r12d
  char inserted; // r15
  __int64 CurrentIrql; // rbx
  unsigned int v9; // esi
  unsigned __int16 NextNode; // ax
  unsigned __int16 *v11; // r14
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rdi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // [rsp+30h] [rbp-38h]
  int v23; // [rsp+34h] [rbp-34h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h]

  v4 = a2;
  v23 = 0;
  inserted = 0;
  ExpValidateWorkItem(a2);
  v22 = ExpTypeToPriority(a3);
  CurrentIrql = KeGetCurrentIrql();
  v24 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v9 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  NextNode = v9;
  if ( (unsigned __int16)v9 < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v11 = (unsigned __int16 *)KeNodeBlock[NextNode];
      if ( v11 == (unsigned __int16 *)((char *)&KiNodeInit + 280 * NextNode) )
        v11 = 0LL;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(a1, v11, a4) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *v11) + 8LL * (int)a4);
        if ( (v14 & 1) != 0 )
          v14 = 0LL;
        inserted = KeInsertPriQueue(v14, v4, v22, v12, v13);
        if ( inserted )
        {
LABEL_9:
          LOBYTE(CurrentIrql) = v24;
          break;
        }
        *(_DWORD *)(v14 + 716) |= 0x80000000;
        ExpPartitionCreateThreadIfNecessary(a1, v11, v14);
      }
      NextNode = MmGetNextNode(v9, &v23);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_9;
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v17 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return inserted;
}
