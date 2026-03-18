/*
 * XREFs of HalpIommuGetHardwareDomain @ 0x14051B094
 * Callers:
 *     HalpIommuInitializeDmar @ 0x1403BB7AC (HalpIommuInitializeDmar.c)
 *     HalpIommuJoinDmaDomain @ 0x14051B384 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x14051B4F4 (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpIommuAcquireNewDomain @ 0x140517C90 (HalpIommuAcquireNewDomain.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405298F8 (HalpIommuGetDmarptRootAddress.c)
 */

__int64 __fastcall HalpIommuGetHardwareDomain(__int64 a1, __int64 a2, char a3, char a4, __int64 *a5)
{
  __int64 *v5; // r14
  __int64 v7; // rbx
  int DmarptRootAddress; // esi
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  _QWORD *i; // rax
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  KSPIN_LOCK *SpinLock; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  char v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
  v26 = 0LL;
  v5 = a5;
  SpinLock = (KSPIN_LOCK *)(a1 + 32);
  v7 = 0LL;
  DmarptRootAddress = 0;
  v11 = (_QWORD *)(a1 + 16);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
  {
    v7 = (__int64)i;
    if ( i[3] == a2 )
      break;
  }
  if ( i != v11 )
  {
    if ( a1 != HalpIommuBypassDomain && v27 )
      ++*(_QWORD *)(v7 + 16);
    goto LABEL_20;
  }
  if ( !a3 )
  {
LABEL_20:
    *v5 = v7;
    goto LABEL_21;
  }
  v15 = (void *)HalpMmAllocCtxAlloc(v12, 152LL);
  v7 = (__int64)v15;
  if ( v15 )
  {
    memset(v15, 0, 0x98uLL);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 16) = 1LL;
    *(_DWORD *)(v7 + 32) = 1;
    v16 = *(_QWORD *)(a1 + 40);
    if ( v16 )
    {
      DmarptRootAddress = HalpIommuGetDmarptRootAddress(
                            v16,
                            (unsigned int)((unsigned __int8)HIBYTE(*(_WORD *)(a2 + 472)) >> 5) + 1,
                            &v26);
      if ( DmarptRootAddress < 0 )
        goto LABEL_16;
      *(_QWORD *)(v7 + 72) = v26;
    }
    *(_DWORD *)(v7 + 36) = *(_DWORD *)(a1 + 12);
    DmarptRootAddress = HalpIommuAcquireNewDomain(a2, v7 + 32);
    if ( DmarptRootAddress >= 0 )
    {
      v18 = *(__int64 **)(a1 + 24);
      if ( (_QWORD *)*v18 != v11 )
        __fastfail(3u);
      *(_QWORD *)v7 = v11;
      *(_QWORD *)(v7 + 8) = v18;
      *v18 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      goto LABEL_20;
    }
LABEL_16:
    HalpMmAllocCtxFree(v17, v7);
    goto LABEL_21;
  }
  DmarptRootAddress = -1073741670;
LABEL_21:
  KxReleaseSpinLock(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v23 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v13);
  return (unsigned int)DmarptRootAddress;
}
