/*
 * XREFs of MiZeroLargePageThread @ 0x1403C6B00
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14023FD0C (MiDereferencePageRunsEx.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x140246E70 (MiDereferenceAnyActiveHugeContext.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     MiWakeZeroingThreads @ 0x140267A5C (MiWakeZeroingThreads.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MiZeroLargePages @ 0x1402C41D0 (MiZeroLargePages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSignalZeroingPassComplete @ 0x1403C6CDC (MiSignalZeroingPassComplete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiZeroLargePageThread(unsigned __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // r12d
  unsigned __int64 OldIrql; // r13
  int i; // r13d
  bool v10; // zf
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h]
  __int64 v29; // [rsp+98h] [rbp+48h]

  v1 = *(_QWORD *)(a1 + 232);
  v2 = *(unsigned int *)(a1 + 264);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 5 * v2;
  *(_QWORD *)(a1 + 272) = KeGetCurrentThread();
  v5 = *(_QWORD *)(v1 + 72);
  v6 = *(_QWORD *)(v1 + 144);
  v7 = 1;
  v28 = *(_QWORD *)(v5 + 16) + 24512LL * *(unsigned int *)(v1 + 80);
  KeWaitForSingleObject((PVOID)(v1 + 88), Executive, 0, 0, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 24), &LockHandle);
  *(_BYTE *)(v6 + 8 * v4 + 4) |= 1u;
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
        v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  for ( i = 0; ; i = 0 )
  {
    MiZeroLargePages(a1);
    if ( v7 )
      MiSignalZeroingPassComplete(a1);
    if ( *(_BYTE *)(v5 + 16176) )
      break;
    MiDereferenceAnyActiveHugeContext(a1);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 24), &LockHandle);
    if ( v7 && !*(_BYTE *)(v1 + 132) )
    {
      *(_BYTE *)(v1 + 132) = 1;
      MiWakeZeroingThreads(v1, 5);
    }
    *(_BYTE *)(v6 + 8 * v4 + 4) &= ~4u;
    *(_BYTE *)(v6 + 8 * v4 + 4) |= 8u;
    if ( (*(_BYTE *)(v6 + 8 * v4 + 4) & 2) == 0 )
    {
      *(_BYTE *)(v6 + 8 * v4 + 4) |= 2u;
      v10 = (*(_DWORD *)(v1 + 164))-- == 1;
      if ( v10 )
        *(_BYTE *)(v28 + 22964) = 0;
    }
    v11 = *(_QWORD *)(a1 + 240);
    *(_QWORD *)(a1 + 240) = 0LL;
    v29 = v11;
    if ( *(_DWORD *)(v5 + 108) )
    {
      *(_BYTE *)(v6 + 8 * v4 + 4) |= 0x10u;
      KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0xCu);
      i = 1;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v12 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v10 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    __writecr8(v12);
    if ( v29 )
      MiDereferencePageRunsEx(v29, 1);
    if ( i )
      goto LABEL_39;
    v7 = 0;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 24), &LockHandle);
  *(_BYTE *)(v6 + 8 * v4 + 4) |= 0x10u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v21 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(v21);
LABEL_39:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 16192), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate((_DWORD *)(v5 + 16152), 1);
  return result;
}
