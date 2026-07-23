/*
 * XREFs of HalpDmaAllocateDomain @ 0x1403C7388
 * Callers:
 *     HalJoinDmaDomain @ 0x1403C72B0 (HalJoinDmaDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaReferenceDomainObject @ 0x1403A1564 (HalpDmaReferenceDomainObject.c)
 *     HalpIommuAllocateDmaDomain @ 0x1403AD418 (HalpIommuAllocateDmaDomain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpDmaAddReservedRangesToDomain @ 0x1404C4C50 (HalpDmaAddReservedRangesToDomain.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4D38 (HalpDmaDereferenceDomainObject.c)
 *     HalpLaFreeState @ 0x1404DB404 (HalpLaFreeState.c)
 *     HalpLaInitializeState @ 0x1404DB440 (HalpLaInitializeState.c)
 */

__int64 __fastcall HalpDmaAllocateDomain(unsigned __int64 *a1, _QWORD *a2, unsigned int a3, char a4, __int64 a5)
{
  unsigned __int64 v5; // r12
  int DmaDomain; // edi
  char v9; // r15
  void *v10; // rax
  __int64 v11; // rbx
  KIRQL v12; // al
  __int64 *v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rcx
  unsigned __int8 v18; // r8
  char v19; // dl
  char v20; // dl
  __int64 v21; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax

  v5 = *a1;
  DmaDomain = 0;
  v9 = 0;
  v10 = (void *)HalpMmAllocCtxAlloc((__int64)a1, 136LL);
  v11 = (__int64)v10;
  if ( !v10 )
    return v11;
  memset(v10, 0, 0x88uLL);
  v12 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v13 = (__int64 *)qword_140C49E78;
  v14 = v12;
  if ( *(__int64 **)qword_140C49E78 != &HalpDmaDomainList )
    __fastfail(3u);
  *(_QWORD *)(v11 + 8) = qword_140C49E78;
  *(_QWORD *)v11 = &HalpDmaDomainList;
  *v13 = v11;
  qword_140C49E78 = v11;
  KxReleaseSpinLock(&HalpDmaDomainListLock);
  v15 = -1LL;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v16 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v14);
  HalpDmaReferenceDomainObject(v11);
  v16 = !_BitScanReverse64((unsigned __int64 *)&v17, HalpMaximumPhysicalMemoryAddress);
  v18 = -1;
  *(_BYTE *)(v11 + 32) = a4;
  v19 = -1;
  if ( !v16 )
    v19 = v17;
  if ( (unsigned __int8)v19 < 0x1Eu )
  {
    v20 = 32;
LABEL_10:
    v15 = (1LL << v20) - 1;
    goto LABEL_11;
  }
  if ( (unsigned __int8)v19 >= 0x3Fu )
    v20 = 64;
  else
    v20 = v19 + 2;
  if ( (unsigned __int8)v20 < 0x40u )
    goto LABEL_10;
LABEL_11:
  if ( v15 <= v5 )
    v5 = v15;
  v16 = !_BitScanReverse64((unsigned __int64 *)&v21, v5);
  if ( !v16 )
    v18 = v21;
  if ( a3 )
  {
    if ( a3 == 2 )
    {
      if ( (int)HalpLaInitializeState((unsigned int)v18 + 1, v11 + 48) < 0 )
      {
LABEL_35:
        HalpDmaDereferenceDomainObject(v11);
        return 0LL;
      }
      *(_QWORD *)(v11 + 56) = 0LL;
      v9 = 1;
    }
    DmaDomain = HalpIommuAllocateDmaDomain(a3, 1, (__int64 *)(v11 + 40));
    if ( DmaDomain < 0 )
      goto LABEL_33;
  }
  *(_DWORD *)(v11 + 64) = a3;
  *(_QWORD *)(v11 + 16) = v5;
  *(_QWORD *)(v11 + 96) = 0LL;
  *(_QWORD *)(v11 + 24) = *a2;
  *(_QWORD *)(v11 + 80) = 0LL;
  *(_QWORD *)(v11 + 88) = 0LL;
  *(_QWORD *)(v11 + 120) = 0LL;
  *(_QWORD *)(v11 + 112) = v11 + 104;
  *(_QWORD *)(v11 + 104) = v11 + 104;
  if ( a3 == 2 )
    DmaDomain = HalpDmaAddReservedRangesToDomain(v11, a5);
  if ( DmaDomain < 0 )
  {
LABEL_33:
    if ( v9 )
      HalpLaFreeState(*(_QWORD *)(v11 + 48));
    goto LABEL_35;
  }
  return v11;
}
