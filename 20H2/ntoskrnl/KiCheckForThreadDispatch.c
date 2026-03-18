/*
 * XREFs of KiCheckForThreadDispatch @ 0x1402D82C4
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiBeginThreadWait @ 0x14028EC70 (KiBeginThreadWait.c)
 *     KiFastReadyThread @ 0x1402D80A0 (KiFastReadyThread.c)
 *     KiExitThreadWait @ 0x1402D8240 (KiExitThreadWait.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     KeGenericProcessorCallback @ 0x14033CC78 (KeGenericProcessorCallback.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 */

char __fastcall KiCheckForThreadDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  bool v6; // zf
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v19; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= 2u )
  {
    if ( v2 )
    {
      LOBYTE(v2) = *(_BYTE *)(a1 + 12586);
      if ( !(_BYTE)v2 )
      {
        LOBYTE(a2) = 2;
        LOBYTE(v2) = KiRequestSoftwareInterrupt(a1, a2);
      }
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = 0;
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
          KeYieldProcessorEx(&v19);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v9 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v5, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v9;
      if ( *(_BYTE *)(v9 + 388) == 1 )
        *(_DWORD *)(v9 + 132) = *(_DWORD *)(v9 + 132) - *(_DWORD *)(v9 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v9 + 388) = 2;
      *(_BYTE *)(v5 + 643) = 32;
      *(_BYTE *)(v5 + 390) = v4;
      KiQueueReadyThread(a1, v5);
      LOBYTE(v10) = v4;
      v6 = (unsigned __int8)KiSwapContext(v5, v9, v10) == 0;
    }
    else
    {
      v6 = (*(_DWORD *)(v5 + 116) & 0x40) == 0;
    }
    if ( !v6 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v6 = (v15[5] & 0xFFFF0003) == 0;
          v15[5] &= 0xFFFF0003;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v5 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    LOBYTE(v2) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v2) = KeGetCurrentIrql() - 2;
        if ( (unsigned __int8)v2 <= 0xDu )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          LODWORD(v2) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v6 = ((unsigned int)v2 & v17[5]) == 0;
          v17[5] &= v2;
          if ( v6 )
            LOBYTE(v2) = KiRemoveSystemWorkPriorityKick(v16);
        }
      }
    }
    __writecr8(v4);
  }
  return v2;
}
