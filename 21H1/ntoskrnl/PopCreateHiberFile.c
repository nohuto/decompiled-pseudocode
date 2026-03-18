/*
 * XREFs of PopCreateHiberFile @ 0x14077BCF0
 * Callers:
 *     PopEnableHiberFile @ 0x14077B590 (PopEnableHiberFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1403F2810 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x1403F2A50 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x1403F2C90 (ZwFlushBuffersFile.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     IoCreateFile @ 0x14066CF40 (IoCreateFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140778EC4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x140779A98 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x14077A01C (PopSetHiberFileMcb.c)
 *     PopResetCurrentPolicies @ 0x14077CA28 (PopResetCurrentPolicies.c)
 *     PopValidateExistingHiberFile @ 0x14077D104 (PopValidateExistingHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14077D1E8 (PopCreateHiberFileSecurityDescriptor.c)
 *     PopDeleteHiberFile @ 0x1408E262C (PopDeleteHiberFile.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  struct _FILE_OBJECT *v1; // rdi
  void *HiberFileSecurityDescriptor; // rsi
  NTSTATUS v3; // ecx
  int v4; // ebx
  NTSTATUS v5; // eax
  NTSTATUS Status; // eax
  __int64 v7; // rdx
  LARGE_INTEGER FileInformation; // [rsp+70h] [rbp-39h] BYREF
  PVOID P; // [rsp+78h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING Destination; // [rsp+90h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp+7h] BYREF
  SIZE_T NumberOfBytes; // [rsp+110h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+118h] [rbp+6Fh] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+120h] [rbp+77h] BYREF
  PVOID Object; // [rsp+128h] [rbp+7Fh] BYREF

  AllocationSize = a1;
  *(&Destination.MaximumLength + 2) = 0;
  FileInformation.QuadPart = 0LL;
  LODWORD(NumberOfBytes) = 0;
  DestinationString = 0LL;
  FileHandle = 0LL;
  v1 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Object = 0LL;
  HiberFileSecurityDescriptor = 0LL;
  P = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(DestinationString.Length + PoHiberFileRoot.Length);
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                    PagedPool,
                                    (unsigned __int16)(DestinationString.Length + PoHiberFileRoot.Length),
                                    0x72626968u);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeStringToString(&Destination, &PoHiberFileRoot);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    HiberFileSecurityDescriptor = (void *)PopCreateHiberFileSecurityDescriptor();
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = HiberFileSecurityDescriptor;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v3 = IoCreateFile(
           &FileHandle,
           0x100003u,
           &ObjectAttributes,
           &IoStatusBlock,
           &AllocationSize,
           0x2006u,
           0,
           5u,
           0x9008u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x102u);
    if ( v3 >= 0 )
    {
      if ( IoStatusBlock.Information == 3 || !IoStatusBlock.Information )
      {
        v3 = PopValidateExistingHiberFile(FileHandle);
        if ( (PopSimulateHiberBugcheck & 0x400) != 0 )
          v3 = -1073741823;
      }
      if ( v3 >= 0 )
        goto LABEL_8;
    }
    ZwClose(FileHandle);
    FileHandle = 0LL;
    PopDeleteHiberFile(&ObjectAttributes);
    v4 = IoCreateFile(
           &FileHandle,
           0x100003u,
           &ObjectAttributes,
           &IoStatusBlock,
           &AllocationSize,
           0x2006u,
           0,
           0,
           0x9008u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x102u);
    if ( v4 >= 0 )
    {
LABEL_8:
      v4 = ObReferenceObjectByHandleWithTag(
             FileHandle,
             3u,
             (POBJECT_TYPE)IoFileObjectType,
             0,
             0x62486F50u,
             &Object,
             0LL);
      if ( v4 < 0 )
      {
        v1 = (struct _FILE_OBJECT *)Object;
      }
      else
      {
        FileInformation = AllocationSize;
        v5 = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
        v1 = (struct _FILE_OBJECT *)Object;
        v4 = v5;
        if ( v5 == 259 )
        {
          KeWaitForSingleObject((char *)Object + 152, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
          v4 = IoStatusBlock.Status;
        }
        else
        {
          Status = IoStatusBlock.Status;
        }
        if ( v4 >= 0 )
        {
          if ( Status < 0 )
          {
            v4 = Status;
          }
          else
          {
            v4 = ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
            if ( v4 == 259 )
            {
              KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
              v4 = IoStatusBlock.Status;
            }
            if ( v4 >= 0 )
            {
              if ( ZwFlushBuffersFile(FileHandle, &IoStatusBlock) == 259 )
                KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
              v4 = PopSanityCheckHiberFile(FileHandle, (__int64)v1, &AllocationSize, (__int64 **)&P, &NumberOfBytes);
              if ( v4 >= 0 )
              {
                v4 = PopSetHiberFileMcb(P, (unsigned int)NumberOfBytes);
                if ( v4 >= 0 )
                {
                  *(_QWORD *)&PopHiberInfo = FileHandle;
                  qword_140C235F0 = AllocationSize.QuadPart;
                  FileObject = v1;
                  FsRtlIssueFileNotificationFsctl(v1, v7, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
                  FileHandle = 0LL;
                  v1 = 0LL;
                  PopResetCurrentPolicies();
                  v4 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v4 = -1073741670;
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v1 )
    ObfDereferenceObjectWithTag(v1, 0x62486F50u);
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v4;
}
