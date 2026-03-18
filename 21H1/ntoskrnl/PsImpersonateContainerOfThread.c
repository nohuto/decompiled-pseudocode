/*
 * XREFs of PsImpersonateContainerOfThread @ 0x14026B3F0
 * Callers:
 *     IopProcessWorkItem @ 0x14035A390 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408BDC70 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     ObpIncrPointerCount @ 0x14026B720 (ObpIncrPointerCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1403329C0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x1405189A0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x140518AA0 (KeSetThreadBamQosLevel.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

BOOLEAN __fastcall PsImpersonateContainerOfThread(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // r8
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  int v9; // esi
  unsigned __int8 v10; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  struct _KPRCB *v18; // r9
  __int64 v19; // rcx
  REGHANDLE v20; // rbx
  BOOLEAN result; // al
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _KTHREAD *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _KPRCB *v32; // r14
  _DWORD *v33; // rcx
  int v34; // eax
  _DWORD *v35; // rcx
  int v36; // eax
  _DWORD *v37; // rcx
  int v38; // eax
  _KTHREAD *NextThread; // r14
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  bool v42; // zf
  _DWORD *v43; // rdx
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  __int16 v47; // si
  bool v48; // si
  __int64 v49; // rdx
  unsigned int ThreadFlags2; // ecx
  __int64 v51; // r9
  unsigned int v52; // edx
  unsigned int v53; // ecx
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  int v58; // [rsp+40h] [rbp-78h] BYREF
  int v59; // [rsp+44h] [rbp-74h] BYREF
  int v60; // [rsp+48h] [rbp-70h] BYREF
  int v61; // [rsp+4Ch] [rbp-6Ch] BYREF
  __int64 v62; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-60h] BYREF
  int *v64; // [rsp+68h] [rbp-50h]
  __int64 v65; // [rsp+70h] [rbp-48h]
  int v66; // [rsp+B0h] [rbp-8h]

  if ( ObpTraceFlags )
    ObpPushStackInfo(a1 - 48);
  ObpIncrPointerCount(a1 - 48, a2);
  CurrentThread = KeGetCurrentThread();
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, CurrentIrql, v4);
  CurrentThread[1].WaitBlock[1].Object = (PVOID)a1;
  v9 = *(char *)(a1 + 195);
  if ( v9 > 15 )
    LOBYTE(v9) = 15;
  v62 = 0LL;
  v10 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
  {
    v8 = KeGetCurrentPrcb()->SchedulerAssist;
    v6 = (-1LL << (v10 + 1)) & 4;
    v7 = (unsigned int)v6 | v8[5];
    v8[5] = v7;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v58 = 0;
  v12 = CurrentPrcb->SchedulerAssist;
  if ( v12 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v25 = v12[6];
      v12[6] = v25 + 1;
      if ( v25 == -1 )
LABEL_38:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v22 = CurrentPrcb->SchedulerAssist;
    if ( v22 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = v22[6] - 1;
        v22[6] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v58, v6, v7, (__int64)v8);
    while ( CurrentThread->ThreadLock );
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v23[6];
        v23[6] = v27 + 1;
        if ( v27 == -1 )
          goto LABEL_38;
      }
    }
  }
  CurrentThread->SystemPriority = v9;
  v13 = CurrentThread->PriorityFloorCounts[(char)v9];
  if ( v13 == 0xFF )
    KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v9, 1uLL, 0LL);
  CurrentThread->PriorityFloorCounts[(char)v9] = v13 + 1;
  CurrentThread->PriorityFloorSummary |= 1 << v9;
  if ( CurrentThread->Priority < (char)v9 )
    KiSetPriorityThread(CurrentThread, &v62, (unsigned int)(char)v9);
  KiReleaseThreadLockSafe(CurrentThread);
  v14 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList(v14, &v62);
  if ( v10 >= 2u )
  {
    if ( v14->NextThread && !v14->DpcRoutineActive )
    {
      LOBYTE(v15) = 2;
      KiRequestSoftwareInterrupt(v14, v15);
    }
    goto LABEL_16;
  }
  v28 = v14->CurrentThread;
  if ( v14->NextThread )
  {
    KiAbProcessContextSwitch((__int64)v14->CurrentThread, 0);
    v32 = KeGetCurrentPrcb();
    v59 = 0;
    v33 = v32->SchedulerAssist;
    if ( v33 )
    {
      if ( v32->NestingLevel <= 1u )
      {
        v34 = v33[6];
        v33[6] = v34 + 1;
        if ( v34 == -1 )
LABEL_50:
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v14->PrcbLock, 0LL) )
    {
      v35 = v32->SchedulerAssist;
      if ( v35 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v36 = v35[6] - 1;
          v35[6] = v36;
          if ( !v36 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      do
        KeYieldProcessorEx(&v59, v29, v30, v31);
      while ( v14->PrcbLock );
      v37 = v32->SchedulerAssist;
      if ( v37 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v38 = v37[6];
          v37[6] = v38 + 1;
          if ( v38 == -1 )
            goto LABEL_50;
        }
      }
    }
    NextThread = v14->NextThread;
    v14->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(v14, v28, 0LL);
    _enable();
    v14->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    v28->WaitReason = 32;
    v28->WaitIrql = v10;
    KiQueueReadyThread(v14, v28);
    if ( !(unsigned __int8)KiSwapContext(v28, NextThread, v10) )
      goto LABEL_76;
    if ( !KiIrqlFlags )
      goto LABEL_69;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_69;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_69;
    v40 = KeGetCurrentPrcb();
    v41 = v40->SchedulerAssist;
    v42 = (v41[5] & 0xFFFF0003) == 0;
    v41[5] &= 0xFFFF0003;
    if ( !v42 )
      goto LABEL_69;
LABEL_68:
    KiRemoveSystemWorkPriorityKick(v40);
LABEL_69:
    __writecr8(1uLL);
    v28->MiscFlags &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL, v17);
    goto LABEL_76;
  }
  if ( (v28->MiscFlags & 0x40) != 0 )
  {
    if ( !KiIrqlFlags )
      goto LABEL_69;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_69;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_69;
    v40 = KeGetCurrentPrcb();
    v43 = v40->SchedulerAssist;
    v42 = (v43[5] & 0xFFFF0003) == 0;
    v43[5] &= 0xFFFF0003;
    if ( !v42 )
      goto LABEL_69;
    goto LABEL_68;
  }
LABEL_76:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v42 = (v46 & v45[5]) == 0;
      v16 = (unsigned int)v46 & v45[5];
      v45[5] = v16;
      if ( v42 )
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  __writecr8(v10);
LABEL_16:
  v18 = KeGetCurrentPrcb();
  if ( KeHeteroSystemQos )
  {
    v47 = v66;
    _disable();
    v48 = (v47 & 0x200) != 0;
    v49 = (unsigned __int8)*(_DWORD *)(a1 + 512);
    ThreadFlags2 = (unsigned __int8)CurrentThread->ThreadFlags2;
    if ( (_DWORD)v49 != ThreadFlags2 && ((_DWORD)v49 == 3 || ThreadFlags2 == 3 || (unsigned int)v49 < ThreadFlags2) )
    {
      KeSetThreadBamQosLevel(CurrentThread, v49, v16, v18);
      v52 = (unsigned __int8)*(_DWORD *)(v51 + 236);
      v53 = (unsigned __int8)CurrentThread->ThreadFlags2;
      if ( v53 != v52 && (v53 == 3 || v52 == 3 || v53 < v52) )
        KeCheckAndApplyBamQos(v51, CurrentThread);
    }
    if ( v48 )
      _enable();
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v54 = KeGetCurrentIrql();
      if ( v54 <= 0xFu && CurrentIrql <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v42 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v42 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
  }
  __writecr8(CurrentIrql);
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v19 && *(_QWORD *)(v19 + 1016) )
    KeSetThreadChargeOnlySchedulingGroup(CurrentThread);
  v20 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    v60 = 0;
    UserData.Ptr = (ULONGLONG)&v60;
    v61 = *(_DWORD *)(a1 + 1152);
    *(_QWORD *)&UserData.Size = 4LL;
    v64 = &v61;
    v65 = 4LL;
    return EtwWriteEx(v20, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
