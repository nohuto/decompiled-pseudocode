/*
 * XREFs of MmUnmapReservedMapping @ 0x1405858A0
 * Callers:
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 *     sub_1403F94E0 @ 0x1403F94E0 (sub_1403F94E0.c)
 *     HalpDmaReleaseBufferMappings @ 0x140457742 (HalpDmaReleaseBufferMappings.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x140513544 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x140513C1C (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     PnprCopyReservedMapping @ 0x140562A80 (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x1405633A8 (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x1405E281C (PspIumFreePhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x1409ED100 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x140A6804C (PnprMapPhysicalPages.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x140584530 (MiRetardMdl.c)
 *     MiUnmapMdlCommon @ 0x1405853E4 (MiUnmapMdlCommon.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v5; // rsi
  ULONG_PTR BugCheckParameter4; // rbp
  KIRQL v7; // al
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  ULONG_PTR v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 i; // rbx

  v3 = PoolTag;
  v5 = (ULONG_PTR)BaseAddress;
  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    v5 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl((__int64)MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v7 = ExAcquireSpinLockShared(&dword_140C53050);
  v8 = qword_140C53058;
  v9 = v5 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v8 )
        KeBugCheckEx(0xDAu, 0x106uLL, v5, v3, 2uLL);
      v11 = *(_QWORD *)(v8 + 24);
      if ( v9 >= v11 )
        break;
      v8 = *(_QWORD *)v8;
    }
    if ( v9 < v11 + (*(_QWORD *)(v8 + 32) << 12) )
      break;
    v8 = *(_QWORD *)(v8 + 8);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C53050);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v3 )
    KeBugCheckEx(0xDAu, 0x102uLL, v5, v3, BugCheckParameter4);
  v17 = *(_QWORD *)(v8 + 32);
  if ( (*(_DWORD *)(v8 + 44) & 1) != 0 )
    v17 -= (v5 - *(_QWORD *)(v8 + 24)) >> 12;
  else
    v5 = *(_QWORD *)(v8 + 24);
  if ( BugCheckParameter4 > v17 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v5, *(_QWORD *)(v8 + 32), BugCheckParameter4);
  MiUnmapMdlCommon(v5, 0LL, v3, (__int64)MemoryDescriptorList, BugCheckParameter4);
  if ( (*(_DWORD *)(v8 + 44) & 1) == 0 )
  {
    v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = v18 + 8LL * *(_QWORD *)(v8 + 32);
    for ( i = v18 + 8 * BugCheckParameter4; i < v19; i += 8LL )
    {
      if ( MI_READ_PTE_LOCK_FREE(i) )
        KeBugCheckEx(0xDAu, 0x10CuLL, v5, v3, BugCheckParameter4);
    }
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
