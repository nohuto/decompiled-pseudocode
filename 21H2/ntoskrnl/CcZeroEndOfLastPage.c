/*
 * XREFs of CcZeroEndOfLastPage @ 0x140361E4C
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14029A360 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateSystemSection @ 0x140371C2C (MiCreateSystemSection.c)
 *     MmCreateSpecialImageSection @ 0x140698234 (MmCreateSpecialImageSection.c)
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 *     MiCreateSectionCommon @ 0x14071E810 (MiCreateSectionCommon.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     FsRtlAcquireFileExclusive @ 0x14071EE20 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x14071EE50 (FsRtlReleaseFile.c)
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
