/*
 * XREFs of PsImpersonateContainerOfThread @ 0x14027E130
 * Callers:
 *     IopProcessWorkItem @ 0x140243E50 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C4D70 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     ObpIncrPointerCount @ 0x14027E460 (ObpIncrPointerCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     PspRevertContainerImpersonation @ 0x14027F410 (PspRevertContainerImpersonation.c)
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402DA1B0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x14051C9C0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x14051CAC0 (KeSetThreadBamQosLevel.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

BOOLEAN __fastcall PsImpersonateContainerOfThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // r8
  unsigned __int8 CurrentIrql; // bp
  int v5; // esi
  unsigned __int8 v6; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v8; // rcx
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KPRCB *v13; // r9
  __int64 v14; // rcx
  REGHANDLE v15; // rbx
  BOOLEAN result; // al
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v20; // r9
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _KTHREAD *v24; // r13
  struct _KPRCB *v25; // r14
  _DWORD *v26; // rcx
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  _KTHREAD *NextThread; // r14
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  bool v35; // zf
  _DWORD *v36; // rdx
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  __int16 v40; // si
  bool v41; // si
  __int64 v42; // rdx
  unsigned int ThreadFlags2; // ecx
  __int64 v44; // r9
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  int v51; // [rsp+40h] [rbp-78h] BYREF
  int v52; // [rsp+44h] [rbp-74h] BYREF
  int v53; // [rsp+48h] [rbp-70h] BYREF
  int v54; // [rsp+4Ch] [rbp-6Ch] BYREF
  __int64 v55; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-60h] BYREF
  int *v57; // [rsp+68h] [rbp-50h]
  __int64 v58; // [rsp+70h] [rbp-48h]
  int v59; // [rsp+B0h] [rbp-8h]

  if ( ObpTraceFlags )
    ObpPushStackInfo(a1 - 48);
  ObpIncrPointerCount(a1 - 48);
  CurrentThread = KeGetCurrentThread();
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, CurrentIrql, v3);
  CurrentThread[1].WaitBlock[1].Object = (PVOID)a1;
  v5 = *(char *)(a1 + 195);
  if ( v5 > 15 )
    LOBYTE(v5) = 15;
  v55 = 0LL;
  v6 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 <= 0xFu )
  {
    v20 = KeGetCurrentPrcb()->SchedulerAssist;
    v20[5] |= (-1 << (v6 + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v51 = 0;
  v8 = CurrentPrcb->SchedulerAssist;
  if ( v8 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v21 = v8[6];
      v8[6] = v21 + 1;
      if ( v21 == -1 )
LABEL_38:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v17[6] - 1;
        v17[6] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v51);
    while ( CurrentThread->ThreadLock );
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v18[6];
        v18[6] = v23 + 1;
        if ( v23 == -1 )
          goto LABEL_38;
      }
    }
  }
  CurrentThread->SystemPriority = v5;
  v9 = CurrentThread->PriorityFloorCounts[(char)v5];
  if ( v9 == 0xFF )
    KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v5, 1uLL, 0LL);
  CurrentThread->PriorityFloorCounts[(char)v5] = v9 + 1;
  CurrentThread->PriorityFloorSummary |= 1 << v5;
  if ( CurrentThread->Priority < (char)v5 )
    KiSetPriorityThread(CurrentThread, &v55, (unsigned int)(char)v5);
  KiReleaseThreadLockSafe(CurrentThread);
  v10 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList(v10, &v55);
  if ( v6 >= 2u )
  {
    if ( v10->NextThread && !v10->DpcRoutineActive )
    {
      LOBYTE(v11) = 2;
      KiRequestSoftwareInterrupt(v10, v11);
    }
    goto LABEL_16;
  }
  v24 = v10->CurrentThread;
  if ( v10->NextThread )
  {
    KiAbProcessContextSwitch((__int64)v10->CurrentThread, 0);
    v25 = KeGetCurrentPrcb();
    v52 = 0;
    v26 = v25->SchedulerAssist;
    if ( v26 )
    {
      if ( v25->NestingLevel <= 1u )
      {
        v27 = v26[6];
        v26[6] = v27 + 1;
        if ( v27 == -1 )
LABEL_50:
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v10->PrcbLock, 0LL) )
    {
      v28 = v25->SchedulerAssist;
      if ( v28 )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v29 = v28[6] - 1;
          v28[6] = v29;
          if ( !v29 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      do
        KeYieldProcessorEx(&v52);
      while ( v10->PrcbLock );
      v30 = v25->SchedulerAssist;
      if ( v30 )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v31 = v30[6];
          v30[6] = v31 + 1;
          if ( v31 == -1 )
            goto LABEL_50;
        }
      }
    }
    NextThread = v10->NextThread;
    v10->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(v10, v24, 0LL);
    _enable();
    v10->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    v24->WaitReason = 32;
    v24->WaitIrql = v6;
    KiQueueReadyThread(v10, v24);
    if ( !(unsigned __int8)KiSwapContext(v24, NextThread, v6) )
      goto LABEL_76;
    if ( !KiIrqlFlags )
      goto LABEL_69;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_69;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_69;
    v33 = KeGetCurrentPrcb();
    v34 = v33->SchedulerAssist;
    v35 = (v34[5] & 0xFFFF0003) == 0;
    v34[5] &= 0xFFFF0003;
    if ( !v35 )
      goto LABEL_69;
LABEL_68:
    KiRemoveSystemWorkPriorityKick(v33);
LABEL_69:
    __writecr8(1uLL);
    v24->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_76;
  }
  if ( (v24->MiscFlags & 0x40) != 0 )
  {
    if ( !KiIrqlFlags )
      goto LABEL_69;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_69;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_69;
    v33 = KeGetCurrentPrcb();
    v36 = v33->SchedulerAssist;
    v35 = (v36[5] & 0xFFFF0003) == 0;
    v36[5] &= 0xFFFF0003;
    if ( !v35 )
      goto LABEL_69;
    goto LABEL_68;
  }
LABEL_76:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v37 = KeGetCurrentPrcb();
      v38 = v37->SchedulerAssist;
      v39 = ~(unsigned __int16)(-1LL << (v6 + 1));
      v35 = (v39 & v38[5]) == 0;
      v12 = (unsigned int)v39 & v38[5];
      v38[5] = v12;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick(v37);
    }
  }
  __writecr8(v6);
LABEL_16:
  v13 = KeGetCurrentPrcb();
  if ( KeHeteroSystemQos )
  {
    v40 = v59;
    _disable();
    v41 = (v40 & 0x200) != 0;
    v42 = (unsigned __int8)*(_DWORD *)(a1 + 512);
    ThreadFlags2 = (unsigned __int8)CurrentThread->ThreadFlags2;
    if ( (_DWORD)v42 != ThreadFlags2 && ((_DWORD)v42 == 3 || ThreadFlags2 == 3 || (unsigned int)v42 < ThreadFlags2) )
    {
      KeSetThreadBamQosLevel(CurrentThread, v42, v12, v13);
      v45 = (unsigned __int8)*(_DWORD *)(v44 + 236);
      v46 = (unsigned __int8)CurrentThread->ThreadFlags2;
      if ( v46 != v45 && (v46 == 3 || v45 == 3 || v46 < v45) )
        KeCheckAndApplyBamQos(v44, CurrentThread);
    }
    if ( v41 )
      _enable();
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v47 = KeGetCurrentIrql();
      if ( v47 <= 0xFu && CurrentIrql <= 0xFu && v47 >= 2u )
      {
        v48 = KeGetCurrentPrcb();
        v49 = v48->SchedulerAssist;
        v50 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v35 = (v50 & v49[5]) == 0;
        v49[5] &= v50;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
  }
  __writecr8(CurrentIrql);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v14 && *(_QWORD *)(v14 + 1016) )
    KeSetThreadChargeOnlySchedulingGroup(CurrentThread);
  v15 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    v53 = 0;
    UserData.Ptr = (ULONGLONG)&v53;
    v54 = *(_DWORD *)(a1 + 1152);
    *(_QWORD *)&UserData.Size = 4LL;
    v57 = &v54;
    v58 = 4LL;
    return EtwWriteEx(v15, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
