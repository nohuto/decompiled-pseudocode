/*
 * XREFs of CcZeroEndOfLastPage @ 0x1403570FC
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402E9010 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateSystemSection @ 0x1403720DC (MiCreateSystemSection.c)
 *     MmCreateSpecialImageSection @ 0x140608784 (MmCreateSpecialImageSection.c)
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 *     MiCreateSectionCommon @ 0x140707430 (MiCreateSectionCommon.c)
 * Callees:
 *     CcFlushCachePriv @ 0x14022CBA0 (CcFlushCachePriv.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     CcPurgeCacheSection @ 0x1402F0920 (CcPurgeCacheSection.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     FsRtlAcquireFileExclusive @ 0x140707A40 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140707A70 (FsRtlReleaseFile.c)
 */

void __fastcall CcZeroEndOfLastPage(PFILE_OBJECT FileObject)
{
  char v1; // di
  PVOID FsContext; // rcx
  char v4; // al
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v5 = 0LL;
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
    CcFlushCachePriv((__int64)FileObject->SectionObjectPointer, 0LL, 0, 0LL, 0, &v5);
    if ( !(_DWORD)v5 )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v1 )
  {
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
