/*
 * XREFs of EtwpFreePartitionMemory @ 0x1405AB168
 * Callers:
 *     EtwpFreeTraceBuffer @ 0x1402FFAEC (EtwpFreeTraceBuffer.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     EtwpUnregisterPartitionPages @ 0x1405AB5D0 (EtwpUnregisterPartitionPages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePartitionMemory(__int64 a1, void *a2)
{
  struct _MDL *v3; // rax
  struct _MDL *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (struct _MDL *)EtwpUnregisterPartitionPages(&v6);
  v4 = v3;
  if ( v3 )
  {
    MmUnmapLockedPages(a2, v3);
    MiFreePagesFromMdl((ULONG_PTR)v4, 0, v5);
    ExFreePoolWithTag(v4, 0);
  }
}
