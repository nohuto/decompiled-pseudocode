/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x1402ECA00
 * Callers:
 *     KiChainedDispatch @ 0x140420C10 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404215E0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421A20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421E60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1404222A0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404226D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140426820 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426C70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 *     SwapContext @ 0x140428D90 (SwapContext.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x1402EDFE8 (KiInsertDeferredPreemptionApc.c)
 *     KiBeginCounterAccumulation @ 0x140571770 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r9
  __int64 Size; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned __int8 v12; // al
  int v13; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v15; // rcx
  _BYTE *SchedulerAssist; // rax

  CurrentThread = a2;
  if ( a2 )
  {
    v6 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 33968);
    v9 = *(_QWORD *)(a1 + 33976);
    if ( !v8 || !v9 )
      goto LABEL_10;
    if ( *(_BYTE *)(v9 + 100) )
    {
      v10 = *(_DWORD *)(v9 + 116);
    }
    else
    {
      v10 = *(_DWORD *)(v9 + 72);
      if ( v10 >= *(_DWORD *)(v8 + 512) )
        v10 = *(_DWORD *)(v8 + 512);
    }
    if ( v10 < 0x4B )
      v11 = v10 / 0x19;
    else
LABEL_10:
      v11 = 3;
    if ( KeHeteroSystem )
      v12 = *(_BYTE *)(a1 + 34056);
    else
      v12 = *(_BYTE *)(a1 + 34059);
    a2 = (struct _KTHREAD *)(a1 + 8 * (v12 + 2 * (v11 + 2088LL)));
    *(_QWORD *)&a2->Header.Lock += a3;
  }
  if ( (Size & 0x40) != 0 )
  {
    SchedulerAssist = CurrentThread->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[64] = 1;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( v6 )
  {
    if ( (Size & 0xB6) != 0 )
    {
      if ( CurrentThread->WaitBlock[0].SparePtr )
      {
        LOBYTE(a2) = 1;
        KiBeginCounterAccumulation(CurrentThread, a2);
      }
      _enable();
      if ( (CurrentThread->Header.Size & 4) == 0 )
        goto LABEL_20;
      v13 = *(&CurrentThread->MiscFlags + 1);
      if ( (v13 & 0x800) == 0 )
      {
        if ( (v13 & 0x600) != 0 )
          goto LABEL_20;
        SchedulingGroup = CurrentThread->SchedulingGroup;
        if ( !SchedulingGroup )
          goto LABEL_20;
        v15 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 216);
        if ( !v15 )
          goto LABEL_20;
        while ( (v15[112] & 2) == 0 )
        {
          v15 = (char *)*((_QWORD *)v15 + 51);
          if ( !v15 )
            goto LABEL_20;
        }
      }
      LOBYTE(Size) = 1;
      KiInsertDeferredPreemptionApc(a1, CurrentThread, Size);
    }
    else
    {
      _enable();
    }
LABEL_20:
    if ( KiHgsPlusEnabled )
    {
      CurrentThread->HgsFeedbackCycles = 0LL;
      CurrentThread->HgsFeedbackStartTime = __rdtsc();
    }
    return;
  }
  if ( (Size & 2) != 0 )
    KiBeginCounterAccumulation(CurrentThread, 0LL);
}
