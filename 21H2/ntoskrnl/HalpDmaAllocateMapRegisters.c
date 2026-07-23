/*
 * XREFs of HalpDmaAllocateMapRegisters @ 0x1404C6B3C
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A64D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404CC924 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404CCF28 (HalpDmaProcessMapRegisterQueueV2.c)
 *     IoFreeAdapterChannelV2 @ 0x1404CD00C (IoFreeAdapterChannelV2.c)
 *     HalpAllocateMapRegisters @ 0x140864810 (HalpAllocateMapRegisters.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403BBE7C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaGetTranslationEntries @ 0x1403BC150 (HalpDmaGetTranslationEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B8D34 (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1404B8DB4 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x1404B8E0C (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404C6A38 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaPrependTranslations @ 0x1404C7FB0 (HalpDmaPrependTranslations.c)
 *     HalpDmaReturnPageToOwner @ 0x1404C818C (HalpDmaReturnPageToOwner.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v19; // r9
  PMDL v20; // rbx
  unsigned int v21; // r14d
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r12
  _QWORD *v26; // r13
  void *v27; // rax
  __int64 TranslationEntries; // rax
  __int64 *v29; // r14
  __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // r15
  _QWORD *v33; // rdi
  PVOID *v34; // rbx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  bool v44; // zf
  PVOID BaseAddress; // [rsp+30h] [rbp-30h] BYREF
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v48; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v49; // [rsp+B0h] [rbp+50h] BYREF
  PHYSICAL_ADDRESS v50; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(v4) = 0;
  v5 = 0;
  v48 = 0;
  v49 = 0;
  v8 = 0LL;
  BaseAddress = 0LL;
  v50.QuadPart = 0LL;
  MemoryDescriptorList = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_BYTE *)(a1 + 337) )
  {
    if ( *(_BYTE *)(a1 + 434) )
    {
      result = HalpDmaAllocateScatterPagesFromScatterPool(a1, a1, a2, 0LL, 0, &v48);
      v5 = v48;
      v8 = result;
      if ( v48 == a2 )
        return result;
    }
    else
    {
      LOBYTE(a4) = 1;
      result = HalpDmaAllocateContiguousPagesFromContiguousPool(a1, a1, a2, a4, 0, &v48);
      v8 = result;
      if ( result )
        return result;
      v5 = v48;
    }
  }
  v10 = *(_QWORD *)(a1 + 152);
  if ( *(_BYTE *)(a1 + 434) )
  {
    v12 = HalpDmaAllocateScatterPagesFromScatterPool(a1, v10, a2 - v5, 0LL, 0, &v49);
    if ( v12 )
    {
      v14 = HalpDmaPrependTranslations(v12, v49, v8);
      v5 += v49;
      v8 = v14;
      v48 = v5;
    }
    if ( v5 == a2 )
      return v8;
    v15 = HalpDmaAllocateScatterPagesFromContiguousPool(v13, *(_QWORD *)(a1 + 152), a2 - v5, 0LL, 0, &v49);
    if ( v15 )
    {
      v16 = HalpDmaPrependTranslations(v15, v49, v8);
      v5 += v49;
      v8 = v16;
      v48 = v5;
    }
    if ( v5 == a2 )
      return v8;
  }
  else
  {
    LOBYTE(a4) = 1;
    result = HalpDmaAllocateContiguousPagesFromContiguousPool(a1, v10, a2, a4, 0, &v48);
    v8 = result;
    if ( result )
      return result;
    v5 = v48;
  }
  if ( !*(_BYTE *)(a1 + 434) )
  {
    v17 = HalpDmaAllocateContiguousMemory(a1, a2, &BaseAddress, &v50, &MemoryDescriptorList);
    v48 = v17;
    if ( v17 )
    {
      v18 = BaseAddress;
      if ( HalpDmaCommitContiguousMapBuffers(*(_QWORD *)(a1 + 152), (__int64)BaseAddress, v50.QuadPart, v17) )
      {
        LOBYTE(v19) = 1;
        result = HalpDmaAllocateContiguousPagesFromContiguousPool(a1, *(_QWORD *)(a1 + 152), a2, v19, 0, &v48);
        if ( result )
          return result;
      }
      else
      {
        v20 = MemoryDescriptorList;
        if ( MemoryDescriptorList )
        {
          if ( v18 )
            MmUnmapLockedPages(v18, MemoryDescriptorList);
          MiFreePagesFromMdl((ULONG_PTR)v20, 0);
          ExFreePoolWithTag(v20, 0);
        }
        else
        {
          MmFreeContiguousMemory(v18);
        }
      }
    }
    return 0LL;
  }
  v21 = a2 - v5;
  v22 = v21;
  v23 = HalpMmAllocCtxAlloc(v11, 8LL * v21);
  v25 = v23;
  if ( !v23 )
  {
LABEL_38:
    if ( v5 )
    {
      v30 = v5;
      do
      {
        v31 = *(_QWORD *)(v8 + 8);
        HalpDmaReturnPageToOwner(a1, *(_QWORD *)(a1 + 152), v8);
        v8 = v31;
        --v30;
      }
      while ( v30 );
    }
    return 0LL;
  }
  if ( v21 )
  {
    v26 = (_QWORD *)v23;
    while ( 1 )
    {
      v27 = (void *)HalpMmAllocCtxAlloc(v24, 4096LL);
      *v26 = v27;
      if ( !v27 || MmGetPhysicalAddress(v27).HighPart )
        goto LABEL_34;
      LODWORD(v4) = v4 + 1;
      ++v26;
      if ( (unsigned int)v4 >= v21 )
      {
        v22 = v21;
        break;
      }
    }
  }
  TranslationEntries = HalpDmaGetTranslationEntries(*(_QWORD *)(a1 + 152), 1, v21);
  if ( !TranslationEntries )
  {
LABEL_34:
    if ( (_DWORD)v4 )
    {
      v29 = (__int64 *)v25;
      v4 = (unsigned int)v4;
      do
      {
        HalpMmAllocCtxFree(v24, *v29++);
        --v4;
      }
      while ( v4 );
    }
    HalpMmAllocCtxFree(v24, v25);
    goto LABEL_38;
  }
  v32 = HalpDmaPrependTranslations(TranslationEntries, v21, v8);
  v33 = (_QWORD *)v32;
  if ( v21 )
  {
    v34 = (PVOID *)v25;
    do
    {
      *v33 = MmGetPhysicalAddress(*v34).LowPart;
      v35 = 1LL;
      v36 = (unsigned __int64)*v34;
      v37 = 2LL;
      do
      {
        v36 |= v35++;
        --v37;
      }
      while ( v37 );
      ++v34;
      v33[6] = v36 | 0xC;
      v33 = (_QWORD *)v33[1];
      --v22;
    }
    while ( v22 );
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 152) + 120LL), &LockHandle);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 208LL) += v21;
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
        v38 = (unsigned int)LockHandle.OldIrql + 1;
        v43 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v44 = (v43 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v43;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  HalpMmAllocCtxFree(v38, v25);
  return v32;
}
