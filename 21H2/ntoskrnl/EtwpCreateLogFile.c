/*
 * XREFs of EtwpCreateLogFile @ 0x1406F0614
 * Callers:
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14041C080 (ZwQueryVolumeInformationFile.c)
 *     EtwpSendSessionNotification @ 0x1406EF58C (EtwpSendSessionNotification.c)
 *     EtwpUpdateFileHeader @ 0x1406F09A8 (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x1406F0C9C (EtwpDelayCreate.c)
 *     EtwpExpandFileName @ 0x1406F0FCC (EtwpExpandFileName.c)
 *     EtwpFinalizeHeader @ 0x1406F1AC4 (EtwpFinalizeHeader.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2, unsigned int *a3)
{
  struct _SECURITY_CLIENT_CONTEXT *ClientContext; // r15
  volatile signed __int64 *v6; // r14
  __int64 v7; // r13
  __int64 v8; // r8
  int v9; // r12d
  int v10; // eax
  bool v11; // r12
  int v12; // eax
  HANDLE v13; // rsi
  NTSTATUS updated; // r15d
  bool v15; // r15
  __int64 v16; // rdx
  void *v17; // r12
  bool v18; // zf
  unsigned int v19; // r13d
  __int128 v21; // xmm1
  UNICODE_STRING v22; // xmm1
  bool v23; // [rsp+40h] [rbp-79h]
  char v24; // [rsp+41h] [rbp-78h]
  unsigned int v25; // [rsp+44h] [rbp-75h]
  HANDLE FileHandle; // [rsp+48h] [rbp-71h] BYREF
  int v27; // [rsp+50h] [rbp-69h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  struct _SECURITY_CLIENT_CONTEXT *v29; // [rsp+68h] [rbp-51h]
  unsigned int *v30; // [rsp+70h] [rbp-49h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK v32; // [rsp+88h] [rbp-31h] BYREF
  __int128 FsInformation; // [rsp+98h] [rbp-21h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-11h]
  _OWORD FileInformation[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+17h]

  v30 = a3;
  FileHandle = 0LL;
  v24 = 0;
  v29 = 0LL;
  v36 = 0LL;
  v25 = 0;
  ClientContext = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  v32 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 4) == 0 )
    return 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFFC);
  if ( !*(_QWORD *)(a1 + 160) && !*(_QWORD *)(a1 + 192) )
    return 0LL;
  v6 = (volatile signed __int64 *)(a1 + 688);
  v7 = a1 + (*(_QWORD *)(a1 + 192) != 0LL ? 184LL : 152LL);
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
    v8 = *(unsigned int *)(a1 + 296);
  else
    v8 = 0LL;
  EtwpExpandFileName(0LL, v7, v8, a1 + 136, *(_QWORD *)(a1 + 1096) == EtwpHostSiloState);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 688);
  KeAbPostRelease(a1 + 688);
  v9 = *(_DWORD *)(a1 + 12);
  v23 = (v9 & 4) != 0;
  v10 = *(_DWORD *)(a1 + 816) >> 1;
  LOBYTE(v10) = (*(_DWORD *)(a1 + 816) & 2) != 0;
  v27 = v10;
  if ( a2 && *(_QWORD *)(a1 + 720) )
  {
    ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(a1 + 704);
    v29 = (struct _SECURITY_CLIENT_CONTEXT *)(a1 + 704);
  }
  v11 = (v9 & 0x4000000) == 0;
  while ( 1 )
  {
    v34 = 0LL;
    FsInformation = 0LL;
    IoStatusBlock = 0LL;
    v12 = EtwpDelayCreate((__int64)&FileHandle, 0, v10, ClientContext);
    v13 = FileHandle;
    updated = v12;
    if ( v12 < 0 )
      goto LABEL_41;
    updated = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
    if ( updated < 0 )
      goto LABEL_41;
    v15 = v23;
    v25 = HIDWORD(v34);
    if ( !v23 && v11 && ((HIDWORD(v34) - 1) & *(_DWORD *)(a1 + 4)) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 && (*(_DWORD *)(a1 + 816) & 2) == 0 )
      {
        updated = -1073741306;
LABEL_41:
        v19 = v25;
LABEL_32:
        if ( v13 )
        {
          ZwClose(v13);
          if ( *(_QWORD *)(a1 + 800) && DestinationString.Buffer )
          {
            ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
            v22 = DestinationString;
            *(_OWORD *)(a1 + 184) = *(_OWORD *)(a1 + 152);
            *(UNICODE_STRING *)(a1 + 152) = v22;
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(a1 + 688);
            KeAbPostRelease(a1 + 688);
            RtlInitUnicodeString(&DestinationString, 0LL);
          }
        }
        goto LABEL_22;
      }
      v11 = 0;
      ZwClose(v13);
      v13 = 0LL;
      FileHandle = 0LL;
    }
    if ( v13 )
      break;
    LOBYTE(v10) = v27;
    ClientContext = v29;
  }
  LODWORD(v36) = 0x2000;
  ZwSetInformationFile(v13, &v32, FileInformation, 0x28u, FileBasicInformation);
  if ( *(_QWORD *)(a1 + 800) )
  {
    EtwpFinalizeHeader(a1, 0LL);
    v17 = *(void **)(a1 + 800);
  }
  else
  {
    v24 = 1;
    v17 = 0LL;
  }
  v18 = *(_QWORD *)(a1 + 192) == 0LL;
  *(_QWORD *)(a1 + 800) = v13;
  if ( !v18 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
    v21 = *(_OWORD *)(a1 + 184);
    DestinationString = *(UNICODE_STRING *)(a1 + 152);
    *(_OWORD *)(a1 + 152) = v21;
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 688);
    KeAbPostRelease(a1 + 688);
    RtlInitUnicodeString((PUNICODE_STRING)(a1 + 184), 0LL);
    v15 = v23;
    v13 = FileHandle;
  }
  v19 = v25;
  LOBYTE(v16) = v15;
  updated = EtwpUpdateFileHeader(a1, v16, v25);
  if ( updated < 0 )
  {
    *(_QWORD *)(a1 + 800) = v17;
    goto LABEL_32;
  }
  if ( !v24 )
    EtwpSendSessionNotification(a1, 1u, 0);
  v13 = 0LL;
  FileHandle = 0LL;
  if ( v17 )
  {
    ZwClose(v17);
    goto LABEL_32;
  }
LABEL_22:
  if ( v30 )
    *v30 = v19;
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 184));
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)updated;
}
