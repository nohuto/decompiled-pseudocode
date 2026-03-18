/*
 * XREFs of CcZeroEndOfLastPage @ 0x1402818D4
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402BFEB0 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateSystemSection @ 0x14036F274 (MiCreateSystemSection.c)
 *     MiCreateSectionCommon @ 0x14062FC80 (MiCreateSectionCommon.c)
 *     MiCreateImageFileMap @ 0x1406415A4 (MiCreateImageFileMap.c)
 *     MmCreateSpecialImageSection @ 0x14066F58C (MmCreateSpecialImageSection.c)
 * Callees:
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     CcPurgeCacheSection @ 0x1402CF540 (CcPurgeCacheSection.c)
 *     FsRtlAcquireFileExclusive @ 0x140630D50 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140630D80 (FsRtlReleaseFile.c)
 */

void __fastcall CcZeroEndOfLastPage(PFILE_OBJECT FileObject)
{
  char v1; // di
  PVOID FsContext; // rcx
  char v4; // al
  unsigned int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  *(_OWORD *)v5 = 0LL;
  if ( !KeGetCurrentThread()[1].TrapFrame )
  {
    v1 = 1;
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    FsRtlAcquireFileExclusive(FileObject);
  }
  FsContext = FileObject->FsContext;
  v4 = *((_BYTE *)FsContext + 4);
  if ( (v4 & 0x40) != 0 )
  {
    ExAcquireFastMutex(*((PFAST_MUTEX *)FsContext + 6));
    *((_BYTE *)FileObject->FsContext + 4) |= 0x20u;
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)FileObject->FsContext + 6));
  }
  else
  {
    *((_BYTE *)FsContext + 4) = v4 | 0x20;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 6) & 4) != 0 )
  {
    CcFlushCachePriv((__int64)FileObject->SectionObjectPointer, 0LL, 0, 0LL, 0, v5);
    if ( !v5[0] )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v1 )
  {
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
