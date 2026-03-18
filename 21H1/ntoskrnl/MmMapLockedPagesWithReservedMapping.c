/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x1403C4570
 * Callers:
 *     SmFpAllocate @ 0x140309C68 (SmFpAllocate.c)
 *     sub_1403E5F30 @ 0x1403E5F30 (sub_1403E5F30.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C1248 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404C2430 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404C320C (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     PnprCopyReservedMapping @ 0x140509690 (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x14057E34C (PspIumFreePhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x140944490 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x1409A9F0C (PnprMapPhysicalPages.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLegitimatePageForDriversToMap @ 0x1403476D4 (MiLegitimatePageForDriversToMap.c)
 *     MiMapMdlCommon @ 0x1403C4744 (MiMapMdlCommon.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  ULONG_PTR v17; // rbx
  ULONG_PTR BugCheckParameter4; // rsi
  PMDL i; // rbx
  struct _MDL *Next; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf

  v5 = PoolTag;
  v7 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v9 = ExAcquireSpinLockShared(&dword_140C4EB00);
  v10 = qword_140C4EB08;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EB00);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        v14 = (unsigned int)v25 & SchedulerAssist[5];
        SchedulerAssist[5] = v14;
        if ( v26 )
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
    v16 = v7;
    v15 = *(_QWORD *)(v10 + 32) - (((unsigned __int64)MappingAddress - *(_QWORD *)(v10 + 24)) >> 12);
  }
  else
  {
    v15 = *(_QWORD *)(v10 + 32);
    MappingAddress = *(PVOID *)(v10 + 24);
    v16 = v15;
  }
  if ( v7 <= v15 )
  {
    v17 = (((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    for ( BugCheckParameter4 = v17 + 8 * v16; v17 < BugCheckParameter4; v17 += 8LL )
    {
      if ( MI_READ_PTE_LOCK_FREE(v17) )
        KeBugCheckEx(0xDAu, 0x107uLL, (ULONG_PTR)MappingAddress, v17, BugCheckParameter4);
    }
    for ( i = MemoryDescriptorList + 1; ; i = (PMDL)((char *)i + 8) )
    {
      Next = i->Next;
      if ( i->Next <= (struct _MDL *)0xFFFFFFFFFLL
        && (*(_QWORD *)(48LL * (_QWORD)Next - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0
        && (int)MiLegitimatePageForDriversToMap(48LL * (_QWORD)Next - 0x58000000000LL, 0x4000000000000LL, v14) < 0 )
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
