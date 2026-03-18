/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x1403C7ED0
 * Callers:
 *     SmFpAllocate @ 0x140358D98 (SmFpAllocate.c)
 *     sub_1403E9A00 @ 0x1403E9A00 (sub_1403E9A00.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C4BD8 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404C5DC0 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404C6B9C (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     PnprCopyReservedMapping @ 0x14050D610 (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x1405823BC (PspIumFreePhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x14094B4C0 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x1409B0CDC (PnprMapPhysicalPages.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     MiLegitimatePageForDriversToMap @ 0x14034EB38 (MiLegitimatePageForDriversToMap.c)
 *     MiMapMdlCommon @ 0x1403C80A4 (MiMapMdlCommon.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  ULONG_PTR v5; // rsi
  unsigned __int64 v7; // rbp
  KIRQL v9; // al
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  ULONG_PTR v16; // rbx
  ULONG_PTR BugCheckParameter4; // rsi
  PMDL i; // rbx
  struct _MDL *Next; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf

  v5 = PoolTag;
  v7 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v9 = ExAcquireSpinLockShared(&dword_140C4EA40);
  v10 = qword_140C4EA48;
  v11 = (unsigned __int64)MappingAddress & 0xFFFFFFFFFFFFF000uLL;
  v12 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v10 )
        KeBugCheckEx(0xDAu, 0x106uLL, (ULONG_PTR)MappingAddress, v5, 1uLL);
      v13 = *(_QWORD *)(v10 + 24);
      if ( v11 >= v13 )
        break;
      v10 = *(_QWORD *)v10;
    }
    if ( v11 < v13 + (*(_QWORD *)(v10 + 32) << 12) )
      break;
    v10 = *(_QWORD *)(v10 + 8);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EA40);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  if ( *(_DWORD *)(v10 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v10 + 40));
  if ( (*(_DWORD *)(v10 + 44) & 1) != 0 )
  {
    if ( ((unsigned __int16)MappingAddress & 0xFFF) != 0 )
      return 0LL;
    v15 = v7;
    v14 = *(_QWORD *)(v10 + 32) - (((unsigned __int64)MappingAddress - *(_QWORD *)(v10 + 24)) >> 12);
  }
  else
  {
    v14 = *(_QWORD *)(v10 + 32);
    MappingAddress = *(PVOID *)(v10 + 24);
    v15 = v14;
  }
  if ( v7 <= v14 )
  {
    v16 = (((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    for ( BugCheckParameter4 = v16 + 8 * v15; v16 < BugCheckParameter4; v16 += 8LL )
    {
      if ( MI_READ_PTE_LOCK_FREE(v16) )
        KeBugCheckEx(0xDAu, 0x107uLL, (ULONG_PTR)MappingAddress, v16, BugCheckParameter4);
    }
    for ( i = MemoryDescriptorList + 1; ; i = (PMDL)((char *)i + 8) )
    {
      Next = i->Next;
      if ( i->Next <= (struct _MDL *)0xFFFFFFFFFLL
        && (*(_QWORD *)(48LL * (_QWORD)Next - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0
        && (int)MiLegitimatePageForDriversToMap(48LL * (_QWORD)Next - 0x58000000000LL) < 0 )
      {
        break;
      }
      if ( !--v7 )
        return (PVOID)MiMapMdlCommon(
                        (_DWORD)MemoryDescriptorList,
                        (unsigned int)((unsigned __int64)MappingAddress >> 9) & 0xFFFFFFF8,
                        0,
                        4,
                        CacheType);
    }
  }
  return 0LL;
}
