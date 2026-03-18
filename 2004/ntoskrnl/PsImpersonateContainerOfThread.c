/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1402123A0
 * Callers:
 *     IopProcessWorkItem @ 0x1402746F0 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408BEFC0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     ObpIncrPointerCount @ 0x1402126D0 (ObpIncrPointerCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     PspRevertContainerImpersonation @ 0x1402149A0 (PspRevertContainerImpersonation.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402ED880 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x140518FF0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x1405190F0 (KeSetThreadBamQosLevel.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

BOOLEAN __fastcall PsImpersonateContainerOfThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rdx
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
  __int64 v25; // rdx
  struct _KPRCB *v26; // r14
  _DWORD *v27; // rcx
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  _KTHREAD *NextThread; // r14
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  bool v36; // zf
  _DWORD *v37; // rdx
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  __int16 v41; // si
  bool v42; // si
  __int64 v43; // rdx
  unsigned int ThreadFlags2; // ecx
  __int64 v45; // r9
  unsigned int v46; // edx
  unsigned int v47; // ecx
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r9
  _DWORD *v50; // r8
  int v51; // eax
  int v52; // [rsp+40h] [rbp-78h] BYREF
  int v53; // [rsp+44h] [rbp-74h] BYREF
  int v54; // [rsp+48h] [rbp-70h] BYREF
  int v55; // [rsp+4Ch] [rbp-6Ch] BYREF
  __int64 v56; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-60h] BYREF
  int *v58; // [rsp+68h] [rbp-50h]
  __int64 v59; // [rsp+70h] [rbp-48h]
  int v60; // [rsp+B0h] [rbp-8h]

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
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, CurrentIrql);
  CurrentThread[1].WaitBlock[1].Object = (PVOID)a1;
  v5 = *(char *)(a1 + 195);
  if ( v5 > 15 )
    LOBYTE(v5) = 15;
  v56 = 0LL;
  v6 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 <= 0xFu )
  {
    v20 = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = (-1LL << (v6 + 1)) & 4;
    v20[5] |= v4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v52 = 0;
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
      KeYieldProcessorEx(&v52, v4);
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
    KiSetPriorityThread(CurrentThread, &v56, (unsigned int)(char)v5);
  KiReleaseThreadLockSafe(CurrentThread);
  v10 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList(v10, &v56);
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
    v26 = KeGetCurrentPrcb();
    v53 = 0;
    v27 = v26->SchedulerAssist;
    if ( v27 )
    {
      if ( v26->NestingLevel <= 1u )
      {
        v28 = v27[6];
        v27[6] = v28 + 1;
        if ( v28 == -1 )
LABEL_50:
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v10->PrcbLock, 0LL) )
    {
      v29 = v26->SchedulerAssist;
      if ( v29 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v30 = v29[6] - 1;
          v29[6] = v30;
          if ( !v30 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      do
        KeYieldProcessorEx(&v53, v25);
      while ( v10->PrcbLock );
      v31 = v26->SchedulerAssist;
      if ( v31 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v32 = v31[6];
          v31[6] = v32 + 1;
          if ( v32 == -1 )
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
    v34 = KeGetCurrentPrcb();
    v35 = v34->SchedulerAssist;
    v36 = (v35[5] & 0xFFFF0003) == 0;
    v35[5] &= 0xFFFF0003;
    if ( !v36 )
      goto LABEL_69;
LABEL_68:
    KiRemoveSystemWorkPriorityKick(v34);
LABEL_69:
    __writecr8(1uLL);
    v24->MiscFlags &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
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
    v34 = KeGetCurrentPrcb();
    v37 = v34->SchedulerAssist;
    v36 = (v37[5] & 0xFFFF0003) == 0;
    v37[5] &= 0xFFFF0003;
    if ( !v36 )
      goto LABEL_69;
    goto LABEL_68;
  }
LABEL_76:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      v40 = ~(unsigned __int16)(-1LL << (v6 + 1));
      v36 = (v40 & v39[5]) == 0;
      v12 = (unsigned int)v40 & v39[5];
      v39[5] = v12;
      if ( v36 )
        KiRemoveSystemWorkPriorityKick(v38);
    }
  }
  __writecr8(v6);
LABEL_16:
  v13 = KeGetCurrentPrcb();
  if ( KeHeteroSystemQos )
  {
    v41 = v60;
    _disable();
    v42 = (v41 & 0x200) != 0;
    v43 = (unsigned __int8)*(_DWORD *)(a1 + 512);
    ThreadFlags2 = (unsigned __int8)CurrentThread->ThreadFlags2;
    if ( (_DWORD)v43 != ThreadFlags2 && ((_DWORD)v43 == 3 || ThreadFlags2 == 3 || (unsigned int)v43 < ThreadFlags2) )
    {
      KeSetThreadBamQosLevel(CurrentThread, v43, v12, v13);
      v46 = (unsigned __int8)*(_DWORD *)(v45 + 236);
      v47 = (unsigned __int8)CurrentThread->ThreadFlags2;
      if ( v47 != v46 && (v47 == 3 || v46 == 3 || v47 < v46) )
        KeCheckAndApplyBamQos(v45, CurrentThread);
    }
    if ( v42 )
      _enable();
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v48 = KeGetCurrentIrql();
      if ( v48 <= 0xFu && CurrentIrql <= 0xFu && v48 >= 2u )
      {
        v49 = KeGetCurrentPrcb();
        v50 = v49->SchedulerAssist;
        v51 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v36 = (v51 & v50[5]) == 0;
        v50[5] &= v51;
        if ( v36 )
          KiRemoveSystemWorkPriorityKick(v49);
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
    v54 = 0;
    UserData.Ptr = (ULONGLONG)&v54;
    v55 = *(_DWORD *)(a1 + 1152);
    *(_QWORD *)&UserData.Size = 4LL;
    v58 = &v55;
    v59 = 4LL;
    return EtwWriteEx(v15, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
