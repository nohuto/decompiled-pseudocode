/*
 * XREFs of MmResourcesAvailable @ 0x14034BAE0
 * Callers:
 *     ExpAllocatePoolWithTagPriority @ 0x140A6E028 (ExpAllocatePoolWithTagPriority.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFreeExcessSegments @ 0x1402878F0 (MiFreeExcessSegments.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiIssuePageExtendRequest @ 0x14059C99C (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MmResourcesAvailable(char a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR *v3; // r14
  ULONG_PTR v5; // r11
  int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  ULONG_PTR v13; // r8
  ULONG_PTR v14; // rcx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  struct _KEVENT *v19; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // edx
  bool v25; // zf
  struct _KTHREAD *CurrentThread; // rbp
  struct _KEVENT *v27; // rcx
  struct _KTHREAD *v28; // rsi
  unsigned int SessionId; // ecx
  unsigned __int64 v30; // r8
  char *p_Process; // rdi
  __int64 v32; // rdx
  int v33; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v3 = &MiSystemPartition;
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a1 & 1;
  if ( (a1 & 1) == 0 )
  {
    v8 = MiState[0] - qword_140C4F048;
LABEL_3:
    v9 = v8 << 12;
    goto LABEL_4;
  }
  if ( (a1 & 0x20) == 0 )
  {
    v8 = qword_140C534B8 - qword_140C534A8;
    goto LABEL_3;
  }
  v15 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  v16 = (__int64)*(int *)(v15 + 796) << 21;
  v17 = *(_QWORD *)(v15 + 176) << 12;
  v18 = v16 - v17;
  if ( v16 <= v17 )
    v18 = 0LL;
  v9 = ((0x10000LL - *(unsigned int *)(v15 + 800)) << 21) + v18;
  v3 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v15 + 366));
LABEL_4:
  v10 = 0;
  if ( a3 == 16 )
    v11 = a2 + 0x80000;
  else
    v11 = a2 + 0x200000;
  if ( v11 <= v9 )
  {
    if ( !v7 )
      goto LABEL_20;
    v13 = v3[2157];
    v14 = v3[2001] - v13;
    if ( v13 > v3[2001] )
      v14 = 0LL;
    if ( v5 > v14 )
    {
      MiIssuePageExtendRequest(v3, v5, 2LL, 0LL);
    }
    else
    {
LABEL_20:
      if ( a2 + 10485760 < v9 || v3[2090] < 0x40000 )
        return 1LL;
      v10 = 1;
    }
  }
  if ( (a1 & 0x20) == 0 )
  {
    if ( v7 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53498, 0LL);
      v27 = (struct _KEVENT *)v3[31];
      if ( !v27->Header.SignalState )
        KePulseEvent(v27, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53498, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C53498);
      v28 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C53498 - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v28->ApcState.Process);
      _disable();
      v30 = (unsigned __int64)&qword_140C53498 & 0x7FFFFFFFFFFFFFFCLL;
      p_Process = (char *)&v28[1].Process;
      v32 = 0LL;
      do
      {
        if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == v30
          && p_Process[18]
          && (*(_DWORD *)p_Process & 1) == 0
          && *((_DWORD *)p_Process + 2) == SessionId )
        {
          p_Process[18] = 0;
          if ( *(__int64 *)p_Process < 0 )
          {
            *p_Process |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(p_Process, v32, v30);
            _disable();
          }
          v33 = *((_DWORD *)p_Process + 22);
          *((_DWORD *)p_Process + 22) = 0;
          p_Process[17] = 0;
          *(_QWORD *)p_Process = 0LL;
          v28->AbEntrySummary |= 1 << p_Process[16];
          _enable();
          if ( v33 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v28, (__int64)&qword_140C53498, v33);
          goto LABEL_54;
        }
        v32 = (unsigned int)(v32 + 1);
        p_Process += 96;
      }
      while ( (unsigned int)v32 < 6 );
      if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, (ULONG_PTR)&qword_140C53498, SessionId, 0LL);
      _enable();
LABEL_54:
      v25 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v25
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(v3 + 1960, &LockHandle);
      v19 = (struct _KEVENT *)v3[33];
      if ( !v19->Header.SignalState )
        KePulseEvent(v19, 0, 0);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v25 = (v24 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    MiFreeExcessSegments();
  }
  return v10;
}
