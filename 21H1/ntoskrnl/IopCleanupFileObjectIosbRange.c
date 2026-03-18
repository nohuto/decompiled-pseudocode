/*
 * XREFs of IopCleanupFileObjectIosbRange @ 0x14088CF58
 * Callers:
 *     IopCleanupProcessResources @ 0x1406CD814 (IopCleanupProcessResources.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402E5430 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402E5E00 (RtlLookupElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupFileObjectIosbRange(__int64 a1)
{
  PMDL *v2; // rdi
  _QWORD *v3; // rsi
  PMDL *v4; // rbx
  PMDL v5; // rcx
  PMDL v6; // rax
  PVOID Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  Buffer[0] = *(PVOID *)(a1 + 32);
  v2 = 0LL;
  ObfDereferenceObjectWithTag(Buffer[0], 0x70436F49u);
  *(_QWORD *)(a1 + 32) = 0LL;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  v3 = RtlLookupElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  v4 = (PMDL *)v3[1];
  if ( v4 )
  {
    while ( *(PMDL *)(a1 + 16) != v4[3] )
    {
      v2 = v4;
      v4 = (PMDL *)v4[5];
      if ( !v4 )
        goto LABEL_6;
    }
    --*(_DWORD *)v4;
  }
LABEL_6:
  if ( !*(_DWORD *)v4 )
  {
    v5 = v4[4];
    if ( v5 )
      MmUnmapLockedPages(v5, v4[3]);
    MmUnlockPages(v4[3]);
    IoFreeMdl(v4[3]);
    v6 = v4[5];
    if ( v2 )
      v2[5] = v6;
    else
      v3[1] = v6;
    ExFreePoolWithTag(v4, 0);
    if ( !v3[1] )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  }
  KeReleaseGuardedMutex(&IoStatusBlockRangeTableLock);
}
