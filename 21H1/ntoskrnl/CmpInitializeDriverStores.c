/*
 * XREFs of CmpInitializeDriverStores @ 0x140A50978
 * Callers:
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x1403F37F0 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403F3B30 (ZwCreateSymbolicLinkObject.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A8C748 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializeDriverStores(__int64 a1)
{
  NTSTATUS v2; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v4; // rsi
  __int64 **v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 SystemRelativeRegistryHiveFilePath; // rax
  unsigned __int64 v9; // rdx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE DirectoryHandle; // [rsp+C0h] [rbp+40h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  DirectoryHandle = 0LL;
  Destination = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 592;
  v2 = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x1000uLL);
      Destination.MaximumLength = 4096;
      Destination.Buffer = v4;
      RtlAppendUnicodeToString(&Destination, L"\\SystemRoot");
      RtlInitUnicodeString(&DestinationString, L"SYSTEM");
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.RootDirectory = DirectoryHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
      Destination.MaximumLength = Destination.Length;
      ObjectAttributes.Attributes = 592;
      v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &Destination);
      if ( v2 >= 0 )
      {
        ZwClose(LinkHandle);
        v5 = (__int64 **)(*(_QWORD *)(a1 + 240) + 312LL);
        v6 = *v5;
        while ( v6 != (__int64 *)v5 )
        {
          if ( (*((_DWORD *)v6 + 6) & 0x80u) != 0 )
          {
            RtlInitAnsiString(&SourceString, (PCSZ)v6[11]);
            v2 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
            if ( v2 < 0 )
              break;
            *(_QWORD *)&Destination.Length = 0x10000000LL;
            Destination.Buffer = v4;
            RtlAppendUnicodeToString(&Destination, L"\\ArcName\\");
            RtlAppendUnicodeStringToString(&Destination, &DestinationString);
            RtlFreeAnsiString(&DestinationString);
            SystemRelativeRegistryHiveFilePath = CmpGetSystemRelativeRegistryHiveFilePath(v6[2]);
            v9 = v6[2];
            if ( SystemRelativeRegistryHiveFilePath > v9
              && (__int64)((SystemRelativeRegistryHiveFilePath - v9) & 0xFFFFFFFFFFFFFFFEuLL) < 131070 )
            {
              DestinationString.Buffer = (wchar_t *)v6[2];
              DestinationString.Length = 2
                                       * ((__int64)(unsigned int)(SystemRelativeRegistryHiveFilePath
                                                                - *((_DWORD *)v6 + 4)) >> 1);
              DestinationString.MaximumLength = DestinationString.Length;
              RtlAppendUnicodeStringToString(&Destination, &DestinationString);
            }
            RtlInitUnicodeString(&DestinationString, (PCWSTR)v6[6]);
            ObjectAttributes.SecurityQualityOfService = 0LL;
            ObjectAttributes.RootDirectory = DirectoryHandle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
            Destination.MaximumLength = Destination.Length;
            ObjectAttributes.Attributes = 592;
            v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &Destination);
            if ( v2 < 0 )
              break;
            ZwClose(LinkHandle);
          }
          v6 = (__int64 *)*v6;
          v5 = (__int64 **)(*(_QWORD *)(a1 + 240) + 312LL);
        }
      }
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      v2 = -1073741670;
    }
  }
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)v2;
}
