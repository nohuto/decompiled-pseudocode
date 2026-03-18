/*
 * XREFs of EtwpAllocatePartitionMemory @ 0x1405AB0A8
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x1402FF6F0 (EtwpAllocateTraceBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140313410 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     EtwpRegisterPartitionPages @ 0x1405AB204 (EtwpRegisterPartitionPages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void *__fastcall EtwpAllocatePartitionMemory(ULONG_PTR ***a1, unsigned __int64 a2)
{
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v4; // rbx
  PVOID v5; // rax
  __int64 v6; // r8
  void *v7; // rdi

  PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(0, -1, 0LL, a2, 1, 0, 5, *a1);
  v4 = PartitionNodePagesForMdl;
  if ( !PartitionNodePagesForMdl )
    return 0LL;
  v5 = MmMapLockedPagesSpecifyCache(PartitionNodePagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  v7 = v5;
  if ( !v5 )
  {
LABEL_5:
    MiFreePagesFromMdl((ULONG_PTR)v4, 0, v6);
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  if ( !(unsigned __int8)EtwpRegisterPartitionPages(a1, v4, v5) )
  {
    MmUnmapLockedPages(v7, v4);
    goto LABEL_5;
  }
  return v7;
}
