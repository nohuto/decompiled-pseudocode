/*
 * XREFs of IopLiveDumpCorralProcessors @ 0x1409A7FD0
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1409A8210 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x1402771F0 (KeEnumerateNextProcessor.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140502E3C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x140503880 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140504530 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpLockPages @ 0x140894128 (IopLiveDumpLockPages.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1409A8C88 (IopLiveDumpInitiateCorralStateChange.c)
 */

char __fastcall IopLiveDumpCorralProcessors(char *DeferredContext)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 MillisecondCounter; // r12
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 *v17[2]; // [rsp+48h] [rbp-20h] BYREF
  __int16 v18; // [rsp+58h] [rbp-10h]
  int v19; // [rsp+5Ah] [rbp-Eh]
  __int16 v20; // [rsp+5Eh] [rbp-Ah]
  int v21; // [rsp+B0h] [rbp+48h] BYREF
  int v22; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)DeferredContext;
  v2 = 0LL;
  *((_DWORD *)DeferredContext + 2) = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  MillisecondCounter = 0LL;
  v22 = 0;
  v15 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  *((_DWORD *)DeferredContext + 3) = 0;
  *((_DWORD *)DeferredContext + 4) = 0;
  *((_DWORD *)DeferredContext + 5) = 0;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  IopLiveDumpLockPages();
  Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, (PGROUP_AFFINITY)DeferredContext + 6);
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 3) = 1;
  IopLiveDumpTraceSystemQuiesceStart();
  if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  DeferredContext[88] = CurrentIrql;
  KeInitializeDpc((PRKDPC)(DeferredContext + 24), (PKDEFERRED_ROUTINE)IopLiveDumpCorralDpc, DeferredContext);
  DeferredContext[25] = 2;
  v17[1] = (unsigned __int16 *)qword_140CFC838[0];
  v17[0] = (unsigned __int16 *)KeActiveProcessors;
  v18 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v21, v17) )
  {
    if ( v21 == *((_DWORD *)DeferredContext + 28) )
    {
      _InterlockedAdd((volatile signed __int32 *)DeferredContext + 4, 1u);
    }
    else
    {
      v7 = *((_DWORD *)DeferredContext + 4);
      if ( !*((_QWORD *)DeferredContext + 10) )
        *((_WORD *)DeferredContext + 13) = v21 + 1280;
      KeInsertQueueDpc((PRKDPC)(DeferredContext + 24), 0LL, 0LL);
      v22 = 0;
      while ( v7 == *((_DWORD *)DeferredContext + 4) )
        KeYieldProcessorEx(&v22, v8, v9, v10);
    }
  }
  *((_DWORD *)DeferredContext + 5) = *((_DWORD *)DeferredContext + 4);
  v11 = *(_DWORD *)(v1 + 80);
  if ( (v11 & 0x80u) != 0 )
  {
    v12 = IopLiveDumpGetMillisecondCounter(0);
    v11 = *(_DWORD *)(v1 + 80);
    v2 = v12 - MillisecondCounter;
  }
  if ( (v11 & 0x100) == 0 )
    IopLiveDumpInitiateCorralStateChange(DeferredContext, 2LL, &v15);
  PoAllProcIntrDisabled = 1;
  IopLiveDumpInitiateCorralStateChange(DeferredContext, 7LL, &v24);
  IopLiveDumpInitiateCorralStateChange(DeferredContext, 3LL, &v23);
  *((_DWORD *)DeferredContext + 2) |= 1u;
  v13 = *(_DWORD *)(v1 + 80);
  if ( (v13 & 0x80u) != 0 )
    LOBYTE(v13) = IopLiveDumpTraceCorralProcessorsDuration(*(const GUID **)DeferredContext, v2, v15, v24, v23);
  return v13;
}
