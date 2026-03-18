/*
 * XREFs of IopfCompleteRequest @ 0x140248740
 * Callers:
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x1405024FC (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x1409C1F80 (IovCompleteRequest.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140208590 (KeAreInterruptsEnabled.c)
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402541E0 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402543D0 (IopDequeueIrpFromThread.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     EtwpLevelKeywordEnabled @ 0x14026EA90 (EtwpLevelKeywordEnabled.c)
 *     IopDropIrp @ 0x1402C08C0 (IopDropIrp.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     IopFreeIrpExtension @ 0x1402ECCDC (IopFreeIrpExtension.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140303F74 (IopVerifyDeviceObjectOnStack.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140316780 (EtwTiLogInsertQueueUserApc.c)
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     KiSignalThreadForApc @ 0x140357158 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1403572DC (KiInsertQueueApc.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 *     PoDeviceAcquireIrp @ 0x140379B24 (PoDeviceAcquireIrp.c)
 *     PoDeviceReleaseIrp @ 0x14037A254 (PoDeviceReleaseIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1409C21B0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  __int64 v2; // r8
  char v4; // cl
  unsigned __int8 v5; // r14
  __int64 v6; // rdi
  char v7; // r15
  __int64 v8; // rdx
  int v9; // r12d
  char v10; // cl
  char *v11; // rdi
  __int64 v12; // rax
  char v13; // al
  char v14; // cl
  unsigned __int8 v15; // r14
  __int64 v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // r14
  int v26; // eax
  void *v27; // rcx
  int v28; // edi
  struct _MDL *v29; // rsi
  ULONG_PTR v30; // r14
  struct _KTHREAD *v31; // rsi
  volatile signed __int32 *v32; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v35; // rcx
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  unsigned __int8 ApcStateIndex; // al
  ULONG_PTR v39; // rdi
  __int64 (__fastcall *v40)(int, int, int, int, __int64); // r9
  __int64 v41; // r11
  __int64 v42; // rcx
  char v43; // cl
  __int64 CurrentThread; // rdx
  struct _KTHREAD *v45; // rbx
  _KPROCESS *Process; // rax
  bool v47; // zf
  char v48; // al
  char v49; // r13
  unsigned __int8 v50; // r14
  struct _KPRCB *v51; // rsi
  _DWORD *v52; // rcx
  char v53; // di
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  int v56; // edi
  unsigned __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 i; // rax
  unsigned __int8 v60; // di
  __int64 *v61; // rax
  _QWORD *v62; // rcx
  __int64 v63; // rdi
  unsigned __int8 v64; // r10
  struct _KPRCB *v65; // rcx
  _DWORD *v66; // rdx
  _QWORD *v67; // rdx
  int v68; // esi
  _QWORD *v69; // r13
  _QWORD *v70; // r14
  __int64 v71; // rcx
  struct _KPRCB *v72; // r12
  __int64 v73; // r9
  __int64 v74; // r8
  __int64 v75; // r9
  char v76; // si
  __int64 v77; // rax
  struct _KPRCB *v78; // rcx
  _DWORD *v79; // rdx
  unsigned __int64 v80; // rdi
  ULONG_PTR v81; // rdx
  _DWORD *v82; // r9
  __int64 *v83; // r14
  int v84; // edx
  _QWORD *v85; // rcx
  _DWORD *v86; // rcx
  _DWORD *v87; // rcx
  struct _MDL *v88; // rcx
  IRP *v89; // rsi
  struct _MDL *Next; // rdi
  _DWORD *v91; // rcx
  KIRQL v92; // al
  __int64 v93; // rcx
  KIRQL v94; // si
  struct _DMA_ADAPTER *v95; // r10
  unsigned __int64 v96; // rcx
  _DWORD *v97; // r9
  int v98; // eax
  unsigned __int8 IsThreadRunning; // al
  __int64 v100; // r9
  int v101; // eax
  unsigned __int8 v102; // al
  struct _KPRCB *v103; // rdx
  _DWORD *v104; // r9
  int v105; // eax
  _DWORD *SchedulerAssist; // r9
  int v107; // eax
  int v108; // eax
  int v109; // eax
  unsigned __int8 v110; // al
  struct _KPRCB *v111; // r10
  _DWORD *v112; // r9
  int v113; // eax
  unsigned __int8 v114; // al
  struct _KPRCB *v115; // r9
  _DWORD *v116; // r8
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  __int64 *v122; // rdx
  __int64 **v123; // rax
  __int64 v124; // [rsp+48h] [rbp-49h] BYREF
  __int64 v125; // [rsp+50h] [rbp-41h]
  __int128 v126; // [rsp+58h] [rbp-39h] BYREF
  __int64 v127; // [rsp+68h] [rbp-29h]
  ULONG_PTR v128; // [rsp+70h] [rbp-21h] BYREF
  __int64 v129; // [rsp+78h] [rbp-19h]
  __int64 v130; // [rsp+80h] [rbp-11h] BYREF
  __int64 v131; // [rsp+88h] [rbp-9h] BYREF
  __int64 v132; // [rsp+90h] [rbp-1h] BYREF
  __int64 v133; // [rsp+98h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F0h] [rbp+5Fh]
  char v135; // [rsp+F8h] [rbp+67h]
  __int64 v136; // [rsp+F8h] [rbp+67h]
  unsigned __int8 v137; // [rsp+100h] [rbp+6Fh]
  int v138; // [rsp+108h] [rbp+77h] BYREF
  int v139; // [rsp+110h] [rbp+7Fh]

  v137 = a2;
  v2 = *(unsigned __int8 *)(BugCheckParameter1 + 66);
  v124 = 0LL;
  v4 = *(_BYTE *)(BugCheckParameter1 + 67);
  v5 = a2;
  if ( v4 > (char)(v2 + 1) || *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x1232uLL, 0LL, 0LL);
  v6 = *(_QWORD *)(BugCheckParameter1 + 184);
  if ( v4 <= (char)v2 && *(_BYTE *)v6 == 22 )
  {
    v7 = 1;
    PoDeviceReleaseIrp(BugCheckParameter1, *(unsigned __int8 *)(v6 + 1), *(_QWORD *)(v6 + 40));
    v4 = *(_BYTE *)(BugCheckParameter1 + 67);
    v8 = *(_QWORD *)(BugCheckParameter1 + 184);
    v2 = *(unsigned __int8 *)(BugCheckParameter1 + 66);
  }
  else
  {
    v7 = 0;
    v8 = *(_QWORD *)(BugCheckParameter1 + 184);
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 211) & 2) != 0 )
    v9 = *(_DWORD *)(BugCheckParameter1 + 240);
  else
    v9 = 0;
  v10 = v4 + 1;
  LOBYTE(v2) = v2 + 1;
  *(_BYTE *)(BugCheckParameter1 + 67) = v10;
  *(_QWORD *)(BugCheckParameter1 + 184) = v8 + 72;
  if ( v10 <= (char)v2 )
  {
    v11 = (char *)(v6 + 3);
    while ( 1 )
    {
      *(_BYTE *)(BugCheckParameter1 + 65) = *v11 & 1;
      v12 = *(int *)(BugCheckParameter1 + 48);
      if ( (int)v12 >= 0 )
        goto LABEL_11;
      if ( (_DWORD)v12 != v9 )
      {
        *v11 |= 2u;
        v9 = v12;
        *(_BYTE *)(BugCheckParameter1 + 211) |= 2u;
        *(_QWORD *)(BugCheckParameter1 + 240) = v12;
        LODWORD(v12) = *(_DWORD *)(BugCheckParameter1 + 48);
      }
      if ( (int)v12 >= 0 )
      {
LABEL_11:
        v13 = *v11;
        v14 = *v11;
        if ( (*v11 & 0x40) != 0 )
          goto LABEL_12;
      }
      else
      {
        v13 = *v11;
        v14 = *v11;
        if ( *v11 < 0 )
          goto LABEL_12;
      }
      if ( *(_BYTE *)(BugCheckParameter1 + 68) && (v13 & 0x20) != 0 )
      {
LABEL_12:
        v15 = *(v11 - 2);
        *v11 = v13 & 2;
        *((_WORD *)v11 - 1) = 0;
        *(_QWORD *)(v11 + 5) = 0LL;
        *(_QWORD *)(v11 + 13) = 0LL;
        *(_QWORD *)(v11 + 21) = 0LL;
        *(_QWORD *)(v11 + 45) = 0LL;
        if ( *(_BYTE *)(BugCheckParameter1 + 67) == *(_BYTE *)(BugCheckParameter1 + 66) + 1 )
          v16 = 0LL;
        else
          v16 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 184) + 40LL);
        if ( v7 )
          PoDeviceAcquireIrp(BugCheckParameter1, v15, v16);
        if ( (*(unsigned int (__fastcall **)(__int64, ULONG_PTR, _QWORD))(v11 + 53))(
               v16,
               BugCheckParameter1,
               *(_QWORD *)(v11 + 61)) == -1073741802 )
          return;
        if ( v7 )
          PoDeviceReleaseIrp(BugCheckParameter1, v15, v16);
        goto LABEL_28;
      }
      if ( *(_BYTE *)(BugCheckParameter1 + 65)
        && *(_BYTE *)(BugCheckParameter1 + 67) <= *(_BYTE *)(BugCheckParameter1 + 66) )
      {
        *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 184) + 3LL) |= 1u;
        v14 = *v11;
      }
      *((_WORD *)v11 - 1) = 0;
      *v11 = v14 & 2;
      *(_QWORD *)(v11 + 5) = 0LL;
      *(_QWORD *)(v11 + 13) = 0LL;
      *(_QWORD *)(v11 + 21) = 0LL;
      *(_QWORD *)(v11 + 45) = 0LL;
LABEL_28:
      ++*(_BYTE *)(BugCheckParameter1 + 67);
      v11 += 72;
      *(_QWORD *)(BugCheckParameter1 + 184) += 72LL;
      if ( *(char *)(BugCheckParameter1 + 67) > (char)(*(_BYTE *)(BugCheckParameter1 + 66) + 1) )
      {
        v5 = v137;
        break;
      }
    }
  }
  v17 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v17 & 8) != 0 )
  {
    v88 = *(struct _MDL **)(BugCheckParameter1 + 8);
    v89 = *(IRP **)(BugCheckParameter1 + 24);
    if ( v88 )
    {
      do
      {
        Next = v88->Next;
        IoFreeMdl(v88);
        v88 = Next;
      }
      while ( Next );
    }
    IoFreeIrp((PIRP)BugCheckParameter1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v89->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(v89, v5);
    return;
  }
  v18 = -2684354563LL;
  v19 = 4194817LL;
  if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
  {
    v96 = *(_QWORD *)(BugCheckParameter1 + 56);
    if ( v96 > 2 )
    {
      v18 = v96 - 2684354563u;
      if ( v96 - 2684354563u <= 0x16 && _bittest64(&v19, v18) )
      {
        v20 = *(_QWORD *)(BugCheckParameter1 + 160);
        v124 = v20;
        *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
        goto LABEL_33;
      }
      *(_DWORD *)(BugCheckParameter1 + 48) = -1073741191;
    }
  }
  v20 = v124;
LABEL_33:
  if ( v5 )
    goto LABEL_45;
  v21 = *(_QWORD *)(BugCheckParameter1 + 192);
  if ( !v21 || (v17 & 0x400) != 0 )
    goto LABEL_45;
  v22 = *(_QWORD *)(v21 + 16);
  if ( (!v22 || (v24 = *(_QWORD *)(v22 + 8)) == 0)
    && ((*(_DWORD *)(v21 + 80) & 0x800) != 0
     || (v23 = *(_QWORD *)(*(_QWORD *)(v21 + 8) + 56LL)) == 0
     || (v24 = *(_QWORD *)(v23 + 8)) == 0) )
  {
    v24 = *(_QWORD *)(v21 + 8);
  }
  if ( !*(_QWORD *)(v24 + 24) )
    goto LABEL_41;
  v58 = *(_QWORD **)(v21 + 208);
  if ( !v58
    || v58 == IopRevocationExtension
    || (v83 = (__int64 *)v58[2]) == 0LL
    || (v25 = *v83) == 0
    || !(unsigned __int8)IopVerifyDeviceObjectOnStack(v24, v25, 0LL) )
  {
    for ( i = *(_QWORD *)(v24 + 24); i; i = *(_QWORD *)(i + 24) )
      v24 = i;
LABEL_41:
    v25 = v24;
  }
  v26 = *(_DWORD *)(v25 + 72);
  if ( v26 == 8 || v26 == 20 )
  {
    v5 = 1;
    v137 = 1;
  }
  else
  {
    v5 = v137;
  }
LABEL_45:
  v27 = *(void **)(BugCheckParameter1 + 160);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0);
    *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) != 0 )
  {
    LOBYTE(v2) = 1;
    IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, v2);
  }
  v28 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v28 & 0x402) != 0 )
  {
    if ( (v28 & 0x440) != 0 )
    {
      *(_OWORD *)*(_QWORD *)(BugCheckParameter1 + 72) = *(_OWORD *)(BugCheckParameter1 + 48);
      v56 = v28 & 0x42;
      if ( v56 )
        IopDequeueIrpFromThread(BugCheckParameter1, v18);
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter1 + 80), v5, 0);
      if ( v56 )
      {
        if ( IopDispatchFreeIrp )
          IovFreeIrpPrivate(BugCheckParameter1);
        else
          IopFreeIrp(BugCheckParameter1);
      }
    }
    else
    {
      IopDequeueIrpFromThread(BugCheckParameter1, v18);
      KeInitializeApc(
        BugCheckParameter1 + 120,
        *(_QWORD *)(BugCheckParameter1 + 152),
        *(char *)(BugCheckParameter1 + 70),
        (unsigned int)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(BugCheckParameter1 + 120, 0LL, 0LL, v5);
    }
    return;
  }
  v29 = *(struct _MDL **)(BugCheckParameter1 + 8);
  if ( v29 )
  {
    do
    {
      MmUnlockPages(v29);
      v29 = v29->Next;
    }
    while ( v29 );
    v28 = *(_DWORD *)(BugCheckParameter1 + 16);
  }
  if ( (v28 & 0x2000) != 0 )
  {
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(BugCheckParameter1 + 152));
    v28 = *(_DWORD *)(BugCheckParameter1 + 16);
  }
  if ( (v28 & 0x800) != 0 && !*(_BYTE *)(BugCheckParameter1 + 65) )
  {
    if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
    {
      v57 = *(_QWORD *)(BugCheckParameter1 + 56) - 2684354563LL;
      if ( v57 <= 0x16 )
      {
        if ( _bittest64(&v19, v57) )
          *(_QWORD *)(BugCheckParameter1 + 160) = v20;
      }
    }
    return;
  }
  v30 = *(_QWORD *)(BugCheckParameter1 + 192);
  v31 = *(struct _KTHREAD **)(BugCheckParameter1 + 152);
  v128 = v30;
  if ( (v28 & 0x2000) == 0
    || (v131 = 0LL, v130 = 0LL, !*(_BYTE *)(BugCheckParameter1 + 65))
    && ((*(_DWORD *)(BugCheckParameter1 + 48) & 0xC0000000) == 0xC0000000
     || (*(_DWORD *)(v30 + 80) & 0x2000000) != 0 && *(int *)(BugCheckParameter1 + 48) >= 0) )
  {
    if ( v31 )
    {
      v32 = (volatile signed __int32 *)&v31[1].WaitBlockFill11[24];
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v18 = (-1LL << (CurrentIrql + 1)) & 4;
        v2 = (unsigned int)v18 | SchedulerAssist[5];
        SchedulerAssist[5] = v2;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&v31[1].WaitBlockFill11[24], v18, v2);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v35 = CurrentPrcb->SchedulerAssist;
        if ( v35 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v107 = v35[6];
            v35[6] = v107 + 1;
            if ( v107 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v32, 0LL) )
        {
          v91 = CurrentPrcb->SchedulerAssist;
          if ( v91 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v108 = v91[6] - 1;
              v91[6] = v108;
              if ( !v108 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(&v31[1].WaitBlockFill11[24], v18, v2);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&v31[1].WaitBlockFill11[24], retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v32, 0LL);
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      if ( v37 )
      {
        if ( v36->NestingLevel <= 1u )
        {
          v109 = v37[6] - 1;
          v37[6] = v109;
          if ( !v109 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v110 = KeGetCurrentIrql();
          if ( v110 <= 0xFu && CurrentIrql <= 0xFu && v110 >= 2u )
          {
            v111 = KeGetCurrentPrcb();
            v112 = v111->SchedulerAssist;
            v113 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v47 = (v113 & v112[5]) == 0;
            v2 = (unsigned int)v113 & v112[5];
            v112[5] = v2;
            if ( v47 )
              KiRemoveSystemWorkPriorityKick(v111);
          }
        }
      }
      __writecr8(CurrentIrql);
      v30 = v128;
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 68) )
    {
      if ( v31 != KeGetCurrentThread()
        || KeGetCurrentThread()->SpecialApcDisable
        || !KeAreInterruptsEnabled()
        || KeGetCurrentIrql()
        || KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        ApcStateIndex = *(_BYTE *)(BugCheckParameter1 + 70);
        v39 = BugCheckParameter1 + 120;
        *(_BYTE *)(BugCheckParameter1 + 120) = 18;
        *(_BYTE *)(BugCheckParameter1 + 122) = 88;
        if ( ApcStateIndex == 2 )
          ApcStateIndex = v31->ApcStateIndex;
        *(_BYTE *)(BugCheckParameter1 + 200) = ApcStateIndex;
        v40 = IopCompleteRequest;
        v41 = 0LL;
        *(_QWORD *)(BugCheckParameter1 + 128) = v31;
        *(_QWORD *)(BugCheckParameter1 + 152) = IopCompleteRequest;
        *(_QWORD *)(BugCheckParameter1 + 160) = IopAbortRequest;
        *(_QWORD *)(BugCheckParameter1 + 168) = 0LL;
        *(_WORD *)(BugCheckParameter1 + 201) = 0;
        *(_QWORD *)(BugCheckParameter1 + 176) = 0LL;
        if ( EtwThreatIntProvRegHandle )
        {
          v42 = *(_QWORD *)(EtwThreatIntProvRegHandle + 32);
          LOBYTE(v2) = *(_DWORD *)(v42 + 96)
                    && (*(_DWORD *)(v42 + 112) & 0x3000LL) != 0
                    && (*(_QWORD *)(v42 + 120) & 0x3000LL) == *(_QWORD *)(v42 + 120)
                    || *(_BYTE *)(EtwThreatIntProvRegHandle + 101)
                    && (unsigned __int8)EtwpLevelKeywordEnabled(
                                          *(_QWORD *)(EtwThreatIntProvRegHandle + 40) + 96LL,
                                          0LL,
                                          12288LL);
          v43 = 0;
          v125 = v41;
          v129 = v41;
        }
        else
        {
          LOBYTE(v2) = 0;
          v43 = *(_BYTE *)(BugCheckParameter1 + 201);
          v129 = *(_QWORD *)(BugCheckParameter1 + 176);
          v125 = *(_QWORD *)(BugCheckParameter1 + 168);
        }
        v135 = v43 != 0;
        LOBYTE(v40) = v40 == KeSpecialUserApcKernelRoutine && !v43;
        CurrentThread = (__int64)KeGetCurrentThread();
        v45 = v31;
        Process = v31->Process;
        if ( v43 )
          v47 = *(_QWORD *)(CurrentThread + 544) == (_QWORD)Process;
        else
          v47 = *(_QWORD *)(CurrentThread + 184) == (_QWORD)Process;
        v48 = !v47;
        if ( (_BYTE)v2 && v48 && (v43 || (_BYTE)v40) )
        {
          v49 = 1;
          ObfReferenceObjectWithTag(v31, 0x5149654Bu);
          LODWORD(v41) = 0;
        }
        else
        {
          v49 = 0;
        }
        v50 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 <= 0xFu )
        {
          v2 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          CurrentThread = (-1 << (v50 + 1)) & 4u | *(_DWORD *)(v2 + 20);
          *(_DWORD *)(v2 + 20) = CurrentThread;
        }
        v51 = KeGetCurrentPrcb();
        v138 = v41;
        v52 = v51->SchedulerAssist;
        if ( v52 )
        {
          if ( v51->NestingLevel <= 1u )
          {
            v118 = v52[6];
            v52[6] = v118 + 1;
            if ( v118 == -1 )
LABEL_257:
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v45->ThreadLock, 0LL) )
        {
          v86 = v51->SchedulerAssist;
          if ( v86 )
          {
            if ( v51->NestingLevel <= 1u )
            {
              v119 = v86[6] - 1;
              v86[6] = v119;
              if ( !v119 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
          do
            KeYieldProcessorEx(&v138, CurrentThread, v2, (__int64)v40);
          while ( v45->ThreadLock );
          v87 = v51->SchedulerAssist;
          if ( v87 )
          {
            if ( v51->NestingLevel <= 1u )
            {
              v120 = v87[6];
              v87[6] = v120 + 1;
              if ( v120 == -1 )
                goto LABEL_257;
            }
          }
        }
        if ( (v45->MiscFlags & 0x4000) == 0 || *(_BYTE *)(v39 + 82) )
        {
          v53 = 0;
        }
        else
        {
          *(_QWORD *)(v39 + 64) = v128;
          *(_QWORD *)(v39 + 72) = v124;
          *(_BYTE *)(v39 + 82) = 1;
          KiInsertQueueApc(v39, CurrentThread, v2, v40);
          KiSignalThreadForApc(v51, v39, v50);
          v53 = 1;
        }
        v45->ThreadLock = 0LL;
        v54 = KeGetCurrentPrcb();
        v55 = v54->SchedulerAssist;
        if ( v55 )
        {
          if ( v54->NestingLevel <= 1u )
          {
            v121 = v55[6] - 1;
            v55[6] = v121;
            if ( !v121 )
              KiRemoveSystemWorkPriorityKick(v54);
          }
        }
        KiExitDispatcher((_DWORD)v51, 0, 1, v137, v50);
        if ( v49 )
        {
          if ( v53 )
            EtwTiLogInsertQueueUserApc(
              (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10],
              (_DWORD)v45,
              v125,
              v129,
              v128,
              v124,
              v135);
          ObfDereferenceObjectWithTag(v45, 0x5149654Bu);
        }
      }
      else
      {
        v132 = 1LL;
        v133 = 0LL;
        v60 = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest(
          BugCheckParameter1 + 120,
          (unsigned int)&v133,
          (unsigned int)&v132,
          (unsigned int)&v128,
          (__int64)&v124);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v114 = KeGetCurrentIrql();
            if ( v114 <= 0xFu && v60 <= 0xFu && v114 >= 2u )
            {
              v115 = KeGetCurrentPrcb();
              v116 = v115->SchedulerAssist;
              v117 = ~(unsigned __int16)(-1LL << (v60 + 1));
              v47 = (v117 & v116[5]) == 0;
              v116[5] &= v117;
              if ( v47 )
                KiRemoveSystemWorkPriorityKick(v115);
            }
          }
        }
        __writecr8(v60);
      }
      return;
    }
    v92 = KeAcquireQueuedSpinLock(0xBuLL);
    v93 = IopDeadIrps;
    v94 = v92;
    v95 = *(struct _DMA_ADAPTER **)(BugCheckParameter1 + 152);
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_189:
      if ( v95 )
      {
        KeInitializeApc(
          BugCheckParameter1 + 120,
          (_DWORD)v95,
          *(char *)(BugCheckParameter1 + 70),
          (unsigned int)IopCompleteRequest,
          (__int64)IopAbortRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(BugCheckParameter1 + 120, v30, v124, v137);
        KeReleaseQueuedSpinLock(0xBuLL, v94);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v122 = *(__int64 **)v93;
        if ( v93 - 32 == BugCheckParameter1 )
          break;
        v93 = *(_QWORD *)v93;
        if ( v122 == &IopDeadIrps )
          goto LABEL_189;
      }
      v123 = *(__int64 ***)(v93 + 8);
      if ( v122[1] != v93 || *v123 != (__int64 *)v93 )
        goto LABEL_166;
      *v123 = v122;
      v122[1] = (__int64)v123;
      *(_QWORD *)(v93 - 32 + 40) = v93;
      *(_QWORD *)v93 = v93;
      HalPutDmaAdapter(v95);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v94);
    v81 = v30;
    goto LABEL_145;
  }
  v61 = *(__int64 **)(v30 + 176);
  v62 = (_QWORD *)(BugCheckParameter1 + 120);
  if ( !v61 )
  {
    IopCompleteRequest((_DWORD)v62, (unsigned int)&v131, (unsigned int)&v130, BugCheckParameter1 + 192, (__int64)&v130);
    return;
  }
  v126 = 0LL;
  v127 = 0LL;
  v63 = *v61;
  *v62 = v61[1];
  *(_DWORD *)(BugCheckParameter1 + 184) = 0;
  *(_QWORD *)&v126 = 0LL;
  *((_QWORD *)&v126 + 1) = v63 + 64;
  v64 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v64 <= 0xFu )
  {
    v97 = KeGetCurrentPrcb()->SchedulerAssist;
    v2 = (-1 << (v64 + 1)) & 4u | v97[5];
    v97[5] = v2;
  }
  LOBYTE(v127) = v64;
  v65 = KeGetCurrentPrcb();
  v66 = v65->SchedulerAssist;
  if ( v66 )
  {
    if ( v65->NestingLevel <= 1u )
    {
      v98 = v66[6];
      v66[6] = v98 + 1;
      if ( v98 == -1 )
        KiRemoveSystemWorkPriorityKick(v65);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v126, v63 + 64);
  }
  else
  {
    v67 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v63 + 64), (__int64)&v126);
    if ( v67 )
      KxWaitForLockOwnerShip((__int64)&v126, v67);
  }
  *(_DWORD *)(BugCheckParameter1 + 16) |= 0x10000u;
  if ( !*(_BYTE *)(v63 + 72) )
  {
    v68 = (char)v137;
    v69 = (_QWORD *)(BugCheckParameter1 + 168);
    v70 = (_QWORD *)(v63 + 8);
    v71 = KeGetCurrentIrql();
    v125 = v71;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v71 <= 0xFu )
    {
      v82 = KeGetCurrentPrcb()->SchedulerAssist;
      v67 = (_QWORD *)((-1LL << ((unsigned __int8)v71 + 1)) & 4);
      v2 = (unsigned int)v67 | v82[5];
      v82[5] = v2;
    }
    v72 = KeGetCurrentPrcb();
    v73 = (__int64)v72->CurrentThread;
    v136 = v73;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v73, v67);
      EtwTraceEnqueueWork(v100, BugCheckParameter1 + 168, IsThreadRunning);
    }
    if ( v137 && (*(_BYTE *)(v63 + 1) & 2) != 0 )
      v68 = 0;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v63, (__int64)v67, v2, v73);
    v139 = *(_DWORD *)(v63 + 4);
    if ( (_QWORD *)*v70 != v70
      && *(_DWORD *)(v63 + 40) < *(_DWORD *)(v63 + 44)
      && (*(_QWORD *)(v136 + 232) != v63 || *(_BYTE *)(v136 + 643) != 15)
      && KiWakeQueueWaiter((__int64)v72, v63, BugCheckParameter1 + 168) )
    {
      goto LABEL_137;
    }
    v84 = *(_DWORD *)(v63 + 4);
    *(_DWORD *)(v63 + 4) = v84 + 1;
    v85 = *(_QWORD **)(v63 + 32);
    if ( *v85 == v63 + 24 )
    {
      *v69 = v63 + 24;
      *(_QWORD *)(BugCheckParameter1 + 176) = v85;
      *v85 = v69;
      *(_QWORD *)(v63 + 32) = v69;
      if ( !v84 && (_QWORD *)*v70 != v70 )
        KiWakeOtherQueueWaiters((__int64)v72, v63, v74, v75);
LABEL_137:
      _InterlockedAnd((volatile signed __int32 *)v63, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v72, 0, 1, v68, v125);
      v76 = 0;
      goto LABEL_138;
    }
LABEL_166:
    __fastfail(3u);
  }
  v76 = 1;
LABEL_138:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v126, retaddr);
    goto LABEL_141;
  }
  _m_prefetchw(&v126);
  v77 = v126;
  if ( (_QWORD)v126 )
    goto LABEL_171;
  if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v126 + 1), 0LL, (signed __int64)&v126) != &v126 )
  {
    v77 = KxWaitForLockChainValid(&v126, (_BYTE)v67);
LABEL_171:
    *(_QWORD *)&v126 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v77 + 8), 1uLL);
  }
LABEL_141:
  v78 = KeGetCurrentPrcb();
  v79 = v78->SchedulerAssist;
  if ( v79 )
  {
    if ( v78->NestingLevel <= 1u )
    {
      v101 = v79[6] - 1;
      v79[6] = v101;
      if ( !v101 )
        KiRemoveSystemWorkPriorityKick(v78);
    }
  }
  v80 = (unsigned __int8)v127;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v102 = KeGetCurrentIrql();
      if ( v102 <= 0xFu && (unsigned __int8)v127 <= 0xFu && v102 >= 2u )
      {
        v103 = KeGetCurrentPrcb();
        v104 = v103->SchedulerAssist;
        v105 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v127 + 1));
        v47 = (v105 & v104[5]) == 0;
        v104[5] &= v105;
        if ( v47 )
          KiRemoveSystemWorkPriorityKick(v103);
      }
    }
  }
  __writecr8(v80);
  if ( v76 )
  {
    v81 = *(_QWORD *)(BugCheckParameter1 + 192);
LABEL_145:
    IopDropIrp((PIRP)BugCheckParameter1, v81);
  }
}
