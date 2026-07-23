/*
 * XREFs of AslFileMappingCreate @ 0x140758BB8
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140754680 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140754F1C (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x14077E808 (SdbGetDatabaseMatch.c)
 *     SdbOpenDatabaseEx @ 0x14096426C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140964E74 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965260 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlFileMapInitializeByNtPath @ 0x14037111C (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1403FA7A0 (ZwQueryInformationFile.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslFileNotFound @ 0x1407564FC (AslFileNotFound.c)
 *     AslFileMappingDelete @ 0x140756528 (AslFileMappingDelete.c)
 *     AslStringDuplicate @ 0x14075AA64 (AslStringDuplicate.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     AslpFileMappingGetFileKind @ 0x1407B3A34 (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingCreate(__int64 *a1, const WCHAR *a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  NTSTATUS v12; // ebx
  void *v13; // rax
  HANDLE *v14; // rsi
  int v15; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]

  v23 = 0LL;
  FileInformation = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v10 = AslAlloc(v9, 88LL);
  v11 = v10;
  if ( v10 )
  {
    v12 = AslStringDuplicate(v10, a2);
    if ( v12 < 0 )
      goto LABEL_24;
    v13 = 0LL;
    if ( a3 != (void *)-1LL )
      v13 = a3;
    v14 = (HANDLE *)(v11 + 8);
    if ( v13 )
    {
      *(_OWORD *)v14 = 0LL;
      *(_OWORD *)(v11 + 24) = 0LL;
      *(_OWORD *)(v11 + 40) = 0LL;
      *(_QWORD *)(v11 + 56) = 0LL;
      *(_BYTE *)(v11 + 56) = 0;
      *v14 = v13;
    }
    else
    {
      v15 = RtlFileMapInitializeByNtPath(v11 + 8, &DestinationString);
      v12 = v15;
      if ( v15 < 0 )
      {
        if ( !AslFileNotFound(v15) )
        {
          v17 = (unsigned int)(v12 + 1073741805);
          if ( (unsigned int)v17 <= 0x30 && (v18 = 0x1000000008001LL, _bittest64(&v18, v17)) || v12 == -1073741638 )
            v19 = 3LL;
          else
            v19 = 1LL;
          AslLogCallPrintf(v19);
        }
        goto LABEL_16;
      }
    }
    v12 = ZwQueryInformationFile(*v14, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v12 < 0 )
    {
LABEL_24:
      AslLogCallPrintf(1LL);
    }
    else
    {
      if ( a4 )
      {
        *(_QWORD *)(v11 + 40) = a5;
        *(_BYTE *)(v11 + 59) = 1;
        *(_QWORD *)(v11 + 32) = a4;
      }
      *(_QWORD *)(v11 + 24) = *((_QWORD *)&FileInformation + 1);
      if ( !a4 )
      {
        *(_DWORD *)(v11 + 64) = (*((_QWORD *)&FileInformation + 1) != 0LL) + 1;
LABEL_15:
        *a1 = v11;
        v12 = 0;
        v11 = 0LL;
        goto LABEL_16;
      }
      if ( *((_QWORD *)&FileInformation + 1) )
      {
        if ( (int)AslpFileMappingGetFileKind(v11 + 8, v11 + 64) < 0 )
        {
          AslLogCallPrintf(1LL);
          *(_DWORD *)(v11 + 64) = 3;
        }
        goto LABEL_15;
      }
      AslLogCallPrintf(1LL);
      v12 = -1073741811;
    }
LABEL_16:
    if ( v11 )
      AslFileMappingDelete((PVOID *)v11);
    goto LABEL_18;
  }
  v12 = -1073741801;
LABEL_18:
  if ( DestinationString.Buffer != a2 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v12;
}
