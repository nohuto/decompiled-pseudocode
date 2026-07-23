/*
 * XREFs of IopCompleteRequest @ 0x14034D870
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402A8D10 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x140890F60 (IopAbortRequest.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x14020D178 (IopFreeIrpExtension.c)
 *     KeInsertQueueEx @ 0x14020E110 (KeInsertQueueEx.c)
 *     ExReturnPoolQuota @ 0x14022CF2C (ExReturnPoolQuota.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopInterlockedAdd @ 0x140242EBC (IopInterlockedAdd.c)
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     IopDequeueIrpFromFileObject @ 0x14029A888 (IopDequeueIrpFromFileObject.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14035E2C0 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x14035E4B0 (IopDequeueIrpFromThread.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1403F0E60 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1403F0F28 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopProcessBufferedIoCompletion @ 0x1403F105C (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x1403F116C (IopUpdateIrpTransferCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x1405009E0 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x140500AA4 (IopFreeReserveIrp.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1409C61D0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  _SLIST_ENTRY *v6; // r14
  ULONG_PTR v7; // rsi
  int v8; // eax
  unsigned __int64 v9; // r12
  __int64 *v10; // rdi
  __int64 *v11; // r15
  __int16 v12; // ax
  __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  struct _DMA_ADAPTER *v16; // rcx
  __int64 v17; // rcx
  struct _KEVENT *v18; // rcx
  __int64 v19; // rcx
  volatile signed __int32 *v20; // r15
  unsigned __int8 CurrentIrql; // r12
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v23; // rdi
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  int v33; // eax
  unsigned __int8 v34; // al
  bool v35; // cf
  __int64 v36; // r10
  volatile signed __int32 *v37; // r15
  _DWORD *v38; // r9
  struct _KPRCB *v39; // rdi
  _DWORD *v40; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  volatile signed __int64 *v47; // rcx
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  int v50; // eax
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  bool v55; // zf
  int v56; // ecx
  __int64 v57; // rdx
  int v58; // r8d
  int v59; // r8d
  int v60; // ecx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // r8
  __int64 v63; // r9
  ULONG_PTR v64; // rcx
  __int64 v65; // rdx
  char v66; // al
  __int64 v67; // rcx
  struct _KPRCB *v68; // rdx
  char v69; // al
  __int16 v70; // r9
  __int64 v71; // r9
  __int64 v72; // rdi
  __int64 v73; // rcx
  __int64 v74; // rdi
  char v75; // al
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  __int64 v77; // [rsp+50h] [rbp-68h]
  _SLIST_ENTRY *v78; // [rsp+58h] [rbp-60h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v80; // [rsp+C0h] [rbp+8h]
  struct _DMA_ADAPTER *Object; // [rsp+D8h] [rbp+20h]

  v6 = (_SLIST_ENTRY *)(a1 - 120);
  v78 = (_SLIST_ENTRY *)(a1 - 120);
  CurrentThread = KeGetCurrentThread();
  v7 = *a4;
  if ( !a3 || (v80 = 1, *a3 != 1LL) )
    v80 = 0;
  v8 = *(_DWORD *)(a1 - 104);
  if ( (v8 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(a1 - 72);
    *(_QWORD *)(a1 + 40) = *a5;
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return;
  }
  if ( (v8 & 0x2000) != 0 )
    v9 = *(_QWORD *)(a1 - 32) & 0xFFFFFFFFFFFFFFF9uLL;
  else
    v9 = 0LL;
  IopProcessBufferedIoCompletion(a1 - 120);
  v10 = *(__int64 **)(a1 - 112);
  if ( v10 )
  {
    do
    {
      v11 = (__int64 *)*v10;
      v12 = *((_WORD *)v10 + 5);
      if ( (v12 & 0x20) != 0 )
      {
        MmUnmapLockedPages((PVOID)v10[3], (PMDL)v10);
        v12 = *((_WORD *)v10 + 5);
      }
      if ( (v12 & 8) != 0 )
      {
        v13 = *((unsigned __int16 *)v10 + 6);
        if ( (unsigned int)v13 >= (unsigned int)KeNumberProcessors_0 )
        {
          CurrentPrcb = 0LL;
        }
        else
        {
          _mm_lfence();
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v13];
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
          RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v10);
        }
        else
        {
          ++P->FreeMisses;
          ((void (__fastcall *)(__int64 *))P->FreeEx)(v10);
        }
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
      }
      v10 = v11;
    }
    while ( v11 );
    v6 = v78;
  }
  *(_QWORD *)(a1 - 112) = 0LL;
  if ( (*(_DWORD *)(a1 - 72) & 0xC0000000) == 0xC0000000 && !*(_BYTE *)(a1 - 55) )
  {
    v16 = *(struct _DMA_ADAPTER **)(a1 - 40);
    if ( v16 && v7 && (*(_DWORD *)(a1 - 104) & 4) == 0 )
      HalPutDmaAdapter(v16);
    goto LABEL_45;
  }
  v17 = *(_QWORD *)(a1 - 48);
  if ( (*(_BYTE *)(a1 - 49) & 0x10) != 0 )
    *(_DWORD *)(v17 + 4) = *(_DWORD *)(a1 - 64);
  else
    *(_QWORD *)(v17 + 8) = *(_QWORD *)(a1 - 64);
  *(_DWORD *)v17 = *(_DWORD *)(a1 - 72);
  v18 = *(struct _KEVENT **)(a1 - 40);
  if ( !v18 )
  {
    if ( !v7 )
      goto LABEL_45;
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
    {
LABEL_44:
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(a1 - 72);
      goto LABEL_45;
    }
LABEL_43:
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    goto LABEL_44;
  }
  KeSetEvent(v18, 0, 0);
  if ( v7 )
  {
    if ( (*(_DWORD *)(a1 - 104) & 4) == 0 )
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 - 40));
    if ( (*(_DWORD *)(v7 + 80) & 2) != 0 && (*(_DWORD *)(a1 - 104) & 0x1000) == 0 )
      goto LABEL_43;
  }
LABEL_45:
  if ( (*(_DWORD *)(a1 - 72) & 0xC0000000) != 0xC0000000
    || *(_BYTE *)(a1 - 55) && (*(_DWORD *)(a1 - 104) & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
  {
    Object = 0LL;
    v77 = 0LL;
    if ( v7 )
    {
      v19 = *(_QWORD *)(v7 + 176);
      if ( v19 )
      {
        if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
        {
          Object = *(struct _DMA_ADAPTER **)v19;
          v77 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          IopIncrementCompletionContextUsageCountAndReadData(v7);
        }
        if ( Object )
          ObfReferenceObject(Object);
      }
    }
    IopUpdateIrpTransferCount(v6, v9);
    if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
    {
      v20 = (volatile signed __int32 *)(v7 + 184);
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
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v25 = v24[6];
            v24[6] = v25 + 1;
            if ( v25 == -1 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        if ( _interlockedbittestandset64(v20, 0LL) )
        {
          v26 = v23->SchedulerAssist;
          if ( v26 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v27 = v26[6] - 1;
              v26[6] = v27;
              if ( !v27 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          KxWaitForSpinLockAndAcquire(v7 + 184);
        }
      }
      v28 = (_QWORD *)(a1 - 88);
      v29 = *(_QWORD *)(a1 - 88);
      v30 = *(_QWORD **)(a1 - 88 + 8);
      if ( *(_QWORD *)(v29 + 8) == a1 - 88 && (_QWORD *)*v30 == v28 )
      {
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        v28[1] = v28;
        *v28 = v28;
        ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 - 32) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
        *(_DWORD *)(a1 - 104) = *(_DWORD *)(a1 - 104) & 0xFFFF5FFF | 0x8000;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v20, 0LL);
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        if ( v32 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v33 = v32[6] - 1;
            v32[6] = v33;
            if ( !v33 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        if ( !KiIrqlFlags )
          goto LABEL_133;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_133;
        v34 = KeGetCurrentIrql();
        if ( v34 > 0xFu || CurrentIrql > 0xFu )
          goto LABEL_133;
        v35 = v34 < 2u;
        goto LABEL_130;
      }
    }
    else
    {
      v36 = (__int64)CurrentThread;
      *(_QWORD *)(a1 + 32) = CurrentThread;
      CurrentIrql = 0;
      if ( CurrentThread )
      {
        v37 = (volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[24];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v38 = KeGetCurrentPrcb()->SchedulerAssist;
          v38[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(&CurrentThread[1].WaitBlockFill11[24]);
        }
        else
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          if ( v40 )
          {
            if ( v39->NestingLevel <= 1u )
            {
              v41 = v40[6];
              v40[6] = v41 + 1;
              if ( v41 == -1 )
                KiRemoveSystemWorkPriorityKick(v39);
            }
          }
          if ( _interlockedbittestandset64(v37, 0LL) )
          {
            v42 = v39->SchedulerAssist;
            if ( v42 )
            {
              if ( v39->NestingLevel <= 1u )
              {
                v43 = v42[6] - 1;
                v42[6] = v43;
                if ( !v43 )
                  KiRemoveSystemWorkPriorityKick(v39);
              }
            }
            KxWaitForSpinLockAndAcquire(v37);
          }
        }
        v36 = (__int64)CurrentThread;
      }
      v44 = (_QWORD *)(a1 - 88);
      v45 = *(_QWORD *)(a1 - 88);
      v46 = *(_QWORD **)(a1 - 88 + 8);
      if ( *(_QWORD *)(v45 + 8) == a1 - 88 && (_QWORD *)*v46 == v44 )
      {
        *v46 = v45;
        *(_QWORD *)(v45 + 8) = v46;
        v44[1] = v44;
        *v44 = v44;
        if ( !v36 )
        {
LABEL_134:
          v56 = *(_DWORD *)(a1 - 104) & 0x8000;
          if ( !v56 )
          {
            *(_QWORD *)(a1 - 32) &= ~1uLL;
            v57 = *(_QWORD *)(a1 - 32);
            if ( v57 )
            {
              if ( v80 )
                v58 = *(char *)(a1 - 50);
              else
                v58 = 2;
              KeInitializeApc(
                a1,
                v36,
                v58,
                (__int64)IopUserRundown,
                (__int64)IopUserRundown,
                v57,
                *(_BYTE *)(a1 - 56),
                *(_QWORD *)(a1 - 24));
              KeInsertQueueApc(a1, *(_QWORD *)(a1 - 48), 0LL, 2);
              goto LABEL_185;
            }
          }
          if ( Object
            && *(_QWORD *)(a1 - 24)
            && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
             || *(_BYTE *)(a1 - 55)
             || (*(_DWORD *)(a1 - 72) & 0xC0000000) == 0x80000000) )
          {
            v59 = 0;
            v60 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
            if ( v60 == 8 || v60 == 20 )
              v59 = 1;
            *(_QWORD *)a1 = v77;
            *(_DWORD *)(a1 + 64) = 0;
            KeInsertQueueEx((__int64)Object, (_QWORD *)(a1 + 48), v59, 0);
            goto LABEL_185;
          }
          if ( v56 )
          {
            v61 = *(_QWORD *)(a1 - 32);
            do
            {
              v62 = v61;
              v63 = ((v61 >> 1) & 3) - 1;
              v61 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(a1 - 32),
                      v61 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v63),
                      v61);
            }
            while ( v62 != v61 );
            if ( (_DWORD)v63 )
              goto LABEL_185;
            v64 = (ULONG_PTR)v6;
            if ( !IopDispatchFreeIrp )
            {
              IopFreeIrp((ULONG_PTR)v6);
              goto LABEL_185;
            }
          }
          else
          {
            if ( !IopDispatchFreeIrp )
            {
              v65 = 0LL;
              if ( LOWORD(v6->Next) != 6 )
                KeBugCheckEx(IopDispatchFreeIrp + 68, (ULONG_PTR)v6, 0x2636uLL, 0LL, 0LL);
              LOWORD(v6->Next) = 0;
              v66 = *(_BYTE *)(a1 - 49);
              if ( (v66 & 0x40) != 0 )
              {
                IopFreeIrpExtension((__int64)v6, -1, 1);
                v66 = *(_BYTE *)(a1 - 49);
              }
              if ( (v66 & 0x21) == 0x21 )
              {
                IopFreeReserveIrp(v6, v65);
              }
              else
              {
                v67 = *(unsigned __int16 *)(a1 - 116);
                if ( (unsigned int)v67 >= (unsigned int)KeNumberProcessors_0 )
                {
                  v68 = KeGetCurrentPrcb();
                }
                else
                {
                  _mm_lfence();
                  v68 = (struct _KPRCB *)KiProcessorBlock[v67];
                }
                v69 = *(_BYTE *)(a1 - 49);
                if ( (v69 & 8) != 0 )
                {
                  *(_BYTE *)(a1 - 49) = v69 ^ 8;
                  _InterlockedIncrement(&v68->LookasideIrpFloat);
                  v69 = *(_BYTE *)(a1 - 49);
                }
                if ( (v69 & 4) != 0 )
                {
                  if ( (IopIrpStackProfilerFlags & 3) == 0
                    || (v70 = *(_WORD *)(a1 - 118), v70 == 72 * (char)IopLargeIrpStackLocations + 208)
                    || v70 == 72 * (char)IopMediumIrpStackLocations + 208
                    || v70 == 280 )
                  {
                    v71 = *(unsigned __int16 *)(a1 - 118);
                    if ( (unsigned __int16)v71 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
                    {
                      if ( (unsigned __int16)v71 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
                      {
                        v72 = 2048LL;
                        v73 = 2056LL;
                      }
                      else
                      {
                        v72 = 2064LL;
                        v73 = 2072LL;
                      }
                    }
                    else
                    {
                      v72 = 2080LL;
                      v73 = 2088LL;
                    }
                    *(_QWORD *)(a1 - 64) = v71;
                    v74 = *(_QWORD *)((char *)&v68->MxCsr + v72);
                    ++*(_DWORD *)(v74 + 28);
                    if ( *(_WORD *)v74 < *(_WORD *)(v74 + 16)
                      || (++*(_DWORD *)(v74 + 32),
                          v74 = *(_QWORD *)((char *)&v68->MxCsr + v73),
                          ++*(_DWORD *)(v74 + 28),
                          *(_WORD *)v74 < *(_WORD *)(v74 + 16)) )
                    {
                      v75 = *(_BYTE *)(a1 - 49);
                      if ( (v75 & 1) != 0 )
                      {
                        *(_BYTE *)(a1 - 49) = v75 ^ 1;
                        ExReturnPoolQuota((ULONG_PTR)v6);
                      }
                      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v74, v6);
                      goto LABEL_185;
                    }
                    ++*(_DWORD *)(v74 + 32);
                  }
                }
                ExFreePoolWithTag(v6, 0);
              }
LABEL_185:
              if ( Object )
                HalPutDmaAdapter(Object);
              if ( v7 )
                ObDereferenceObjectDeferDelete((PVOID)v7);
              return;
            }
            v64 = (ULONG_PTR)v6;
          }
          IovFreeIrpPrivate(v64);
          goto LABEL_185;
        }
        v47 = (volatile signed __int64 *)(v36 + 1416);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v47, retaddr);
        else
          _InterlockedAnd64(v47, 0LL);
        v48 = KeGetCurrentPrcb();
        v49 = v48->SchedulerAssist;
        if ( v49 )
        {
          if ( v48->NestingLevel <= 1u )
          {
            v50 = v49[6] - 1;
            v49[6] = v50;
            if ( !v50 )
              KiRemoveSystemWorkPriorityKick(v48);
          }
        }
        if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || (v51 = KeGetCurrentIrql(), v51 > 0xFu) || CurrentIrql > 0xFu )
        {
LABEL_133:
          v36 = (__int64)CurrentThread;
          __writecr8(CurrentIrql);
          goto LABEL_134;
        }
        v35 = v51 < 2u;
LABEL_130:
        if ( !v35 )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v55 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
        goto LABEL_133;
      }
    }
    __fastfail(3u);
  }
  if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
    IopDequeueIrpFromFileObject((__int64)v6, v7);
  if ( v7 )
    ObDereferenceObjectDeferDelete((PVOID)v7);
  if ( (*(_DWORD *)(a1 - 104) & 0x8000) != 0 )
  {
    if ( (unsigned int)IopInterlockedAdd((volatile signed __int64 *)(a1 - 32), -1) )
      return;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = CurrentThread;
    IopDequeueIrpFromThread(v6);
  }
  IoFreeIrp((PIRP)v6);
}
