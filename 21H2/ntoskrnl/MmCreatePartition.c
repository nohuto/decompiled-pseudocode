/*
 * XREFs of MmCreatePartition @ 0x1403D981C
 * Callers:
 *     DifGetAvailableSystemPages @ 0x1406289C8 (DifGetAvailableSystemPages.c)
 *     PspAllocatePartition @ 0x14085BD34 (PspAllocatePartition.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1403B72B4 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiGetPartitionLargePageListCount @ 0x1403B7A60 (MiGetPartitionLargePageListCount.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403DADE0 (MiInitializeWorkingSetManagerParameters.c)
 *     MiDeletePartition @ 0x14058DDC0 (MiDeletePartition.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14074D200 (ExAllocateCacheAwareRundownProtection.c)
 *     MiInitializePartition @ 0x14081D450 (MiInitializePartition.c)
 *     MiCreatePfnBitMaps @ 0x14082ACF0 (MiCreatePfnBitMaps.c)
 *     MiInitializeMemoryEvents @ 0x14082BD64 (MiInitializeMemoryEvents.c)
 *     MiAllocatePartitionId @ 0x14096C1B0 (MiAllocatePartitionId.c)
 *     MiInitializePartitionThreads @ 0x14096C3A8 (MiInitializePartitionThreads.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmCreatePartition(union _SLIST_HEADER **a1, char a2)
{
  __int64 result; // rax
  unsigned int PartitionLargePageListCount; // eax
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r14
  union _SLIST_HEADER *Pool; // rax
  union _SLIST_HEADER *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned __int16 PartitionId; // ax
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  int v21; // edi

  if ( (a2 & 1) != 0 )
  {
    *a1 = (union _SLIST_HEADER *)&MiSystemPartition;
    result = 0LL;
    qword_140C55030 = (__int64)a1;
    return result;
  }
  PartitionLargePageListCount = MiGetPartitionLargePageListCount();
  v8 = 24576 * v7;
  v9 = v7 * (16LL * (unsigned int)dword_140C507C0[0] + 8);
  v10 = 24LL * PartitionLargePageListCount;
  Pool = (union _SLIST_HEADER *)MiAllocatePool(
                                  64,
                                  24576 * v7 + ((v9 + v10 + v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
                                  0x6150694Du);
  v12 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1].Alignment = (unsigned __int64)&Pool[1340];
  v13 = (__int64)&Pool[1532 * (unsigned __int16)KeNumberNodes + 1340];
  Pool[152].Alignment = v13;
  v14 = v13 + 88LL * (unsigned int)dword_140C5073C;
  Pool[152].Region = v14;
  v15 = (v14 + 88LL * (unsigned int)dword_140C5073C + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  Pool[413].Region = v15;
  v16 = v15 + 16LL * (unsigned int)dword_140C5073C;
  Pool[414].Alignment = v16;
  v17 = 16LL * (unsigned int)dword_140C5073C + v16;
  Pool[11].Alignment = (unsigned __int64)a1;
  v18 = v17 + v10;
  Pool[990].Region = v17;
  Pool[999].Alignment = v18;
  PartitionId = MiAllocatePartitionId(Pool);
  if ( !PartitionId )
  {
    ExFreePoolWithTag(v12, 0);
    return 3221225495LL;
  }
  MiInitializePartition(v12, PartitionId);
  MiPopulateFreeKernelShadowStackCacheEntries(v12, (struct _SLIST_ENTRY *)((v18 + v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v8);
  if ( !(unsigned int)MiInitializeMemoryEvents(v12)
    || !(unsigned int)MiCreatePfnBitMaps(v12, 0LL)
    || !(unsigned int)MiInitializeWorkingSetManagerParameters(v12)
    || (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x7270694Du),
        (v12[148].Alignment = (unsigned __int64)CacheAwareRundownProtection) == 0) )
  {
    v21 = -1073741670;
    goto LABEL_14;
  }
  v21 = MiInitializePartitionThreads(v12);
  if ( v21 < 0 )
  {
LABEL_14:
    MiDeletePartition(v12);
    goto LABEL_15;
  }
  *a1 = v12;
LABEL_15:
  if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)&v12->HeaderX64 + 1) |= 0x100u;
    v12[1039] = 0LL;
    v12[1040] = 0LL;
    v12[1041] = 0LL;
    v12[1042].Alignment = 0LL;
  }
  return (unsigned int)v21;
}
