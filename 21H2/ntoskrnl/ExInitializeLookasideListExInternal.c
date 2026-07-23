/*
 * XREFs of ExInitializeLookasideListExInternal @ 0x1402A3110
 * Callers:
 *     ExInitializeLookasideListEx @ 0x1402A30C0 (ExInitializeLookasideListEx.c)
 *     VmInitSystem @ 0x140A48B1C (VmInitSystem.c)
 *     CmpInitCmPrivateAlloc @ 0x140A8FB7C (CmpInitCmPrivateAlloc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     InitializeSListHead @ 0x1402A3310 (InitializeSListHead.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExInitializeLookasideListExInternal(
        PSLIST_HEADER SListHead,
        PVOID (__fastcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag, PLOOKASIDE_LIST_EX Lookaside),
        __int64 (__fastcall *a3)(ULONG_PTR a1),
        int a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        __int16 a8,
        int a9)
{
  __int16 v11; // cx
  __int16 v14; // r15
  int v15; // eax
  int v16; // esi
  __int64 *v17; // rdi
  KSPIN_LOCK *v18; // r12
  unsigned __int64 v19; // rsi
  PSLIST_HEADER *v20; // rax
  PSLIST_HEADER v21; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  int v28; // [rsp+20h] [rbp-38h]

  v11 = a8;
  if ( a8 )
  {
    if ( (unsigned __int16)(a8 - 256) > 0x300u )
      return 3221225718LL;
  }
  else
  {
    v11 = 256;
  }
  v14 = 0;
  if ( !a9 )
    v14 = v11;
  v15 = 8;
  if ( a6 > 8 )
    v15 = a6;
  v28 = v15;
  if ( ((a5 - 1) & a5) != 0 || (a5 & 0xFFFFFFFC) != 0 )
    return 3221225715LL;
  if ( (a5 & 1) != 0 )
  {
    v16 = 16;
  }
  else
  {
    v16 = 0;
    if ( a5 )
      v16 = 8;
  }
  if ( (a4 & 0xFFFFFC18) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  v17 = &ExNPagedLookasideListHead;
  v18 = &ExNPagedLookasideLock;
  if ( (a4 & 1) != 0 )
  {
    v17 = &ExPagedLookasideListHead;
    v18 = &ExPagedLookasideLock;
  }
  InitializeSListHead(SListHead);
  LOWORD(SListHead[1].Alignment) = ExMinimumLookasideDepth;
  *((_DWORD *)&SListHead[2].HeaderX64 + 2) = a7;
  *((_DWORD *)&SListHead[2].HeaderX64 + 3) = v28;
  *((_WORD *)&SListHead[1].HeaderX64 + 1) = v14;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 4) = 0LL;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 12) = 0LL;
  *((_DWORD *)&SListHead[2].HeaderX64 + 1) = a4 | v16;
  if ( !a2 )
    a2 = CmpAllocateTransientPoolWithTag;
  SListHead[3].Alignment = (unsigned __int64)a2;
  if ( !a3 )
    a3 = ExFreePoolEx;
  SListHead[3].Region = (unsigned __int64)a3;
  SListHead[5].Alignment = 0LL;
  v19 = KeAcquireSpinLockRaiseToDpc(v18);
  if ( a9 )
  {
    LOWORD(SListHead[1].Alignment) = v14;
    *((_WORD *)&SListHead[1].HeaderX64 + 1) = -1;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    LODWORD(SListHead[1].Alignment) = -65536;
  }
  v20 = (PSLIST_HEADER *)v17[1];
  v21 = SListHead + 4;
  if ( *v20 != (PSLIST_HEADER)v17 )
    __fastfail(3u);
  v21->Alignment = (unsigned __int64)v17;
  v21->Region = (unsigned __int64)v20;
  *v20 = v21;
  v17[1] = (__int64)v21;
  KxReleaseSpinLock(v18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v27 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v19);
  return 0LL;
}
