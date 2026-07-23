/*
 * XREFs of MiWaitForFreePagesToZero @ 0x1405501CC
 * Callers:
 *     MiZeroPageThread @ 0x1403CAD40 (MiZeroPageThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForFreePagesToZero(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r15
  void *v4; // r13
  struct _KEVENT *v5; // r12
  unsigned int v9; // ebx
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v13; // rcx
  unsigned int v14; // eax
  _QWORD *v15; // rcx
  _BYTE *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-B8h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+70h] [rbp-88h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = (void *)(a1 + 104);
  Object[0] = (PVOID)(a1 + 104);
  v5 = (struct _KEVENT *)(a1 + 6272);
  memset(&LockHandle, 0, sizeof(LockHandle));
  Object[1] = (PVOID)(a1 + 6272);
  v9 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *a2 )
      {
        MiDereferencePageRunsEx(*a2, 1);
        *a2 = 0LL;
      }
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
        return 0xFFFFFFFFLL;
LABEL_16:
      if ( *(_QWORD *)(a1 + 2304) )
        break;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4928), &LockHandle);
      if ( !*(_QWORD *)(a1 + 2304) )
      {
        if ( KeNumberNodes )
        {
          v16 = (_BYTE *)(v3 + 4490);
          v17 = (unsigned __int16)KeNumberNodes;
          do
          {
            *v16 = 0;
            v16 += 4544;
            --v17;
          }
          while ( v17 );
        }
        KeResetEvent(v5);
      }
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
            v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v23 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    if ( !*(_DWORD *)(a1 + 6340) && !dword_140C4EF18 )
      break;
    KeWaitForSingleObject(v4, WrFreePage, 0, 0, (PLARGE_INTEGER)&MiFiveSeconds);
  }
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v9 = a3;
    while ( 1 )
    {
      v13 = 4544LL * v9;
      if ( *(_QWORD *)(v13 + v3 + 4136) )
        break;
      v14 = 0;
      v15 = (_QWORD *)(v3 + v13 + 8);
      do
      {
        if ( *v15 )
          break;
        ++v14;
        v15 += 134;
      }
      while ( v14 < 3 );
      if ( v14 != 3 )
        break;
      v9 = (v9 + 1) % (unsigned __int16)KeNumberNodes;
      if ( v9 == a3 )
        goto LABEL_16;
    }
  }
  *a2 = MiReferencePageRuns(a1, 0, v10, v11);
  return v9;
}
