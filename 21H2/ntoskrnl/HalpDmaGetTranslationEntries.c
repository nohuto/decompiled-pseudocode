/*
 * XREFs of HalpDmaGetTranslationEntries @ 0x1403BC150
 * Callers:
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403BBE7C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x1404C7474 (HalpDmaCommitScatterMapBuffers.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C7218 (HalpDmaAllocateNewTranslationBuffer.c)
 */

__int64 __fastcall HalpDmaGetTranslationEntries(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 *v9; // rdi
  unsigned int v10; // ecx
  __int64 i; // rax
  unsigned int v12; // r14d
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 NewTranslationBuffer; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r11
  _DWORD *v27; // r9
  int v28; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  result = 0LL;
  v4 = a3;
  v6 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
  {
    v7 = 56LL;
    goto LABEL_3;
  }
  if ( a2 == 1 )
  {
    v7 = 72LL;
LABEL_3:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v8 = *(_QWORD *)(v6 + v7);
    if ( v8 )
    {
      v9 = *(__int64 **)(v6 + v7);
      v10 = *(_DWORD *)(v8 + 8) - *(_DWORD *)(v6 + v7 + 8);
      for ( i = *(_QWORD *)v8; i; i = *(_QWORD *)i )
      {
        v10 += *(_DWORD *)(i + 8);
        v9 = (__int64 *)i;
      }
      if ( v10 >= (unsigned int)v4 )
        goto LABEL_7;
    }
    else
    {
      v10 = 0;
      v9 = 0LL;
    }
    NewTranslationBuffer = HalpDmaAllocateNewTranslationBuffer(v6, (unsigned int)v4 - v10);
    if ( !NewTranslationBuffer )
    {
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
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = 0LL;
      goto LABEL_17;
    }
    if ( v9 )
    {
      *v9 = NewTranslationBuffer;
    }
    else
    {
      v8 = NewTranslationBuffer;
      if ( a2 )
        *(_QWORD *)(v6 + 48) = NewTranslationBuffer;
      else
        *(_QWORD *)(v6 + 40) = NewTranslationBuffer;
    }
LABEL_7:
    v12 = *(_DWORD *)(v6 + v7 + 8);
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    if ( (_DWORD)v4 )
    {
      v16 = *(_DWORD *)(v8 + 8);
      do
      {
        if ( v12 >= v16 )
        {
          v8 = *(_QWORD *)v8;
          v12 = 0;
          v16 = *(_DWORD *)(v8 + 8);
        }
        v17 = *(_QWORD *)(v8 + 16);
        v15 = v17 + 72LL * v12;
        if ( v13 )
          *(_QWORD *)(v14 + 8) = v15;
        else
          v13 = v17 + 72LL * v12;
        memset((void *)(v17 + 72LL * v12++), 0, 0x48uLL);
        *(_QWORD *)(v15 + 56) = v15;
        v14 = v15;
        --v4;
      }
      while ( v4 );
      v6 = a1;
    }
    *(_QWORD *)(v6 + v7) = v8;
    *(_DWORD *)(v6 + v7 + 8) = v12;
    *(_QWORD *)(v15 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    result = v13;
LABEL_17:
    __writecr8(OldIrql);
  }
  return result;
}
