/*
 * XREFs of ExpQueueWorkItem @ 0x1402E5CF0
 * Callers:
 *     ExQueueWorkItemFromIo @ 0x1402345F8 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x1402681A8 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemToPrivatePool @ 0x14038B688 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B7198 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     MmGetNextNode @ 0x140211644 (MmGetNextNode.c)
 *     ExpNewThreadNecessary @ 0x1402E70E0 (ExpNewThreadNecessary.c)
 *     ExpIsPoolReadyForWork @ 0x1402E7130 (ExpIsPoolReadyForWork.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1402E71B0 (KiTryUnwaitThreadWithPriority.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  int v16; // r10d
  __int64 v17; // r11
  __int64 v18; // rsi
  _QWORD **v19; // r14
  __int64 v20; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // ecx
  _QWORD *v27; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _DWORD *SchedulerAssist; // r9
  _DWORD *v37; // r9
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
      NextNode = MmGetNextNode(v16, &v47);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_26;
    }
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(v15 + 146)) + 8 * v17);
    if ( (v18 & 1) != 0 )
      v18 = 0LL;
    v19 = (_QWORD **)(v18 + 8);
    v20 = KeGetCurrentIrql();
    v44 = v20;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v20 <= 0xFu )
    {
      v37 = KeGetCurrentPrcb()->SchedulerAssist;
      v37[5] |= (-1 << (v20 + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v43 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( _interlockedbittestandset((volatile signed __int32 *)v18, 7u) )
    {
      do
        KeYieldProcessorEx(&v43);
      while ( (*(_DWORD *)v18 & 0x80u) != 0 );
    }
    if ( *v19 != v19 && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v18 || CurrentThread->WaitReason != 15) )
    {
      v23 = 32LL;
      v24 = v18 + 664;
      do
      {
        v25 = *(_DWORD *)(v24 - 4);
        v24 -= 4LL;
        v7 += v25;
        --v23;
        v26 = *(_DWORD *)(v18 + 664);
        if ( v7 >= v26 )
          goto LABEL_29;
      }
      while ( v23 > v6 );
      if ( v7 < v26 )
      {
        v27 = *v19;
        while ( 1 )
        {
          v28 = (_QWORD *)*v27;
          v29 = v27;
          v27 = v28;
          v30 = (_QWORD *)v29[1];
          if ( (_QWORD *)v28[1] != v29 || (_QWORD *)*v30 != v29 )
            break;
          *v30 = v28;
          v28[1] = v30;
          if ( (unsigned __int8)KiTryUnwaitThreadWithPriority(CurrentPrcb, v29, a2, (unsigned int)v6) )
            goto LABEL_23;
          if ( v27 == v19 )
            goto LABEL_29;
        }
LABEL_44:
        __fastfail(3u);
      }
    }
LABEL_29:
    ++*(_DWORD *)(v18 + 4);
    v34 = v18 + 16 * v6 + 24;
    v35 = *(_QWORD **)(v34 + 8);
    if ( *v35 != v34 )
      goto LABEL_44;
    *a2 = v34;
    a2[1] = v35;
    *v35 = a2;
    *(_QWORD *)(v34 + 8) = a2;
LABEL_23:
    _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v44);
    if ( (unsigned __int8)ExpNewThreadNecessary(v18, *(unsigned int *)(v18 + 720), v31, v32) )
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
