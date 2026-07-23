/*
 * XREFs of PopCreateHiberFile @ 0x140792F70
 * Callers:
 *     PopEnableHiberFile @ 0x1407926A0 (PopEnableHiberFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1403FA7A0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1403FAA60 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x1403FACA0 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x1403FAEE0 (ZwFlushBuffersFile.c)
 *     IoCreateFile @ 0x14069AC80 (IoCreateFile.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D874 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x14078E438 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x14078E9BC (PopSetHiberFileMcb.c)
 *     PopResetCurrentPolicies @ 0x140793E98 (PopResetCurrentPolicies.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140794574 (PopCreateHiberFileSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  struct _FILE_OBJECT *v1; // rdi
  void *HiberFileSecurityDescriptor; // r15
  int v3; // ebx
  unsigned int v4; // esi
  NTSTATUS v5; // eax
  bool v6; // r14
  NTSTATUS v7; // eax
  NTSTATUS Status; // eax
  __int64 v9; // rdx
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Destination; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER v17; // [rsp+B0h] [rbp-50h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  __int128 InputBuffer; // [rsp+100h] [rbp+0h] BYREF
  __int64 v22; // [rsp+110h] [rbp+10h]
  __int128 FileInformation; // [rsp+118h] [rbp+18h] BYREF
  __int64 v24; // [rsp+128h] [rbp+28h]
  _OWORD v25[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v26; // [rsp+150h] [rbp+50h]

  AllocationSize = a1;
  *(&Destination.MaximumLength + 2) = 0;
  v17.QuadPart = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v26 = 0LL;
  v24 = 0LL;
  DestinationString = 0LL;
  v22 = 0LL;
  v1 = 0LL;
  memset(v25, 0, sizeof(v25));
  FileHandle = 0LL;
  HiberFileSecurityDescriptor = 0LL;
  Object = 0LL;
  FileInformation = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  P = 0LL;
  IoStatusBlock = 0LL;
  InputBuffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(DestinationString.Length + PoHiberFileRoot.Length);
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                    PagedPool,
                                    (unsigned __int16)(DestinationString.Length + PoHiberFileRoot.Length),
                                    0x72626968u);
  if ( !Destination.Buffer )
  {
    v3 = -1073741670;
    goto LABEL_32;
  }
  RtlAppendUnicodeStringToString(&Destination, &PoHiberFileRoot);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  HiberFileSecurityDescriptor = (void *)PopCreateHiberFileSecurityDescriptor();
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  v4 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = HiberFileSecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  while ( 1 )
  {
    v5 = IoCreateFile(
           &FileHandle,
           0x100003u,
           &ObjectAttributes,
           &IoStatusBlock,
           &AllocationSize,
           0x2006u,
           0,
           3u,
           0x9048u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x102u);
    v3 = v5;
    if ( v5 < 0 )
    {
      if ( v5 != -1073741638 )
        goto LABEL_10;
      v3 = IoCreateFile(
             &FileHandle,
             0x10000u,
             &ObjectAttributes,
             &IoStatusBlock,
             &AllocationSize,
             0,
             0,
             1u,
             0x201001u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0x100u);
      if ( v3 < 0 )
        goto LABEL_32;
      goto LABEL_17;
    }
    v6 = IoStatusBlock.Information == 2;
    v3 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v3 < 0 )
      goto LABEL_32;
    if ( (unsigned int)v24 <= 1 )
      break;
LABEL_17:
    ZwClose(FileHandle);
    ++v4;
    FileHandle = 0LL;
    if ( v4 >= 3 )
      goto LABEL_10;
  }
  if ( !v6 )
  {
    v22 = -1LL;
    DWORD1(InputBuffer) = 1;
    *((_QWORD *)&InputBuffer + 1) = 0LL;
    ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x98208u, &InputBuffer, 0x18u, 0LL, 0);
  }
  v3 = 0;
LABEL_10:
  if ( v3 >= 0 )
  {
    LODWORD(v26) = 8198;
    v3 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v25, 0x28u, FileBasicInformation);
    if ( v3 >= 0 )
    {
      v3 = ObReferenceObjectByHandleWithTag(
             FileHandle,
             3u,
             (POBJECT_TYPE)IoFileObjectType,
             0,
             0x62486F50u,
             &Object,
             0LL);
      if ( v3 < 0 )
      {
        v1 = (struct _FILE_OBJECT *)Object;
      }
      else
      {
        v17 = AllocationSize;
        v7 = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v17, 8u, FileEndOfFileInformation);
        v1 = (struct _FILE_OBJECT *)Object;
        v3 = v7;
        if ( v7 == 259 )
        {
          KeWaitForSingleObject((char *)Object + 152, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
          v3 = IoStatusBlock.Status;
        }
        else
        {
          Status = IoStatusBlock.Status;
        }
        if ( v3 >= 0 )
        {
          if ( Status < 0 )
          {
            v3 = Status;
          }
          else
          {
            v3 = ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
            if ( v3 == 259 )
            {
              KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
              v3 = IoStatusBlock.Status;
            }
            if ( v3 >= 0 )
            {
              if ( ZwFlushBuffersFile(FileHandle, &IoStatusBlock) == 259 )
                KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
              v3 = PopSanityCheckHiberFile(FileHandle, (__int64)v1, &AllocationSize, (__int64 **)&P, &NumberOfBytes);
              if ( v3 >= 0 )
              {
                v3 = PopSetHiberFileMcb(P, (unsigned int)NumberOfBytes);
                if ( v3 >= 0 )
                {
                  *(_QWORD *)&PopHiberInfo = FileHandle;
                  qword_140C23E70 = AllocationSize.QuadPart;
                  FileObject = v1;
                  FsRtlIssueFileNotificationFsctl(v1, v9, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
                  FileHandle = 0LL;
                  v1 = 0LL;
                  PopResetCurrentPolicies();
                  v3 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_32:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v1 )
    ObfDereferenceObjectWithTag(v1, 0x62486F50u);
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v3;
}
