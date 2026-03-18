/*
 * XREFs of ExQueueWorkItemFromIo @ 0x140345DA0
 * Callers:
 *     IoQueueWorkItem @ 0x14023E0D0 (IoQueueWorkItem.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1402DE684 (PnpDeviceCompletionRequestDestroy.c)
 *     IoQueueWorkItemEx @ 0x140345D70 (IoQueueWorkItemEx.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmGetNextNode @ 0x14030B3F0 (MmGetNextNode.c)
 *     ExpValidateWorkItem @ 0x140346210 (ExpValidateWorkItem.c)
 *     ExpNewThreadNecessary @ 0x140346260 (ExpNewThreadNecessary.c)
 *     KeInsertPriQueue @ 0x1403462B0 (KeInsertPriQueue.c)
 *     ExpIsPoolReadyForWork @ 0x140346770 (ExpIsPoolReadyForWork.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v3; // rbx
  int v4; // r12d
  char v5; // di
  __int64 v6; // r13
  unsigned __int8 CurrentIrql; // r14
  unsigned int NextNode; // eax
  int v9; // esi
  unsigned __int16 *v10; // r15
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+68h] [rbp+10h] BYREF

  v3 = a2;
  ExpValidateWorkItem(BugCheckParameter2);
  if ( (unsigned int)v3 >= 7 )
    v4 = v3 - 32;
  else
    v4 = ExpBuiltinPriorities[v3];
  v5 = 0;
  v23 = 0;
  v6 = *((_QWORD *)PspSystemPartition + 2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  NextNode = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v9 = NextNode;
  if ( NextNode < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v10 = (unsigned __int16 *)KeNodeBlock[(unsigned __int16)NextNode];
      if ( v10 == (unsigned __int16 *)((char *)&KiNodeInit + 280 * (unsigned __int16)NextNode) )
        v10 = 0LL;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(v6, v10, 1LL) )
        break;
      NextNode = MmGetNextNode(v9, &v23);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_13;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL * *v10) + 8LL);
    if ( (v13 & 1) != 0 )
      v13 = v12;
    KeInsertPriQueue(v13, BugCheckParameter2, v4, v11, v12);
    if ( (unsigned __int8)ExpNewThreadNecessary(v13, *(unsigned int *)(v13 + 720), v14, v15) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 8LL * *v10) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_13:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, BugCheckParameter2, v3, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
