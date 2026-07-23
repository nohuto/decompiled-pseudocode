/*
 * XREFs of EtwpAllocatePartitionMemory @ 0x1405B0838
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x14029E818 (EtwpAllocateTraceBuffer.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140294640 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     EtwpRegisterPartitionPages @ 0x1405B0994 (EtwpRegisterPartitionPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void *__fastcall EtwpAllocatePartitionMemory(ULONG_PTR *a1, unsigned __int64 a2)
{
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v4; // rbx
  PVOID v5; // rax
  void *v6; // rdi

  PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(0, -1, 0LL, a2, 1, 0, 5, *a1);
  v4 = PartitionNodePagesForMdl;
  if ( !PartitionNodePagesForMdl )
    return 0LL;
  v5 = MmMapLockedPagesSpecifyCache(PartitionNodePagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  v6 = v5;
  if ( !v5 )
  {
LABEL_5:
    MiFreePagesFromMdl((ULONG_PTR)v4, 0);
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  if ( !(unsigned __int8)EtwpRegisterPartitionPages(a1, v4, v5) )
  {
    MmUnmapLockedPages(v6, v4);
    goto LABEL_5;
  }
  return v6;
}
