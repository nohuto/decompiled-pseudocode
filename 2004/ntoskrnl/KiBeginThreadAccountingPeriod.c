/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x1402FBAC0
 * Callers:
 *     KiChainedDispatch @ 0x1403F8370 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403F8B90 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403F8E20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403F90B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403F9340 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403F95C0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FA0A0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1403FC540 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1403FC7E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1403FCD20 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FD7D0 (KiIpiInterrupt.c)
 *     SwapContext @ 0x1403FE130 (SwapContext.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x1402FB09C (KiInsertDeferredPreemptionApc.c)
 *     KiBeginCounterAccumulation @ 0x140516900 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Size; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v14; // rcx
  _BYTE *SchedulerAssist; // rax

  CurrentThread = a2;
  if ( a2 )
  {
    LOBYTE(a4) = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(a4) = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x10) != 0 )
    *(_QWORD *)(a1 + 32456) = *(_QWORD *)(a1 + 32448);
  if ( (Size & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 33128);
    v9 = *(_QWORD *)(a1 + 33136);
    if ( v8 && v9 )
    {
      if ( *(_BYTE *)(v9 + 100) )
      {
        v10 = *(_DWORD *)(v9 + 116);
      }
      else
      {
        v10 = *(_DWORD *)(v9 + 72);
        if ( v10 >= *(_DWORD *)(v8 + 368) )
          v10 = *(_DWORD *)(v8 + 368);
      }
    }
    else
    {
      v10 = 100;
    }
    if ( v10 < 0x4B )
      v11 = v10 / 0x19;
    else
      v11 = 3;
    a2 = (struct _KTHREAD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 33208) + 4072LL + 2LL * v11));
    *(_QWORD *)&a2->Header.Lock += a3;
  }
  if ( (Size & 0x40) != 0 )
  {
    SchedulerAssist = CurrentThread->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[64] = 1;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( (_BYTE)a4 )
  {
    if ( (Size & 0x36) == 0 )
    {
      _enable();
      return;
    }
    if ( CurrentThread->WaitBlock[0].SparePtr )
    {
      LOBYTE(a2) = 1;
      KiBeginCounterAccumulation(CurrentThread, a2);
    }
    _enable();
    if ( (CurrentThread->Header.Size & 4) != 0 )
    {
      v12 = *(&CurrentThread->MiscFlags + 1);
      if ( (v12 & 0x800) == 0 )
      {
        if ( (v12 & 0x600) != 0 )
          return;
        SchedulingGroup = CurrentThread->SchedulingGroup;
        if ( !SchedulingGroup )
          return;
        v14 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 216);
        if ( !v14 )
          return;
        while ( (v14[112] & 2) == 0 )
        {
          v14 = (char *)*((_QWORD *)v14 + 51);
          if ( !v14 )
            return;
        }
      }
      LOBYTE(Size) = 1;
      KiInsertDeferredPreemptionApc(a1, (__int64)CurrentThread, Size, a4);
    }
  }
  else if ( (Size & 2) != 0 )
  {
    KiBeginCounterAccumulation(CurrentThread, 0LL);
  }
}
