/*
 * XREFs of KiCheckForThreadDispatch @ 0x140266354
 * Callers:
 *     KiFastReadyThread @ 0x140266130 (KiFastReadyThread.c)
 *     KiExitThreadWait @ 0x1402662D0 (KiExitThreadWait.c)
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 *     KiBeginThreadWait @ 0x1402E6E80 (KiBeginThreadWait.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 */

char __fastcall KiCheckForThreadDispatch(__int64 a1, unsigned __int8 a2)
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
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
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
