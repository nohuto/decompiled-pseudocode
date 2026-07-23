/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x1404CD628
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1404B8DB4 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindClearBitsAndSet @ 0x1402F5970 (RtlFindClearBitsAndSet.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaIndexToTranslationEntry @ 0x1404C7ED8 (HalpDmaIndexToTranslationEntry.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPoolV2(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        char a4,
        char a5,
        ULONG *a6)
{
  __int64 v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  ULONG v19; // eax
  _RTL_BITMAP *v20; // rbx
  __int64 v21; // r15
  __int64 v22; // r13
  ULONG v23; // ebx
  ULONG i; // r10d
  ULONG ClearBitsAndSet; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r8
  int v31; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 120), &LockHandle);
  if ( a5 )
  {
    v10 = *(_DWORD *)(a2 + 200);
    v9 = a2;
    v11 = *(_DWORD *)(a2 + 204);
    if ( v10 <= v11 )
    {
LABEL_3:
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
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
LABEL_11:
      *a6 = 0;
      return 0LL;
    }
    v19 = v10 - v11;
    if ( a3 > v19 )
      a3 = v19;
  }
  if ( a4 )
  {
    v20 = *(_RTL_BITMAP **)(a2 + 16);
    if ( v20->SizeOfBitMap - RtlNumberOfSetBits(v20) < a3 )
      goto LABEL_3;
  }
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  for ( i = 0; v23 < a3; v22 = v26 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 16), 1u, i);
    if ( ClearBitsAndSet == -1 )
      break;
    v26 = HalpDmaIndexToTranslationEntry(a2, ClearBitsAndSet, 0LL);
    if ( v21 )
      *(_QWORD *)(v22 + 8) = v26;
    else
      v21 = v26;
    ++v23;
  }
  if ( a5 )
    *(_DWORD *)(v9 + 200) -= v23;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v27 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)v29);
      }
    }
  }
  __writecr8(v27);
  if ( !v23 )
    goto LABEL_11;
  result = v21;
  *a6 = v23;
  return result;
}
