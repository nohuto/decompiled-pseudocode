/*
 * XREFs of MmCreatePartition @ 0x1403CAB14
 * Callers:
 *     PspAllocatePartition @ 0x1407CC424 (PspAllocatePartition.c)
 *     VfUtilGetAvailableSystemPages @ 0x1409C76E0 (VfUtilGetAvailableSystemPages.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CBE74 (MiInitializeWorkingSetManagerParameters.c)
 *     MiGetPartitionLargePageListCount @ 0x1403F6A98 (MiGetPartitionLargePageListCount.c)
 *     MiDeletePartition @ 0x14053591C (MiDeletePartition.c)
 *     MiSizeMemoryListLocks @ 0x140622B08 (MiSizeMemoryListLocks.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1406C97D0 (ExAllocateCacheAwareRundownProtection.c)
 *     MiInitializePartition @ 0x14079C85C (MiInitializePartition.c)
 *     MiInitializeMemoryEvents @ 0x1407A08D4 (MiInitializeMemoryEvents.c)
 *     MiCreatePfnBitMaps @ 0x1407B9A04 (MiCreatePfnBitMaps.c)
 *     MiAllocatePartitionId @ 0x1408C7BFC (MiAllocatePartitionId.c)
 *     MiInitializePartitionThreads @ 0x1408C7DB4 (MiInitializePartitionThreads.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmCreatePartition(_QWORD *a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned int PartitionLargePageListCount; // eax
  __int64 v6; // r10
  __int64 v7; // rbp
  __int64 v8; // r11
  _QWORD *Pool; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int16 PartitionId; // ax
  int v17; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  if ( (a2 & 1) != 0 )
  {
    *a1 = &MiSystemPartition;
    result = 0LL;
    qword_140C50E70 = (__int64)a1;
    return result;
  }
  v4 = MiSizeMemoryListLocks();
  PartitionLargePageListCount = MiGetPartitionLargePageListCount();
  v7 = 3LL * PartitionLargePageListCount;
  Pool = MiAllocatePool(
           64,
           ((4544 * v6 + 11535 + 40 * v8) & 0xFFFFFFFFFFFFFFF0uLL)
         + 24LL * PartitionLargePageListCount
         + 16 * (v8 + v6 * (unsigned int)dword_140C4DFC0[0])
         + v4
         + 8,
           0x6150694Du);
  v10 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[2] = Pool + 1440;
  v11 = (__int64)&Pool[568 * (unsigned __int16)KeNumberNodes + 1440];
  Pool[272] = v11;
  v12 = v11 + 40LL * (unsigned int)dword_140C4DF3C;
  Pool[273] = v12;
  v13 = (v12 + 40LL * (unsigned int)dword_140C4DF3C + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  Pool[525] = v13;
  v14 = v13 + 16LL * (unsigned int)dword_140C4DF3C;
  Pool[526] = v14;
  v15 = 16LL * (unsigned int)dword_140C4DF3C + v14;
  Pool[612] = 0LL;
  Pool[629] = v15;
  Pool[22] = a1;
  Pool[637] = v15 + v4;
  Pool[770] = v15 + v4 + 8 * v7;
  PartitionId = MiAllocatePartitionId(Pool);
  if ( !PartitionId )
  {
    ExFreePoolWithTag(v10, 0);
    return 3221225495LL;
  }
  MiInitializePartition(v10, PartitionId);
  if ( (unsigned int)MiInitializeMemoryEvents(v10)
    && (unsigned int)MiCreatePfnBitMaps(v10, 0LL)
    && (unsigned int)MiInitializeWorkingSetManagerParameters(v10)
    && (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x7270694Du),
        (v10[268] = CacheAwareRundownProtection) != 0LL) )
  {
    v17 = MiInitializePartitionThreads((__int64)v10);
    if ( v17 >= 0 )
    {
      *a1 = v10;
      return (unsigned int)v17;
    }
  }
  else
  {
    v17 = -1073741670;
  }
  MiDeletePartition(v10);
  return (unsigned int)v17;
}
