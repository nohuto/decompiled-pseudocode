/*
 * XREFs of ExInitializeLookasideListExInternal @ 0x1402A03B0
 * Callers:
 *     ExInitializeLookasideListEx @ 0x1402A0360 (ExInitializeLookasideListEx.c)
 *     VmInitSystem @ 0x140B1E5EC (VmInitSystem.c)
 *     CmpInitCmPrivateAlloc @ 0x140B4E160 (CmpInitCmPrivateAlloc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
  __int16 v10; // cx
  __int16 v12; // bp
  int v13; // r15d
  int v14; // esi
  __int64 *v15; // rdi
  KSPIN_LOCK *v16; // r12
  int v17; // esi
  PVOID (__fastcall *v18)(POOL_TYPE, SIZE_T, ULONG, PLOOKASIDE_LIST_EX); // rax
  __int64 (__fastcall *v19)(ULONG_PTR); // rax
  unsigned __int64 v20; // rsi
  PSLIST_HEADER *v21; // rax
  PSLIST_HEADER v22; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf

  v10 = a8;
  if ( a8 )
  {
    if ( (unsigned __int16)(a8 - 256) > 0x300u )
      return 3221225718LL;
  }
  else
  {
    v10 = 256;
  }
  v12 = 0;
  if ( !a9 )
    v12 = v10;
  v13 = 8;
  if ( a6 > 8 )
    v13 = a6;
  if ( ((a5 - 1) & a5) != 0 || (a5 & 0xFFFFFFFC) != 0 )
    return 3221225715LL;
  if ( (a5 & 1) != 0 )
  {
    v14 = 16;
  }
  else
  {
    v14 = 0;
    if ( a5 )
      v14 = 8;
  }
  if ( (a4 & 0xFFFFFC18) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  v15 = &ExNPagedLookasideListHead;
  v16 = &ExNPagedLookasideLock;
  if ( (a4 & 1) != 0 )
  {
    v15 = &ExPagedLookasideListHead;
    v16 = &ExPagedLookasideLock;
  }
  InitializeSListHead(SListHead);
  LOWORD(SListHead[1].Alignment) = ExMinimumLookasideDepth;
  v17 = a4 | v14;
  *((_DWORD *)&SListHead[2].HeaderX64 + 2) = a7;
  v18 = a2;
  *((_WORD *)&SListHead[1].HeaderX64 + 1) = v12;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 4) = 0LL;
  if ( !a2 )
    v18 = CmpAllocateTransientPoolWithTag;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 12) = 0LL;
  SListHead[3].Alignment = (unsigned __int64)v18;
  *((_DWORD *)&SListHead[2].HeaderX64 + 1) = v17;
  v19 = ExFreePoolEx;
  if ( a3 )
    v19 = a3;
  *((_DWORD *)&SListHead[2].HeaderX64 + 3) = v13;
  SListHead[3].Region = (unsigned __int64)v19;
  SListHead[5].Alignment = 0LL;
  v20 = KeAcquireSpinLockRaiseToDpc(v16);
  if ( a9 )
  {
    LOWORD(SListHead[1].Alignment) = v12;
    *((_WORD *)&SListHead[1].HeaderX64 + 1) = -1;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    LODWORD(SListHead[1].Alignment) = -65536;
  }
  v21 = (PSLIST_HEADER *)v15[1];
  v22 = SListHead + 4;
  if ( *v21 != (PSLIST_HEADER)v15 )
    __fastfail(3u);
  v22->Alignment = (unsigned __int64)v15;
  v22->Region = (unsigned __int64)v21;
  *v21 = v22;
  v15[1] = (__int64)v22;
  KxReleaseSpinLock(v16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
        v28 = (v27 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v20);
  return 0LL;
}
