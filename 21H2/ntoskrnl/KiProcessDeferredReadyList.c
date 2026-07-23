/*
 * XREFs of KiProcessDeferredReadyList @ 0x1402D5420
 * Callers:
 *     KiExitThreadWait @ 0x1402662D0 (KiExitThreadWait.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14029AC94 (KeSetPriorityAndQuantumProcess.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     KeSetPriorityBoost @ 0x1402D3F40 (KeSetPriorityBoost.c)
 *     KeClearSystemPriority @ 0x1402D4800 (KeClearSystemPriority.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KiAbApplyWakeupBoost @ 0x1402FC6CC (KiAbApplyWakeupBoost.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeSetAffinityProcess @ 0x1403CB43C (KeSetAffinityProcess.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 */

char __fastcall KiProcessDeferredReadyList(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rax
  ULONG_PTR v6; // rsi
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  bool v18; // zf
  _DWORD *v19; // rdx
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v23; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  KiReadyDeferredReadyList(a1, a2);
  v5 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)v3 < 2u )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      KiAbProcessContextSwitch(v6, 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v23 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = SchedulerAssist[6];
          SchedulerAssist[6] = v13 + 1;
          if ( v13 == -1 )
LABEL_23:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v11 = CurrentPrcb->SchedulerAssist;
        if ( v11 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = v11[6] - 1;
            v11[6] = v14;
            if ( !v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v23);
        while ( *(_QWORD *)(a1 + 48) );
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v12[6];
            v12[6] = v15 + 1;
            if ( v15 == -1 )
              goto LABEL_23;
          }
        }
      }
      v9 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v6, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v9;
      if ( *(_BYTE *)(v9 + 388) == 1 )
        *(_DWORD *)(v9 + 132) = *(_DWORD *)(v9 + 132) - *(_DWORD *)(v9 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v9 + 388) = 2;
      *(_BYTE *)(v6 + 643) = 32;
      *(_BYTE *)(v6 + 390) = v3;
      KiQueueReadyThread((struct _KPRCB *)a1, v6, v10);
      if ( !(unsigned __int8)KiSwapContext(v6, v9, (unsigned __int8)v3) )
        goto LABEL_4;
      if ( !KiIrqlFlags )
        goto LABEL_16;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_16;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_16;
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      v18 = (v17[5] & 0xFFFF0003) == 0;
      v17[5] &= 0xFFFF0003;
      if ( !v18 )
        goto LABEL_16;
    }
    else
    {
      if ( (*(_DWORD *)(v6 + 116) & 0x40) == 0 )
        goto LABEL_4;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v16 = KeGetCurrentPrcb(),
            v19 = v16->SchedulerAssist,
            v18 = (v19[5] & 0xFFFF0003) == 0,
            v19[5] &= 0xFFFF0003,
            !v18) )
      {
LABEL_16:
        __writecr8(1uLL);
        *(_DWORD *)(v6 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
LABEL_4:
        LOBYTE(v5) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v5) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v5 <= 0xDu )
            {
              v20 = KeGetCurrentPrcb();
              v21 = v20->SchedulerAssist;
              LODWORD(v5) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
              v18 = ((unsigned int)v5 & v21[5]) == 0;
              v21[5] &= v5;
              if ( v18 )
                LOBYTE(v5) = KiRemoveSystemWorkPriorityKick(v20);
            }
          }
        }
        __writecr8(v3);
        return v5;
      }
    }
    KiRemoveSystemWorkPriorityKick(v16);
    goto LABEL_16;
  }
  if ( v5 )
  {
    LOBYTE(v5) = *(_BYTE *)(a1 + 12586);
    if ( !(_BYTE)v5 )
      LOBYTE(v5) = KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
  }
  return v5;
}
