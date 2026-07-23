/*
 * XREFs of IopMarkBootPartition @ 0x140A53F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14033DE1C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     RtlStringCchPrintfA @ 0x1403B33E4 (RtlStringCchPrintfA.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B345C (IopCreateUnicodeFromAnsiBuffer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1403F2990 (ZwOpenFile.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140793044 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopStoreSystemPartitionInformation @ 0x140A54148 (IopStoreSystemPartitionInformation.c)
 *     IopAssignBootDriveLetter @ 0x140A54414 (IopAssignBootDriveLetter.c)
 */

__int64 __fastcall IopMarkBootPartition(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  __int64 v3; // r9
  NTSTATUS v6; // ebx
  PVOID *v7; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 v11; // rcx
  int v13; // edx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  char pszFormat[24]; // [rsp+98h] [rbp-68h] BYREF
  char pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a1 + 184);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  strcpy(pszFormat, "\\ArcName\\%s");
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  v6 = RtlStringCchPrintfA(pszDest, 0x100uLL, pszFormat, v3);
  if ( v6 >= 0 )
  {
    RtlInitAnsiString(&DestinationString, pszDest);
    v6 = RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
    if ( v6 >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = a3;
      v6 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      if ( v6 >= 0 )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        v6 = ObReferenceObjectByHandle(
               FileHandle,
               0,
               (POBJECT_TYPE)IoFileObjectType,
               0,
               (PVOID *)&DestinationString,
               0LL);
        if ( v6 >= 0 )
        {
          v7 = *(PVOID **)&DestinationString.Length;
          DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                             *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 8LL),
                                             0x746C6644u);
          v9 = (__int64)v7[1];
          v10 = DeviceAttachmentBaseRefWithTag;
          *(_DWORD *)(v9 + 48) |= 0x100u;
          *((_DWORD *)DeviceAttachmentBaseRefWithTag + 12) |= 0x100u;
          if ( InitIsWinPEMode )
          {
            v9 = (__int64)v7[1];
            v13 = *(_DWORD *)(v9 + 52);
            if ( (v13 & 1) != 0 )
              InitWinPEModeType |= 0x200u;
            if ( (v13 & 2) != 0 )
              InitWinPEModeType |= 0x100u;
          }
          PnpHardwareConfigCreateBootDriverFlags(v9, FileHandle);
          ObfReferenceObjectWithTag(v7[1], 0x746C6644u);
          ObCloseHandle(FileHandle, 0);
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          ObfDereferenceObjectWithTag(v10, 0x746C6644u);
          IopAssignBootDriveLetter();
          v6 = IopCreateUnicodeFromAnsiBuffer(&UnicodeString, *(const CHAR **)(a1 + 208));
          if ( v6 >= 0 )
          {
            IopStoreSystemPartitionInformation(v11, &UnicodeString);
            RtlFreeAnsiString(&UnicodeString);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
