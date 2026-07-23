/*
 * XREFs of KsepShimDatabaseTime @ 0x14075F488
 * Callers:
 *     KsepShimDbChanged @ 0x140372140 (KsepShimDbChanged.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x140371AC4 (KsepLogError.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1403FA7A0 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 */

__int64 __fastcall KsepShimDatabaseTime(PCWSTR SourceString, _QWORD *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  __int64 v5; // rcx
  char v6; // al
  __int64 v8; // rax
  HANDLE FileHandle; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  __int128 FileInformation; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v14; // [rsp+98h] [rbp+2Fh]
  __int64 v15; // [rsp+A8h] [rbp+3Fh]

  *(&ObjectAttributes.Length + 1) = 0;
  *a2 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  v15 = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v14 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v4 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    if ( v4 < 0 )
    {
      v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v8 + 1] = v4;
      KsepHistoryErrors[2 * v8] = 590737;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(0LL, "KSE: ZwQueryInformationFile failed getting DB file!\n");
      KsepLogError(0, "KSE: ZwQueryInformationFile failed getting DB file!\n");
    }
    else
    {
      *a2 = v14;
    }
  }
  else
  {
    v5 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v5 + 1] = v3;
    v6 = KsepDebugFlag;
    KsepHistoryErrors[2 * v5] = 590724;
    if ( (v6 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwOpenFile failed opening DB file!\n");
    KsepLogError(0, "KSE: ZwOpenFile failed opening DB file!\n");
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
