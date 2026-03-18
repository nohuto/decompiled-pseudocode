/*
 * XREFs of KiCheckForThreadDispatch @ 0x140329BD4
 * Callers:
 *     KiBeginThreadWait @ 0x140226020 (KiBeginThreadWait.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     KiFastReadyThread @ 0x1403299AC (KiFastReadyThread.c)
 *     KiExitThreadWait @ 0x140329B50 (KiExitThreadWait.c)
 *     KeGenericProcessorCallback @ 0x140337898 (KeGenericProcessorCallback.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 */

char __fastcall KiCheckForThreadDispatch(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v14; // rdi
  __int64 v15; // r8
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v24; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v6 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= 2u )
  {
    if ( v4 )
    {
      LOBYTE(v4) = *(_BYTE *)(a1 + 12586);
      if ( !(_BYTE)v4 )
      {
        LOBYTE(a2) = 2;
        LOBYTE(v4) = KiRequestSoftwareInterrupt(a1, a2);
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      CurrentPrcb = KeGetCurrentPrcb();
      v24 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v17 = SchedulerAssist[6];
            SchedulerAssist[6] = v17 + 1;
            if ( v17 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v16 = CurrentPrcb->SchedulerAssist;
        if ( v16 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v18 = v16[6] - 1;
            v16[6] = v18;
            if ( !v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v24, v9, v10, v11);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v14 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v7, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v14;
      if ( *(_BYTE *)(v14 + 388) == 1 )
        *(_DWORD *)(v14 + 132) = *(_DWORD *)(v14 + 132) - *(_DWORD *)(v14 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v14 + 388) = 2;
      *(_BYTE *)(v7 + 643) = 32;
      *(_BYTE *)(v7 + 390) = v6;
      KiQueueReadyThread(a1, v7);
      LOBYTE(v15) = v6;
      v8 = (unsigned __int8)KiSwapContext(v7, v14, v15) == 0;
    }
    else
    {
      v8 = (*(_DWORD *)(v7 + 116) & 0x40) == 0;
    }
    if ( !v8 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v8 = (v20[5] & 0xFFFF0003) == 0;
          v20[5] &= 0xFFFF0003;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v7 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL, a4);
    }
    LOBYTE(v4) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v4) = KeGetCurrentIrql() - 2;
        if ( (unsigned __int8)v4 <= 0xDu )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          LODWORD(v4) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v8 = ((unsigned int)v4 & v22[5]) == 0;
          v22[5] &= v4;
          if ( v8 )
            LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(v6);
  }
  return v4;
}
