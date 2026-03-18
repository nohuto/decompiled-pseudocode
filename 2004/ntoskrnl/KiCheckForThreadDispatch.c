/*
 * XREFs of KiCheckForThreadDispatch @ 0x1402E4AA4
 * Callers:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KeRemoveQueueEx @ 0x14020F400 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KiBeginThreadWait @ 0x1402B8CA0 (KiBeginThreadWait.c)
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 *     KiFastReadyThread @ 0x1402E4884 (KiFastReadyThread.c)
 *     KiExitThreadWait @ 0x1402E4A20 (KiExitThreadWait.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 */

char __fastcall KiCheckForThreadDispatch(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v22; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = a2;
  if ( a2 >= 2u )
  {
    if ( v2 )
    {
      LOBYTE(v2) = *(_BYTE *)(a1 + 12586);
      if ( !(_BYTE)v2 )
        LOBYTE(v2) = KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = SchedulerAssist[6];
            SchedulerAssist[6] = v15 + 1;
            if ( v15 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v14 = CurrentPrcb->SchedulerAssist;
        if ( v14 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v14[6] - 1;
            v14[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v22, v7, v8, v9);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v12 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v5, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v12;
      if ( *(_BYTE *)(v12 + 388) == 1 )
        *(_DWORD *)(v12 + 132) = *(_DWORD *)(v12 + 132) - *(_DWORD *)(v12 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v12 + 388) = 2;
      *(_BYTE *)(v5 + 643) = 32;
      *(_BYTE *)(v5 + 390) = v4;
      KiQueueReadyThread(a1, v5);
      LOBYTE(v13) = v4;
      v6 = (unsigned __int8)KiSwapContext(v5, v12, v13) == 0;
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
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v6 = (v18[5] & 0xFFFF0003) == 0;
          v18[5] &= 0xFFFF0003;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v5 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    LOBYTE(v2) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v2) = KeGetCurrentIrql() - 2;
        if ( (unsigned __int8)v2 <= 0xDu )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          LODWORD(v2) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v6 = ((unsigned int)v2 & v20[5]) == 0;
          v20[5] &= v2;
          if ( v6 )
            LOBYTE(v2) = KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    __writecr8(v4);
  }
  return v2;
}
