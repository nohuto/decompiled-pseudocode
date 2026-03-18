/*
 * XREFs of KiProcessDeferredReadyList @ 0x140344800
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KiExitThreadWait @ 0x1402947A0 (KiExitThreadWait.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402EBB58 (KeSetPriorityAndQuantumProcess.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityBoost @ 0x1403438F0 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KeClearSystemPriority @ 0x140344640 (KeClearSystemPriority.c)
 *     KiAbApplyWakeupBoost @ 0x1403597CC (KiAbApplyWakeupBoost.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403DAC1C (KeSetAffinityProcess.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x140577B4C (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 */

char __fastcall KiProcessDeferredReadyList(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _QWORD *v3; // rsi
  char v4; // bp
  unsigned __int64 v5; // rdi
  __int64 v8; // rax
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v15; // rbp
  __int64 v16; // r8
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  bool v24; // zf
  _DWORD *v25; // rdx
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v29[14]; // [rsp+20h] [rbp-38h] BYREF
  int v30; // [rsp+70h] [rbp+18h] BYREF

  v3 = (_QWORD *)*a2;
  v4 = 0;
  v5 = a3;
  if ( *a2 )
  {
    *a2 = *v3;
    do
    {
      KiDeferredReadySingleThread(a1, (ULONG_PTR)(v3 - 27), (__int64)a2);
      v3 = (_QWORD *)*a2;
      ++v4;
      if ( *a2 )
        *a2 = *v3;
      if ( (v4 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
    }
    while ( v3 );
  }
  KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
  v8 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)v5 >= 2u )
  {
    if ( v8 )
    {
      LOBYTE(v8) = *(_BYTE *)(a1 + 13242);
      if ( !(_BYTE)v8 )
      {
        if ( *(_BYTE *)(a1 + 32) )
        {
          *(_BYTE *)(a1 + 6) = 1;
        }
        else
        {
          v29[0] = 5;
          *(_OWORD *)&v29[1] = 0LL;
          LOBYTE(v8) = HalpInterruptSendIpi(v29, 0x2Fu);
        }
      }
    }
    return v8;
  }
  v9 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
    CurrentPrcb = KeGetCurrentPrcb();
    v30 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[6];
        SchedulerAssist[6] = v19 + 1;
        if ( v19 == -1 )
LABEL_32:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      v17 = CurrentPrcb->SchedulerAssist;
      if ( v17 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v20 = v17[6] - 1;
          v17[6] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v30, v10, v11, v12);
      while ( *(_QWORD *)(a1 + 48) );
      v18 = CurrentPrcb->SchedulerAssist;
      if ( v18 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v21 = v18[6];
          v18[6] = v21 + 1;
          if ( v21 == -1 )
            goto LABEL_32;
        }
      }
    }
    v15 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0LL;
    _disable();
    LOBYTE(v12) = 1;
    KiEndThreadCycleAccumulation(a1, v9, 0LL, v12);
    _enable();
    *(_QWORD *)(a1 + 8) = v15;
    if ( *(_BYTE *)(v15 + 388) == 1 )
      *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v15 + 388) = 2;
    *(_BYTE *)(v9 + 643) = 32;
    *(_BYTE *)(v9 + 390) = v5;
    KiQueueReadyThread((struct _KPRCB *)a1, v9, v16);
    if ( !(unsigned __int8)KiSwapContext(v9, v15, (unsigned __int8)v5) )
      goto LABEL_13;
    if ( !KiIrqlFlags )
      goto LABEL_24;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_24;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_24;
    v22 = KeGetCurrentPrcb();
    v23 = v22->SchedulerAssist;
    v24 = (v23[5] & 0xFFFF0003) == 0;
    v23[5] &= 0xFFFF0003;
    if ( !v24 )
      goto LABEL_24;
    goto LABEL_47;
  }
  if ( (*(_DWORD *)(v9 + 116) & 0x40) == 0 )
    goto LABEL_13;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v22 = KeGetCurrentPrcb();
      v25 = v22->SchedulerAssist;
      v24 = (v25[5] & 0xFFFF0003) == 0;
      v25[5] &= 0xFFFF0003;
      if ( v24 )
LABEL_47:
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
LABEL_24:
  __writecr8(1uLL);
  *(_DWORD *)(v9 + 116) &= ~0x40u;
  KiDeliverApc(0, 0LL, 0LL);
LABEL_13:
  LOBYTE(v8) = KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v8) = KeGetCurrentIrql() - 2;
      if ( (unsigned __int8)v8 <= 0xDu )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        LODWORD(v8) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v24 = ((unsigned int)v8 & v27[5]) == 0;
        v27[5] &= v8;
        if ( v24 )
          LOBYTE(v8) = KiRemoveSystemWorkPriorityKick(v26);
      }
    }
  }
  __writecr8(v5);
  return v8;
}
