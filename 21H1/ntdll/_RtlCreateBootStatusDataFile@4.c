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

NTSTATUS RtlCreateBootStatusDataFile(void)
{
  WCHAR *v0; // esi
  char v1; // bl
  int v2; // edi
  bool v3; // cf
  char v5; // [esp+Eh] [ebp-3Ah] BYREF
  char Buffer; // [esp+Fh] [ebp-39h] BYREF
  HANDLE FileHandle; // [esp+10h] [ebp-38h] BYREF
  PCWSTR v8; // [esp+14h] [ebp-34h] BYREF
  LARGE_INTEGER AllocationSize; // [esp+18h] [ebp-30h] BYREF
  _UNICODE_STRING DestinationString; // [esp+20h] [ebp-28h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+28h] [ebp-20h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+30h] [ebp-18h] BYREF
  const WCHAR *SourceString; // [esp+50h] [ebp+8h]

  FileHandle = 0;
  v0 = 0;
  Buffer = 1;
  v1 = 0;
  v8 = 0;
  v5 = 0;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  else
  {
    RtlpGetBootStatusPath(&v8, &v5);
    v0 = (WCHAR *)v8;
    RtlInitUnicodeString(&DestinationString, v8);
    v1 = v5;
  }
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  AllocationSize.QuadPart = 67584LL;
  v2 = NtCreateFile(
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
  if ( v2 >= 0 )
  {
    v3 = AllocationSize.LowPart-- != 0;
    AllocationSize.HighPart = v3 + AllocationSize.HighPart - 1;
    v2 = NtWriteFile(FileHandle, 0, 0, 0, &IoStatusBlock, &Buffer, 1u, &AllocationSize, 0);
    if ( v2 >= 0 )
      v2 = RtlRestoreBootStatusDefaults(FileHandle);
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
  return v2;
}
