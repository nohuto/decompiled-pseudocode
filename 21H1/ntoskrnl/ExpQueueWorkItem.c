/*
 * XREFs of ExpQueueWorkItem @ 0x140224E90
 * Callers:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x14023505C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x140304FF8 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x140356CA0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140387BD8 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B12B8 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     ExpNewThreadNecessary @ 0x140226280 (ExpNewThreadNecessary.c)
 *     ExpIsPoolReadyForWork @ 0x1402262D0 (ExpIsPoolReadyForWork.c)
 *     MmGetNextNode @ 0x140241930 (MmGetNextNode.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140245930 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned int v16; // r10d
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
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _DWORD *SchedulerAssist; // r9
  _DWORD *v35; // r9
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // rax
  _DWORD *v38; // r9
  int v39; // edx
  bool v40; // zf
  int v41; // [rsp+30h] [rbp-58h] BYREF
  __int64 v42; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  int v45; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a3;
  v7 = 0;
  v45 = 0;
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
      v43 = v15;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(a1, v15, v14) )
        break;
      NextNode = MmGetNextNode(v16, &v45);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_26;
    }
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(v15 + 146)) + 8 * v17);
    if ( (v18 & 1) != 0 )
      v18 = 0LL;
    v19 = (_QWORD **)(v18 + 8);
    v20 = KeGetCurrentIrql();
    v42 = v20;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v20 <= 0xFu )
    {
      v35 = KeGetCurrentPrcb()->SchedulerAssist;
      v35[5] |= (-1 << (v20 + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v41 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( _interlockedbittestandset((volatile signed __int32 *)v18, 7u) )
    {
      do
        KeYieldProcessorEx(&v41);
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
    v32 = v18 + 16 * v6 + 24;
    v33 = *(_QWORD **)(v32 + 8);
    if ( *v33 != v32 )
      goto LABEL_44;
    *a2 = v32;
    a2[1] = v33;
    *v33 = a2;
    *(_QWORD *)(v32 + 8) = a2;
LABEL_23:
    _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v42);
    if ( (unsigned __int8)ExpNewThreadNecessary(v18, *(unsigned int *)(v18 + 720)) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned __int16 *)(v43 + 146)) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_26:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v40 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v40 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
