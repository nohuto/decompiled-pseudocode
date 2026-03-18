/*
 * XREFs of KiProcessDeferredReadyList @ 0x140213FB0
 * Callers:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeClearSystemPriority @ 0x140212230 (KeClearSystemPriority.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KiAbApplyWakeupBoost @ 0x140274DEC (KiAbApplyWakeupBoost.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityBoost @ 0x140281F40 (KeSetPriorityBoost.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     KiExitThreadWait @ 0x1402E4A20 (KiExitThreadWait.c)
 *     KeSetPriorityThread @ 0x1402EBF90 (KeSetPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402F049C (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403C7CBC (KeSetAffinityProcess.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 */

char __fastcall KiProcessDeferredReadyList(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v11; // rbp
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  bool v19; // zf
  _DWORD *v20; // rdx
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v24; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  KiReadyDeferredReadyList(a1, a2);
  v6 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)v3 < 2u )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      KiAbProcessContextSwitch(v7, 0);
      CurrentPrcb = KeGetCurrentPrcb();
      v24 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = SchedulerAssist[6];
          SchedulerAssist[6] = v14 + 1;
          if ( v14 == -1 )
LABEL_23:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v12[6] - 1;
            v12[6] = v15;
            if ( !v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v24, v8);
        while ( *(_QWORD *)(a1 + 48) );
        v13 = CurrentPrcb->SchedulerAssist;
        if ( v13 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v13[6];
            v13[6] = v16 + 1;
            if ( v16 == -1 )
              goto LABEL_23;
          }
        }
      }
      v11 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v7, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v11;
      if ( *(_BYTE *)(v11 + 388) == 1 )
        *(_DWORD *)(v11 + 132) = *(_DWORD *)(v11 + 132) - *(_DWORD *)(v11 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v11 + 388) = 2;
      *(_BYTE *)(v7 + 643) = 32;
      *(_BYTE *)(v7 + 390) = v3;
      KiQueueReadyThread(a1, v7);
      if ( !(unsigned __int8)KiSwapContext(v7, v11, (unsigned __int8)v3) )
        goto LABEL_4;
      if ( !KiIrqlFlags )
        goto LABEL_16;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_16;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_16;
      v17 = KeGetCurrentPrcb();
      v18 = v17->SchedulerAssist;
      v19 = (v18[5] & 0xFFFF0003) == 0;
      v18[5] &= 0xFFFF0003;
      if ( !v19 )
        goto LABEL_16;
    }
    else
    {
      if ( (*(_DWORD *)(v7 + 116) & 0x40) == 0 )
        goto LABEL_4;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v17 = KeGetCurrentPrcb(),
            v20 = v17->SchedulerAssist,
            v19 = (v20[5] & 0xFFFF0003) == 0,
            v20[5] &= 0xFFFF0003,
            !v19) )
      {
LABEL_16:
        __writecr8(1uLL);
        *(_DWORD *)(v7 + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
LABEL_4:
        LOBYTE(v6) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v6) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v6 <= 0xDu )
            {
              v21 = KeGetCurrentPrcb();
              v22 = v21->SchedulerAssist;
              LODWORD(v6) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
              v19 = ((unsigned int)v6 & v22[5]) == 0;
              v22[5] &= v6;
              if ( v19 )
                LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v21);
            }
          }
        }
        __writecr8(v3);
        return v6;
      }
    }
    KiRemoveSystemWorkPriorityKick(v17);
    goto LABEL_16;
  }
  if ( v6 )
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 12586);
    if ( !(_BYTE)v6 )
    {
      LOBYTE(v5) = 2;
      LOBYTE(v6) = KiRequestSoftwareInterrupt(a1, v5);
    }
  }
  return v6;
}
