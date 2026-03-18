/*
 * XREFs of EtwpCreateLogFile @ 0x1406C8D98
 * Callers:
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x140939B88 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1403F3AA0 (ZwSetInformationFile.c)
 *     EtwpSendSessionNotification @ 0x1406328F8 (EtwpSendSessionNotification.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     EtwpFinalizeHeader @ 0x1406C8A5C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406C9094 (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x1406C93DC (EtwpDelayCreate.c)
 *     PsRevertToSelf @ 0x1406CABA0 (PsRevertToSelf.c)
 *     SeImpersonateClientEx @ 0x1406CAD40 (SeImpersonateClientEx.c)
 *     EtwpExpandFileName @ 0x1406CBAA4 (EtwpExpandFileName.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2)
{
  char v4; // r12
  char v5; // r15
  __int128 v6; // xmm0
  char v7; // si
  NTSTATUS updated; // r14d
  HANDLE v9; // rsi
  __int64 v10; // rdx
  void *v11; // r15
  bool v12; // zf
  __int128 v13; // xmm1
  UNICODE_STRING v15; // xmm1
  bool v16; // [rsp+30h] [rbp-39h]
  HANDLE FileHandle; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  __int128 v19; // [rsp+50h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  _OWORD FileInformation[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v22; // [rsp+90h] [rbp+27h]

  FileHandle = 0LL;
  v22 = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  v4 = 0;
  v5 = 0;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFFC);
    if ( *(_QWORD *)(a1 + 176) || *(_QWORD *)(a1 + 208) )
    {
      if ( *(_QWORD *)(a1 + 208) )
      {
        v6 = *(_OWORD *)(a1 + 200);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 832) & 2) != 0 )
        {
          ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
          EtwpExpandFileName(0LL, a1 + 168, *(unsigned int *)(a1 + 312), a1 + 152);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
        }
        v6 = *(_OWORD *)(a1 + 168);
      }
      v7 = (*(_DWORD *)(a1 + 832) & 2) != 0;
      v16 = (*(_BYTE *)(a1 + 12) & 4) != 0;
      v19 = v6;
      if ( a2 == 1 )
      {
        if ( *(_QWORD *)(a1 + 736) )
        {
          updated = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(a1 + 720), 0LL);
          v5 = 1;
          if ( updated < 0 )
            goto LABEL_23;
        }
      }
      updated = EtwpDelayCreate((__int64)&FileHandle, 0, v7);
      if ( v5 == 1 )
        PsRevertToSelf();
      v9 = FileHandle;
      if ( updated >= 0 )
      {
        LODWORD(v22) = 0x2000;
        ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
        if ( *(_QWORD *)(a1 + 816) )
        {
          EtwpFinalizeHeader(a1, 0);
          v11 = *(void **)(a1 + 816);
        }
        else
        {
          v4 = 1;
          v11 = 0LL;
        }
        v12 = *(_QWORD *)(a1 + 208) == 0LL;
        *(_QWORD *)(a1 + 816) = v9;
        if ( !v12 )
        {
          ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
          v13 = *(_OWORD *)(a1 + 200);
          DestinationString = *(UNICODE_STRING *)(a1 + 168);
          *(_OWORD *)(a1 + 168) = v13;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 200), 0LL);
          v9 = FileHandle;
        }
        LOBYTE(v10) = v16;
        updated = EtwpUpdateFileHeader(a1, v10);
        if ( updated < 0 )
        {
          *(_QWORD *)(a1 + 816) = v11;
        }
        else
        {
          if ( !v4 )
            EtwpSendSessionNotification(a1, 1u, 0);
          v9 = 0LL;
          FileHandle = 0LL;
          if ( !v11 )
            goto LABEL_23;
          ZwClose(v11);
        }
      }
      if ( v9 )
      {
        ZwClose(v9);
        if ( *(_QWORD *)(a1 + 816) )
        {
          if ( DestinationString.Buffer )
          {
            ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
            v15 = DestinationString;
            *(_OWORD *)(a1 + 200) = *(_OWORD *)(a1 + 168);
            *(UNICODE_STRING *)(a1 + 168) = v15;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
            KeAbPostRelease(a1 + 704);
            RtlInitUnicodeString(&DestinationString, 0LL);
          }
        }
      }
LABEL_23:
      RtlFreeAnsiString((PUNICODE_STRING)(a1 + 200));
      RtlFreeAnsiString(&DestinationString);
      return (unsigned int)updated;
    }
  }
  return 0LL;
}
