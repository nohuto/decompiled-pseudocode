/*
 * XREFs of CcZeroEndOfLastPage @ 0x14029F7A8
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1403561D0 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateSystemSection @ 0x140371DF4 (MiCreateSystemSection.c)
 *     MiCreateSectionCommon @ 0x14067F1A0 (MiCreateSectionCommon.c)
 *     MmCreateSpecialImageSection @ 0x14068FA78 (MmCreateSpecialImageSection.c)
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     CcPurgeCacheSection @ 0x1403557F0 (CcPurgeCacheSection.c)
 *     FsRtlAcquireFileExclusive @ 0x140680270 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1406802A0 (FsRtlReleaseFile.c)
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
