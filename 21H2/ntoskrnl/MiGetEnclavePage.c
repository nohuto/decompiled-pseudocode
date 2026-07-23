/*
 * XREFs of MiGetEnclavePage @ 0x14054A918
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x140374264 (MiAllocateMdlPagesByLists.c)
 *     MiGetPageForEnclave @ 0x14054AC04 (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x14054B52C (MiReserveEnclavePages.c)
 *     MiCreateHardwareEnclave @ 0x1408D2A30 (MiCreateHardwareEnclave.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A93754 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetEnclavePage(_QWORD *a1, int a2)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // r12
  __int64 v18; // r15
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v25; // [rsp+80h] [rbp+40h] BYREF
  int v26; // [rsp+88h] [rbp+48h]

  v26 = a2;
  v2 = a2;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = -1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = a1 + 524;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, a1 + 524);
  while ( v2 || a1[520] )
  {
    v7 = a1[522];
    v8 = 48 * v7 - 0x58000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      goto LABEL_21;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v25, v9, v10, v11);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    LockHandle.LockQueue.Lock = a1 + 524;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, a1 + 524);
    if ( (*(_BYTE *)(v8 + 35) & 0x10) != 0 )
    {
LABEL_21:
      v17 = *(_QWORD *)v8 & 0xFFFFFFFFFLL;
      v18 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v17 == 0xFFFFFFFFFLL )
        a1[523] = v18;
      else
        MiSetPfnBlink(48 * v17 - 0x58000000000LL, *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL, 0);
      if ( v18 == 0xFFFFFFFFFLL )
        a1[522] = v17;
      else
        *(_QWORD *)(48 * v18 - 0x58000000000LL) = v17 | *(_QWORD *)(48 * v18 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
      if ( !v26 )
        --a1[520];
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      *(_BYTE *)(v8 + 35) &= ~0x10u;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v16 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      v5 = v7;
      goto LABEL_37;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v2 = v26;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v13);
      }
    }
  }
LABEL_37:
  __writecr8(CurrentIrql);
  return v5;
}
