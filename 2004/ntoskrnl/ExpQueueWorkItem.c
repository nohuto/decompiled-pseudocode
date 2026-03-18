/*
 * XREFs of ExpQueueWorkItem @ 0x1402B7B10
 * Callers:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1402C7E8C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemEx @ 0x1402FACC0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemFromIo @ 0x140342A58 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140388B48 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B19D8 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     MmGetNextNode @ 0x14027E6C8 (MmGetNextNode.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140282110 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     ExpNewThreadNecessary @ 0x1402B8F00 (ExpNewThreadNecessary.c)
 *     ExpIsPoolReadyForWork @ 0x1402B8F50 (ExpIsPoolReadyForWork.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpQueueWorkItem(__int64 a1, _QWORD *a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned __int8 v5; // di
  __int64 v6; // r15
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // r13
  _KNODE *ParentNode; // rcx
  unsigned int NextNode; // ecx
  unsigned int v14; // r11d
  __int64 v15; // rsi
  __int64 v16; // r8
  _DWORD *v17; // r9
  int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rsi
  _QWORD **v22; // r14
  __int64 v23; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // ecx
  _QWORD *v30; // rbx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // rax
  _DWORD *v40; // r9
  int v41; // edx
  bool v42; // zf
  int v43; // [rsp+30h] [rbp-58h] BYREF
  __int64 v44; // [rsp+38h] [rbp-50h]
  __int64 v45; // [rsp+40h] [rbp-48h]
  int v47; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a3;
  v7 = 0;
  v47 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  if ( a4 >= (unsigned __int16)KeNumberNodes )
    a4 = ParentNode->Affinity.Reserved[0];
  LOWORD(NextNode) = a4;
  if ( a4 < (unsigned __int16)KeNumberNodes )
  {
    v14 = a5;
    while ( 1 )
    {
      v15 = KeNodeBlock[(unsigned __int16)NextNode];
      if ( (_UNKNOWN *)v15 == (_UNKNOWN *)((char *)&KiNodeInit + 384 * (unsigned __int16)NextNode) )
        v15 = 0LL;
      v45 = v15;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(a1, v15, v14) )
        break;
      NextNode = MmGetNextNode(v18, &v47);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_26;
    }
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(v15 + 146));
    v21 = *(_QWORD *)(v20 + 8 * v19);
    if ( (v21 & 1) != 0 )
      v21 = 0LL;
    v22 = (_QWORD **)(v21 + 8);
    v23 = KeGetCurrentIrql();
    v44 = v23;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v23 <= 0xFu )
    {
      v17 = KeGetCurrentPrcb()->SchedulerAssist;
      v20 = (-1LL << ((unsigned __int8)v23 + 1)) & 4;
      v16 = (unsigned int)v20 | v17[5];
      v17[5] = v16;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v43 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( _interlockedbittestandset((volatile signed __int32 *)v21, 7u) )
    {
      do
        KeYieldProcessorEx(&v43, v20, v16, (__int64)v17);
      while ( (*(_DWORD *)v21 & 0x80u) != 0 );
    }
    if ( *v22 != v22 && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v21 || CurrentThread->WaitReason != 15) )
    {
      v26 = 32LL;
      v27 = v21 + 664;
      do
      {
        v28 = *(_DWORD *)(v27 - 4);
        v27 -= 4LL;
        v7 += v28;
        --v26;
        v29 = *(_DWORD *)(v21 + 664);
        if ( v7 >= v29 )
          goto LABEL_29;
      }
      while ( v26 > v6 );
      if ( v7 < v29 )
      {
        v30 = *v22;
        while ( 1 )
        {
          v31 = (_QWORD *)*v30;
          v32 = (__int64)v30;
          v30 = v31;
          v33 = *(_QWORD **)(v32 + 8);
          if ( v31[1] != v32 || *v33 != v32 )
            break;
          *v33 = v31;
          v31[1] = v33;
          if ( (unsigned __int8)KiTryUnwaitThreadWithPriority((__int64)CurrentPrcb, v32, (__int64)a2, (unsigned int)v6) )
            goto LABEL_23;
          if ( v30 == v22 )
            goto LABEL_29;
        }
LABEL_44:
        __fastfail(3u);
      }
    }
LABEL_29:
    ++*(_DWORD *)(v21 + 4);
    v35 = v21 + 16 * v6 + 24;
    v36 = *(_QWORD **)(v35 + 8);
    if ( *v36 != v35 )
      goto LABEL_44;
    *a2 = v35;
    a2[1] = v36;
    *v36 = a2;
    *(_QWORD *)(v35 + 8) = a2;
LABEL_23:
    _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, v44);
    if ( (unsigned __int8)ExpNewThreadNecessary(v21, *(unsigned int *)(v21 + 720)) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned __int16 *)(v45 + 146)) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_26:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v42 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v42 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
