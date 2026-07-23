/*
 * XREFs of RtlUnlockBootStatusData @ 0x1407888D0
 * Callers:
 *     PopBootStatSet @ 0x14077B488 (PopBootStatSet.c)
 *     PoClearTransitionMarker @ 0x140790C64 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x1407BCD30 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408F4B18 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408F4D5C (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x1408F4E44 (PopBootStatUnlock.c)
 * Callees:
 *     RtlpAcquireBootStatusLock @ 0x1403F6B44 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1403F6B74 (RtlpReleaseBootStatusLock.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwFsControlFile @ 0x1403F8890 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
