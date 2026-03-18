/*
 * XREFs of HalpDmaDereferenceDomainObject @ 0x1404BFC08
 * Callers:
 *     HalpAllocateDomainCommonBufferInternal @ 0x14039E464 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalJoinDmaDomain @ 0x1403C4390 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateDomain @ 0x1403C4468 (HalpDmaAllocateDomain.c)
 *     HalFreeCommonBufferV3 @ 0x1404BF700 (HalFreeCommonBufferV3.c)
 *     HalpDmaIsAutomaticDomain @ 0x1404BFD60 (HalpDmaIsAutomaticDomain.c)
 *     HalpLeaveDmaDomain @ 0x1404BFFBC (HalpLeaveDmaDomain.c)
 *     HalAllocateCommonBufferVector @ 0x1404C0810 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C1130 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferThin @ 0x1404C5E80 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C63C0 (HalpAllocateCommonBufferThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1403772D0 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     HalpIommuFreeDmaDomain @ 0x1404C4674 (HalpIommuFreeDmaDomain.c)
 *     HalpLaFreeState @ 0x1404D6224 (HalpLaFreeState.c)
 */

__int64 __fastcall HalpDmaDereferenceDomainObject(__int64 *BugCheckParameter3)
{
  char v2; // bp
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  __int64 *v14; // rcx
  __int64 **v15; // rax

  v2 = 0;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v5 = (__int64 *)HalpDmaDomainList;
  v6 = v4;
  while ( v5 != &HalpDmaDomainList )
  {
    if ( BugCheckParameter3 == v5 )
    {
      v12 = (*((_DWORD *)BugCheckParameter3 + 32))-- == 1;
      v3 = 1;
      if ( v12 )
      {
        v14 = (__int64 *)*BugCheckParameter3;
        v15 = (__int64 **)BugCheckParameter3[1];
        if ( *(__int64 **)(*BugCheckParameter3 + 8) != BugCheckParameter3 || *v15 != BugCheckParameter3 )
          __fastfail(3u);
        *v15 = v14;
        v2 = 1;
        v14[1] = (__int64)v15;
      }
      break;
    }
    v5 = (__int64 *)*v5;
  }
  KxReleaseSpinLock(&HalpDmaDomainListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = (unsigned int)(v6 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( v2 )
  {
    if ( *((_DWORD *)BugCheckParameter3 + 16) )
    {
      v13 = HalpIommuFreeDmaDomain(BugCheckParameter3[5]);
      if ( v13 < 0 )
        KeBugCheckEx(0x1D9u, 0LL, v13, (ULONG_PTR)BugCheckParameter3, 0LL);
      v7 = BugCheckParameter3[6];
      if ( v7 )
        HalpLaFreeState(v7);
    }
    HalpMmAllocCtxFree(v7, (__int64)BugCheckParameter3);
  }
  return v3 == 0 ? 0xC000000D : 0;
}
