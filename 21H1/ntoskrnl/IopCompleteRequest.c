/*
 * XREFs of IopCompleteRequest @ 0x1402497C0
 * Callers:
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     IopAbortRequest @ 0x14088C9C0 (IopAbortRequest.c)
 * Callees:
 *     IopUpdateWriteTransferCount @ 0x1402056A0 (IopUpdateWriteTransferCount.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402541E0 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402543D0 (IopDequeueIrpFromThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     IopDequeueIrpFromFileObject @ 0x1402C09B4 (IopDequeueIrpFromFileObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     IopFreeIrpExtension @ 0x1402ECCDC (IopFreeIrpExtension.c)
 *     KeInsertQueueEx @ 0x1402FBFF8 (KeInsertQueueEx.c)
 *     ExReturnPoolQuota @ 0x1402FF25C (ExReturnPoolQuota.c)
 *     IopInterlockedAdd @ 0x1403152CC (IopInterlockedAdd.c)
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     IopExceptionFilter @ 0x1404FAFB8 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x1404FB07C (IopFreeReserveIrp.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1409C21B0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // rsi
  _DWORD *v9; // rdi
  int v10; // eax
  __int64 *v11; // r14
  __int64 *v12; // rax
  __int64 v13; // rcx
  struct _KEVENT *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  struct _KTHREAD *v19; // rax
  unsigned __int8 v20; // r14
  struct _KPRCB *v21; // r12
  _DWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  volatile signed __int64 *p_Thread; // rcx
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  unsigned __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rdx
  char v32; // al
  __int64 v33; // rcx
  struct _KPRCB *v34; // r10
  char v35; // al
  __int16 v36; // r9
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rdi
  char v41; // al
  __int64 *v42; // r12
  __int16 v43; // ax
  __int64 v44; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  int v47; // eax
  __int64 v48; // r8
  int v49; // edx
  int v50; // eax
  volatile signed __int32 *v51; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *v53; // r14
  _DWORD *v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rcx
  struct _KPRCB *v58; // rcx
  _DWORD *v59; // rdx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r8
  __int64 v62; // r9
  ULONG_PTR v63; // rcx
  unsigned __int64 v64; // rcx
  struct _KTHREAD *v65; // rax
  __int64 v66; // rdx
  struct _DMA_ADAPTER *v67; // rcx
  struct _KEVENT *v68; // rcx
  _DWORD *v69; // rcx
  _DWORD *v70; // rcx
  int v71; // r8d
  _DWORD *SchedulerAssist; // r9
  int v73; // eax
  int v74; // eax
  int v75; // eax
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r10
  _DWORD *v78; // r9
  int v79; // eax
  bool v80; // zf
  _DWORD *v81; // r9
  int v82; // eax
  int v83; // eax
  int v84; // eax
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r10
  _DWORD *v87; // r9
  int v88; // eax
  __int64 v89; // [rsp+60h] [rbp-58h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  bool v91; // [rsp+C0h] [rbp+8h]
  __int64 v92; // [rsp+D0h] [rbp+18h]
  __int64 v93; // [rsp+D8h] [rbp+20h]

  v5 = a1 - 120;
  v6 = a1 - 120;
  v93 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v8 = *a4;
  v91 = a3 && *(_QWORD *)a3 == 1LL;
  v9 = (_DWORD *)(v5 + 16);
  v10 = *(_DWORD *)(v5 + 16);
  if ( (v10 & 0x80u) != 0 )
  {
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
    return;
  }
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      v47 = *(_DWORD *)(v5 + 48);
      if ( v47 != -2147483626 && (v47 & 0xC0000000) != 0xC0000000 )
        memmove(*(void **)(v5 + 112), *(const void **)(v5 + 24), *(_QWORD *)(v5 + 56));
    }
    if ( (*v9 & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
  }
  *v9 &= 0xFFFFFFCF;
  v11 = *(__int64 **)(v5 + 8);
  if ( v11 )
  {
    do
    {
      v42 = (__int64 *)*v11;
      v43 = *((_WORD *)v11 + 5);
      if ( (v43 & 0x20) != 0 )
      {
        MmUnmapLockedPages((PVOID)v11[3], (PMDL)v11);
        v43 = *((_WORD *)v11 + 5);
      }
      if ( (v43 & 8) != 0 )
      {
        v44 = *((unsigned __int16 *)v11 + 6);
        if ( (unsigned int)v44 >= (unsigned int)KeNumberProcessors_0 )
        {
          CurrentPrcb = 0LL;
        }
        else
        {
          _mm_lfence();
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v44];
        }
        if ( !CurrentPrcb )
          CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[3].P;
        ++P->TotalFrees;
        if ( LOWORD(P->ListHead.Alignment) < P->Depth
          || (++P->FreeMisses,
              P = CurrentPrcb->PPLookasideList[3].L,
              ++P->TotalFrees,
              LOWORD(P->ListHead.Alignment) < P->Depth) )
        {
          RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v11);
        }
        else
        {
          ++P->FreeMisses;
          ((void (__fastcall *)(__int64 *))P->FreeEx)(v11);
        }
      }
      else
      {
        ExFreePoolWithTag(v11, 0);
      }
      v11 = v42;
    }
    while ( v42 );
    v6 = v93;
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0xC0000000 )
  {
    v66 = *(unsigned __int8 *)(v5 + 65);
    if ( !(_BYTE)v66 )
      goto LABEL_124;
    if ( (*v9 & 4) == 0 && (!v8 || (*(_DWORD *)(v8 + 80) & 2) == 0) )
      goto LABEL_11;
    if ( !v8 )
    {
LABEL_124:
      if ( (*v9 & 0x2000) != 0 )
        IopDequeueIrpFromFileObject(v5, v8);
      if ( v8 )
        ObDereferenceObjectDeferDelete((PVOID)v8);
      v67 = *(struct _DMA_ADAPTER **)(v5 + 80);
      if ( v67 && v8 && (*v9 & 4) == 0 )
        HalPutDmaAdapter(v67);
      if ( (*v9 & 0x8000) != 0 )
      {
        if ( (unsigned int)IopInterlockedAdd(v5 + 88, 0xFFFFFFFFLL) )
          return;
      }
      else
      {
        *(_QWORD *)(v5 + 152) = CurrentThread;
        IopDequeueIrpFromThread(v5, v66);
      }
      IoFreeIrp((PIRP)v5);
      return;
    }
    if ( (*v9 & 4) != 0 )
    {
      *(_OWORD *)*(_QWORD *)(v5 + 72) = *(_OWORD *)(v5 + 48);
      v68 = *(struct _KEVENT **)(v5 + 80);
      if ( v68 )
        goto LABEL_141;
    }
    else
    {
      *(_DWORD *)(v8 + 56) = *(_DWORD *)(v5 + 48);
    }
    v68 = (struct _KEVENT *)(v8 + 152);
LABEL_141:
    KeSetEvent(v68, 0, 0);
    goto LABEL_124;
  }
LABEL_11:
  v92 = 0LL;
  v89 = 0LL;
  if ( v8 )
  {
    v12 = *(__int64 **)(v8 + 176);
    if ( v12 )
    {
      v92 = *v12;
      v89 = v12[1];
    }
  }
  v13 = *(_QWORD *)(v5 + 72);
  if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
    *(_DWORD *)(v13 + 4) = *(_DWORD *)(v6 + 56);
  else
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(v6 + 56);
  *(_DWORD *)v13 = *(_DWORD *)(v5 + 48);
  v14 = *(struct _KEVENT **)(v5 + 80);
  if ( !v14 )
  {
    if ( !v8 )
      goto LABEL_22;
    if ( (*(_DWORD *)(v8 + 80) & 0x4000000) != 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  KeSetEvent(v14, 0, 0);
  if ( v8 )
  {
    v50 = *(_DWORD *)(v5 + 16);
    if ( (v50 & 4) == 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)(v5 + 80));
      v50 = *(_DWORD *)(v5 + 16);
    }
    if ( (*(_BYTE *)(v8 + 80) & 2) != 0 && (v50 & 0x1000) == 0 )
    {
LABEL_20:
      KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
LABEL_21:
      *(_DWORD *)(v8 + 56) = *(_DWORD *)(v5 + 48);
    }
  }
LABEL_22:
  v15 = *(_DWORD *)(v5 + 16);
  if ( (v15 & 0x2000) != 0 )
    v16 = *(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
  else
    v16 = 0LL;
  if ( (v15 & 0x100) != 0 )
  {
    v64 = *(unsigned int *)(v6 + 56);
    if ( v16 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 1576), v64);
    }
    else
    {
      v65 = KeGetCurrentThread();
      v65->ReadTransferCount += v64;
    }
    __addgsqword(0x2EE8u, v64);
  }
  else if ( (v15 & 0x200) != 0 )
  {
    IopUpdateWriteTransferCount(*(_DWORD *)(v6 + 56), v16);
  }
  else
  {
    v17 = *(_QWORD *)(v6 + 56);
    if ( v17 >= 0 )
    {
      v18 = (unsigned int)v17;
      if ( v16 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 1592), (unsigned int)v17);
      }
      else
      {
        v19 = KeGetCurrentThread();
        v19->OtherTransferCount += v18;
      }
      __addgsqword(0x2EF8u, v18);
    }
  }
  if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
  {
    v51 = (volatile signed __int32 *)(v8 + 184);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v16 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)v16 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v8 + 184, v16, a3);
    }
    else
    {
      v53 = KeGetCurrentPrcb();
      v54 = v53->SchedulerAssist;
      if ( v54 )
      {
        if ( v53->NestingLevel <= 1u )
        {
          v73 = v54[6];
          v54[6] = v73 + 1;
          if ( v73 == -1 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
      if ( _interlockedbittestandset64(v51, 0LL) )
      {
        v69 = v53->SchedulerAssist;
        if ( v69 )
        {
          if ( v53->NestingLevel <= 1u )
          {
            v74 = v69[6] - 1;
            v69[6] = v74;
            if ( !v74 )
              KiRemoveSystemWorkPriorityKick(v53);
          }
        }
        KxWaitForSpinLockAndAcquire(v8 + 184, v16, a3);
      }
    }
    v55 = (_QWORD *)(v5 + 32);
    v56 = *(_QWORD *)(v5 + 32);
    v57 = *(_QWORD **)(v5 + 40);
    if ( *(_QWORD *)(v56 + 8) == v5 + 32 && (_QWORD *)*v57 == v55 )
    {
      *v57 = v56;
      *(_QWORD *)(v56 + 8) = v57;
      *(_QWORD *)(v5 + 40) = v5 + 32;
      *v55 = v55;
      ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
      *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & 0xFFFF5FFF | 0x8000;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v8 + 184, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v51, 0LL);
      v58 = KeGetCurrentPrcb();
      v59 = v58->SchedulerAssist;
      if ( v59 )
      {
        if ( v58->NestingLevel <= 1u )
        {
          v75 = v59[6] - 1;
          v59[6] = v75;
          if ( !v75 )
            KiRemoveSystemWorkPriorityKick(v58);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v76 = KeGetCurrentIrql();
          if ( v76 <= 0xFu && CurrentIrql <= 0xFu && v76 >= 2u )
          {
            v77 = KeGetCurrentPrcb();
            v78 = v77->SchedulerAssist;
            v79 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v80 = (v79 & v78[5]) == 0;
            a3 = (unsigned int)v79 & v78[5];
            v78[5] = a3;
            if ( v80 )
              KiRemoveSystemWorkPriorityKick(v77);
          }
        }
      }
      v29 = CurrentIrql;
      goto LABEL_44;
    }
LABEL_214:
    __fastfail(3u);
  }
  *(_QWORD *)(v5 + 152) = CurrentThread;
  v20 = 0;
  if ( CurrentThread )
  {
    v20 = KeGetCurrentIrql();
    a3 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
    {
      v81 = KeGetCurrentPrcb()->SchedulerAssist;
      v16 = (-1LL << (v20 + 1)) & 4;
      a3 = (unsigned int)v16 | v81[5];
      v81[5] = a3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&CurrentThread[1].WaitBlockFill11[24], v16, a3);
    }
    else
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v82 = v22[6];
          v22[6] = v82 + 1;
          if ( v82 == -1 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[24], 0LL) )
      {
        v70 = v21->SchedulerAssist;
        if ( v70 )
        {
          if ( v21->NestingLevel <= 1u )
          {
            v83 = v70[6] - 1;
            v70[6] = v83;
            if ( !v83 )
              KiRemoveSystemWorkPriorityKick(v21);
          }
        }
        KxWaitForSpinLockAndAcquire(&CurrentThread[1].WaitBlockFill11[24], v16, a3);
      }
    }
  }
  v23 = (_QWORD *)(v5 + 32);
  v24 = *(_QWORD *)(v5 + 32);
  v25 = *(_QWORD **)(v5 + 40);
  if ( *(_QWORD *)(v24 + 8) != v5 + 32 || (_QWORD *)*v25 != v23 )
    goto LABEL_214;
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  *(_QWORD *)(v5 + 40) = v5 + 32;
  *v23 = v23;
  if ( CurrentThread )
  {
    p_Thread = (volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Thread;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(p_Thread, retaddr);
    else
      _InterlockedAnd64(p_Thread, 0LL);
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    if ( v28 )
    {
      if ( v27->NestingLevel <= 1u )
      {
        v84 = v28[6] - 1;
        v28[6] = v84;
        if ( !v84 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v85 = KeGetCurrentIrql();
        if ( v85 <= 0xFu && v20 <= 0xFu && v85 >= 2u )
        {
          v86 = KeGetCurrentPrcb();
          v87 = v86->SchedulerAssist;
          v88 = ~(unsigned __int16)(-1LL << (v20 + 1));
          v80 = (v88 & v87[5]) == 0;
          a3 = (unsigned int)v88 & v87[5];
          v87[5] = a3;
          if ( v80 )
            KiRemoveSystemWorkPriorityKick(v86);
        }
      }
    }
    v29 = v20;
LABEL_44:
    __writecr8(v29);
  }
  v30 = *(_DWORD *)(v5 + 16) & 0x8000;
  if ( !v30 )
  {
    *(_QWORD *)(v5 + 88) &= ~1uLL;
    v31 = *(_QWORD *)(v5 + 88);
    if ( v31 )
    {
      if ( v91 )
        v71 = *(char *)(v5 + 70);
      else
        v71 = 2;
      KeInitializeApc(
        v5 + 120,
        (_DWORD)CurrentThread,
        v71,
        (unsigned int)IopUserRundown,
        (__int64)IopUserRundown,
        v31,
        *(_BYTE *)(v5 + 64),
        *(_QWORD *)(v5 + 96));
      KeInsertQueueApc(v5 + 120, *(_QWORD *)(v5 + 72), 0LL, 2LL);
      goto LABEL_69;
    }
  }
  if ( v92
    && *(_QWORD *)(v5 + 96)
    && ((*(_DWORD *)(v8 + 80) & 0x2000000) == 0
     || *(_BYTE *)(v5 + 65)
     || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
  {
    v48 = 0LL;
    v49 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 72LL);
    if ( v49 == 8 || v49 == 20 )
      v48 = 1LL;
    *(_QWORD *)(v5 + 120) = v89;
    *(_DWORD *)(v5 + 184) = 0;
    KeInsertQueueEx(v92, v5 + 168, v48, 0LL);
    goto LABEL_69;
  }
  if ( v30 )
  {
    v60 = *(_QWORD *)(v5 + 88);
    do
    {
      v61 = v60;
      v62 = ((v60 >> 1) & 3) - 1;
      v60 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v5 + 88),
              v60 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v62),
              v60);
    }
    while ( v61 != v60 );
    if ( (_DWORD)v62 )
      goto LABEL_69;
    v63 = v5;
    if ( !IopDispatchFreeIrp )
    {
      IopFreeIrp(v5);
      goto LABEL_69;
    }
    goto LABEL_213;
  }
  if ( IopDispatchFreeIrp )
  {
    v63 = v5;
LABEL_213:
    IovFreeIrpPrivate(v63);
    goto LABEL_69;
  }
  if ( *(_WORD *)v5 != 6 )
    KeBugCheckEx(0x44u, v5, 0x257CuLL, 0LL, 0LL);
  *(_WORD *)v5 = 0;
  v32 = *(_BYTE *)(v5 + 71);
  if ( (v32 & 0x40) != 0 )
  {
    LOBYTE(a3) = 1;
    IopFreeIrpExtension(v5, 0xFFFFFFFFLL, a3);
    v32 = *(_BYTE *)(v5 + 71);
  }
  if ( (v32 & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(v5);
  }
  else
  {
    v33 = *(unsigned __int16 *)(v5 + 4);
    if ( (unsigned int)v33 >= (unsigned int)KeNumberProcessors_0 )
    {
      v34 = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      v34 = (struct _KPRCB *)KiProcessorBlock[v33];
    }
    v35 = *(_BYTE *)(v5 + 71);
    if ( (v35 & 8) != 0 )
    {
      *(_BYTE *)(v5 + 71) = v35 ^ 8;
      _InterlockedIncrement(&v34->LookasideIrpFloat);
      v35 = *(_BYTE *)(v5 + 71);
    }
    if ( (v35 & 4) != 0 )
    {
      if ( (IopIrpStackProfilerFlags & 3) == 0
        || (v36 = *(_WORD *)(v5 + 2), v36 == 72 * (char)IopLargeIrpStackLocations + 208)
        || v36 == 72 * (char)IopMediumIrpStackLocations + 208
        || v36 == 280 )
      {
        v37 = *(unsigned __int16 *)(v5 + 2);
        if ( (unsigned __int16)v37 >= (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
        {
          v38 = 2080LL;
          v39 = 2088LL;
        }
        else if ( (unsigned __int16)v37 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
        {
          v38 = 2048LL;
          v39 = 2056LL;
        }
        else
        {
          v38 = 2064LL;
          v39 = 2072LL;
        }
        *(_QWORD *)(v93 + 56) = v37;
        v40 = *(_QWORD *)((char *)&v34->MxCsr + v38);
        ++*(_DWORD *)(v40 + 28);
        if ( *(_WORD *)v40 < *(_WORD *)(v40 + 16)
          || (++*(_DWORD *)(v40 + 32),
              v40 = *(_QWORD *)((char *)&v34->MxCsr + v39),
              ++*(_DWORD *)(v40 + 28),
              *(_WORD *)v40 < *(_WORD *)(v40 + 16)) )
        {
          v41 = *(_BYTE *)(v5 + 71);
          if ( (v41 & 1) != 0 )
          {
            *(_BYTE *)(v5 + 71) = v41 ^ 1;
            ExReturnPoolQuota(v5);
          }
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)v40, (PSLIST_ENTRY)v5);
          goto LABEL_69;
        }
        ++*(_DWORD *)(v40 + 32);
      }
    }
    ExFreePoolWithTag((PVOID)v5, 0);
  }
LABEL_69:
  if ( v8 )
    ObDereferenceObjectDeferDelete((PVOID)v8);
}
