/*
 * XREFs of HalpIommuGetHardwareDomain @ 0x1404C9834
 * Callers:
 *     HalpIommuInitializeDmar @ 0x1403AD3B8 (HalpIommuInitializeDmar.c)
 *     HalpIommuJoinDmaDomain @ 0x1404C9AFC (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C9BD4 (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpIommuAcquireNewDomain @ 0x1404CBD84 (HalpIommuAcquireNewDomain.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1404DBE78 (HalpIommuGetDmarptRootAddress.c)
 */

__int64 __fastcall HalpIommuGetHardwareDomain(__int64 a1, __int64 a2, char a3, char a4, __int64 *a5)
{
  __int64 v9; // rbx
  int DmarptRootAddress; // esi
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  _QWORD *v13; // rax
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v24 = 0LL;
  v9 = 0LL;
  DmarptRootAddress = 0;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  v13 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 != a1 )
  {
    do
    {
      v9 = (__int64)v13;
      if ( v13[3] == a2 )
        break;
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != (_QWORD *)a1 );
    if ( v13 != (_QWORD *)a1 )
    {
      if ( a1 != HalpIommuBypassDomain && a4 )
        ++*(_QWORD *)(v9 + 16);
      goto LABEL_18;
    }
  }
  if ( !a3 )
  {
LABEL_18:
    *a5 = v9;
    goto LABEL_21;
  }
  v14 = (void *)HalpMmAllocCtxAlloc(v11, 112LL);
  v9 = (__int64)v14;
  if ( !v14 )
  {
    DmarptRootAddress = -1073741670;
    goto LABEL_21;
  }
  memset(v14, 0, 0x70uLL);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 16) = 1LL;
  *(_DWORD *)(v9 + 32) = 1;
  v15 = *(_QWORD *)(a1 + 24);
  if ( !v15 )
    goto LABEL_14;
  DmarptRootAddress = HalpIommuGetDmarptRootAddress(v15, ((*(_DWORD *)(a2 + 456) >> 12) & 7u) + 1, &v24);
  if ( DmarptRootAddress >= 0 )
  {
    *(_QWORD *)(v9 + 48) = v24;
LABEL_14:
    *(_DWORD *)(v9 + 36) = *(_DWORD *)(a1 + 36);
    DmarptRootAddress = HalpIommuAcquireNewDomain(a2, v9 + 32);
    if ( DmarptRootAddress >= 0 )
    {
      v17 = *(__int64 **)(a1 + 8);
      if ( *v17 != a1 )
        __fastfail(3u);
      *(_QWORD *)v9 = a1;
      *(_QWORD *)(v9 + 8) = v17;
      *v17 = v9;
      *(_QWORD *)(a1 + 8) = v9;
      goto LABEL_18;
    }
  }
  if ( v9 )
    HalpMmAllocCtxFree(v16, v9);
LABEL_21:
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  return (unsigned int)DmarptRootAddress;
}
