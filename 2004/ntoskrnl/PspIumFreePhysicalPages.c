/*
 * XREFs of PspIumFreePhysicalPages @ 0x14057E98C
 * Callers:
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C54E0 (MmMapLockedPagesWithReservedMapping.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MmUnmapReservedMapping @ 0x14052C7C0 (MmUnmapReservedMapping.c)
 *     MmFreeSecureKernelPages @ 0x14054E264 (MmFreeSecureKernelPages.c)
 *     PspIumFreePartitionPages @ 0x14057E7A0 (PspIumFreePartitionPages.c)
 */

void __fastcall PspIumFreePhysicalPages(__int64 a1, int a2, ULONG_PTR a3)
{
  KIRQL v5; // si
  PVOID v6; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v13[2]; // [rsp+60h] [rbp-10h] BYREF

  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v13[0] = a3;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 28);
  v5 = 0;
  *(_DWORD *)&MemoryDescriptorList.Size = 131128;
  MemoryDescriptorList.ByteCount = 4096;
  v6 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v6 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PspIumFreeMappingLock);
    v6 = MmMapLockedPagesWithReservedMapping(PspIumFreeMapping, 0x466D7356u, &MemoryDescriptorList, MmCached);
  }
  if ( *((_DWORD *)v6 + 10) )
  {
    if ( a1 )
      PspIumFreePartitionPages(
        a1,
        (*((_DWORD *)v6 + 10) >> 12) + ((*((_DWORD *)v6 + 10) & 0xFFF) != 0),
        (ULONG_PTR *)v6 + 6);
    else
      MmFreeSecureKernelPages((PMDL)v6, a2);
  }
  if ( v6 == PspIumFreeMapping )
  {
    MmUnmapReservedMapping(v6, 0x466D7356u, &MemoryDescriptorList);
    KxReleaseSpinLock(&PspIumFreeMappingLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  else
  {
    MmUnmapLockedPages(v6, &MemoryDescriptorList);
  }
  if ( a1 )
    PspIumFreePartitionPages(a1, 1, v13);
  else
    MmFreeSecureKernelPages(&MemoryDescriptorList, 0);
}
