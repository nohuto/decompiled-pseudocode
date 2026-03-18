/*
 * XREFs of EtwpAllocatePartitionMemory @ 0x1405AA9B8
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x1402DEEBC (EtwpAllocateTraceBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140342750 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     EtwpRegisterPartitionPages @ 0x1405AAB14 (EtwpRegisterPartitionPages.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void *__fastcall EtwpAllocatePartitionMemory(ULONG_PTR ***a1, unsigned __int64 a2)
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
