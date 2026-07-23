/*
 * XREFs of HalFreeCommonBufferVector @ 0x1404C6260
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4D38 (HalpDmaDereferenceDomainObject.c)
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C9574 (HalpIommuDomainUnmapLogicalRange.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalFreeCommonBufferVector(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  KIRQL v5; // al
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rcx

  v2 = *(_QWORD *)(a2 + 32);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 120));
  v6 = *(_QWORD **)(a2 + 8);
  v7 = v5;
  v8 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v6 != a2 )
    __fastfail(3u);
  *v6 = v8;
  *(_QWORD *)(v8 + 8) = v6;
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 120));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  if ( *(_DWORD *)(v2 + 64) == 2 )
  {
    HalpIommuDomainUnmapLogicalRange(*(_QWORD *)(v2 + 40), *(_QWORD *)(a2 + 56));
    HalpDomainLaDelete(v2, *(_QWORD *)(a2 + 56));
  }
  HalpDmaDereferenceDomainObject((__int64 *)v2);
  MmUnmapLockedPages(*(PVOID *)(a2 + 48), *(PMDL *)(a2 + 40));
  MiFreePagesFromMdl(*(_QWORD *)(a2 + 40), 0);
  ExFreePoolWithTag(*(PVOID *)(a2 + 40), 0);
  HalpMmAllocCtxFree(v14, *(_QWORD *)(a2 + 64));
  return HalpMmAllocCtxFree(v15, a2);
}
