/*
 * XREFs of KiProcessDeferredReadyList @ 0x14026D000
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityBoost @ 0x140245760 (KeSetPriorityBoost.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeClearSystemPriority @ 0x14026B280 (KeClearSystemPriority.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KiExitThreadWait @ 0x140329B50 (KiExitThreadWait.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1403355DC (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     KiAbApplyWakeupBoost @ 0x14035AA8C (KiAbApplyWakeupBoost.c)
 *     KeSetAffinityProcess @ 0x1403C6EAC (KeSetAffinityProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 */

char __fastcall KiProcessDeferredReadyList(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rdx
  _DWORD *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v14; // rbp
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  bool v22; // zf
  _DWORD *v23; // rdx
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v27; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  KiReadyDeferredReadyList(a1, a2);
  v7 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)v3 < 2u )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      KiAbProcessContextSwitch(v8, 0);
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v17 = SchedulerAssist[6];
          SchedulerAssist[6] = v17 + 1;
          if ( v17 == -1 )
LABEL_23:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v18 = v15[6] - 1;
            v15[6] = v18;
            if ( !v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v27, v9, v10, v11);
        while ( *(_QWORD *)(a1 + 48) );
        v16 = CurrentPrcb->SchedulerAssist;
        if ( v16 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v19 = v16[6];
            v16[6] = v19 + 1;
            if ( v19 == -1 )
              goto LABEL_23;
          }
        }
      }
      v14 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v8, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v14;
      if ( *(_BYTE *)(v14 + 388) == 1 )
        *(_DWORD *)(v14 + 132) = *(_DWORD *)(v14 + 132) - *(_DWORD *)(v14 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v14 + 388) = 2;
      *(_BYTE *)(v8 + 643) = 32;
      *(_BYTE *)(v8 + 390) = v3;
      KiQueueReadyThread(a1, v8);
      if ( !(unsigned __int8)KiSwapContext(v8, v14, (unsigned __int8)v3) )
        goto LABEL_4;
      if ( !KiIrqlFlags )
        goto LABEL_16;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_16;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_16;
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      v22 = (v21[5] & 0xFFFF0003) == 0;
      v21[5] &= 0xFFFF0003;
      if ( !v22 )
        goto LABEL_16;
    }
    else
    {
      if ( (*(_DWORD *)(v8 + 116) & 0x40) == 0 )
        goto LABEL_4;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v20 = KeGetCurrentPrcb(),
            v23 = v20->SchedulerAssist,
            v22 = (v23[5] & 0xFFFF0003) == 0,
            v23[5] &= 0xFFFF0003,
            !v22) )
      {
LABEL_16:
        __writecr8(1uLL);
        *(_DWORD *)(v8 + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL, v6);
LABEL_4:
        LOBYTE(v7) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v7) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v7 <= 0xDu )
            {
              v24 = KeGetCurrentPrcb();
              v25 = v24->SchedulerAssist;
              LODWORD(v7) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
              v22 = ((unsigned int)v7 & v25[5]) == 0;
              v25[5] &= v7;
              if ( v22 )
                LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v24);
            }
          }
        }
        __writecr8(v3);
        return v7;
      }
    }
    KiRemoveSystemWorkPriorityKick(v20);
    goto LABEL_16;
  }
  if ( v7 )
  {
    LOBYTE(v7) = *(_BYTE *)(a1 + 12586);
    if ( !(_BYTE)v7 )
    {
      LOBYTE(v5) = 2;
      LOBYTE(v7) = KiRequestSoftwareInterrupt(a1, v5);
    }
  }
  return v7;
}
