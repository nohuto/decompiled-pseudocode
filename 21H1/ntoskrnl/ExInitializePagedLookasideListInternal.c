/*
 * XREFs of ExInitializePagedLookasideListInternal @ 0x1402C2430
 * Callers:
 *     ExInitializePagedLookasideList @ 0x140651E70 (ExInitializePagedLookasideList.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1407B5BA0 (FsRtlInitExtraCreateParameterLookasideList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     InitializeSListHead @ 0x1402C1F70 (InitializeSListHead.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExInitializePagedLookasideListInternal(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P, ULONG Tag),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = a4 | 1;
  if ( !a2 )
    a2 = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 48) = a2;
  if ( !a3 )
    a3 = ExFreePoolWithTag;
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 80) = 0LL;
  v12 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v13 = (_QWORD *)qword_140C16888;
  v14 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_140C16888 != &ExPagedLookasideListHead )
    __fastfail(3u);
  *v14 = &ExPagedLookasideListHead;
  v14[1] = v13;
  *v13 = v14;
  qword_140C16888 = (__int64)v14;
  KxReleaseSpinLock(&ExPagedLookasideLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v18 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  return result;
}
