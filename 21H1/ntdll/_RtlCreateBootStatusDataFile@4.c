/*
 * XREFs of _RtlCreateBootStatusDataFile@4 @ 0x4B350940
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateFile@44 @ 0x4B2F2ED0 (_NtCreateFile@44.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlRestoreBootStatusDefaults@4 @ 0x4B350BF0 (_RtlRestoreBootStatusDefaults@4.c)
 *     _RtlpGetBootStatusPath@8 @ 0x4B350D73 (_RtlpGetBootStatusPath@8.c)
 */

NTSTATUS __stdcall RtlCreateBootStatusDataFile(PCWSTR SourceString)
{
  PCWSTR v1; // esi
  char v2; // bl
  NTSTATUS v3; // edi
  bool v4; // cf
  char v6; // [esp+Eh] [ebp-3Ah] BYREF
  char v7; // [esp+Fh] [ebp-39h] BYREF
  HANDLE FileHandle; // [esp+10h] [ebp-38h] BYREF
  PCWSTR v9; // [esp+14h] [ebp-34h] BYREF
  LARGE_INTEGER AllocationSize; // [esp+18h] [ebp-30h] BYREF
  UNICODE_STRING DestinationString; // [esp+20h] [ebp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+28h] [ebp-20h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+30h] [ebp-18h] BYREF

  FileHandle = 0;
  v1 = 0;
  v7 = 1;
  v2 = 0;
  v9 = 0;
  v6 = 0;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  else
  {
    RtlpGetBootStatusPath(&v9, &v6);
    v1 = v9;
    RtlInitUnicodeString(&DestinationString, v9);
    v2 = v6;
  }
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  AllocationSize.QuadPart = 67584LL;
  v3 = NtCreateFile(
         &FileHandle,
         0x12019Fu,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         4u,
         0,
         2u,
         0x8020u,
         0,
         0);
  if ( v3 >= 0 )
  {
    v4 = AllocationSize.LowPart-- != 0;
    AllocationSize.HighPart = v4 + AllocationSize.HighPart - 1;
    v3 = NtWriteFile((int)FileHandle, 0, 0, 0, (int)&IoStatusBlock, (int)&v7, 1, (int)&AllocationSize, 0);
    if ( v3 >= 0 )
      v3 = RtlRestoreBootStatusDefaults(FileHandle);
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( v2 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v1);
  return v3;
}
