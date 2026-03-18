/*
 * XREFs of IopCompleteRequest @ 0x140285F60
 * Callers:
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     IopAbortRequest @ 0x14088DCE0 (IopAbortRequest.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     IopDequeueIrpFromFileObject @ 0x140267984 (IopDequeueIrpFromFileObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140290A60 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x140290C50 (IopDequeueIrpFromThread.c)
 *     IopUpdateWriteTransferCount @ 0x140297BD0 (IopUpdateWriteTransferCount.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D7A80 (KxWaitForSpinLockAndAcquire.c)
 *     KeInitializeApc @ 0x1402F94B0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402FB5E0 (KeInsertQueueApc.c)
 *     IopFreeIrpExtension @ 0x14032660C (IopFreeIrpExtension.c)
 *     KeInsertQueueEx @ 0x140339334 (KeInsertQueueEx.c)
 *     ExReturnPoolQuota @ 0x14033BB5C (ExReturnPoolQuota.c)
 *     IopInterlockedAdd @ 0x14035301C (IopInterlockedAdd.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     IopExceptionFilter @ 0x1404FB608 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x1404FB6CC (IopFreeReserveIrp.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051141C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140511528 (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1409C21C0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rdi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v7; // rsi
  _DWORD *v8; // r14
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rbx
  __int64 *v12; // r15
  __int16 v13; // ax
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 v17; // rdx
  struct _KEVENT *v18; // rcx
  struct _DMA_ADAPTER *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _KEVENT *v23; // rcx
  int v24; // ecx
  int v25; // eax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  struct _KTHREAD *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  struct _KTHREAD *v31; // rax
  volatile signed __int32 *v32; // r14
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v35; // rbx
  _DWORD *v36; // rcx
  int v37; // eax
  _DWORD *v38; // rcx
  int v39; // eax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  int v45; // eax
  unsigned __int8 v46; // al
  bool v47; // cf
  struct _KTHREAD *v48; // r10
  volatile signed __int32 *v49; // r14
  _DWORD *v50; // r9
  struct _KPRCB *v51; // rbx
  _DWORD *v52; // rcx
  int v53; // eax
  _DWORD *v54; // rcx
  int v55; // eax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rcx
  volatile signed __int64 *p_Thread; // rcx
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rdx
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  bool v67; // zf
  int v68; // ecx
  __int64 v69; // rdx
  int v70; // r8d
  struct _DMA_ADAPTER *v71; // r14
  __int64 v72; // r8
  int v73; // ecx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // r8
  __int64 v76; // r9
  ULONG_PTR v77; // rcx
  char v78; // al
  __int64 v79; // rcx
  struct _KPRCB *v80; // rdx
  char v81; // al
  __int16 v82; // r9
  __int64 v83; // r9
  __int64 v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rbx
  char v87; // al
  __int64 v88; // [rsp+48h] [rbp-70h]
  __int64 v89; // [rsp+60h] [rbp-58h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v91; // [rsp+C0h] [rbp+8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+D0h] [rbp+18h]

  v5 = a1 - 120;
  v88 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v7 = *a4;
  if ( !a3 || (v91 = 1, *a3 != 1LL) )
    v91 = 0;
  v8 = (_DWORD *)(v5 + 16);
  v9 = *(_DWORD *)(v5 + 16);
  if ( (v9 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return;
  }
  if ( (v9 & 0x10) != 0 )
  {
    if ( (v9 & 0x40) != 0 )
    {
      v10 = *(_DWORD *)(v5 + 48);
      if ( v10 != -2147483626 && (v10 & 0xC0000000) != 0xC0000000 )
        memmove(*(void **)(v5 + 112), *(const void **)(v5 + 24), *(_QWORD *)(v5 + 56));
    }
    if ( (*v8 & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
  }
  *v8 &= 0xFFFFFFCF;
  v11 = *(__int64 **)(v5 + 8);
  if ( v11 )
  {
    do
    {
      v12 = (__int64 *)*v11;
      v13 = *((_WORD *)v11 + 5);
      if ( (v13 & 0x20) != 0 )
      {
        MmUnmapLockedPages((PVOID)v11[3], (PMDL)v11);
        v13 = *((_WORD *)v11 + 5);
      }
      if ( (v13 & 8) != 0 )
      {
        v14 = *((unsigned __int16 *)v11 + 6);
        if ( (unsigned int)v14 >= (unsigned int)KeNumberProcessors_0 )
        {
          CurrentPrcb = 0LL;
        }
        else
        {
          _mm_lfence();
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v14];
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
      v11 = v12;
    }
    while ( v12 );
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  v17 = *(unsigned int *)(v5 + 48);
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) != 0xC0000000 )
    goto LABEL_53;
  if ( !*(_BYTE *)(v5 + 65) )
    goto LABEL_40;
  if ( (*v8 & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
  {
LABEL_53:
    DmaAdapter = 0LL;
    v89 = 0LL;
    if ( v7 )
    {
      v20 = *(_QWORD *)(v7 + 176);
      if ( v20 )
      {
        DmaAdapter = *(PADAPTER_OBJECT *)v20;
        v89 = *(_QWORD *)(v20 + 8);
        ObfReferenceObject(*(PVOID *)v20);
      }
    }
    v21 = *(_QWORD *)(v5 + 72);
    v22 = v88;
    if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
      *(_DWORD *)(v21 + 4) = *(_DWORD *)(v88 + 56);
    else
      *(_QWORD *)(v21 + 8) = *(_QWORD *)(v88 + 56);
    *(_DWORD *)v21 = *(_DWORD *)(v5 + 48);
    v23 = *(struct _KEVENT **)(v5 + 80);
    if ( v23 )
    {
      KeSetEvent(v23, 0, 0);
      if ( !v7 )
        goto LABEL_70;
      v24 = *(_DWORD *)(v5 + 16);
      if ( (v24 & 4) == 0 )
      {
        HalPutDmaAdapter(*(PADAPTER_OBJECT *)(v5 + 80));
        v24 = *(_DWORD *)(v5 + 16);
      }
      if ( (*(_DWORD *)(v7 + 80) & 2) == 0 || (v24 & 0x1000) != 0 )
      {
LABEL_70:
        v25 = *(_DWORD *)(v5 + 16);
        if ( (v25 & 0x2000) != 0 )
          v26 = *(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
        else
          v26 = 0LL;
        if ( (v25 & 0x100) != 0 )
        {
          v27 = *(unsigned int *)(v88 + 56);
          if ( v26 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 1576), v27);
          }
          else
          {
            v28 = KeGetCurrentThread();
            v28->ReadTransferCount += v27;
          }
          __addgsqword(0x2EE8u, v27);
        }
        else if ( (v25 & 0x200) != 0 )
        {
          IopUpdateWriteTransferCount(*(unsigned int *)(v88 + 56), v26);
        }
        else
        {
          v29 = *(_QWORD *)(v88 + 56);
          if ( v29 >= 0 )
          {
            v30 = (unsigned int)v29;
            if ( v26 )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 1592), (unsigned int)v29);
            }
            else
            {
              v31 = KeGetCurrentThread();
              v31->OtherTransferCount += v30;
            }
            __addgsqword(0x2EF8u, v30);
          }
        }
        if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
        {
          v32 = (volatile signed __int32 *)(v7 + 184);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(v7 + 184);
          }
          else
          {
            v35 = KeGetCurrentPrcb();
            v36 = v35->SchedulerAssist;
            if ( v36 )
            {
              if ( v35->NestingLevel <= 1u )
              {
                v37 = v36[6];
                v36[6] = v37 + 1;
                if ( v37 == -1 )
                  KiRemoveSystemWorkPriorityKick(v35);
              }
            }
            if ( _interlockedbittestandset64(v32, 0LL) )
            {
              v38 = v35->SchedulerAssist;
              if ( v38 )
              {
                if ( v35->NestingLevel <= 1u )
                {
                  v39 = v38[6] - 1;
                  v38[6] = v39;
                  if ( !v39 )
                    KiRemoveSystemWorkPriorityKick(v35);
                }
              }
              KxWaitForSpinLockAndAcquire(v7 + 184);
            }
          }
          v40 = (_QWORD *)(v5 + 32);
          v41 = *(_QWORD *)(v5 + 32);
          v42 = *(_QWORD **)(v5 + 40);
          if ( *(_QWORD *)(v41 + 8) == v5 + 32 && (_QWORD *)*v42 == v40 )
          {
            *v42 = v41;
            *(_QWORD *)(v41 + 8) = v42;
            *(_QWORD *)(v5 + 40) = v5 + 32;
            *v40 = v40;
            ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
            *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & 0xFFFF5FFF | 0x8000;
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
            else
              _InterlockedAnd64((volatile signed __int64 *)v32, 0LL);
            v43 = KeGetCurrentPrcb();
            v44 = v43->SchedulerAssist;
            if ( v44 )
            {
              if ( v43->NestingLevel <= 1u )
              {
                v45 = v44[6] - 1;
                v44[6] = v45;
                if ( !v45 )
                  KiRemoveSystemWorkPriorityKick(v43);
              }
            }
            if ( !KiIrqlFlags )
              goto LABEL_152;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_152;
            v46 = KeGetCurrentIrql();
            if ( v46 > 0xFu || CurrentIrql > 0xFu )
              goto LABEL_152;
            v47 = v46 < 2u;
            goto LABEL_149;
          }
        }
        else
        {
          v48 = CurrentThread;
          *(_QWORD *)(v5 + 152) = CurrentThread;
          CurrentIrql = 0;
          if ( CurrentThread )
          {
            v49 = (volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[24];
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v50 = KeGetCurrentPrcb()->SchedulerAssist;
              v22 = (-1 << (CurrentIrql + 1)) & 4u | v50[5];
              v50[5] = v22;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented(&CurrentThread[1].WaitBlockFill11[24]);
            }
            else
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              if ( v52 )
              {
                if ( v51->NestingLevel <= 1u )
                {
                  v53 = v52[6];
                  v52[6] = v53 + 1;
                  if ( v53 == -1 )
                    KiRemoveSystemWorkPriorityKick(v51);
                }
              }
              if ( _interlockedbittestandset64(v49, 0LL) )
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
                KxWaitForSpinLockAndAcquire(v49);
              }
            }
            v48 = CurrentThread;
          }
          v56 = (_QWORD *)(v5 + 32);
          v57 = *(_QWORD *)(v5 + 32);
          v58 = *(_QWORD **)(v5 + 40);
          if ( *(_QWORD *)(v57 + 8) == v5 + 32 && (_QWORD *)*v58 == v56 )
          {
            *v58 = v57;
            *(_QWORD *)(v57 + 8) = v58;
            *(_QWORD *)(v5 + 40) = v5 + 32;
            *v56 = v56;
            if ( !v48 )
            {
LABEL_153:
              v68 = *(_DWORD *)(v5 + 16) & 0x8000;
              if ( !v68 )
              {
                *(_QWORD *)(v5 + 88) &= ~1uLL;
                v69 = *(_QWORD *)(v5 + 88);
                if ( v69 )
                {
                  if ( v91 )
                    v70 = *(char *)(v5 + 70);
                  else
                    v70 = 2;
                  KeInitializeApc(
                    v5 + 120,
                    (_DWORD)v48,
                    v70,
                    (unsigned int)IopUserRundown,
                    (__int64)IopUserRundown,
                    v69,
                    *(_BYTE *)(v5 + 64),
                    *(_QWORD *)(v5 + 96));
                  KeInsertQueueApc(v5 + 120, *(_QWORD *)(v5 + 72), 0LL, 2LL);
                  v71 = DmaAdapter;
                  goto LABEL_204;
                }
              }
              v71 = DmaAdapter;
              if ( DmaAdapter
                && *(_QWORD *)(v5 + 96)
                && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
                 || *(_BYTE *)(v5 + 65)
                 || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
              {
                v72 = 0LL;
                v73 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
                if ( v73 == 8 || v73 == 20 )
                  v72 = 1LL;
                *(_QWORD *)(v5 + 120) = v89;
                *(_DWORD *)(v5 + 184) = 0;
                KeInsertQueueEx(DmaAdapter, v5 + 168, v72, 0LL);
                goto LABEL_204;
              }
              if ( v68 )
              {
                v74 = *(_QWORD *)(v5 + 88);
                do
                {
                  v75 = v74;
                  v76 = ((v74 >> 1) & 3) - 1;
                  v74 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(v5 + 88),
                          v74 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v76),
                          v74);
                }
                while ( v75 != v74 );
                if ( (_DWORD)v76 )
                  goto LABEL_204;
                v77 = v5;
                if ( !IopDispatchFreeIrp )
                {
                  IopFreeIrp(v5);
                  goto LABEL_204;
                }
              }
              else
              {
                if ( !IopDispatchFreeIrp )
                {
                  if ( *(_WORD *)v5 != 6 )
                    KeBugCheckEx(IopDispatchFreeIrp + 68, v5, 0x257CuLL, 0LL, 0LL);
                  *(_WORD *)v5 = 0;
                  v78 = *(_BYTE *)(v5 + 71);
                  if ( (v78 & 0x40) != 0 )
                  {
                    LOBYTE(v22) = 1;
                    IopFreeIrpExtension(v5, 0xFFFFFFFFLL, v22);
                    v78 = *(_BYTE *)(v5 + 71);
                  }
                  if ( (v78 & 0x21) == 0x21 )
                  {
                    IopFreeReserveIrp(v5);
                  }
                  else
                  {
                    v79 = *(unsigned __int16 *)(v5 + 4);
                    if ( (unsigned int)v79 >= (unsigned int)KeNumberProcessors_0 )
                    {
                      v80 = KeGetCurrentPrcb();
                    }
                    else
                    {
                      _mm_lfence();
                      v80 = (struct _KPRCB *)KiProcessorBlock[v79];
                    }
                    v81 = *(_BYTE *)(v5 + 71);
                    if ( (v81 & 8) != 0 )
                    {
                      *(_BYTE *)(v5 + 71) = v81 ^ 8;
                      _InterlockedIncrement(&v80->LookasideIrpFloat);
                      v81 = *(_BYTE *)(v5 + 71);
                    }
                    if ( (v81 & 4) != 0 )
                    {
                      if ( (IopIrpStackProfilerFlags & 3) == 0
                        || (v82 = *(_WORD *)(v5 + 2), v82 == 72 * (char)IopLargeIrpStackLocations + 208)
                        || v82 == 72 * (char)IopMediumIrpStackLocations + 208
                        || v82 == 280 )
                      {
                        v83 = *(unsigned __int16 *)(v5 + 2);
                        if ( (unsigned __int16)v83 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
                        {
                          if ( (unsigned __int16)v83 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
                          {
                            v84 = 2048LL;
                            v85 = 2056LL;
                          }
                          else
                          {
                            v84 = 2064LL;
                            v85 = 2072LL;
                          }
                        }
                        else
                        {
                          v84 = 2080LL;
                          v85 = 2088LL;
                        }
                        *(_QWORD *)(v88 + 56) = v83;
                        v86 = *(_QWORD *)((char *)&v80->MxCsr + v84);
                        ++*(_DWORD *)(v86 + 28);
                        if ( *(_WORD *)v86 < *(_WORD *)(v86 + 16)
                          || (++*(_DWORD *)(v86 + 32),
                              v86 = *(_QWORD *)((char *)&v80->MxCsr + v85),
                              ++*(_DWORD *)(v86 + 28),
                              *(_WORD *)v86 < *(_WORD *)(v86 + 16)) )
                        {
                          v87 = *(_BYTE *)(v5 + 71);
                          if ( (v87 & 1) != 0 )
                          {
                            *(_BYTE *)(v5 + 71) = v87 ^ 1;
                            ExReturnPoolQuota(v5);
                          }
                          RtlpInterlockedPushEntrySList((PSLIST_HEADER)v86, (PSLIST_ENTRY)v5);
                          goto LABEL_204;
                        }
                        ++*(_DWORD *)(v86 + 32);
                      }
                    }
                    ExFreePoolWithTag((PVOID)v5, 0);
                  }
LABEL_204:
                  if ( v71 )
                    HalPutDmaAdapter(v71);
                  if ( v7 )
                    ObDereferenceObjectDeferDelete((PVOID)v7);
                  return;
                }
                v77 = v5;
              }
              IovFreeIrpPrivate(v77);
              goto LABEL_204;
            }
            p_Thread = (volatile signed __int64 *)&v48[1].WaitBlock[0].Thread;
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(p_Thread, retaddr);
            else
              _InterlockedAnd64(p_Thread, 0LL);
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
            if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || (v63 = KeGetCurrentIrql(), v63 > 0xFu) || CurrentIrql > 0xFu )
            {
LABEL_152:
              LODWORD(v48) = (_DWORD)CurrentThread;
              __writecr8(CurrentIrql);
              goto LABEL_153;
            }
            v47 = v63 < 2u;
LABEL_149:
            if ( !v47 )
            {
              v64 = KeGetCurrentPrcb();
              v65 = v64->SchedulerAssist;
              v66 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v67 = (v66 & v65[5]) == 0;
              v22 = (unsigned int)v66 & v65[5];
              v65[5] = v22;
              if ( v67 )
                KiRemoveSystemWorkPriorityKick(v64);
            }
            goto LABEL_152;
          }
        }
        __fastfail(3u);
      }
    }
    else
    {
      if ( !v7 )
        goto LABEL_70;
      if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
        goto LABEL_69;
    }
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
LABEL_69:
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    goto LABEL_70;
  }
  if ( v7 )
  {
    if ( (*v8 & 4) != 0 )
    {
      *(_OWORD *)*(_QWORD *)(v5 + 72) = *(_OWORD *)(v5 + 48);
      v18 = *(struct _KEVENT **)(v5 + 80);
      if ( v18 )
      {
LABEL_39:
        KeSetEvent(v18, 0, 0);
        goto LABEL_40;
      }
    }
    else
    {
      *(_DWORD *)(v7 + 56) = v17;
    }
    v18 = (struct _KEVENT *)(v7 + 152);
    goto LABEL_39;
  }
LABEL_40:
  if ( (*v8 & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(v5, v7);
  if ( v7 )
    ObDereferenceObjectDeferDelete((PVOID)v7);
  v19 = *(struct _DMA_ADAPTER **)(v5 + 80);
  if ( v19 && v7 && (*v8 & 4) == 0 )
    HalPutDmaAdapter(v19);
  if ( (*v8 & 0x8000) != 0 )
  {
    if ( (unsigned int)IopInterlockedAdd(v5 + 88, 0xFFFFFFFFLL) )
      return;
  }
  else
  {
    *(_QWORD *)(v5 + 152) = CurrentThread;
    IopDequeueIrpFromThread(v5, v17);
  }
  IoFreeIrp((PIRP)v5);
}
