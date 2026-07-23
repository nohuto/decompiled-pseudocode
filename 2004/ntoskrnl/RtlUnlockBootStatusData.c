/*
 * XREFs of RtlUnlockBootStatusData @ 0x14077A2D0
 * Callers:
 *     PopBootStatSet @ 0x14076CA58 (PopBootStatSet.c)
 *     PoClearTransitionMarker @ 0x140783274 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x1407AEDF0 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408EEF08 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408EF14C (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x1408EF234 (PopBootStatUnlock.c)
 * Callees:
 *     RtlpAcquireBootStatusLock @ 0x1403F24FC (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1403F252C (RtlpReleaseBootStatusLock.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwFsControlFile @ 0x1403F3CE0 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  int v2; // eax
  char v3; // di
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  IoStatusBlock = 0LL;
  InputBuffer = 0;
  RtlpAcquireBootStatusLock();
  if ( !BootStatReferenceCount )
    goto LABEL_14;
  v2 = BootStatReferenceCount - 1;
  v3 = 0;
  --BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    if ( !FileHandle )
    {
      FileHandle = BootStatFileHandle;
LABEL_8:
      BootStatReferenceCount = 0;
      v3 = 1;
      BootStatFileHandle = 0LL;
      BootStatFileHandleAcquired = 0;
      goto LABEL_9;
    }
    if ( !BootStatKeepHandleOpen && !v2 )
      goto LABEL_8;
  }
LABEL_9:
  if ( FileHandle )
  {
    ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
    if ( v3 )
    {
      if ( BootStatDataCache )
      {
        ExFreePoolWithTag(BootStatDataCache, 0);
        BootStatDataCache = 0LL;
      }
      BootStatFileHandleAcquired = 0;
      ZwClose(FileHandle);
    }
  }
LABEL_14:
  RtlpReleaseBootStatusLock();
  return result;
}
