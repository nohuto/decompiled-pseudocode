/*
 * XREFs of KiCheckForThreadDispatch @ 0x140294824
 * Callers:
 *     KiBeginThreadWait @ 0x140217CA0 (KiBeginThreadWait.c)
 *     KiFastReadyThread @ 0x140294574 (KiFastReadyThread.c)
 *     KiExitThreadWait @ 0x1402947A0 (KiExitThreadWait.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeRemovePriQueue @ 0x14033D110 (KeRemovePriQueue.c)
 *     KeGenericProcessorCallback @ 0x14035BB4C (KeGenericProcessorCallback.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 */

void __fastcall KiCheckForThreadDispatch(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // r15
  __int64 v4; // r14
  bool v5; // zf
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax
  _DWORD v19[14]; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 >= 2u )
  {
    if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 13242) )
    {
      if ( *(_BYTE *)(a1 + 32) )
      {
        *(_BYTE *)(a1 + 6) = 1;
      }
      else
      {
        v19[0] = 5;
        *(_OWORD *)&v19[1] = 0LL;
        HalpInterruptSendIpi(v19, 47LL);
      }
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v12 = SchedulerAssist[6];
            SchedulerAssist[6] = v12 + 1;
            if ( v12 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v11 = CurrentPrcb->SchedulerAssist;
        if ( v11 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v13 = v11[6] - 1;
            v11[6] = v13;
            if ( !v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v20);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v9 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      LOBYTE(v6) = 1;
      KiEndThreadCycleAccumulation(a1, v4, 0LL, v6);
      _enable();
      *(_QWORD *)(a1 + 8) = v9;
      if ( *(_BYTE *)(v9 + 388) == 1 )
        *(_DWORD *)(v9 + 132) = *(_DWORD *)(v9 + 132) - *(_DWORD *)(v9 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v9 + 388) = 2;
      *(_BYTE *)(v4 + 643) = 32;
      *(_BYTE *)(v4 + 390) = v2;
      KiQueueReadyThread(a1, v4);
      LOBYTE(v10) = v2;
      v5 = (unsigned __int8)KiSwapContext(v4, v9, v10) == 0;
    }
    else
    {
      v5 = (*(_DWORD *)(v4 + 116) & 0x40) == 0;
    }
    if ( !v5 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v5 = (v15[5] & 0xFFFF0003) == 0;
          v15[5] &= 0xFFFF0003;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v4 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v5 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
    __writecr8(v2);
  }
}
