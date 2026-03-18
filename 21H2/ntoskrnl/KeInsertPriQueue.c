/*
 * XREFs of KeInsertPriQueue @ 0x1403462B0
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402EEE7C (ExpTryQueueWorkItem.c)
 *     ExpQueueWorkItemNode @ 0x1402EF254 (ExpQueueWorkItemNode.c)
 *     ExQueueWorkItemFromIo @ 0x140345DA0 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeInsertPriQueue(_DISPATCHER_HEADER *a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist, char a5)
{
  __int64 v5; // r13
  LIST_ENTRY *p_WaitListHead; // r10
  _QWORD *v7; // r15
  unsigned __int8 v9; // r14
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // r11
  unsigned int v12; // ebx
  _KTHREAD *CurrentThread; // rdi
  char v14; // si
  __int64 v15; // rdx
  PVOID *p_Blink; // r8
  __int64 v17; // rax
  int v18; // ecx
  unsigned int Blink; // ecx
  LIST_ENTRY *Flink; // r15
  LIST_ENTRY *v21; // rax
  LIST_ENTRY *v22; // rsi
  struct _LIST_ENTRY *v23; // rcx
  struct _KPRCB *v24; // rbp
  struct _LIST_ENTRY *v25; // rdi
  _DWORD *v26; // rcx
  __int64 Blink_high; // rdx
  __int64 v28; // rax
  char v29; // cl
  int v30; // eax
  struct _LIST_ENTRY *v31; // rcx
  struct _LIST_ENTRY *v32; // rbp
  char v33; // al
  __int64 v34; // rcx
  struct _LIST_ENTRY *v35; // rax
  struct _KDPC *v36; // rcx
  char v37; // al
  struct _KPRCB *v38; // rcx
  char v39; // cl
  __int64 v41; // rcx
  _QWORD *v42; // rax
  struct _LIST_ENTRY *v43; // rdx
  _DWORD *v44; // rcx
  _DWORD *v45; // rcx
  struct _LIST_ENTRY *v46; // rax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  struct _LIST_ENTRY *v50; // rcx
  struct _KPRCB *v51; // r14
  _DWORD *v52; // rcx
  int v53; // eax
  _DWORD *v54; // rcx
  int v55; // eax
  _DWORD *v56; // rcx
  int v57; // eax
  struct _LIST_ENTRY *v58; // rdx
  struct _LIST_ENTRY *v59; // rcx
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rdx
  int v62; // eax
  PVOID *p_Flink; // rdx
  int v64; // eax
  struct _KPRCB *v65; // [rsp+40h] [rbp-48h]
  unsigned __int8 v66; // [rsp+48h] [rbp-40h]
  int v67; // [rsp+90h] [rbp+8h] BYREF
  struct _LIST_ENTRY *v68; // [rsp+98h] [rbp+10h]
  int v69; // [rsp+A8h] [rbp+20h] BYREF

  v69 = (int)SchedulerAssist;
  v68 = (struct _LIST_ENTRY *)a2;
  v5 = (int)a3;
  p_WaitListHead = &a1->WaitListHead;
  v7 = (_QWORD *)a2;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v66 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    CurrentIrql = (unsigned int)(unsigned __int8)CurrentIrql + 1;
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << CurrentIrql) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  v65 = CurrentPrcb;
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( _interlockedbittestandset(&a1->Lock, 7u) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql, a2, a3, SchedulerAssist) )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (a1->LockNV & 0x80u) != 0 || _interlockedbittestandset(&a1->Lock, 7u) );
    CurrentPrcb = v65;
    p_WaitListHead = &a1->WaitListHead;
  }
  v14 = a5;
  if ( p_WaitListHead->Flink != p_WaitListHead && (CurrentThread->Queue != a1 || CurrentThread->WaitReason != 15) )
  {
    LODWORD(v15) = 0;
    p_Blink = (PVOID *)&a1[27].WaitListHead.Blink;
    v17 = 32LL;
    do
    {
      v18 = *((_DWORD *)p_Blink - 1);
      p_Blink = (PVOID *)((char *)p_Blink - 4);
      v15 = (unsigned int)(v18 + v15);
      --v17;
      Blink = (unsigned int)a1[27].WaitListHead.Blink;
      if ( (unsigned int)v15 >= Blink )
        goto LABEL_39;
    }
    while ( v17 > v5 );
    if ( (unsigned int)v15 < Blink )
    {
      Flink = p_WaitListHead->Flink;
      while ( 1 )
      {
        v21 = Flink->Flink;
        v22 = Flink;
        Flink = v21;
        v23 = v22->Blink;
        if ( v21->Blink != v22 || v23->Flink != v22 )
          goto LABEL_115;
        v23->Flink = v21;
        v9 = 0;
        v21->Blink = v23;
        v24 = KeGetCurrentPrcb();
        v25 = v22[1].Blink;
        v69 = 0;
        v26 = v24->SchedulerAssist;
        if ( v26 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v47 = v26[6];
            v26[6] = v47 + 1;
            if ( v47 == -1 )
LABEL_71:
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v25[4], 0LL) )
        {
          v44 = v24->SchedulerAssist;
          if ( v44 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              v48 = v44[6] - 1;
              v44[6] = v48;
              if ( !v48 )
                KiRemoveSystemWorkPriorityKick(v24);
            }
          }
          do
            KeYieldProcessorEx(&v69, v15, (__int64)p_Blink, (__int64)SchedulerAssist);
          while ( v25[4].Flink );
          v45 = v24->SchedulerAssist;
          if ( v45 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              v49 = v45[6];
              v45[6] = v49 + 1;
              if ( v49 == -1 )
                goto LABEL_71;
            }
          }
        }
        if ( BYTE4(v25[24].Flink) == 5 )
        {
          Blink_high = HIDWORD(v25[33].Blink);
          v28 = (unsigned __int8)Blink_high;
          if ( (unsigned __int8)Blink_high != (_DWORD)v5 )
          {
            Blink_high &= 0x100u;
            if ( !(_DWORD)Blink_high )
            {
              v50 = v25[14].Blink;
              _InterlockedDecrement((volatile signed __int32 *)&v50[33].Blink + v28);
              _InterlockedIncrement((volatile signed __int32 *)&v50[33].Blink + v5);
            }
            HIDWORD(v25[33].Blink) = Blink_high | (unsigned __int8)v5;
          }
          v29 = (char)v25[7].Flink;
          v30 = v29 & 7;
          if ( v30 == 1 || v30 == 4 )
          {
            v31 = v25[14].Blink;
            if ( v31 )
            {
              if ( ((__int64)v31->Flink & 0x7F) == 0x15 )
              {
                HIDWORD(v25[33].Blink) = (unsigned __int8)HIDWORD(v25[33].Blink);
                _InterlockedIncrement((volatile signed __int32 *)&v31[33].Blink + HIDWORD(v25[33].Blink));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)&v31[2].Blink);
              }
            }
            v32 = v25[44].Blink;
            if ( v32 )
            {
              v51 = KeGetCurrentPrcb();
              v67 = 0;
              v52 = v51->SchedulerAssist;
              if ( v52 )
              {
                if ( v51->NestingLevel <= 1u )
                {
                  v53 = v52[6];
                  v52[6] = v53 + 1;
                  if ( v53 == -1 )
LABEL_86:
                    KiRemoveSystemWorkPriorityKick(v51);
                }
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)&v32[2029], 0LL) )
              {
                v54 = v51->SchedulerAssist;
                if ( v54 )
                {
                  if ( v51->NestingLevel <= 1u )
                  {
                    v55 = v54[6] - 1;
                    v54[6] = v55;
                    if ( !v55 )
                      KiRemoveSystemWorkPriorityKick(v51);
                  }
                }
                do
                  KeYieldProcessorEx(&v67, Blink_high, (__int64)p_Blink, (__int64)SchedulerAssist);
                while ( v32[2029].Flink );
                v56 = v51->SchedulerAssist;
                if ( v56 )
                {
                  if ( v51->NestingLevel <= 1u )
                  {
                    v57 = v56[6];
                    v56[6] = v57 + 1;
                    if ( v57 == -1 )
                      goto LABEL_86;
                  }
                }
              }
              if ( v25[44].Blink )
              {
                v58 = v25[13].Blink;
                v59 = v25[14].Flink;
                if ( v58->Blink != (struct _LIST_ENTRY *)&v25[13].Blink
                  || v59->Flink != (struct _LIST_ENTRY *)&v25[13].Blink )
                {
                  goto LABEL_115;
                }
                v59->Flink = v58;
                v58->Blink = v59;
                v25[44].Blink = 0LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)&v32[2029], 0LL);
              v60 = KeGetCurrentPrcb();
              v61 = v60->SchedulerAssist;
              if ( v61 )
              {
                if ( v60->NestingLevel <= 1u )
                {
                  v62 = v61[6] - 1;
                  v61[6] = v62;
                  if ( !v62 )
                    KiRemoveSystemWorkPriorityKick(v60);
                }
              }
            }
            v33 = BYTE4(v25[24].Flink);
            if ( v33 == 1 )
            {
              HIDWORD(v25[7].Flink) |= 2u;
            }
            else if ( v33 == 5 )
            {
              v34 = (unsigned int)(MEMORY[0xFFFFF78000000320] - HIDWORD(v25[27].Flink));
              if ( HIBYTE(v25[24].Flink) )
                v25[62].Blink = (struct _LIST_ENTRY *)((char *)v25[62].Blink + v34);
              else
                v25[62].Flink = (struct _LIST_ENTRY *)((char *)v25[62].Flink + v34);
            }
            CurrentPrcb = v65;
            BYTE4(v25[24].Flink) = 7;
            v25[13].Blink = (struct _LIST_ENTRY *)v65->DeferredReadyListHead.Next;
            v35 = v68;
            v65->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v25[13].Blink;
            v25[12].Blink = v35;
            v25[61].Flink = 0LL;
          }
          else
          {
            if ( ((__int64)v25[7].Flink & 7) != 0 )
            {
              if ( v30 != 5 )
              {
                CurrentPrcb = v65;
                if ( v30 == 3 )
                  BYTE1(v22[1].Flink) = 2;
                goto LABEL_29;
              }
              LOBYTE(v25[7].Flink) = v29 & 0xF8 | 6;
              goto LABEL_45;
            }
            v46 = v68;
            CurrentPrcb = v65;
            LOBYTE(v25[7].Flink) = v29 & 0xF8 | 2;
            v25[12].Blink = v46;
            v25[61].Flink = 0LL;
            BYTE1(v22[1].Flink) = 0;
          }
          BYTE5(v25[40].Flink) = 0;
          v9 = 1;
          v36 = (struct _KDPC *)KeGetCurrentPrcb();
          if ( (char)v5 < SBYTE3(v25[35].Flink) )
          {
            if ( HIBYTE(v25[54].Flink) )
            {
              p_Flink = (PVOID *)&v25[51].Flink;
              if ( v25[51].Flink == (struct _LIST_ENTRY *)1 )
              {
                p_Blink = &v36[557].SystemArgument2;
                if ( v36 != (struct _KDPC *)-35696LL )
                {
                  *p_Flink = *p_Blink;
                  *p_Blink = p_Flink;
                  _InterlockedIncrement16((volatile signed __int16 *)&v25[54].Flink + 2);
                  KiAbQueueAutoBoostDpc(v36);
                  CurrentPrcb = v65;
                }
              }
            }
          }
          v37 = BYTE4(v25[35].Flink);
          BYTE3(v25[35].Flink) = v5;
          if ( v37 )
          {
            if ( (v37 & 0xF) != 0 )
              LODWORD(v25[54].Blink) = MEMORY[0xFFFFF78000000320];
            BYTE4(v25[35].Flink) = 0;
          }
          if ( (_DWORD)v5 == SBYTE3(v25[12].Flink) )
            goto LABEL_29;
          v43 = (struct _LIST_ENTRY *)((char *)v25[4].Blink
                                     + KiCyclesPerClockQuantum * (unsigned int)BYTE3(v25[40].Blink));
          if ( ((__int64)v25[7].Blink & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&v25[7].Blink, 5u);
          v25[2].Flink = v43;
          KiSetPriorityThread((_KTHREAD *)v25, 0LL, v5);
        }
LABEL_45:
        CurrentPrcb = v65;
LABEL_29:
        v25[4].Flink = 0LL;
        v38 = KeGetCurrentPrcb();
        v15 = (__int64)v38->SchedulerAssist;
        if ( v15 )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v64 = *(_DWORD *)(v15 + 24) - 1;
            *(_DWORD *)(v15 + 24) = v64;
            if ( !v64 )
            {
              KiRemoveSystemWorkPriorityKick(v38);
              CurrentPrcb = v65;
            }
          }
        }
        ++BYTE1(v22[1].Flink);
        if ( v9 )
        {
          v14 = a5;
          goto LABEL_32;
        }
        if ( Flink == &a1->WaitListHead )
        {
          v14 = a5;
          v7 = &v68->Flink;
          break;
        }
      }
    }
  }
LABEL_39:
  if ( (v14 & 2) == 0 )
  {
    ++a1->SignalState;
    v41 = (__int64)&a1[1] + 16 * v5;
    v42 = *(_QWORD **)(v41 + 8);
    if ( *v42 != v41 )
LABEL_115:
      __fastfail(3u);
    *v7 = v41;
    v7[1] = v42;
    *v42 = v7;
    *(_QWORD *)(v41 + 8) = v7;
  }
LABEL_32:
  _InterlockedAnd(&a1->Lock, 0xFFFFFF7F);
  if ( (v14 & 1) != 0 )
    v39 = 3;
  else
    v39 = 0;
  KiExitDispatcher((__int64)CurrentPrcb, v39, 1, 0, v66);
  return v9;
}
