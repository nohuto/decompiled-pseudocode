/*
 * XREFs of HalpDmaAllocateMapRegisters @ 0x1404C1A0C
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A36F0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404C56AC (HalpAllocateDmaResourcesInternal.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404C77B4 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404C7DB8 (HalpDmaProcessMapRegisterQueueV2.c)
 *     IoFreeAdapterChannelV2 @ 0x1404C7E9C (IoFreeAdapterChannelV2.c)
 *     HalpAllocateMapRegisters @ 0x140861090 (HalpAllocateMapRegisters.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     MmFreeContiguousMemory @ 0x140337010 (MmFreeContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x1403617D0 (MmGetPhysicalAddress.c)
 *     HalpMmAllocCtxFree @ 0x1403772D0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037AA88 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403B886C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaGetTranslationEntries @ 0x1403B8B40 (HalpDmaGetTranslationEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B3C14 (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1404B3C94 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x1404B3CEC (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404C1908 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaPrependTranslations @ 0x1404C2E80 (HalpDmaPrependTranslations.c)
 *     HalpDmaReturnPageToOwner @ 0x1404C305C (HalpDmaReturnPageToOwner.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaAllocateMapRegisters(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // ebx
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  PVOID v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  PMDL v21; // rbx
  unsigned int v22; // r14d
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r12
  _QWORD *v27; // r13
  void *v28; // rax
  __int64 TranslationEntries; // rax
  __int64 *v30; // r14
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // r15
  _QWORD *v34; // rdi
  PVOID *v35; // rbx
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v44; // eax
  bool v45; // zf
  PVOID BaseAddress; // [rsp+30h] [rbp-30h] BYREF
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v49; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v50; // [rsp+B0h] [rbp+50h] BYREF
  PHYSICAL_ADDRESS v51; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(v4) = 0;
  v5 = 0;
  v49 = 0;
  v50 = 0;
  v8 = 0LL;
  BaseAddress = 0LL;
  v51.QuadPart = 0LL;
  MemoryDescriptorList = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_BYTE *)(a1 + 337) )
  {
    if ( *(_BYTE *)(a1 + 434) )
    {
      result = HalpDmaAllocateScatterPagesFromScatterPool(a1, a1, a2, 0LL, 0, &v49);
      v5 = v49;
      v8 = result;
      if ( v49 == a2 )
        return result;
    }
    else
    {
      LOBYTE(a4) = 1;
      result = HalpDmaAllocateContiguousPagesFromContiguousPool(a1, a1, a2, a4, 0, &v49);
      v8 = result;
      if ( result )
        return result;
      v5 = v49;
    }
  }
  v10 = *(_QWORD *)(a1 + 152);
  if ( *(_BYTE *)(a1 + 434) )
  {
    v12 = HalpDmaAllocateScatterPagesFromScatterPool(a1, v10, a2 - v5, 0LL, 0, &v50);
    if ( v12 )
    {
      v14 = HalpDmaPrependTranslations(v12, v50, v8);
      v5 += v50;
      v8 = v14;
      v49 = v5;
    }
    if ( v5 == a2 )
      return v8;
    v15 = HalpDmaAllocateScatterPagesFromContiguousPool(v13, *(_QWORD *)(a1 + 152), a2 - v5, 0LL, 0, &v50);
    if ( v15 )
    {
      v16 = HalpDmaPrependTranslations(v15, v50, v8);
      v5 += v50;
      v8 = v16;
      v49 = v5;
    }
    if ( v5 == a2 )
      return v8;
  }
  else
  {
    LOBYTE(a4) = 1;
    result = HalpDmaAllocateContiguousPagesFromContiguousPool(a1, v10, a2, a4, 0, &v49);
    v8 = result;
    if ( result )
      return result;
    v5 = v49;
  }
  if ( !*(_BYTE *)(a1 + 434) )
  {
    v17 = HalpDmaAllocateContiguousMemory(a1, a2, &BaseAddress, &v51, &MemoryDescriptorList);
    v49 = v17;
    if ( v17 )
    {
      v18 = BaseAddress;
      if ( HalpDmaCommitContiguousMapBuffers(*(_QWORD *)(a1 + 152), (__int64)BaseAddress, v51.QuadPart, v17) )
      {
        LOBYTE(v20) = 1;
        result = HalpDmaAllocateContiguousPagesFromContiguousPool(a1, *(_QWORD *)(a1 + 152), a2, v20, 0, &v49);
        if ( result )
          return result;
      }
      else
      {
        v21 = MemoryDescriptorList;
        if ( MemoryDescriptorList )
        {
          if ( v18 )
            MmUnmapLockedPages(v18, MemoryDescriptorList);
          MiFreePagesFromMdl((ULONG_PTR)v21, 0, v19);
          ExFreePoolWithTag(v21, 0);
        }
        else
        {
          MmFreeContiguousMemory(v18);
        }
      }
    }
    return 0LL;
  }
  v22 = a2 - v5;
  v23 = v22;
  v24 = HalpMmAllocCtxAlloc(v11, 8LL * v22);
  v26 = v24;
  if ( !v24 )
  {
LABEL_38:
    if ( v5 )
    {
      v31 = v5;
      do
      {
        v32 = *(_QWORD *)(v8 + 8);
        HalpDmaReturnPageToOwner(a1, *(_QWORD *)(a1 + 152), v8);
        v8 = v32;
        --v31;
      }
      while ( v31 );
    }
    return 0LL;
  }
  if ( v22 )
  {
    v27 = (_QWORD *)v24;
    while ( 1 )
    {
      v28 = (void *)HalpMmAllocCtxAlloc(v25, 4096LL);
      *v27 = v28;
      if ( !v28 || MmGetPhysicalAddress(v28).HighPart )
        goto LABEL_34;
      LODWORD(v4) = v4 + 1;
      ++v27;
      if ( (unsigned int)v4 >= v22 )
      {
        v23 = v22;
        break;
      }
    }
  }
  TranslationEntries = HalpDmaGetTranslationEntries(*(_QWORD *)(a1 + 152), 1, v22);
  if ( !TranslationEntries )
  {
LABEL_34:
    if ( (_DWORD)v4 )
    {
      v30 = (__int64 *)v26;
      v4 = (unsigned int)v4;
      do
      {
        HalpMmAllocCtxFree(v25, *v30++);
        --v4;
      }
      while ( v4 );
    }
    HalpMmAllocCtxFree(v25, v26);
    goto LABEL_38;
  }
  v33 = HalpDmaPrependTranslations(TranslationEntries, v22, v8);
  v34 = (_QWORD *)v33;
  if ( v22 )
  {
    v35 = (PVOID *)v26;
    do
    {
      *v34 = MmGetPhysicalAddress(*v35).LowPart;
      v36 = 1LL;
      v37 = (unsigned __int64)*v35;
      v38 = 2LL;
      do
      {
        v37 |= v36++;
        --v38;
      }
      while ( v38 );
      ++v35;
      v34[6] = v37 | 0xC;
      v34 = (_QWORD *)v34[1];
      --v23;
    }
    while ( v23 );
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 152) + 120LL), &LockHandle);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 208LL) += v22;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v39 = (unsigned int)LockHandle.OldIrql + 1;
        v44 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v45 = (v44 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v44;
        if ( v45 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  HalpMmAllocCtxFree(v39, v26);
  return v33;
}
