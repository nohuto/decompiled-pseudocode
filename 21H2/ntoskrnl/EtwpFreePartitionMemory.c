/*
 * XREFs of EtwpFreePartitionMemory @ 0x1405B06C8
 * Callers:
 *     EtwpFreeTraceBuffer @ 0x1402C7EC4 (EtwpFreeTraceBuffer.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402FF4EC (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     EtwpUnregisterPartitionPages @ 0x1405B0B30 (EtwpUnregisterPartitionPages.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
